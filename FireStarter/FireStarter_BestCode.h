#pragma once
#include "FireStarterResults.h"
#include "FireStarterTarget.h"
#include "FireStarterOrder.h"
#include "HashRandom.h"

// EVALUATE //
inline float Evaluate(FireStarterData data, float n)
{
    n += data.d[0];
    n = data.d[1] += n;
    n += data.d[2];
    n += data.d[3];
    n += data.d[4];
    n = data.d[5] *= n;
    n = data.d[1] += n;
    n = data.d[1] += n;
    n = data.d[6] *= n;
    n = data.d[7] += n;
    n = data.d[8] += n;
    n *= data.d[9];
    n *= data.d[10];
    n *= data.d[6];
    n *= data.d[11];
    n = data.d[12] += n;
    n *= data.d[13];
    n *= data.d[5];
    n *= data.d[12];
    n *= data.d[14];
    n += data.d[15];
    n *= data.d[8];
    n = data.d[16] *= n;
    n = data.d[17] += n;
    n = data.d[16] += n;
    n += data.d[17];
    n = data.d[7] *= n;
    n += data.d[18];
    n *= data.d[16];
    n *= data.d[1];
    n *= data.d[7];
    n += data.d[19];
    return isfinite(n) ? n : 0.0f;
} // Evaluate
// END //

// OPTMIZE //
GPU_GLOBAL void Optimize(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int dataSize, const unsigned int population, const unsigned int iterations, const unsigned int generation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;
    unsigned int memberSeed = RANDOMHASH(RANDOMHASH(member) + generation);

    // Precalculate the target theta values.
    float theta[SAMPLE_ITERATIONS];
    for (int i = 0; i < SAMPLE_ITERATIONS; i++)
        theta[i] = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1);

    // Sort the variations by the previous results.
    FireStarterOrder varaitions(generation ? oldResults->results[member].minResult : nullptr);

    // Evolve the program data for each variation.
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        unsigned int variation = varaitions.order[v];
        float result, oldResult;

        // Precalculate the target sample values.
        float target[SAMPLE_ITERATIONS];
        for (int i = 0; i < SAMPLE_ITERATIONS; i++)
            target[i] = Target(theta[i], variation);

        // The first generation is initalized with random numbers.
        // Later generations continue to evolve the data.
        FireStarterData data;
        float evolutionFactor;
        if (generation) {
            data = oldResults->results[member].data[variation];
            result = oldResult = oldResults->results[member].minResult[variation];
        } else {
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR(memberSeed);
            for (int i = dataSize; i < PROGRAM_INSTRUCTIONS; i++)
                data.d[i] = 0.0f;   // Clear the unused data.
            result = oldResult = START_RESULT;
        }
        evolutionFactor = generation ? EVOLUTION_FACTOR * result : EVOLUTION_START_FACTOR;

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
        for (int i = 0; i < PROGRAM_PRECISION; i++) {
            float theta = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (PROGRAM_PRECISION - 1);
            result = fmaxf(fabsf(Evaluate(data, theta) - Target(theta, variation)), result);
        }

        // If the result was worse, copy from a member with better results.
        if (!generation || (result < oldResult)) {
            // Save better results.
            newResults->results[member].data[variation] = data;
            newResults->results[member].minResult[variation] = result;
            maxResult = fmaxf(maxResult, result);
        } else {
            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of members.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            for (int i = 0; i < EVOLUTION_SAMPLES; i++) {
                unsigned int index = RANDOMSEED(memberSeed) % population;
                float curResult = oldResults->results[index].minResult[variation];
                if (curResult < bestResult) {
                    bestResult = curResult;
                    bestIndex = index;
                }
            }
            if (bestIndex != member) {
                newResults->results[member].data[variation] = oldResults->results[bestIndex].data[variation];
                newResults->results[member].minResult[variation] = START_RESULT;
            }
            maxResult = fmaxf(maxResult, bestResult);
        }
    }
    newResults->results[member].maxResult = maxResult;
} // Optimize
// END //
