#pragma once

#define PROGRAM_INSTRUCTIONS 32
#define PROGRAM_VARIATIONS   3

#include "FireStarterResults.h"
#include "FireStarterTarget.h"
#include "HashRandom.h"

// EVALUATE //
inline float Evaluate(FireStarterData data, float n)
{
    return isfinite(n) ? n : 0.0f;
} // Evaluate
// END //

// OPTMIZE //
GPU_GLOBAL void Optimize(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int dataSize, const unsigned int population, const unsigned int iterations, const unsigned int precision, const unsigned int seed, const unsigned int init)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;
    unsigned int memberSeed = RANDOMHASH(RANDOMHASH(member) + seed);

    // Precalculate the target theta values.
    float theta[SAMPLE_ITERATIONS];
    for (int i = 0; i < SAMPLE_ITERATIONS; i++)
        theta[i] = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1);

    // Sort the variations largest first. This increases the chance that the generation can fail early.
    int order[PROGRAM_VARIATIONS];
    for (int v = 0; v < PROGRAM_VARIATIONS; v++)
        order[v] = v;
    if (!init) {
        for (int v = 0; v < PROGRAM_VARIATIONS - 1; v++) {
            int maxIndex = v;
            float max = *oldResults->MinResult(member, order[v]);
            for (int i = v + 1; i < PROGRAM_VARIATIONS; i++) {
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

    // Evolve the program data for each variation.
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        unsigned int variation = order[v];
 
        // Precalculate the target sample values.
        float target[SAMPLE_ITERATIONS];
        for (int i = 0; i < SAMPLE_ITERATIONS; i++)
            target[i] = Target(theta[i], variation);

        // The first generation is initalized with random numbers.
        // Later generations continue to evolve the data.
        FireStarterData data;
        float result, oldResult;
        float evolutionFactor;
        if (init) {
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR(memberSeed);
            for (int i = dataSize; i < PROGRAM_INSTRUCTIONS; i++)
                data.d[i] = 0.0f;   // Clear the unused data.
            result = oldResult = START_RESULT;
            evolutionFactor = EVOLUTION_START_FACTOR;
        } else {
            data = *oldResults->Data(member, variation);
            result = oldResult = *oldResults->MinResult(member, variation);
            evolutionFactor = EVOLUTION_FACTOR * result;
        }

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < iterations; p++) {
            unsigned int d = RANDOMSEED(memberSeed) % dataSize;
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(memberSeed);
            float curResult = 0.0f;
            for (int i = 0; i < SAMPLE_ITERATIONS; i++)
                curResult = fmaxf(fabsf(Evaluate(data, theta[i]) - target[i]), curResult);
            if (curResult < result) {
                result = curResult;
                evolutionFactor = EVOLUTION_FACTOR * result;
            } else
                data.d[d] = oldData;
        }

        // Calculate a more accurate estimate of the result.
        for (int i = 0; i < precision; i++) {
            float theta = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (precision - 1);
            result = fmaxf(fabsf(Evaluate(data, theta) - Target(theta, variation)), result);
        }

        // If the result was worse, copy from a member with better results.
        if (init || (result < oldResult)) {
            // Save better results.
            *newResults->Data(member, variation) = data;
            *newResults->MinResult(member, variation) = result;
            maxResult = fmaxf(maxResult, result);
        } else {
            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of members.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            for (int i = 0; i < EVOLUTION_SAMPLES; i++) {
                unsigned int index = RANDOMSEED(memberSeed) % population;
                float curResult = *oldResults->MinResult(index, variation);
                if (curResult < bestResult) {
                    bestResult = curResult;
                    bestIndex = index;
                }
            }
            if (bestIndex != member) {
                *newResults->Data(member, variation) = *oldResults->Data(bestIndex, variation);
                *newResults->MinResult(member, variation) = START_RESULT;
                maxResult = fmaxf(maxResult, bestResult);
            } else {
                *newResults->Data(member, variation) = data;
                *newResults->MinResult(member, variation) = result;
                maxResult = fmaxf(maxResult, result);
            }
        }
    }
    *newResults->MaxResult(member) = maxResult;
} // Optimize
// END //
