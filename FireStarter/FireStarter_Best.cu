#include "FireStarterDefines.h"
#include "HashRandom.h"
#include "FireStarterTarget.h"

GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
// EVALUATE //
    n += data.d[0];
    n += data.d[1];
    n += data.d[2];
    n = fabsf(n);
    n *= data.d[4];
    n += data.d[5];
    n *= data.d[6];
    data.d[6] = n;
    n += data.d[7];
    n *= data.d[8];
    n = fabsf(n);
    data.d[6] = n;
    n += data.d[9];
    n *= data.d[10];
    n += data.d[11];
    data.d[11] = n;
    n *= data.d[12];
    data.d[12] = n;
    n *= data.d[13];
    data.d[13] = n;
    n += data.d[14];
    n *= data.d[15];
    n = fabsf(n);
    n *= data.d[12];
    n += data.d[6];
    data.d[6] = n;
    n *= data.d[17];
    n += data.d[11];
    data.d[11] = n;
    n += data.d[18];
    data.d[18] = n;
    n += data.d[19];
    n *= data.d[20];
    n = fabsf(n);
    data.d[21] = n;
    n += data.d[13];
    n += data.d[18];
    n *= data.d[6];
    n *= data.d[22];
    n *= data.d[21];
    n *= data.d[11];
// END //
    return isnan(n) ? 0.0f : n;
} // Evaluate

GPU_GLOBAL void FireStarter(FireStarterResults *results0, FireStarterResults *results1, const unsigned int dataSize, const unsigned int population, const unsigned int generation, const unsigned int variation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;
    unsigned int seed = RANDOMHASH(RANDOMHASH(member) + generation);

    FireStarterResults *oldResults = generation & 1 ? results0 : results1;
    FireStarterResults *newResults = generation & 1 ? results1 : results0;
    FireStarterData data;
    float result, oldResult;
    if (generation) {
        data = oldResults->results[member].data;
        result = oldResult = oldResults->results[member].result;
    } else {
        for (int i = 0; i < dataSize; i++)
            data.d[i] = RANDOMFACTOR(seed);
        result = oldResult = START_RESULT;
    }

    float theta[SAMPLE_ITERATIONS];
    float target[SAMPLE_ITERATIONS];
    float sampleStep = 1.0f / (SAMPLE_ITERATIONS - 1);
    for (int i = 0; i < SAMPLE_ITERATIONS; i++) {
        theta[i] = SAMPLE_MIN + i * sampleStep * (SAMPLE_MAX - SAMPLE_MIN);
        target[i] = Target(theta[i], variation);
    }

    for (unsigned int p = 0; p < PROGRAM_ITERATIONS; p ++) {
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

    if (generation && (result == oldResult)) {
        // The genetic part of genetic programming and a major optimization:
        // Copy the best data from among a random set of members.
        unsigned int bestIndex = member;
        float bestResult = oldResult;
        for (int i = 0; i < EVOLUTION_SAMPLES; i++) {
            unsigned int index = RANDOMSEED(seed) % population;
            float curResult = oldResults->results[index].result;
            if (curResult < bestResult) {
                bestResult = curResult;
                bestIndex = index;
            }
        }
        data = oldResults->results[bestIndex].data;
        result = START_RESULT;
    }
    newResults->results[member].data = data;
    newResults->results[member].result = result;
} // FireStarter
