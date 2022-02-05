#include "FireStarterDefines.h"
#include "HashRandom.h"
#include "FireStarterTarget.h"

// Reference: https://stackoverflow.com/questions/17399119/how-do-i-use-atomicmax-on-floating-point-values-in-cuda
GPU_FUNCTION float atomicMin(float* addr, float value)
{
    return (value >= 0) ? __int_as_float(atomicMin((int*)addr, __float_as_int(value))) : __uint_as_float(atomicMax((unsigned int*)addr, __float_as_uint(value)));
} // atomicMin

GPU_FUNCTION float atomicMax(float* addr, float value)
{
    return (value >= 0) ? __int_as_float(atomicMax((int*)addr, __float_as_int(value))) : __uint_as_float(atomicMin((unsigned int*)addr, __float_as_uint(value)));
} // atomicMax

// PROGRAM //
GPU_FUNCTION float Program(const FireStarterInstructions& instructions, FireStarterData data, float n)
{
    return isnan(n) ? 0.0f : n;
}
// END //

// EVALUATE //
GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
    return isnan(n) ? 0.0f : n;
} // Evaluate
// END //

GPU_GLOBAL void FireStarter(FireStarterResults* newResults, FireStarterResults *oldResults, const unsigned int dataSize, const unsigned int population, const unsigned int iterations, const unsigned int generation, const unsigned int variation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;
    unsigned int seed = RANDOMHASH(RANDOMHASH(member) + generation);

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
    float precisionStep = (SAMPLE_MAX - SAMPLE_MIN) / (PRECISION_ITERATIONS - 1);
    for (int i = 0; i < PRECISION_ITERATIONS; i++) {
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

GPU_GLOBAL void FireStarter2(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int dataSize, const unsigned int population, const unsigned int iterations, const unsigned int generation, const unsigned int variation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;
    unsigned int seed = RANDOMHASH(RANDOMHASH(member) + generation);

    FireStarterInstructions instructions = oldResults->instructions;
    FireStarterData data;
    float result, oldResult;
    if (generation) {
        data = oldResults->results[member].data;
        result = oldResult = oldResults->results[member].result;
    }
    else {
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

    for (unsigned int p = 0; p < iterations; p++) {
        unsigned int d = RANDOMSEED(seed) % dataSize;
        float oldData = data.d[d];
        data.d[d] = oldData + (EVOLUTION_FACTOR * RANDOMFACTOR(seed) * result);
        float curResult = 0.0f;
        for (int i = 0; i < SAMPLE_ITERATIONS; i++)
            curResult = fmaxf(fabsf(Program(instructions, data, theta[i]) - target[i]), curResult);
        if (curResult < result)
            result = curResult;
        else
            data.d[d] = oldData;
    }

    // Calculate a more accure estimate of the result.
    float precisionStep = (SAMPLE_MAX - SAMPLE_MIN) / (PRECISION_ITERATIONS - 1);
    for (int i = 0; i < PRECISION_ITERATIONS; i++) {
        float theta = SAMPLE_MIN + i * precisionStep;
        float target = Target(theta, variation);
        result = fmaxf(fabsf(Program(instructions, data, theta) - target), result);
    }
    if (generation && (result >= oldResult)) {
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
    newResults->instructions = instructions;
    newResults->results[member].data = data;
    newResults->results[member].result = result;
} // FireStarter2