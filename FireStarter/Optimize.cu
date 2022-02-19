#include "FireStarterDefines.h"
#include "HashRandom.h"
#include "FireStarterTarget.h"

// EVALUATE //
GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
    n += data.d[0];
    n += data.d[1];
    data.d[1] = n;
    n *= data.d[2];
    data.d[2] = n;
    n *= data.d[3];
    n += data.d[4];
    data.d[4] = n;
    n *= data.d[5];
    data.d[5] = n;
    n += data.d[6];
    data.d[6] = n;
    n += data.d[7];
    n += fabsf(data.d[8]);
    n *= data.d[9];
    data.d[9] = n;
    n += data.d[10];
    data.d[10] = n;
    n += data.d[1];
    n += data.d[6];
    data.d[6] = n;
    n *= data.d[10];
    data.d[10] = n;
    n += data.d[11];
    n *= data.d[12];
    data.d[12] = n;
    n += data.d[13];
    n *= data.d[14];
    n += data.d[12];
    n *= data.d[5];
    n += data.d[10];
    n *= data.d[15];
    n += data.d[4];
    data.d[4] = n;
    n += data.d[6];
    n += data.d[4];
    n += data.d[16];
    n += data.d[17];
    data.d[17] = n;
    n += data.d[18];
    n *= data.d[9];
    n *= data.d[2];
    data.d[2] = n;
    n += data.d[17];
    n *= data.d[2];
    return isnan(n) ? 0.0f : n;
} // Evaluate
GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
    n += data.d[0];
    n += data.d[1];
    data.d[1] = n;
    n *= data.d[2];
    data.d[2] = n;
    n *= data.d[3];
    n += data.d[4];
    data.d[4] = n;
    n *= data.d[5];
    data.d[5] = n;
    n += data.d[6];
    data.d[6] = n;
    n += data.d[7];
    n += fabsf(data.d[8]);
    n *= data.d[9];
    data.d[9] = n;
    n += data.d[10];
    data.d[10] = n;
    n += data.d[1];
    n += data.d[11];
    data.d[11] = n;
    n *= data.d[10];
    data.d[10] = n;
    n += data.d[12];
    data.d[12] = n;
    n *= data.d[13];
    n += data.d[14];
    n *= data.d[12];
    data.d[12] = n;
    n += data.d[12];
    n *= data.d[5];
    n += data.d[10];
    n *= data.d[15];
    n += data.d[4];
    data.d[4] = n;
    n += data.d[6];
    n += data.d[4];
    n += data.d[16];
    n += data.d[11];
    data.d[11] = n;
    n += data.d[17];
    n *= data.d[9];
    n *= data.d[2];
    data.d[2] = n;
    n += data.d[11];
    n *= data.d[2];
    return isnan(n) ? 0.0f : n;
} // Evaluate
GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
    n += data.d[0];
    n += data.d[1];
    data.d[1] = n;
    n *= data.d[2];
    data.d[2] = n;
    n *= data.d[3];
    n += data.d[4];
    data.d[4] = n;
    n *= data.d[5];
    n += data.d[6];
    data.d[6] = n;
    n += data.d[7];
    n += fabsf(data.d[8]);
    data.d[8] = n;
    n *= data.d[9];
    data.d[9] = n;
    n += data.d[10];
    data.d[10] = n;
    n += data.d[1];
    n += data.d[11];
    data.d[11] = n;
    n *= data.d[10];
    data.d[10] = n;
    n += data.d[12];
    n *= data.d[8];
    data.d[8] = n;
    n += data.d[13];
    n += data.d[14];
    n *= data.d[8];
    n *= data.d[15];
    n += data.d[10];
    n *= data.d[16];
    n += data.d[4];
    data.d[4] = n;
    n += data.d[6];
    n += data.d[4];
    n += data.d[17];
    n += data.d[11];
    data.d[11] = n;
    n += data.d[18];
    n *= data.d[9];
    n *= data.d[2];
    data.d[2] = n;
    n += data.d[11];
    n *= data.d[2];
    return isnan(n) ? 0.0f : n;
} // Evaluate
GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
    n += data.d[0];
    n += data.d[1];
    data.d[1] = n;
    n *= data.d[2];
    data.d[2] = n;
    n *= data.d[3];
    n += data.d[4];
    data.d[4] = n;
    n *= data.d[5];
    n += data.d[6];
    data.d[6] = n;
    n += data.d[7];
    n += fabsf(data.d[8]);
    data.d[8] = n;
    n *= data.d[9];
    data.d[9] = n;
    n += data.d[10];
    data.d[10] = n;
    n += data.d[1];
    n += data.d[11];
    data.d[11] = n;
    n *= data.d[10];
    data.d[10] = n;
    n += data.d[12];
    n *= data.d[8];
    n += data.d[13];
    data.d[13] = n;
    n *= data.d[13];
    data.d[13] = n;
    n *= data.d[13];
    n *= data.d[14];
    n += data.d[10];
    n *= data.d[15];
    n += data.d[4];
    data.d[4] = n;
    n += data.d[6];
    n += data.d[4];
    n += data.d[16];
    n += data.d[11];
    data.d[11] = n;
    n += data.d[17];
    n *= data.d[9];
    n *= data.d[2];
    data.d[2] = n;
    n += data.d[11];
    n *= data.d[2];
    return isnan(n) ? 0.0f : n;
} // Evaluate
GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
    n += data.d[0];
    n += data.d[1];
    data.d[1] = n;
    n *= data.d[2];
    data.d[2] = n;
    n *= data.d[3];
    n += data.d[4];
    data.d[4] = n;
    n *= data.d[5];
    n += data.d[6];
    data.d[6] = n;
    n += data.d[7];
    n += fabsf(data.d[8]);
    data.d[8] = n;
    n *= data.d[9];
    data.d[9] = n;
    n += data.d[10];
    data.d[10] = n;
    n += data.d[1];
    n += data.d[11];
    data.d[11] = n;
    n *= data.d[10];
    data.d[10] = n;
    n += data.d[12];
    n *= data.d[8];
    n += data.d[13];
    data.d[13] = n;
    n *= data.d[13];
    data.d[13] = n;
    n *= data.d[13];
    n *= data.d[14];
    n += data.d[10];
    n *= data.d[15];
    n += data.d[4];
    data.d[4] = n;
    n += data.d[6];
    n += data.d[4];
    n += data.d[16];
    n += data.d[11];
    data.d[11] = n;
    n += data.d[17];
    n *= data.d[9];
    n *= data.d[2];
    data.d[2] = n;
    n += data.d[11];
    n *= data.d[2];
    return isnan(n) ? 0.0f : n;
} // Evaluate
GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
    n += data.d[0];
    n += data.d[1];
    data.d[1] = n;
    n *= data.d[2];
    data.d[2] = n;
    n *= data.d[3];
    n += data.d[4];
    data.d[4] = n;
    n *= data.d[5];
    n += data.d[6];
    data.d[6] = n;
    n += data.d[7];
    n += fabsf(data.d[8]);
    data.d[8] = n;
    n *= data.d[9];
    data.d[9] = n;
    n += data.d[10];
    data.d[10] = n;
    n += data.d[1];
    n += data.d[11];
    data.d[11] = n;
    n *= data.d[10];
    data.d[10] = n;
    n += data.d[12];
    n *= data.d[8];
    n += data.d[13];
    data.d[13] = n;
    n *= data.d[13];
    data.d[13] = n;
    n *= data.d[13];
    n *= data.d[14];
    n += data.d[10];
    n *= data.d[15];
    n += data.d[4];
    data.d[4] = n;
    n += data.d[6];
    n += data.d[4];
    n += data.d[16];
    n += data.d[11];
    data.d[11] = n;
    n += data.d[17];
    n *= data.d[9];
    n *= data.d[2];
    data.d[2] = n;
    n += data.d[11];
    n *= data.d[2];
    return isnan(n) ? 0.0f : n;
} // Evaluate
GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
    n += data.d[0];
    n += data.d[1];
    data.d[1] = n;
    n *= data.d[2];
    data.d[2] = n;
    n *= data.d[3];
    n += data.d[4];
    data.d[4] = n;
    n *= data.d[5];
    n += data.d[6];
    data.d[6] = n;
    n += data.d[7];
    n += fabsf(data.d[8]);
    data.d[8] = n;
    n *= data.d[9];
    data.d[9] = n;
    n += data.d[10];
    data.d[10] = n;
    n += data.d[1];
    n += data.d[11];
    data.d[11] = n;
    n *= data.d[10];
    data.d[10] = n;
    n += data.d[12];
    n *= data.d[8];
    n += data.d[13];
    data.d[13] = n;
    n *= data.d[13];
    data.d[13] = n;
    n *= data.d[13];
    n *= data.d[14];
    n += data.d[10];
    n *= data.d[15];
    n += data.d[4];
    data.d[4] = n;
    n += data.d[6];
    n += data.d[4];
    n += data.d[16];
    n += data.d[11];
    data.d[11] = n;
    n += data.d[17];
    n *= data.d[9];
    n *= data.d[2];
    data.d[2] = n;
    n += data.d[11];
    n *= data.d[2];
    return isnan(n) ? 0.0f : n;
} // Evaluate
GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
    n += data.d[0];
    n += data.d[1];
    data.d[1] = n;
    n *= data.d[2];
    data.d[2] = n;
    n *= data.d[3];
    n += data.d[4];
    data.d[4] = n;
    n *= data.d[5];
    n += data.d[6];
    data.d[6] = n;
    n += data.d[7];
    n += fabsf(data.d[8]);
    data.d[8] = n;
    n *= data.d[9];
    data.d[9] = n;
    n += data.d[10];
    data.d[10] = n;
    n += data.d[1];
    n += data.d[11];
    data.d[11] = n;
    n *= data.d[10];
    data.d[10] = n;
    n += data.d[12];
    n *= data.d[8];
    n += data.d[13];
    data.d[13] = n;
    n *= data.d[13];
    data.d[13] = n;
    n *= data.d[13];
    n *= data.d[14];
    n += data.d[10];
    n *= data.d[15];
    n += data.d[4];
    data.d[4] = n;
    n += data.d[6];
    n += data.d[4];
    n += data.d[16];
    n += data.d[11];
    data.d[11] = n;
    n += data.d[17];
    n *= data.d[9];
    n *= data.d[2];
    data.d[2] = n;
    n += data.d[11];
    n *= data.d[2];
    return isnan(n) ? 0.0f : n;
} // Evaluate
// END //

GPU_GLOBAL void Optimize(FireStarterResults* newResults, FireStarterResults *oldResults, const unsigned int dataSize, const unsigned int population, const unsigned int iterations, const unsigned int precision, const unsigned int generation, const unsigned int variation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;
    unsigned int seed = RANDOMHASH(RANDOMHASH(member) + generation);

    FireStarterData data;
    float result, oldResult;
    if (generation) {
        data = oldResults->results[member].data[variation];
        result = oldResult = oldResults->results[member].minResult[variation];
    } else {
        for (int i = 0; i < dataSize; i++)
            data.d[i] = RANDOMFACTOR(seed);
        result = oldResult = START_RESULT;
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
    float precisionStep = (SAMPLE_MAX - SAMPLE_MIN) / (precision - 1);
    for (int i = 0; i < precision; i++) {
        float theta = SAMPLE_MIN + i * precisionStep;
        float target = Target(theta, variation);
        result = fmaxf(fabsf(Evaluate(data, theta) - target), result);
    }
    if (generation && (result >= oldResult)) {
        // The genetic part of genetic programming and a major optimization:
        // Copy the best data from among a random set of members.
        unsigned int bestIndex = member;
        float bestResult = oldResult;
        for (int i = 0; i < EVOLUTION_SAMPLES; i++) {
            unsigned int index = RANDOMSEED(seed) % population;
            float curResult = oldResults->results[index].minResult[variation];
            if (curResult < bestResult) {
                bestResult = curResult;
                bestIndex = index;
            }
        }
        data = oldResults->results[bestIndex].data[variation];
        result = START_RESULT;
    }
    newResults->results[member].data[variation] = data;
    newResults->results[member].minResult[variation] = result;
} // Optimize
