#include "FireStarterResults.h"
#include "FireStarterTarget.h"
#include "HashRandom.h"

#if PROGRAM_TEST_EVALUATE
// The best result from unit compilation version.
GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
    n = fabsf(n);
    n += data.d[1];
    data.d[1] = n;
    n += data.d[2];
    data.d[2] = n;
    n = fabsf(n);
    n += data.d[4];
    n *= data.d[5];
    data.d[5] = n;
    n *= data.d[6];
    data.d[6] = n;
    n = fabsf(n);
    n += data.d[7];
    data.d[7] = n;
    n *= data.d[7];
    n += data.d[5];
    data.d[5] = n;
    n += data.d[8];
    data.d[8] = n;
    n = fabsf(n);
    data.d[9] = n;
    n *= data.d[10];
    data.d[10] = n;
    n += data.d[11];
    n *= data.d[12];
    n *= data.d[13];
    n += data.d[14];
    n *= data.d[6];
    n *= data.d[10];
    n += data.d[15];
    data.d[15] = n;
    n *= data.d[16];
    n *= data.d[15];
    n *= data.d[17];
    data.d[17] = n;
    n *= data.d[8];
    n = fabsf(n);
    n += data.d[9];
    n *= data.d[5];
    n += data.d[17];
    n *= data.d[19];
    n *= data.d[2];
    n += data.d[20];
    return isfinite(n) ? n : 0.0f;
} // Evaluate
#else
// EVALUATE //
GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
    return isfinite(n) ? n : 0.0f;
} // Evaluate
// END //
#endif

GPU_GLOBAL void Optimize(FireStarterOptimizeResults* newResults, FireStarterOptimizeResults* oldResults, const unsigned int theDataSize, const unsigned int population, const unsigned int iterations, const unsigned int generation, const unsigned int variation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;
    unsigned int seed = RANDOMHASH(RANDOMHASH(member) + generation);

    FireStarterData data;
    float result, oldResult;
#if PROGRAM_TEST_EVALUATE
    const unsigned int dataSize = 21; // To match the Evaluate code above.
    if (!generation) {
        for (int i = 0; i < dataSize; i++)
            data.d[i] = RANDOMFACTOR(seed);
        result = oldResult = START_RESULT;
    } else
#else
    const unsigned int dataSize = theDataSize;
#endif
    {
        data = oldResults->results[member].data;
        result = oldResult = oldResults->results[member].minResult;
    }

    float theta[SAMPLE_ITERATIONS];
    float target[SAMPLE_ITERATIONS];
    float sampleStep = (SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1);
    for (int i = 0; i < SAMPLE_ITERATIONS; i++) {
        theta[i] = SAMPLE_MIN + i * sampleStep;
        target[i] = Target(theta[i], variation);
    }

    for (unsigned int p = 0; p < iterations; p ++) {
        unsigned int d = RANDOMSEED(seed) % dataSize;
        float oldData = data.d[d];
        data.d[d] = oldData + (EVOLUTION_FACTOR * RANDOMFACTOR(seed) * result);
        float curResult = 0.0f;
        for (int i = 0; i < SAMPLE_ITERATIONS; i++)
            curResult = fmaxf(fabsf(Evaluate(data, theta[i]) - target[i]), curResult);
        if (curResult < result)
            result = curResult;
        else
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
            unsigned int index = RANDOMSEED(seed) % population;
            float curResult = oldResults->results[index].minResult;
            if (curResult < bestResult) {
                bestResult = curResult;
                bestIndex = index;
            }
        }
        data = oldResults->results[bestIndex].data;
        result = START_RESULT;
    }
    newResults->results[member].data = data;
    newResults->results[member].minResult = result;
} // Optimize
