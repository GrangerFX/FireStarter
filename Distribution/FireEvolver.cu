#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

inline bool TestEvaluate(FireStarterSharedData& sharedData, const FireStarterData& data, const FireStarterCode& code, const float target[], const float theta[], float& result)
{
    float maxResult = result;
    result = 0.0f;
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++) {
        sharedData = data;
        float n = fabsf(code.Evaluate(sharedData, theta[i]) - target[i]);
        if (!isfinite(n) || (n > maxResult)) {
            result = maxResult;
            return false;
        } else
            result = fmaxf(n, result);
    }
    return true;
} // TestEvaluate

// Current best version: Each thread has its own code. The goal is to maximize the number of candidates that can be tested in a given period of time.
GPU_GLOBAL void Evolver(float* results, FireStarterResult* population, FireStarterCode* codes, const unsigned int variation, const unsigned long long seed, const unsigned long long generation, const unsigned int passes, const unsigned int populationSize)
{
    // Determine the member to be optimized.
    unsigned int member = blockIdx.x * blockDim.x + threadIdx.x;
    if (member >= populationSize)
        return;

    // The shared data for the threads in the warp.
    GPU_SHARED FireStarterSharedData sharedData;

    // The evolution code and data.
    FireStarterCode code;
    FireStarterData data;

    // Precalculate the target theta values and target samples.
    float theta[FIRESTARTER_SAMPLES];
    float target[FIRESTARTER_SAMPLES];
    float sampleStep = (TARGET_MAX - TARGET_MIN) / (FIRESTARTER_SAMPLES - 1);
    for (unsigned int i = 0; i < FIRESTARTER_SAMPLES; i++) {
        float t = theta[i] = TARGET_MIN + i * sampleStep;
        target[i] = Target(t, variation);
    }

    // Evolve the program registers for each variation.
    unsigned long long memberSeed = seed + SEED10(variation) + SEED1(member) + SEED2(generation);   // Unique seed for the generation/member
    unsigned short evolveAge = 0;
    unsigned short bestAge = 0;

    // The first generation is initalized with random numbers.
    float memberResult = FIRESTARTER_START_RESULT;
    for (unsigned int i = 0; i < 10; i++) {
        code.Init(memberSeed);
        data.Init(memberSeed, FIRESTARTER_START_SCALE);
        if (TestEvaluate(sharedData, data, code, target, theta, memberResult))
            break;
    }
    unsigned int registers = code.Optimize();
    FireStarterCode bestCode = code;
    FireStarterData bestData = data;
    FireStarterCode oldCode = code;
    FireStarterData oldData = data;
    float bestResult = memberResult;

    // Perform all the passes on the GPU.
    for (unsigned int pass = 0; pass < passes; pass++) {
        float result, evolutionScale;

        // Evolve the code and data.
        if ((evolveAge >= 6) || (memberResult >= FIRESTARTER_START_RESULT)) {
            evolveAge = 0;
            memberResult = FIRESTARTER_START_RESULT;
            evolutionScale = FIRESTARTER_START_SCALE;
            code.Init(memberSeed);
            registers = code.Optimize();
            data.Init(memberSeed, FIRESTARTER_START_SCALE, registers);
            result = memberResult;
        } else {
            evolutionScale = FIRESTARTER_SCALE * memberResult;
            result = memberResult;
            if (evolveAge > 0)
                data.RandomData(memberSeed, evolutionScale, registers);
        }

        // Iterate to evolve the data.
        for (unsigned int i = 0; i < FIRESTARTER_EVOLVE_GPU_ITERATIONS; i++) {
            unsigned int d = RANDOMMOD(memberSeed, registers);
            float oldData = data[d];
            data[d] = oldData + evolutionScale * RANDOMFACTOR(memberSeed);
            float curResult = result * 0.99f;
            if (TestEvaluate(sharedData, data, code, target, theta, curResult))
                result = curResult;
            else
                data[d] = oldData;
        }

        // Did the results improve?
        if (!pass || (result < memberResult)) {
            // If the result was better, save the results.
            if (result < bestResult) {
                bestCode = code;
                bestData = data;
                bestResult = result;
                bestAge = evolveAge;
            }
            oldCode = code;
            oldData = data;
            memberResult = result;
            evolveAge = 0;
        } else {
            // Revert to the original code and data.
            code = oldCode;
            data = oldData;
            evolveAge++;
        }
    }

    // Return the optimized best code.
    codes[member].Copy(bestCode);

    // Return the array of results or the entire population data.
    if (results)
        results[member] = bestResult;
    if (population)
        population[member].Init(bestData, bestResult, bestAge);
} // Evolver

#if 0
// Current best version: Each thread has its own code. The goal is to maximize the number of candidates that can be tested in a given period of time.
GPU_GLOBAL void EvolverVariations(float* results, FireStarterResult* population, FireStarterCode* codes, const unsigned long long seed, const unsigned long long generation, const unsigned int passes, const unsigned int populationSize)
{
    // Determine the member to be optimized.
    unsigned int member = blockIdx.x * blockDim.x + threadIdx.x;
    if (member >= populationSize)
        return;

    // The shared data for the threads in the warp.
    GPU_SHARED FireStarterSharedData sharedData;

    // The evolution code and data.
    FireStarterCode code;
    FireStarterData data[FIRESTARTER_EVOLVE_GPU_VARIATIONS];

    // Precalculate the target theta values and target samples.
    float theta[FIRESTARTER_SAMPLES];
    float target[FIRESTARTER_EVOLVE_GPU_VARIATIONS][FIRESTARTER_SAMPLES];
    float sampleStep = (TARGET_MAX - TARGET_MIN) / (FIRESTARTER_SAMPLES - 1);
    for (unsigned int v = 0; v < FIRESTARTER_EVOLVE_GPU_VARIATIONS; v++)
        for (unsigned int i = 0; i < FIRESTARTER_SAMPLES; i++) {
            float t = theta[i] = TARGET_MIN + i * sampleStep;
            target[v][i] = Target(t, v);
        }

    // Evolve the program registers for each variation.
    unsigned long long memberSeed = seed + SEED1(member) + SEED2(generation);   // Unique seed for the generation/member
    unsigned short evolveAge = 0;
    unsigned short bestAge = 0;

    // The first generation is initalized with random numbers.
    float evolutionScale = FIRESTARTER_START_SCALE;
    float result[FIRESTARTER_EVOLVE_GPU_VARIATIONS];
    for (unsigned int i = 0; i < 10; i++) {
        code.Init(memberSeed);
        bool valid = true;
        for (unsigned int v = 0; v < FIRESTARTER_EVOLVE_GPU_VARIATIONS; v++) {
            data[v].Init(memberSeed, evolutionScale);
            result[v] = FIRESTARTER_START_RESULT;
            valid = valid && TestEvaluate(sharedData, data[v], code, target[v], theta, result[v]);
        }
        if (valid)
            break;
    }
    unsigned int registers = code.Optimize();
    FireStarterCode bestCode = code;
    FireStarterCode oldCode = code;
    FireStarterData bestData[FIRESTARTER_EVOLVE_GPU_VARIATIONS];
    FireStarterData oldData[FIRESTARTER_EVOLVE_GPU_VARIATIONS];
    for (unsigned int v = 0; v < FIRESTARTER_EVOLVE_GPU_VARIATIONS; v++) {
        bestData[v] = data[v];
        oldData[v] = data[v];
    }
    float bestResult = result[0];
    for (unsigned int v = 1; v < FIRESTARTER_EVOLVE_GPU_VARIATIONS; v++)
        bestResult = MAX(bestResult, result[v]);

    // Perform all the passes on the GPU.
    for (unsigned int pass = 0; pass < passes; pass++) {
        // Evolve the code and data.
        if ((evolveAge >= 6) || (bestResult >= FIRESTARTER_START_RESULT)) {
            evolveAge = 0;
            bestResult = FIRESTARTER_START_RESULT;
            evolutionScale = FIRESTARTER_START_SCALE;
            code.Init(memberSeed);
            registers = code.Optimize();
            for (unsigned int v = 0; v < FIRESTARTER_EVOLVE_GPU_VARIATIONS; v++) {
                data[v].Init(memberSeed, evolutionScale, registers);
                result[v] = bestResult;
            }
        } else {
            evolutionScale = FIRESTARTER_SCALE * bestResult;
            for (unsigned int v = 0; v < FIRESTARTER_EVOLVE_GPU_VARIATIONS; v++)
                result[v] = bestResult;
            if (evolveAge > 0)
                for (unsigned int v = 0; v < FIRESTARTER_EVOLVE_GPU_VARIATIONS; v++)
                    data[v].RandomData(memberSeed, evolutionScale, registers);
        }

        // Iterate to evolve the data.
        for (unsigned int v = 0; v < FIRESTARTER_EVOLVE_GPU_VARIATIONS; v++) {
            for (unsigned int i = 0; i < FIRESTARTER_EVOLVE_GPU_ITERATIONS; i++) {
                unsigned int d = RANDOMMOD(memberSeed, registers);
                float oldData = data[v][d];
                data[v][d] = oldData + evolutionScale * RANDOMFACTOR(memberSeed);
                float curResult = result[v] * 0.99f;
                if (TestEvaluate(sharedData, data[v], code, target[v], theta, curResult))
                    result[v] = curResult;
                else
                    data[v][d] = oldData;
            }
        }
        float maxResult = result[0];
        for (unsigned int v = 1; v < FIRESTARTER_EVOLVE_GPU_VARIATIONS; v++)
            maxResult = MAX(maxResult, result[v]);

        // Did the results improve?
        if (!pass || (maxResult < bestResult)) {
            // If the result was better, save the results.
            bestCode = code;
            for (unsigned int v = 0; v < FIRESTARTER_EVOLVE_GPU_VARIATIONS; v++)
                bestData[v] = data;
            bestResult = maxResult;
            evolveAge = 0;
        } else {
            // Revert to the original code and data.
            code = oldCode;
            for (unsigned int v = 0; v < FIRESTARTER_EVOLVE_GPU_VARIATIONS; v++)
                data[v] = oldData[v];
            evolveAge++;
        }
    }

    // Return the optimized best code.
    codes[member].Copy(bestCode);

    // Return the array of results or the entire population data.
    if (results)
        results[member] = bestResult;
    if (population)
        population[member].Init(bestData, bestResult, bestAge);
} // EvolverVariations
#endif