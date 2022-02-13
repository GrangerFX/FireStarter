#include "FireStarterDefines.h"
#include "HashRandom.h"
#include "FireStarterTarget.h"

// PROGRAM //
inline float Program(const FireStarterInstructions& instructions, FireStarterData data, float n)
{
    for (unsigned int i = 0; i < PROGRAM_INSTRUCTIONS; i++)
       instructions.i[i].Execute(data, n);
    return isnan(n) ? 0.0f : n;
} // Program
// END //

GPU_GLOBAL void Evolve(const FireStarterInstructions instructions, FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int dataSize, const unsigned int population, const unsigned int iterations, const unsigned int precision, const unsigned int generation, const unsigned int variation)
{
    const unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;
    const unsigned int blockIndex = (blockDim.x * blockIdx.x) / 32;
    const unsigned int threadIndex = threadIdx.x & 31;
    unsigned int blockSeed = RANDOMHASH(RANDOMHASH(blockIndex) + generation);
    unsigned int memberSeed = RANDOMHASH(RANDOMHASH(member) + generation);

//    GPU_SHARED FireStarterInstructions threadInstructions;
//    threadInstructions = instructions;

    FireStarterData data;
    float result, oldResult;
    if (generation) {
        data = oldResults->results[member].data;
        result = oldResult = oldResults->results[member].result;
    } else {
        for (int i = 0; i < dataSize; i++)
            data.d[i] = RANDOMFACTOR(memberSeed);
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
        unsigned int d = RANDOMSEED(blockSeed) % dataSize;
        float oldData = data.d[d];
        data.d[d] = oldData + (EVOLUTION_FACTOR * RANDOMFACTOR(memberSeed) * result);
        float curResult = 0.0f;
        for (int i = 0; i < SAMPLE_ITERATIONS; i++)
            curResult = fmaxf(fabsf(Program(instructions, data, theta[i]) - target[i]), curResult);
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
        result = fmaxf(fabsf(Program(instructions, data, theta) - target), result);
    }

    if (generation && (result >= oldResult)) {
        // The genetic part of genetic programming and a major optimization:
        // Copy the best data from among a random set of members.
        unsigned int bestIndex = member;
        float bestResult = oldResult;
        for (int i = 0; i < EVOLUTION_SAMPLES; i++) {
            unsigned int index = RANDOMSEED(memberSeed) % population;
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
} // Evolve