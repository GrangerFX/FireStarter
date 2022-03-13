#include "FireStarterResults.h"
#include "FireStarterTarget.h"
#include "FireStarterOrder.h"
#include "HashRandom.h"

// EVALUATE //
GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
    return isfinite(n) ? n : 0.0f;
} // Evaluate
// END //

GPU_GLOBAL void Optimize(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int theDataSize, const unsigned int population, const unsigned int iterations, const unsigned int generation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;
    unsigned int memberSeed = RANDOMHASH(RANDOMHASH(member) + generation);

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
        float target[SAMPLE_ITERATIONS];
        for (int i = 0; i < SAMPLE_ITERATIONS; i++)
            target[i] = Target(theta[i], variation);

        FireStarterData data;
        const unsigned int dataSize = theDataSize;
        float evolutionFactor;
        if (!generation) {
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR(memberSeed);
            result = oldResult = START_RESULT;
            evolutionFactor = EVOLUTION_START_FACTOR;
        } else {
            data = oldResults->results[member].data[variation];
            result = oldResult = oldResults->results[member].minResult[variation];
            evolutionFactor = EVOLUTION_FACTOR * result;
        }

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

        // Calculate a more accure estimate of the result.
        for (int i = 0; i < PROGRAM_PRECISION; i++) {
            float theta = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (PROGRAM_PRECISION - 1);
            result = fmaxf(fabsf(Evaluate(data, theta) - Target(theta, variation)), result);
        }

        if (generation && (result >= oldResult)) {
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
        } else {
            newResults->results[member].data[variation] = data;
            newResults->results[member].minResult[variation] = result;
            maxResult = fmaxf(maxResult, result);
        }
    }
    newResults->results[member].maxResult = maxResult;
} // Optimize
