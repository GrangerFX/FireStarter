#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

inline bool TestEvaluate(FireStarterSharedData& sharedData, const FireStarterCode& code, const unsigned int variation, unsigned long long& seed, float& result)
{
    float maxResult = result;
    result = 0.0f;
    float theta = TARGET_MIN + (TARGET_MAX - TARGET_MIN) * RANDOMNUM(seed);
    float target = Target(theta, variation);
    float n = fabsf(code.Evaluate(sharedData, theta) - target);
    if (!isfinite(n) || (n > maxResult)) {
        result = maxResult;
        return false;
    } else
        result = fmaxf(n, result);
    return true;
} // TestEvaluate

#if FIRESTARTER_EVOLVE_GPU_VARIATIONS == 1
// Current best single variation version: Each thread has its own code. The goal is to maximize the number of candidates that can be tested in a given period of time.
GPU_GLOBAL void Evolver(float* results, FireStarterResult* population, FireStarterCode* codes, const unsigned int variation, const unsigned long long seed, const unsigned int passes, const unsigned int populationSize)
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

    // Evolve the program registers for each variation.
    unsigned long long memberSeed = seed + SEED1(member) + SEED10(variation);   // Unique seed for the member
    unsigned short evolveAge = 0;
    unsigned short bestAge = 0;
    unsigned int registers = 0;

    // The first generation is initalized with random numbers.
    code.Init(memberSeed);
    registers = code.Optimize();
    data.Init(memberSeed, FIRESTARTER_START_SCALE, registers);
    FireStarterCode bestCode = code;
    FireStarterCode oldCode = code;
    FireStarterData bestData = data;
    FireStarterData oldData = data;
    float memberResult = FIRESTARTER_START_RESULT;
    float result = FIRESTARTER_START_RESULT;
    float bestResult = FIRESTARTER_START_RESULT;

    // Perform all the passes on the GPU.
    for (unsigned int pass = 0; pass < passes; pass++) {
        float evolutionScale;

        // Evolve the code and data.
        if ((evolveAge >= 6) || (memberResult >= FIRESTARTER_START_RESULT)) {
            evolveAge = 0;
            evolutionScale = FIRESTARTER_START_SCALE;
            code.Init(memberSeed);
            registers = code.Optimize();
            data.Init(memberSeed, FIRESTARTER_START_SCALE, registers);
            memberResult = FIRESTARTER_START_RESULT;
            result = FIRESTARTER_START_RESULT;
        } else {
            evolutionScale = FIRESTARTER_SCALE * memberResult;
            if (evolveAge > 0)
                data.RandomData(memberSeed, evolutionScale, registers);
        }

        // Iterate to evolve the data.
        float result = 0.0f;
        sharedData = data;
        for (unsigned int i = 0; i < FIRESTARTER_EVOLVE_GPU_ITERATIONS * FIRESTARTER_SAMPLES; i++) {
            float t = TARGET_MIN + (TARGET_MAX - TARGET_MIN) * RANDOMNUM(memberSeed);
            float sample = code.Evaluate(sharedData, t);
            float target = Target(t, variation);
            data[0] = target;
//          result += fabsf(sample - target); // Average result
            result = (result * (FIRESTARTER_SAMPLES - 1) + fabsf(sample - target)) * (1.0f / FIRESTARTER_SAMPLES); // Accumulated result.
        }
//      result /= FIRESTARTER_EVOLVE_GPU_ITERATIONS * FIRESTARTER_SAMPLES;  // Averge result

        // Did the results improve?
        if (!pass || (result < memberResult)) {
            // If the result was better, save the results.
            if (result < bestResult) {
                bestCode = code;
                sharedData.GetData(bestData);
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
    results[member] = bestResult;

    // Return the variation data for debugging.
    if (population)
        population[member].Init(bestData, bestResult, bestAge);
} // Evolver
#else
// Multi-variation version.
GPU_GLOBAL void Evolver(float* results, FireStarterResult* population, FireStarterCode* codes, const unsigned int variation, const unsigned long long seed, const unsigned int passes, const unsigned int populationSize)
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
    unsigned long long memberSeed = seed + SEED1(member);   // Unique seed for the member

    // The first generation is initalized with random numbers.
    float initResults[FIRESTARTER_EVOLVE_GPU_VARIATIONS];
    FireStarterData oldData[FIRESTARTER_EVOLVE_GPU_VARIATIONS];
    float memberResult = FIRESTARTER_START_RESULT;
    unsigned int registers = 0;

    for (unsigned int i = 0; i < 10; i++) {
        bool valid = true;
        code.Init(memberSeed);
        registers = code.Optimize();
        for (unsigned int v = 0; v < FIRESTARTER_EVOLVE_GPU_VARIATIONS; v++) {
            data[v].Init(memberSeed, FIRESTARTER_START_SCALE);
            initResults[v] = FIRESTARTER_START_RESULT;
            valid = valid && TestEvaluate(sharedData, data[v], code, target[v], theta, initResults[v]);
        }
        if (valid)
            break;
    }

    // Perform all the passes on the GPU.
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < FIRESTARTER_EVOLVE_GPU_VARIATIONS; v++) {
        float result = initResults[v];
        float bestResult = result;
        float evolutionScale = FIRESTARTER_SCALE * result;
        unsigned short evolveAge = 0;
        for (unsigned int pass = 0; pass < passes; pass++) {
            if (evolveAge > 0)
                data[v].RandomData(memberSeed, evolutionScale, registers);

            // Iterate to evolve the data.
            for (unsigned int i = 0; i < FIRESTARTER_EVOLVE_GPU_ITERATIONS; i++) {
                unsigned int d = RANDOMMOD(memberSeed, registers);
                float oldData = data[v][d];
                data[v][d] = oldData + evolutionScale * RANDOMFACTOR(memberSeed);
                float curResult = result * 0.99f;
                if (TestEvaluate(sharedData, data[v], code, target[v], theta, curResult)) {
                    result = curResult;
                    evolutionScale = FIRESTARTER_SCALE * result;
                } else
                    data[v][d] = oldData;
            }
            float maxResult = result;

            // Did the results improve?
            if (!pass || (maxResult < bestResult)) {
                oldData[v] = data[v];
                bestResult = maxResult;
                evolveAge = 0;
            } else {
                // Revert to the original data.
                for (unsigned int v = 0; v < FIRESTARTER_EVOLVE_GPU_VARIATIONS; v++)
                    data[v] = oldData[v];
                evolveAge++;
            }
        }
        maxResult = MAX(maxResult, result);
    }


    // Return the optimized best code.
    codes[member].Copy(code);

    // Return the array of results or the entire population data.
    results[member] = maxResult;

    // Return the variation data for debugging.
    if (population)
        population[member].Init(data[variation], maxResult);
} // Evolver
#endif