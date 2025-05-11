#pragma once
#include "FireStarterResults.h"
#include "CUDADefines.h"

// Not used in Evolver. For code checkins in only.
inline float OptimizeEvaluate(const FireStarterData& testData, float n)
{
    FireStarterData data = testData;
// EVALUATE //
// END //
    return n;
} // OptimizeEvaluate

GPU_GLOBAL void ShowEvaluate(float* target, float* results, unsigned int size, float thetaStart, float thetaEnd, FireStarterCode* code, FireStarterData* data, unsigned int variation)
{
    // Determine the member to be optimized.
    unsigned int index = blockIdx.x * blockDim.x + threadIdx.x;
    if (index >= size)
        return;

    // Generate the target data.
    float theta = thetaStart + index * (thetaEnd - thetaStart) / size;
    if (target)
        target[index] = Target(theta, variation + FIRESTARTER_VARIATION);

    // Generate the test data.
    if (results && data && code) {
        FireStarterCode localCode(code);
        FireStarterData localData(data);
        results[index] = localCode.Evaluate(localData, theta);
    }
} // ShowEvaluate

inline bool TestEvaluate(FireStarterSharedData& sharedData, const FireStarterData& data, const FireStarterCode& code, const float target[], const float theta[], float& result)
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
} // TestEvaluate

#if FIRESTARTER_VARIATIONS == 1
// Current best single variation version: Each thread has its own code. The goal is to maximize the number of candidates that can be tested in a given period of time.
GPU_GLOBAL void Evolver(float* results, FireStarterResult* population, FireStarterCode* codes, const unsigned long long seed, const unsigned int passes, const unsigned int populationSize)
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
    float theta[FIRESTARTER_EVOLVE_GPU_SAMPLES];
    float target[FIRESTARTER_EVOLVE_GPU_SAMPLES];
    float sampleStep = (TARGET_MAX - TARGET_MIN) / (FIRESTARTER_EVOLVE_GPU_SAMPLES - 1);
    for (unsigned int i = 0; i < FIRESTARTER_EVOLVE_GPU_SAMPLES; i++) {
        float t = theta[i] = TARGET_MIN + i * sampleStep;
        target[i] = Target(t, FIRESTARTER_VARIATION);
    }

    // Evolve the program registers for each variation.
    unsigned long long memberSeed = seed + SEED1(member);   // Unique seed for the member
    unsigned short evolveAge = 0;
    unsigned short bestAge = 0;
    unsigned int registers = 0;

    // The first generation is initalized with random numbers.
    float memberResult = FIRESTARTER_START_RESULT;
    for (unsigned int i = 0; i < 10; i++) {
        code.InitCode(memberSeed);
        registers = code.Optimize();
        data.InitData(memberSeed, registers);
        if (TestEvaluate(sharedData, data, code, target, theta, memberResult))
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
            if (TestEvaluate(sharedData, data, code, target, theta, curResult))
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

    // Return the array of results or the entire population data.
    results[member] = bestResult;

    // Return the variation data for debugging.
    if (population)
        FireStarterPopulation::PopulationResult(population, member)->InitResult(bestData, bestResult, bestAge);
} // Evolver
#else
// Multi-variation version.
GPU_GLOBAL void Evolver(float* results, FireStarterResult* population, FireStarterCode* codes, const unsigned long long seed, const unsigned int passes, const unsigned int populationSize)
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
    unsigned long long memberSeed = seed + SEED1(member);   // Unique seed for the member
    unsigned short evolveAge = 0;
    unsigned short bestAge = 0;
    unsigned int registers = 0;

    // The first generation is initalized with random numbers.
    float variationResults[FIRESTARTER_VARIATIONS];
    float memberResult;
    FireStarterCode bestCode;
    FireStarterCode oldCode;
    FireStarterData bestData[FIRESTARTER_VARIATIONS];
    FireStarterData oldData[FIRESTARTER_VARIATIONS];
    float bestResult = FIRESTARTER_START_RESULT;
    unsigned int maxVariation = 0;

    // Perform all the passes on the GPU.
    for (unsigned int pass = 0; pass < passes; pass++) {
        // Evolve the code and data.
        if (!evolveAge || (evolveAge >= 6)) {
            bool valid = false;
            unsigned int i = 0;
            do {
                code.InitCode(memberSeed);
                registers = code.Optimize();
                memberResult = 0.0f;

                valid = true;
                for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++) {
                    data[v].InitData(memberSeed, registers);
                    variationResults[v] = FIRESTARTER_START_RESULT;
                    valid &= TestEvaluate(sharedData, data[v], code, target[v], theta, variationResults[v]);
                    if (variationResults[v] > memberResult) {
                        memberResult = MAX(memberResult, variationResults[v]);
                        maxVariation = v;
                    }
                    if (!valid && (i < 9))
                        break;
                }
                i++;
            } while (!valid && (i <= 9));
            if (!evolveAge) {
                bestCode = code;
                oldCode = code;
                for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++) {
                    bestData[v] = data[v];
                    oldData[v] = data[v];
                }
            }
            memberResult = FIRESTARTER_START_RESULT;
            evolveAge = 1;
        } else if (evolveAge > 1) {
            float evolutionScale = FIRESTARTER_SCALE * variationResults[maxVariation];
            data[maxVariation].RandomData(memberSeed, evolutionScale, registers);
        }

        // Iterate to evolve the highest variation.
        float evolutionScale = variationResults[maxVariation] * FIRESTARTER_SCALE;
        for (unsigned int i = 0; i < FIRESTARTER_EVOLVE_GPU_ITERATIONS; i++) {
            unsigned int d = RANDOMMOD(memberSeed, registers);
            float old = data[maxVariation][d];
            data[maxVariation][d] = old + evolutionScale * RANDOMFACTOR(memberSeed);
            float curResult = variationResults[maxVariation] * 0.99f;
            if (TestEvaluate(sharedData, data, code, target[maxVariation], theta, curResult)) {
                variationResults[maxVariation] = curResult;
                for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++)
                    if (variationResults[v] > curResult)
                        maxVariation = v;
            } else
                data[maxVariation][d] = old;
        }

        // Find the new highest variation.
        float result = 0.0f;
        for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++) {
            if (variationResults[v] > result) {
                result = variationResults[v];
                maxVariation = v;
            }
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
            evolveAge = 1;
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

    // Return the array of results or the entire population data.
    results[member] = bestResult;

    // Return the variation data for debugging.
    if (population)
        for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++)
            FireStarterPopulation::PopulationResult(population, member, v)->InitResult(bestData[v], variationResults[v], bestAge);
} // Evolver
#endif