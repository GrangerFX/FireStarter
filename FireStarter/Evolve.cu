#pragma once

// DEFINES //
// END //

#include "FireStarterInstructions.h"
#include "FireStarterResults.h"
#include "FireStarterTarget.h"

GPU_GLOBAL void Evolve(FireStarterEvolutions* newEvolutions, FireStarterEvolutions* oldEvolutions, FireStarterResults* newResults, FireStarterResults* oldResults, const FireStarterParameters parameters, const unsigned int seed, const unsigned int init)
{
    const unsigned int member = blockIdx.x;
    if (member >= parameters.population)
        return;
    const unsigned int thread = threadIdx.x;
    unsigned int memberSeed = RANDOMHASH(RANDOMHASH(member) + seed);
    unsigned int threadSeed = RANDOMHASH(RANDOMHASH(member * blockDim.x + thread) + seed);

    GPU_SHARED FireStarterInstructions instructions;
    float oldResult;
    if (init) {
        // The first generation's instructions are random.
        oldResult = parameters.evolveStartResult;
        for (int i = 0; i < FIRESTARTER_INSTRUCTIONS; i++)
            instructions.SetRandom(i, memberSeed);
    } else {
        // Later generations randomize one instruction.
        oldResult = *oldResults->MaxResult(member);
        instructions = *oldEvolutions->Instructions(member);

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
        float result = parameters.evolveStartResult;
        if (init)
            for (int i = 0; i < FIRESTARTER_INSTRUCTIONS; i++)
                data.d[i] = RANDOMFACTOR(threadSeed);
        else
            data = *oldResults->Data(member, v);
        if (maxResult <= oldResult) {
            // Initial check for bad results.
            float theta = parameters.sampleMin;
            float sampleStep = (parameters.sampleMax - parameters.sampleMin) / (FIRESTARTER_SAMPLES - 1);
            for (int i = 0; i < FIRESTARTER_SAMPLES; i++) {
                result = fmaxf(fabsf(instructions.Execute(data, theta) - Target(theta, v)), result);
                theta += sampleStep;
            }
            if (result <= parameters.evolveStartResult) {
                // Evolve the data.
                float evolutionFactor = parameters.evolveStartFactor;
                for (unsigned int p = 0; p < parameters.iterations; p++) {
                    unsigned int d = RANDOMSEED(threadSeed) % FIRESTARTER_INSTRUCTIONS;
                    const float oldData = data.d[d];
                    data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(threadSeed);
                    theta = parameters.sampleMin;
                    float curResult = 0.0f;
                    for (int i = 0; i < FIRESTARTER_SAMPLES; i++) {
                        curResult = fmaxf(fabsf(instructions.Execute(data, theta) - Target(theta, v)), curResult);
                        theta += sampleStep;
                    }
                    if (curResult < result) {
                        result = curResult;
                        evolutionFactor = parameters.evolveFactor * result;
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
        if (init || (maxResult < oldResult)) {
            // Save the improved results.
            *newEvolutions->Instructions(member) = instructions;
            *newResults->MaxResult(member) = maxResult;
        } else {
            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of candidates.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            for (int i = 0; i < parameters.evolveCandidates; i++) {
                unsigned int index = RANDOMSEED(memberSeed) % parameters.population;
                float curResult = *oldResults->MaxResult(index);
                if (curResult < bestResult) {
                    bestIndex = index;
                    bestResult = curResult;
                }
            }
            *newEvolutions->Instructions(member) = *oldEvolutions->Instructions(bestIndex);
            for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++) {
                *newResults->Data(member, v) = *oldResults->Data(bestIndex, v);
                *newResults->MinResult(member, v) = *oldResults->MinResult(bestIndex, v);
            }
            *newResults->MaxResult(member) = *oldResults->MaxResult(bestIndex);
        }
    }
} // Evolve
