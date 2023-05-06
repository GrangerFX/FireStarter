#pragma once

#include "FireStarterInstructions.h"
#include "FireStarterEvolutions.h"

// Best version.
// 0.00060845 after 147 generations. Optimize 0.00015676 after 150 generations.
GPU_GLOBAL void Interpreter(const FireStarterSettings settings, FireStarterEvolutions* newEvolutions, FireStarterEvolutions* oldEvolutions, const unsigned int firstVariation, const unsigned int lastVariation, const unsigned int firstMember, const unsigned int lastMember, const unsigned long long generationSeed, const unsigned int init)
{
    const unsigned int member = firstMember + blockIdx.x;
    if (member >= lastMember)
        return;
    const unsigned int thread = threadIdx.x;
    unsigned long long randomSeed = RANDOM(generationSeed);
    unsigned long long memberSeed = RANDOM(randomSeed + member);
    unsigned long long threadSeed = RANDOM(randomSeed + member * blockDim.x + thread);    // Note: TODO: Try using memberSeed instead of randomSeed.

    GPU_SHARED FireStarterInstructions instructions;
    if (thread == 0) {
        if (init)
            // The first generation's instructions are random.
            instructions.Randomize(memberSeed);
        else {
            // Later generations randomize one instruction.
            instructions = *oldEvolutions->Instructions(member);

            // Randomize a single program instruction.
            instructions.SetRandom(memberSeed);
       }
    }
    GPU_SYNCTHREADS();

    // Precalulate theta.
    float theta[FIRESTARTER_SAMPLES];
    float sampleStep = (TARGET_MAX - TARGET_MIN) / (FIRESTARTER_SAMPLES - 1);
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
        theta[i] = TARGET_MIN + i * sampleStep;

    // Evolve the program data for each variation.
    GPU_SHARED FireStarterData allData[FIRESTARTER_VARIATIONS][WARP_THREADS];
    GPU_SHARED float allResults[FIRESTARTER_VARIATIONS][WARP_THREADS];
    for (unsigned int v = firstVariation; v <= lastVariation; v++) {
        // Initial check for bad results.
        float target[FIRESTARTER_SAMPLES];
        for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
            target[i] = Target(theta[i], v);

        // Initialize or load the registers
        FireStarterData& data = allData[v][thread];
        if (init)
            for (int i = 0; i < FIRESTARTER_REGISTERS; i++)
                data.d[i] = RANDOMFACTOR(threadSeed);
        else {
            data = *oldEvolutions->Data(member, v);
            data.d[RANDOMMOD(threadSeed, FIRESTARTER_INSTRUCTIONS)] += FIRESTARTER_CODE_START_SCALE * RANDOMFACTOR(threadSeed);
        }

        // Calculate an initial result for the instructions and registers.
        float result = 0.0f;
        for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
            result = fmaxf(fabsf(instructions.Execute(data, theta[i]) - target[i]), result);
        float evolutionFactor = FIRESTARTER_CODE_SCALE * result;

        // Evolve the data.
        for (unsigned int p = 0; p < FIRESTARTER_CODE_ITERATIONS; p++) {
            unsigned int d = RANDOMMOD(threadSeed, FIRESTARTER_REGISTERS);
            const float oldData = data.d[d];
            data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(threadSeed);
            float curResult = 0.0f;
            for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
                curResult = fmaxf(fabsf(instructions.Execute(data, theta[i]) - target[i]), curResult);
            if (curResult <= result) {
                result = curResult;
                evolutionFactor = FIRESTARTER_CODE_SCALE * result;
            } else
                data.d[d] = oldData;
        }
        
        // Store the result of this varation.
        allResults[v][thread] = result;
    }

    // Only read and write memory in a single thread.
    GPU_SYNCTHREADS();
    if (thread == 0) {
        // Find the best result for each variation and thread.
        float maxResult = 0;
        unsigned int minThreads[FIRESTARTER_VARIATIONS];
        for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++) {
            float minResult = allResults[v][0];
            unsigned int minThread = 0;
            for (unsigned int t = 1; t < WARP_THREADS; t++) {
                float threadResult = allResults[v][t];
                if (threadResult < minResult) {
                    minResult = threadResult;
                    minThread = t;
                }
            }
            minThreads[v] = minThread;
            maxResult = fmax(maxResult, minResult);
        }

        // Did this generation produce a better result?
        float oldResult = *oldEvolutions->MaxResult(member);
        if (init || (maxResult < oldResult)) {
            // Save the improved results.
            *newEvolutions->Instructions(member) = instructions;
            *newEvolutions->MaxResult(member) = maxResult;
            for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++) {
                unsigned int t = minThreads[v];
                *newEvolutions->Data(member, v) = allData[v][t];
                *newEvolutions->MinResult(member, v) = allResults[v][t];
                *newEvolutions->Index(member, v) = member;
                *newEvolutions->Debug(member, v) = init ? 1 : *oldEvolutions->Debug(member, v) + 1;
            }
        } else {
            // Copy a result from among the previous generation's results.
            unsigned int bestCandidate = member;
            float bestResult = oldResult;

            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of candidates.
            for (int i = 0; i < FIRESTARTER_CODE_CANDIDATES; i++) {
                unsigned int candidate = RANDOMMOD(memberSeed, FIRESTARTER_CODE_POPULATION);
                if (candidate == *oldEvolutions->Index(candidate, 0)) {   // Only select evolving members
                    float curResult = *oldEvolutions->MaxResult(candidate);
                    if (curResult < bestResult) {
                        bestCandidate = candidate;
                        bestResult = curResult;
                    }
                }
            }

            // Switch to the selected member's instructions, data and results or revert to the previous generation.
            *newEvolutions->Instructions(member) = *oldEvolutions->Instructions(bestCandidate);
            *newEvolutions->MaxResult(member) = bestResult;
            for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++) {
                *newEvolutions->Data(member, v) = *oldEvolutions->Data(bestCandidate, v);
                *newEvolutions->MinResult(member, v) = *oldEvolutions->MinResult(bestCandidate, v);
                *newEvolutions->Index(member, v) = bestCandidate;
                *newEvolutions->Debug(member, v) = *oldEvolutions->Debug(member, v);
            }
        }
    }
} // Interpreter
