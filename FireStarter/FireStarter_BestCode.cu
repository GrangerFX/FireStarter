#pragma once

// DEFINES //
#define FIRESTARTER_INSTRUCTIONS 32
#define FIRESTARTER_VARIATIONS 3
#define FIRESTARTER_SAMPLES 15
// END //

#include "FireStarterResults.h"
#include "FireStarterTarget.h"

// EVALUATE //
inline float Evaluate(FireStarterData data, float n)
{
    n *= data.d[0];
    n = data.d[1] += n;
    n = data.d[2] *= n;
    n = data.d[3] += n;
    n *= data.d[2];
    n += data.d[4];
    n = data.d[5] += n;
    n = data.d[6] += n;
    n = data.d[7] += n;
    n += data.d[6];
    n += data.d[8];
    n = data.d[9] *= n;
    n *= data.d[10];
    n = data.d[3] *= n;
    n = data.d[11] *= n;
    n *= data.d[12];
    n = data.d[1] *= n;
    n *= data.d[13];
    n *= data.d[14];
    n += data.d[1];
    n = data.d[15] += n;
    n *= data.d[16];
    n = data.d[17] *= n;
    n += data.d[18];
    n *= data.d[11];
    n *= data.d[15];
    n += data.d[3];
    n *= data.d[9];
    n *= data.d[17];
    n *= data.d[7];
    n *= data.d[5];
    n += data.d[19];
    return isfinite(n) ? n : 0.0f;
} // Evaluate
// END //

// OPTMIZE //
GPU_GLOBAL void Optimize(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int dataSize, const FireStarterParameters parameters, const unsigned int seed, const unsigned int init)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= parameters.population)
        return;
    unsigned int memberSeed = RANDOMHASH(RANDOMHASH(member) + seed);

    // Precalculate the target theta values.
    float theta[FIRESTARTER_SAMPLES];
    float sampleStep = (parameters.sampleMax - parameters.sampleMin) / (FIRESTARTER_SAMPLES - 1);
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
        theta[i] = parameters.sampleMin + i * sampleStep;

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

    // Evolve the program data for each variation.
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
            for (int i = dataSize; i < FIRESTARTER_INSTRUCTIONS; i++)
                data.d[i] = 0.0f;   // Clear the unused data.
            result = oldResult = parameters.evolveStartResult;
            evolutionFactor = parameters.evolveStartFactor;
        } else {
            data = *oldResults->Data(member, variation);
            result = oldResult = *oldResults->MinResult(member, variation);
            evolutionFactor = parameters.evolveFactor * result;
        }

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < parameters.iterations; p++) {
            unsigned int d = RANDOMSEED(memberSeed) % dataSize;
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(memberSeed);
            float curResult = 0.0f;
            for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
                curResult = fmaxf(fabsf(Evaluate(data, theta[i]) - target[i]), curResult);
            if (curResult < result) {
                result = curResult;
                evolutionFactor = parameters.evolveFactor * result;
            } else
                data.d[d] = oldData;
        }

        // Calculate a more accurate estimate of the result.
        float precisionStep = (parameters.sampleMax - parameters.sampleMin) / (parameters.precision - 1);
        for (int i = 0; i < parameters.precision; i++) {
            float theta = parameters.sampleMin + i * precisionStep;
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
            // Copy the best data from among a random set of candidates.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            for (int i = 0; i < parameters.evolveCandidates; i++) {
                unsigned int index = RANDOMSEED(memberSeed) % parameters.population;
                float curResult = *oldResults->MinResult(index, variation);
                if (curResult < bestResult) {
                    bestResult = curResult;
                    bestIndex = index;
                }
            }
            if (bestIndex != member) {
                *newResults->Data(member, variation) = *oldResults->Data(bestIndex, variation);
                *newResults->MinResult(member, variation) = parameters.evolveStartResult;
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
