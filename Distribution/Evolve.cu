#pragma once

#include "FireStarterInstructions.h"
#include "FireStarterResults.h"
#include "FireStarterTarget.h"

GPU_GLOBAL void Evolve(FireStarterEvolutions* newEvolutions, FireStarterEvolutions* oldEvolutions, FireStarterResults* newResults, FireStarterResults* oldResults, const FireStarterSettings settings, const unsigned int seed, const unsigned int init)
{
    const unsigned int member = blockIdx.x;
    if (member >= settings.m_population)
        return;
    const unsigned int thread = threadIdx.x;
    unsigned int randomSeed = RANDOM(seed);
    unsigned int memberSeed = RANDOM(randomSeed + member);
    unsigned int threadSeed = RANDOM(randomSeed + member * blockDim.x + thread);

    GPU_SHARED FireStarterInstructions instructions;
    float oldResult;
    if (init == 1) {
        // The first generation's instructions are random.
        oldResult = settings.m_evolveStartResult;
        instructions.Randomize(memberSeed, settings.m_instructions, settings.m_opcodes);
    } else {
        // Later generations randomize one instruction.
        instructions = *oldEvolutions->Instructions(member);
        oldResult = *oldResults->MaxResult(member);

        // Evolve a single program instruction for each generation.
        if (init) {
            unsigned int index = RANDOMMOD(memberSeed, settings.m_instructions);
            instructions.SetRandom(index, memberSeed, settings.m_instructions, settings.m_opcodes);
        }
    }

    // Evolve the program data for each variation.
    float maxResult = 0.0f;
    for (unsigned int v = 0; (v < settings.m_variations) && (maxResult <= oldResult); v++) {
        FireStarterData data;
        float oldResult;
        float evolutionFactor;
        if (init == 1) {
            for (int i = 0; i < settings.m_registers; i++)
                data.d[i] = RANDOMFACTOR(threadSeed);
            oldResult = settings.m_evolveStartResult;
            evolutionFactor = settings.m_evolveStartFactor;
        } else {
            data = *oldResults->Data(member, v);
            if (init) {
                oldResult = settings.m_evolveStartResult;
                evolutionFactor = settings.m_evolveStartFactor;
            } else {
                oldResult = *oldResults->MinResult(member, v);
                evolutionFactor = settings.m_evolveFactor * oldResult;
            }
        }

        // Initial check for bad results.
        float target[FIRESTARTER_SAMPLES];
        float theta = settings.m_sampleMin;
        float sampleStep = (settings.m_sampleMax - settings.m_sampleMin) / (settings.m_samples - 1);
        for (int i = 0; i < settings.m_samples; i++) {
            target[i] = Target(theta, v);
            theta += sampleStep;
        }

        // Evolve the data.
        float result = oldResult;
        for (unsigned int p = 0; p < settings.m_iterations; p++) {
            unsigned int d = RANDOMMOD(threadSeed, settings.m_instructions);
            const float oldData = data.d[d];
            data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(threadSeed);
            theta = settings.m_sampleMin;
            float curResult = 0.0f;
            for (int i = 0; i < settings.m_samples; i++) {
                curResult = fmaxf(fabsf(instructions.Execute(data, theta) - target[i]), curResult);
                theta += sampleStep;
            }
            if (curResult <= result) {
                result = curResult;
                evolutionFactor = settings.m_evolveFactor * result;
            } else
                data.d[d] = oldData;
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
            // Copy a result from among the previous generations best results.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            if (settings.m_evolve == FIRESTARTER_EVOLVE_BEST) {
                // The genetic part of genetic programming and a major optimization:
                // Copy the best data from among a random set of candidates.
                for (int i = 0; i < settings.m_evolveCandidates; i++) {
                    unsigned int index = RANDOMMOD(memberSeed, settings.m_population);
                    float curResult = *oldResults->MaxResult(index);
                    if (curResult <= bestResult) {
                        bestIndex = index;
                        bestResult = curResult;
                    }
                }
            } else if (settings.m_evolve == FIRESTARTER_EVOLVE_RANDOM)
                bestIndex = RANDOMMOD(memberSeed, settings.m_population);

            *newEvolutions->Instructions(member) = *oldEvolutions->Instructions(bestIndex);
            if (bestIndex != member) {
                for (unsigned int v = 0; v < settings.m_variations; v++) {
                    *newResults->Data(member, v) = *oldResults->Data(bestIndex, v);
                    *newResults->MinResult(member, v) = settings.m_evolveStartResult;
                }
                *newResults->MaxResult(member) = bestResult;
            } else
                *newResults->MaxResult(member) = maxResult;
        }
    }
} // Evolve
