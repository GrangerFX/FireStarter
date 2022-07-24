#pragma once

#include "FireStarterInstructions.h"
#include "FireStarterResults.h"
#include "FireStarterTarget.h"

#if 0
GPU_GLOBAL void Evolve(FireStarterEvolutions* newEvolutions, FireStarterEvolutions* oldEvolutions, FireStarterResults* newResults, FireStarterResults* oldResults, const FireStarterSettings settings, const unsigned int seed, const unsigned int init)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= settings.m_population)
        return;
    unsigned int memberSeed = RANDOM(RANDOM(seed) + member);

    // Precalculate the target theta values.
    float theta[FIRESTARTER_SAMPLES];
    float sampleStep = (settings.m_sampleMax - settings.m_sampleMin) / (FIRESTARTER_SAMPLES - 1);
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
        theta[i] = settings.m_sampleMin + i * sampleStep;

    // Sort the variations largest first. This increases the chance that the generation can fail early.
    int order[FIRESTARTER_VARIATIONS];
    for (int v = 0; v < FIRESTARTER_VARIATIONS; v++)
        order[v] = v;
    if (!init) {
        for (int v = 0; v < FIRESTARTER_VARIATIONS - 1; v++) {
            int maxIndex = v;
            float max = *oldResults->MinResult(member, order[v]);
            for (int i = v + 1; i < FIRESTARTER_VARIATIONS; i++) {
                float curResult = *oldResults->MinResult(member, order[i]);
                if (curResult > max) {
                    max = curResult;
                    maxIndex = i;
                }
            }
            if (maxIndex != v) {
                int swapOrder = order[maxIndex];
                order[maxIndex] = order[v];
                order[v] = swapOrder;
            }
        }
    }

    FireStarterInstructions instructions;
    float oldMaxResult;
    if (init == 1) {
        // The first generation's instructions are random.
        oldMaxResult = settings.m_evolveStartResult;
        instructions.Randomize(memberSeed, settings.m_instructions, settings.m_opcodes);
    } else {
        // Later generations randomize one instruction.
        oldMaxResult = *oldResults->MaxResult(member);
        instructions = *oldEvolutions->Instructions(member);

        // Evolve a single program instruction for each generation.
        if (init) {
            unsigned int index = RANDOMMOD(memberSeed, settings.m_instructions);
            instructions.SetRandom(index, memberSeed, settings.m_instructions, settings.m_opcodes);
        }
    }

    // Evolve the program data for each variation.
    unsigned int dataSize = settings.m_registers;
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++) {
        unsigned int variation = order[v];

        // Precalculate the target sample values.
        float target[FIRESTARTER_SAMPLES];
        for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
            target[i] = Target(theta[i], variation);

        // The first generation is initalized with random numbers.
        // Later generations continue to evolve the data.
        FireStarterData data;
        float result, oldResult;
        float evolutionFactor;
        if (init) {
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR(memberSeed);
            result = oldResult = settings.m_evolveStartResult;
            evolutionFactor = settings.m_evolveStartFactor;
        } else {
            data = *oldResults->Data(member, variation);
            result = oldResult = *oldResults->MinResult(member, variation);
            evolutionFactor = settings.m_evolveFactor * result;
        }

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < settings.m_iterations; p++) {
            unsigned int d = RANDOMMOD(memberSeed, dataSize);
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(memberSeed);
            float curResult = 0.0f;
            for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
                curResult = fmaxf(fabsf(instructions.Execute(data, theta[i], settings.m_instructions) - target[i]), curResult);
            if (curResult <= result) {
                result = curResult;
                evolutionFactor = settings.m_evolveFactor * result;
            }
            else
                data.d[d] = oldData;
        }

        // Calculate a more accurate estimate of the result.
        if (settings.m_precision) {
            float precisionStep = (settings.m_sampleMax - settings.m_sampleMin) / (settings.m_precision - 1);
            for (int i = 0; i < settings.m_precision; i++) {
                float theta = settings.m_sampleMin + i * precisionStep;
                result = fmaxf(fabsf(instructions.Execute(data, theta, settings.m_instructions) - Target(theta, variation)), result);
            }
        }

        // Save the results
        *newResults->Data(member, variation) = data;
        *newResults->MinResult(member, variation) = result;
        maxResult = fmaxf(maxResult, result);
    }

    // If the result was worse, copy from a member with better results.
    if (init || (maxResult < oldMaxResult)) {
        // Save better results.
        *newEvolutions->Instructions(member) = instructions;
        *newResults->MaxResult(member) = maxResult;
    } else {
        // The genetic part of genetic programming and a major optimization:
        // Copy the best data from among a random set of candidates.
        unsigned int bestIndex = member;
        float bestResult = oldMaxResult;
        for (int i = 0; i < settings.m_evolveCandidates; i++) {
            unsigned int index = RANDOMMOD(memberSeed, settings.m_population);
            float curResult = *oldResults->MaxResult(index);
            if (curResult < bestResult) {
                bestResult = curResult;
                bestIndex = index;
            }
        }
        *newEvolutions->Instructions(member) = *oldEvolutions->Instructions(bestIndex);
        *newResults->MaxResult(member) = bestResult;
        if (bestIndex != member)
            for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++) {
                *newResults->Data(member, v) = *oldResults->Data(bestIndex, v);
                *newResults->MinResult(member, v) = settings.m_evolveStartResult;
            }
    }
} // Evolve
#else
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
        if (init && !thread) {
            unsigned int index = RANDOMMOD(memberSeed, settings.m_instructions);
            instructions.SetRandom(index, memberSeed, settings.m_instructions, settings.m_opcodes);
        }
    }

    // Evolve the program data for each variation.
    float maxResult = 0.0f;
    for (unsigned int v = 0; (v < settings.m_variations) && (maxResult <= oldResult); v++) {
        FireStarterData data;
        float result, oldResult;
        float evolutionFactor;
        if (init) {
            for (int i = 0; i < settings.m_instructions; i++)
                data.d[i] = RANDOMFACTOR(threadSeed);
            result = oldResult = settings.m_evolveStartResult;
            evolutionFactor = settings.m_evolveStartFactor;
        } else {
            data = *oldResults->Data(member, v);
            result = oldResult = *oldResults->MinResult(member, v);
            evolutionFactor = settings.m_evolveFactor * result;
        }

        // Initial check for bad results.
        float target[FIRESTARTER_SAMPLES];
        float theta = settings.m_sampleMin;
        float sampleStep = (settings.m_sampleMax - settings.m_sampleMin) / (settings.m_samples - 1);
        for (int i = 0; i < settings.m_samples; i++) {
            target[i] = Target(theta, v);
            result = fmaxf(fabsf(instructions.Execute(data, theta) - target[i]), result);
            theta += sampleStep;
        }
        if (result <= settings.m_evolveStartResult) {
            // Evolve the data.
            evolutionFactor = settings.m_evolveStartFactor;
            result = oldResult;
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
#endif