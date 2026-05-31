#pragma once
#include "FireStarterResults.h"
#include "CUDADefines.h"

inline bool SpeedTestEvaluate(FireStarterSharedData& sharedData, const FireStarterData& data, const FireStarterCode& code, const float target[], const float theta[], float& result)
{
    float maxResult = result;
    result = 0.0f;
    for (int i = 0; i < FIRESTARTER_EVOLVE_GPU_SAMPLES; i++) {
        sharedData = data;
        float n = fabsf(code.Evaluate(sharedData, theta[i]) - target[i]);
        if (!isfinite(n) || (n > maxResult)) {
            result = maxResult;
            return false;
        } else
            result = fmaxf(n, result);
    }
    return true;
} // SpeedTestEvaluate

#if FIRESTARTER_VARIATIONS == 1
// Current best single variation version: Each thread has its own code. The goal is to maximize the number of candidates that can be tested in a given period of time.
GPU_GLOBAL void SpeedTest(float* results, FireStarterResult* population, FireStarterCode* codes, const unsigned long long seed, const unsigned int passes, const unsigned int populationCount)
{
    // Determine the member to be optimized.
    unsigned int member = blockIdx.x * blockDim.x + threadIdx.x;
    if (member >= populationCount)
        return;

    // The shared data for the threads in the warp.
    GPU_SHARED FireStarterSharedData sharedData;

    // The evolution code and data.
    FireStarterCode code;
    FireStarterData data;

    // Precalculate the target theta values and target samples.
    float theta[FIRESTARTER_EVOLVE_GPU_SAMPLES];
    float target[FIRESTARTER_EVOLVE_GPU_SAMPLES];
    float sampleStep = (TARGET_MAX - TARGET_MIN) / (FIRESTARTER_EVOLVE_GPU_SAMPLES - 1);
    for (unsigned int i = 0; i < FIRESTARTER_EVOLVE_GPU_SAMPLES; i++) {
        float t = theta[i] = TARGET_MIN + i * sampleStep;
        target[i] = Target(t, FIRESTARTER_VARIATION);
    }

    // Evolve the program registers for each variation.
    unsigned long long memberSeed = seed + SEED0(member);   // Unique seed for the member
    unsigned short evolveAge = 0;
    unsigned short bestAge = 0;
    unsigned int registers = 0;

    // The first generation is initalized with random numbers.
    float memberResult = FIRESTARTER_START_RESULT;
    for (unsigned int i = 0; i < 10; i++) {
        code.InitCode(memberSeed);
        registers = code.Optimize();
        data.InitData(memberSeed, registers);
        if (SpeedTestEvaluate(sharedData, data, code, target, theta, memberResult))
            break;
    }
    FireStarterCode bestCode = code;
    FireStarterCode oldCode = code;
    FireStarterData bestData = data;
    FireStarterData oldData = data;
    float bestResult = memberResult;
    float result = memberResult;

    // Perform all the passes on the GPU.
    for (unsigned int pass = 0; pass < passes; pass++) {
        float evolutionScale;

        // Evolve the code and data.
        if ((evolveAge >= 6) || (memberResult >= FIRESTARTER_START_RESULT)) {
            evolveAge = 0;
            evolutionScale = FIRESTARTER_START_SCALE;
            code.InitCode(memberSeed);
            registers = code.Optimize();
            data.InitData(memberSeed, registers);
            result = FIRESTARTER_START_RESULT;
            memberResult = FIRESTARTER_START_RESULT;
        } else {
            evolutionScale = FIRESTARTER_SCALE * memberResult;
            if (evolveAge > 0)
                data.RandomData(memberSeed, evolutionScale, registers);
        }

        // Iterate to evolve the data.
        for (unsigned int i = 0; i < FIRESTARTER_EVOLVE_GPU_ITERATIONS; i++) {
            unsigned int d = RANDOMMOD(memberSeed, registers);
            float old = data[d];
            data[d] = old + evolutionScale * RANDOMFACTOR(memberSeed);
            float curResult = result * 0.99f;
            if (SpeedTestEvaluate(sharedData, data, code, target, theta, curResult))
                result = curResult;
            else
                data[d] = old;
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

    // Return the best result.
    results[member] = bestResult;

    // Return the population data for debugging.
    if (population)
        FireStarterPopulation::PopulationResult(population, member, 0)->InitResult(data, bestResult);
} // SpeedTest
#else
// Multi-variation version.
GPU_GLOBAL void SpeedTest(float* results, FireStarterResult* population, FireStarterCode* codes, const unsigned long long seed, const unsigned int passes, const unsigned int populationSize)
{
    // Determine the member to be optimized.
    unsigned int member = blockIdx.x * blockDim.x + threadIdx.x;
    if (member >= populationSize)
        return;

    // The shared data for the threads in the warp.
    GPU_SHARED FireStarterSharedData sharedData;

    // The evolution code and data.
    FireStarterCode code;
    FireStarterData data[FIRESTARTER_VARIATIONS];

    // Precalculate the target theta values and target samples.
    float theta[FIRESTARTER_EVOLVE_GPU_SAMPLES];
    float target[FIRESTARTER_VARIATIONS][FIRESTARTER_EVOLVE_GPU_SAMPLES];
    float sampleStep = (TARGET_MAX - TARGET_MIN) / (FIRESTARTER_EVOLVE_GPU_SAMPLES - 1);
    for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++) {
        for (unsigned int i = 0; i < FIRESTARTER_EVOLVE_GPU_SAMPLES; i++) {
            float t = theta[i] = TARGET_MIN + i * sampleStep;
            target[v][i] = Target(t, v + FIRESTARTER_VARIATION);
        }
    }

    // Evolve the program registers for each variation.
    unsigned long long memberSeed = seed + SEED0(member);   // Unique seed for the member
    unsigned short evolveAge = 0;
    unsigned short bestAge = 0;
    unsigned int registers = 0;

    // The first generation is initalized with random numbers.
    float variationResult[FIRESTARTER_VARIATIONS];
    float memberResult;
    bool valid = false;
    for (unsigned int i = 0; !valid && (i < 10); i++) {
        code.InitCode(memberSeed);
        registers = code.Optimize();
        memberResult = 0.0f;
        for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++) {
            data[v].InitData(memberSeed, registers);
            variationResult[v] = FIRESTARTER_START_RESULT;
            valid = SpeedTestEvaluate(sharedData, data[v], code, target[v], theta, variationResult[v]);
            memberResult = MAX(memberResult, variationResult[v]);
            if (!valid)
                break;
        }
    }
    FireStarterCode bestCode = code;
    FireStarterCode oldCode = code;
    FireStarterData bestData[FIRESTARTER_VARIATIONS];
    FireStarterData oldData[FIRESTARTER_VARIATIONS];
    for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++) {
        bestData[v] = data[v];
        oldData[v] = data[v];
    }
    float bestResult = FIRESTARTER_START_RESULT;

    // Perform all the passes on the GPU.
    for (unsigned int pass = 0; pass < passes; pass++) {
        // Evolve the code and data.
        if ((evolveAge >= 6) || (memberResult >= FIRESTARTER_START_RESULT)) {
            evolveAge = 0;
            code.InitCode(memberSeed);
            registers = code.Optimize();
            for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++) {
                data[v].InitData(memberSeed, registers);
                variationResult[v] = FIRESTARTER_START_RESULT;
            }
            memberResult = FIRESTARTER_START_RESULT;
        } else {
            if (evolveAge > 0)
                for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++) {
                    float evolutionScale = FIRESTARTER_SCALE * variationResult[v];
                    data[v].RandomData(memberSeed, evolutionScale, registers);
                }
        }

        // Iterate to evolve the data.
        float result = 0.0f;
        for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++) {
            float varResult = variationResult[v];
            float evolutionScale = FIRESTARTER_SCALE * varResult;
            for (unsigned int i = 0; i < FIRESTARTER_EVOLVE_GPU_ITERATIONS; i++) {
                unsigned int d = RANDOMMOD(memberSeed, registers);
                float old = data[v][d];
                data[v][d] = old + evolutionScale * RANDOMFACTOR(memberSeed);
                float curResult = varResult * 0.99f;
                if (SpeedTestEvaluate(sharedData, data, code, target[v], theta, curResult))
                    curResult = curResult;
                else
                    data[v][d] = old;
            }
            result = MAX(result, varResult);
            variationResult[v] = varResult;
        }

        // Did the results improve?
        if (!pass || (result < memberResult)) {
            // If the result was better, save the results.
            if (result < bestResult) {
                bestCode = code;
                for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++)
                    bestData[v] = data[v];
                bestResult = result;
                bestAge = evolveAge;
            }
            oldCode = code;
            for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++)
                oldData[v] = data[v];
            memberResult = result;
            evolveAge = 0;
        } else {
            // Revert to the original code and data.
            code = oldCode;
            for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++)
                data[v] = oldData[v];
            evolveAge++;
        }
    }

    // Return the optimized best code.
    codes[member].Copy(bestCode);

    // Return the best result.
    results[member] = bestResult;

    // Return the population data for debugging.
    if (population)
        for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++)
            FireStarterPopulation::PopulationResult(population, member, v)->InitResult(data[v], variationResult[v]);
} // SpeedTest
#endif