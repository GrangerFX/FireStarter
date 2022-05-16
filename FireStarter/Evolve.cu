#pragma once

#include "FireStarterResults.h"
#include "FireStarterTarget.h"

GPU_GLOBAL void Evolve(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int population, const unsigned int iterations, const unsigned int generation)
{
    const unsigned int member = blockIdx.x;
    if (member >= population)
        return;
    const unsigned int thread = threadIdx.x;
    unsigned int memberSeed = RANDOMHASH(RANDOMHASH(member) + generation);
    unsigned int threadSeed = RANDOMHASH(RANDOMHASH(member * blockDim.x + thread) + generation);

    GPU_SHARED FireStarterInstructions instructions;
    float oldResult;
    if (!generation) {
        // The first generation's instructions are random.
        oldResult = START_RESULT;
        for (int i = 0; i < FIRESTARTER_INSTRUCTIONS; i++)
            instructions.SetRandom(i, memberSeed);
    } else {
        // Later generations randomize one instruction.
        oldResult = *oldResults->MaxResult(member);
        instructions = *oldResults->Instructions(member);

        // Evolve a single program instruction for each generation.
        if (!thread) {
            unsigned int index = RANDOMSEED(memberSeed) % FIRESTARTER_INSTRUCTIONS;
            instructions.SetRandom(index, memberSeed);
        }
    }

    // Evolve the program data for each variation.
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++) {
        FireStarterData data;
        float result = START_RESULT;
        if (!generation)
            for (int i = 0; i < FIRESTARTER_INSTRUCTIONS; i++)
                data.d[i] = RANDOMFACTOR(threadSeed);
        else
            data = *oldResults->Data(member, v);
        if (maxResult <= oldResult) {
            // Initial check for bad results.
            float theta = SAMPLE_MIN;
            for (int i = 0; i < SAMPLE_ITERATIONS; i++) {
                result = fmaxf(fabsf(instructions.Execute(data, theta) - Target(theta, v)), result);
                theta += (SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1);
            }
            if (result <= START_RESULT) {
                // Evolve the data.
                float evolutionFactor = EVOLUTION_START_FACTOR;
                for (unsigned int p = 0; p < iterations; p++) {
                    unsigned int d = RANDOMSEED(threadSeed) % FIRESTARTER_INSTRUCTIONS;
                    const float oldData = data.d[d];
                    data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(threadSeed);
                    theta = SAMPLE_MIN;
                    float curResult = 0.0f;
                    for (int i = 0; i < SAMPLE_ITERATIONS; i++) {
                        curResult = fmaxf(fabsf(instructions.Execute(data, theta) - Target(theta, v)), curResult);
                        theta += (SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1);
                    }
                    if (curResult < result) {
                        result = curResult;
                        evolutionFactor = EVOLUTION_FACTOR * result;
                    } else
                        data.d[d] = oldData;
                }
            }
        }

        // Find the best result among all the warp threads.
        GPU_SHARED float threadResults[BLOCK_THREADS];
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
        if (!generation || (maxResult < oldResult)) {
            // Save the improved results.
            *newResults->Instructions(member) = instructions;
            *newResults->MaxResult(member) = maxResult;
        } else {
            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of members.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            for (int i = 0; i < EVOLUTION_SAMPLES; i++) {
                unsigned int index = RANDOMSEED(memberSeed) % population;
                float curResult = *oldResults->MaxResult(index);
                if (curResult < bestResult) {
                    bestIndex = index;
                    bestResult = curResult;
                }
            }
            *newResults->Instructions(member) = *oldResults->Instructions(bestIndex);
            for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++) {
                *newResults->Data(member, v) = *oldResults->Data(bestIndex, v);
                *newResults->MinResult(member, v) = *oldResults->MinResult(bestIndex, v);
            }
            *newResults->MaxResult(member) = *oldResults->MaxResult(bestIndex);
        }
    }
} // Evolve
