#pragma once

#include "FireStarterInstructions.h"
#include "FireStarterResults.h"

// Best version.
// 0.00700028 after 110 generations
GPU_GLOBAL void Evolve(const FireStarterSettings settings, FireStarterEvolutions* newEvolutions, FireStarterEvolutions* oldEvolutions, FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int firstMember, const unsigned int lastMember, const unsigned int seed, unsigned int init)
{
    const unsigned int member = firstMember + blockIdx.x;
    if (member >= lastMember)
        return;
    const unsigned int thread = threadIdx.x;
    unsigned int randomSeed = RANDOM(seed);
    unsigned int memberSeed = RANDOM(randomSeed + member);
    unsigned int threadSeed = RANDOM(randomSeed + member * blockDim.x + thread);

    GPU_SHARED FireStarterInstructions instructions;
    float oldResult;
    if (init == 1) {
        // The first generation's instructions are random.
        instructions.Randomize(memberSeed);
        oldResult = FIRESTARTER_CODE_START_RESULT;
    }
    else {
        // Later generations randomize one instruction.
        instructions = *oldEvolutions->Instructions(member);
        oldResult = *oldResults->MaxResult(member);

        // Evolve a single program instruction.
        if (init)
            instructions.SetRandom(RANDOMMOD(memberSeed, FIRESTARTER_INSTRUCTIONS), memberSeed);
    }

    // Precalulate theta.
    float theta[FIRESTARTER_SAMPLES];
    float sampleStep = (TARGET_MAX - TARGET_MIN) / (FIRESTARTER_SAMPLES - 1);
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
        theta[i] = TARGET_MIN + i * sampleStep;

    // Evolve the program data for each variation.
    GPU_SHARED float threadResults[BLOCK_THREADS];
    GPU_SHARED FireStarterData allData[BLOCK_THREADS];
    FireStarterData& data = allData[thread];
    float maxResult = 0.0f;
    for (unsigned int v = 0; (v < FIRESTARTER_VARIATIONS); v++) {
        // Initial check for bad results.
        float target[FIRESTARTER_SAMPLES];
        for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
            target[i] = Target(theta[i], v);

        // Load the register data.
        if (init == 1)
            for (int i = 0; i < FIRESTARTER_REGISTERS; i++)
                data.d[i] = RANDOMFACTOR(threadSeed);
        else
            data = *oldResults->Data(member, v);

        // When the program changes, calculate the initial result.
        float oldMinResult, result, evolutionFactor;
        if (init) {
            result = 0.0f;
            for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
                result = fmaxf(fabsf(instructions.Execute(data, theta[i]) - target[i]), result);
            oldMinResult = result;
            evolutionFactor = FIRESTARTER_CODE_START_SCALE;
        }
        else {
            oldMinResult = result = *oldResults->MinResult(member, v);
            evolutionFactor = FIRESTARTER_CODE_SCALE * oldMinResult;
        }

        // Evolve the data.
        for (unsigned int p = 0; p < FIRESTARTER_CODE_ITERATIONS; p++) {
            unsigned int d = RANDOMMOD(threadSeed, FIRESTARTER_INSTRUCTIONS);
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

        // Find the best result among all the warp threads.
        threadResults[thread] = result;

        GPU_SYNCTHREADS();
        unsigned int minIndex = 0;
        float minResult = threadResults[0];
        for (int i = 1; i < BLOCK_THREADS; i++) {
            if (threadResults[i] < minResult) {
                minIndex = i;
                minResult = threadResults[i];
            }
        }
        if (thread == minIndex) {
            *newResults->Data(member, v) = data;
            *newResults->MinResult(member, v) = minResult;
        }
        maxResult = fmaxf(maxResult, minResult);
    }

    // Only read and write memory in a single thread.
    GPU_SYNCTHREADS();
    if (thread == 0) {
        if ((init == 1) || (maxResult < oldResult)) {
            // Save the improved results.
            *newEvolutions->Instructions(member) = instructions;
            *newResults->MaxResult(member) = maxResult;
        }
        else {
            // Copy a result from among the previous generations best results.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            if (FIRESTARTER_CODE_EVOLVE == FIRESTARTER_EVOLVE_BEST) {
                // The genetic part of genetic programming and a major optimization:
                // Copy the best data from among a random set of candidates.
                for (int i = 0; i < FIRESTARTER_CODE_CANDIDATES; i++) {
                    unsigned int index = RANDOMMOD(memberSeed, FIRESTARTER_CODE_POPULATION);
                    float curResult = *oldResults->MaxResult(index);
                    if (curResult <= bestResult) {
                        bestIndex = index;
                        bestResult = curResult;
                    }
                }
            }
            else if (FIRESTARTER_CODE_EVOLVE == FIRESTARTER_EVOLVE_RANDOM)
                bestIndex = RANDOMMOD(memberSeed, FIRESTARTER_CODE_POPULATION);

            *newEvolutions->Instructions(member) = *oldEvolutions->Instructions(bestIndex);
            for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++) {
                *newResults->Data(member, v) = *oldResults->Data(bestIndex, v);
                *newResults->MinResult(member, v) = FIRESTARTER_CODE_START_RESULT;
            }
            *newResults->MaxResult(member) = bestResult;
        }
    }
} // Evolve