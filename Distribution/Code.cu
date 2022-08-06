#pragma once

#include "FireStarterInstructions.h"
#include "FireStarterResults.h"

#if 0
GPU_GLOBAL void Evolve(FireStarterEvolutions* newEvolutions, FireStarterEvolutions* oldEvolutions, FireStarterResults* newResults, FireStarterResults* oldResults, const FireStarterSettings settings, const unsigned int seed, const unsigned int init)
{
    const unsigned int member = blockIdx.x;
    if (member >= FIRESTARTER_CODE_POPULATION)
        return;
    const unsigned int thread = threadIdx.x;
    unsigned int randomSeed = RANDOM(seed);
    unsigned int memberSeed = RANDOM(randomSeed + member);
    unsigned int threadSeed = RANDOM(randomSeed + member * blockDim.x + thread);

    GPU_SHARED FireStarterInstructions instructions;
    float oldResult;
    unsigned int bestIndex = member;
    if (init == 1) {
        // The first generation's instructions are random.
        instructions.Randomize(memberSeed);
        oldResult = FIRESTARTER_EVOLVE_START_RESULT;
    } else {
        // Copy a result from among the previous generations best results.
        float bestResult = *oldResults->MaxResult(member);
        if (FIRESTARTER_CODE_EVOLVE == FIRESTARTER_EVOLVE_BEST) {
            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of candidates.
            for (int i = 0; i < FIRESTARTER_EVOLVE_CANDIDATES; i++) {
                unsigned int index = RANDOMMOD(memberSeed, FIRESTARTER_CODE_POPULATION);
                float curResult = *oldResults->MaxResult(index);
                if (curResult <= bestResult) {
                    bestIndex = index;
                    bestResult = curResult;
                }
            }
        } else if (FIRESTARTER_CODE_EVOLVE == FIRESTARTER_EVOLVE_RANDOM)
            bestIndex = RANDOMMOD(memberSeed, FIRESTARTER_CODE_POPULATION);
        instructions = *oldEvolutions->Instructions(bestIndex);
        oldResult = *oldResults->MaxResult(bestIndex);

        // Evolve a single program instruction for each generation.
        if (init) {
            unsigned int index = RANDOMMOD(memberSeed, FIRESTARTER_INSTRUCTIONS);
            instructions.SetRandom(index, memberSeed);
        }
    }

    // Evolve the program data for each variation.
    GPU_SHARED float threadResults[BLOCK_THREADS];
    GPU_SHARED FireStarterData allData[BLOCK_THREADS];
    FireStarterData& data = allData[thread];
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++) {
        float target[FIRESTARTER_SAMPLES];
        float theta = FIRESTARTER_SAMPLE_MIN;
        float sampleStep = (FIRESTARTER_SAMPLE_MAX - FIRESTARTER_SAMPLE_MIN) / (FIRESTARTER_SAMPLES - 1);
        for (int i = 0; i < FIRESTARTER_SAMPLES; i++) {
            target[i] = Target(theta, v);
            theta += sampleStep;
        }
        
        float result;
        float oldMinResult;
        float evolutionFactor;
        if (init == 1) {
            for (int i = 0; i < FIRESTARTER_REGISTERS; i++)
                data.d[i] = RANDOMFACTOR(threadSeed);
        } else {
            data = *oldResults->Data(bestIndex, v);
            oldMinResult = *oldResults->MinResult(bestIndex, v);
        }
        if (init) {
            float curResult = 0.0f;
            float theta = FIRESTARTER_SAMPLE_MIN;
            for (int i = 0; i < FIRESTARTER_SAMPLES; i++) {
                curResult = fmaxf(fabsf(instructions.Execute(data, theta) - target[i]), curResult);
                theta += sampleStep;
            }
            if (init == 1)
                oldMinResult = curResult;
            result = curResult;
            evolutionFactor = FIRESTARTER_EVOLVE_FACTOR * fmaxf(curResult, FIRESTARTER_EVOLVE_START_RESULT);
        } else {
            if (bestIndex == member)
                evolutionFactor = FIRESTARTER_EVOLVE_FACTOR * oldMinResult;
            else
                evolutionFactor = FIRESTARTER_EVOLVE_FACTOR * fmaxf(oldMinResult, FIRESTARTER_EVOLVE_START_RESULT);
            result = oldMinResult;
        }

        // Evolve the data.
        for (unsigned int p = 0; p < FIRESTARTER_CODE_ITERATIONS; p++) {
            unsigned int d = RANDOMMOD(threadSeed, FIRESTARTER_INSTRUCTIONS);
            const float oldData = data.d[d];
            data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(threadSeed);
            float theta = FIRESTARTER_SAMPLE_MIN;
            float curResult = 0.0f;
            for (int i = 0; i < FIRESTARTER_SAMPLES; i++) {
                curResult = fmaxf(fabsf(instructions.Execute(data, theta) - target[i]), curResult);
                theta += sampleStep;
            }
            if (curResult <= result) {
                result = curResult;
                evolutionFactor = FIRESTARTER_EVOLVE_FACTOR * result;
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

    // Only write memory in a single thread.
    if (!thread) {
        if ((init == 1) || (maxResult < oldResult)) {
            *newEvolutions->Instructions(member) = instructions;
            *newResults->MaxResult(member) = maxResult;
        } else {
            *newEvolutions->Instructions(member) = *oldEvolutions->Instructions(bestIndex);
            *newResults->MaxResult(member) = *oldResults->MaxResult(bestIndex);
            for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++) {
                *newResults->Data(member, v) = *oldResults->Data(bestIndex, v);
                *newResults->MinResult(member, v) = *oldResults->MinResult(bestIndex, v);
            }
        }
    }
} // Evolve
#else
GPU_GLOBAL void Evolve(FireStarterEvolutions* newEvolutions, FireStarterEvolutions* oldEvolutions, FireStarterResults* newResults, FireStarterResults* oldResults, const FireStarterSettings settings, const unsigned int seed, const unsigned int init)
{
    const unsigned int member = blockIdx.x;
    if (member >= FIRESTARTER_CODE_POPULATION)
        return;
    const unsigned int thread = threadIdx.x;
    unsigned int randomSeed = RANDOM(seed);
    unsigned int memberSeed = RANDOM(randomSeed + member);
    unsigned int threadSeed = RANDOM(randomSeed + member * blockDim.x + thread);

    GPU_SHARED FireStarterInstructions instructions;
    float oldResult;
    if (init == 1) {
        // The first generation's instructions are random.
        oldResult = FIRESTARTER_CODE_START_RESULT;
        instructions.Randomize(memberSeed);
    } else {
        // Later generations randomize one instruction.
        instructions = *oldEvolutions->Instructions(member);
        oldResult = *oldResults->MaxResult(member);

        // Evolve a single program instruction for each generation.
        if (init) {
            unsigned int index = RANDOMMOD(memberSeed, FIRESTARTER_INSTRUCTIONS);
            instructions.SetRandom(index, memberSeed);
        }
    }

    // Evolve the program data for each variation.
    GPU_SHARED float threadResults[BLOCK_THREADS];
    GPU_SHARED FireStarterData allData[BLOCK_THREADS];
    FireStarterData& data = allData[thread];
    float maxResult = 0.0f;
    for (unsigned int v = 0; (v < FIRESTARTER_VARIATIONS); v++) {
        float oldMinResult;
        float evolutionFactor;
        if (init == 1) {
            for (int i = 0; i < FIRESTARTER_REGISTERS; i++)
                data.d[i] = RANDOMFACTOR(threadSeed);
            oldMinResult = FIRESTARTER_CODE_START_RESULT;
            evolutionFactor = FIRESTARTER_CODE_START_SCALE;
        } else {
            data = *oldResults->Data(member, v);
            oldMinResult = *oldResults->MinResult(member, v);
            evolutionFactor = FIRESTARTER_CODE_SCALE * oldMinResult;
        }

        // Initial check for bad results.
        float target[FIRESTARTER_SAMPLES];
        float theta = TARGET_MIN;
        float sampleStep = (TARGET_MAX - TARGET_MIN) / (FIRESTARTER_SAMPLES - 1);
        for (int i = 0; i < FIRESTARTER_SAMPLES; i++) {
            target[i] = Target(theta, v);
            theta += sampleStep;
        }

        // Evolve the data.
        float result = oldMinResult;
        for (unsigned int p = 0; p < FIRESTARTER_CODE_ITERATIONS; p++) {
            unsigned int d = RANDOMMOD(threadSeed, FIRESTARTER_INSTRUCTIONS);
            const float oldData = data.d[d];
            data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(threadSeed);
            theta = TARGET_MIN;
            float curResult = 0.0f;
            for (int i = 0; i < FIRESTARTER_SAMPLES; i++) {
                curResult = fmaxf(fabsf(instructions.Execute(data, theta) - target[i]), curResult);
                theta += sampleStep;
            }
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
        if (init || (maxResult < oldResult)) {
            // Save the improved results.
            *newEvolutions->Instructions(member) = instructions;
            *newResults->MaxResult(member) = maxResult;
        } else {
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
            } else if (FIRESTARTER_CODE_EVOLVE == FIRESTARTER_EVOLVE_RANDOM)
                bestIndex = RANDOMMOD(memberSeed, FIRESTARTER_CODE_POPULATION);

            *newEvolutions->Instructions(member) = *oldEvolutions->Instructions(bestIndex);
            if (bestIndex != member) {
                for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++) {
                    *newResults->Data(member, v) = *oldResults->Data(bestIndex, v);
                    *newResults->MinResult(member, v) = FIRESTARTER_CODE_START_RESULT;
                }
                *newResults->MaxResult(member) = bestResult;
            } else
                *newResults->MaxResult(member) = maxResult;
        }
    }
} // Evolve
#endif