#pragma once

#include "FireStarterInstructions.h"
#include "FireStarterResults.h"

#if 1
// Best version.
// 0.00060845 after 147 generations. Optimize 0.00015676 after 150 generations.
GPU_GLOBAL void Evolve(const FireStarterSettings settings, FireStarterEvolutions* newEvolutions, FireStarterEvolutions* oldEvolutions, FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int firstVariation, const unsigned int lastVariation, const unsigned int firstMember, const unsigned int lastMember, const unsigned int generation, const unsigned int init)
{
    const unsigned int member = firstMember + blockIdx.x;
    if (member >= lastMember)
        return;
    const unsigned int thread = threadIdx.x;
    unsigned int randomSeed = RANDOM(RANDOM(settings.m_seed) + generation);
    unsigned int memberSeed = RANDOM(randomSeed + member);
    unsigned int threadSeed = RANDOM(randomSeed + member * blockDim.x + thread);    // Note: TODO: Try using memberSeed instead of randomSeed.

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
    GPU_SHARED FireStarterData allData[FIRESTARTER_VARIATIONS][BLOCK_THREADS];
    GPU_SHARED float allResults[FIRESTARTER_VARIATIONS][BLOCK_THREADS];
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
            data = *oldResults->Data(member, v);
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
            for (unsigned int t = 1; t < BLOCK_THREADS; t++) {
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
        float oldResult = *oldResults->MaxResult(member);
        if (init || (maxResult < oldResult)) {
            // Save the improved results.
            *newEvolutions->Instructions(member) = instructions;
            *newResults->MaxResult(member) = maxResult;
            for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++) {
                unsigned int t = minThreads[v];
                *newResults->Data(member, v) = allData[v][t];
                *newResults->MinResult(member, v) = allResults[v][t];
                *newResults->Index(member, v) = member;
                *newResults->Debug1(member) = init ? 1 : *oldResults->Debug1(member) + 1;
                *newResults->Debug2(member) = generation;
            }
        } else {
            // Copy a result from among the previous generation's results.
            unsigned int bestCandidate = member;
            float bestResult = oldResult;
            if (FIRESTARTER_CODE_EVOLVE == FIRESTARTER_EVOLVE_BEST) {
                // The genetic part of genetic programming and a major optimization:
                // Copy the best data from among a random set of candidates.
                for (int i = 0; i < FIRESTARTER_CODE_CANDIDATES; i++) {
                    unsigned int candidate = RANDOMMOD(memberSeed, FIRESTARTER_CODE_POPULATION);
                    if (candidate == *oldResults->Index(candidate, 0)) {   // Only select evolving members
                        float curResult = *oldResults->MaxResult(candidate);
                        if (curResult < bestResult) {
                            bestCandidate = candidate;
                            bestResult = curResult;
                        }
                    }
                }
            } else if (FIRESTARTER_CODE_EVOLVE == FIRESTARTER_EVOLVE_RANDOM)
                bestCandidate = RANDOMMOD(memberSeed, FIRESTARTER_CODE_POPULATION);

            // Switch to the selected member's instructions, data and results or revert to the previous generation.
            *newEvolutions->Instructions(member) = *oldEvolutions->Instructions(bestCandidate);
            *newResults->MaxResult(member) = bestResult;
            *newResults->Debug1(member) = *oldResults->Debug1(member);
            *newResults->Debug2(member) = *oldResults->Debug2(member);
            for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++) {
                *newResults->Data(member, v) = *oldResults->Data(bestCandidate, v);
                *newResults->MinResult(member, v) = *oldResults->MinResult(bestCandidate, v);
                *newResults->Index(member, v) = bestCandidate;
            }
        }
    }
} // Evolve
#else
// Experimental version
GPU_GLOBAL void Evolve(const FireStarterSettings settings, FireStarterEvolutions* newEvolutions, FireStarterEvolutions* oldEvolutions, FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int firstVaraition, const unsigned int lastVariation, const unsigned int firstMember, const unsigned int lastMember, const unsigned int seed, const unsigned int init)
{
    const unsigned int member = firstMember + blockIdx.x;
    if (member >= lastMember)
        return;
    const unsigned int thread = threadIdx.x;
    unsigned int randomSeed = RANDOM(seed);
    unsigned int memberSeed = RANDOM(randomSeed + member);
    unsigned int threadSeed = RANDOM(randomSeed + member * blockDim.x + thread);

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
    GPU_SHARED FireStarterData allData[FIRESTARTER_VARIATIONS][BLOCK_THREADS];
    GPU_SHARED float allResults[FIRESTARTER_VARIATIONS][BLOCK_THREADS];
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
            data = *oldResults->Data(member, v);
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
            for (unsigned int t = 1; t < BLOCK_THREADS; t++) {
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
        float oldResult = *oldResults->MaxResult(member);
        if (init || (maxResult < oldResult)) {
            // Save the improved results.
            *newEvolutions->Instructions(member) = instructions;
            *newResults->MaxResult(member) = maxResult;
            for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++) {
                unsigned int t = minThreads[v];
                *newResults->Data(member, v) = allData[v][t];
                *newResults->MinResult(member, v) = allResults[v][t];
                *newResults->Index(member, v) = member;
                *newResults->Debug1(member) = init ? 1 : *oldResults->Debug1(member) + 1;
                *newResults->Debug2(member) = seed;
            }
        } else {
            // Copy a result from among the previous generation's results.
            unsigned int bestCandidate = member;
            float bestResult = oldResult;
            if (FIRESTARTER_CODE_EVOLVE == FIRESTARTER_EVOLVE_BEST) {
                // The genetic part of genetic programming and a major optimization:
                // Copy the best data from among a random set of candidates.
                for (int i = 0; i < FIRESTARTER_CODE_CANDIDATES; i++) {
                    unsigned int candidate = RANDOMMOD(memberSeed, FIRESTARTER_CODE_POPULATION);
                    if (candidate == *oldResults->Index(candidate, 0)) {   // Only select evolving members
                        float curResult = *oldResults->MaxResult(candidate);
                        if (curResult < bestResult) {
                            bestCandidate = candidate;
                            bestResult = curResult;
                        }
                    }
                }
            } else if (FIRESTARTER_CODE_EVOLVE == FIRESTARTER_EVOLVE_RANDOM)
                bestCandidate = RANDOMMOD(memberSeed, FIRESTARTER_CODE_POPULATION);

            // Revert to the previous instructions.
            *newEvolutions->Instructions(member) = *oldEvolutions->Instructions(member);

            // Copy a random section of instructions from the best candidate.
            if (bestCandidate != member) {
                FireStarterInstructions* oldInstructions = oldEvolutions->Instructions(member);
                FireStarterInstructions* newInstructions = newEvolutions->Instructions(member);
                unsigned int start = RANDOMMOD(memberSeed, FIRESTARTER_INSTRUCTIONS);
                unsigned int end = RANDOMMOD(memberSeed, FIRESTARTER_INSTRUCTIONS);
                unsigned int i = start;
                newInstructions->i[i] = oldInstructions->i[i];
                do {
                    i = (i + 1) % FIRESTARTER_INSTRUCTIONS;
                    newInstructions->i[i] = oldInstructions->i[i];
                } while (i != end);
            }
            *newResults->MaxResult(member) = bestResult;
            *newResults->Debug1(member) = *oldResults->Debug1(member);
            *newResults->Debug2(member) = *oldResults->Debug2(member);
            for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++) {
                *newResults->Data(member, v) = *oldResults->Data(bestCandidate, v);
                *newResults->MinResult(member, v) = *oldResults->MinResult(bestCandidate, v);
                *newResults->Index(member, v) = bestCandidate;
            }
        }
    }
} // Evolve
#endif