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
#if 1
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
    unsigned short evolveAge = 0xFFF;
    unsigned short bestAge = 0;
    unsigned int registers = 0;

    float memberResult = FIRESTARTER_START_RESULT;
    float bestResult = FIRESTARTER_START_RESULT;
    float oldResult = FIRESTARTER_START_RESULT;
    FireStarterCode bestCode;
    FireStarterCode oldCode;
    FireStarterData bestData;
    FireStarterData oldData;

    // Perform all the passes on the GPU.
    for (unsigned int pass = 0; pass < passes; pass++) {
        float evolutionScale;

        // Evolve the code and data.
        if ((evolveAge >= 6) || (memberResult >= FIRESTARTER_START_RESULT)) {
            code.InitCode(memberSeed);
            registers = code.Optimize();
            data.InitData(memberSeed, registers);
            memberResult = FIRESTARTER_START_RESULT;
            TestEvaluate(sharedData, data, code, target, theta, memberResult);
            if (!pass || (memberResult < FIRESTARTER_START_RESULT)) {
                oldCode = code;
                oldData = data;
                oldResult = memberResult;
                evolveAge = 1;
            } else {
                code = oldCode;
                data = oldData;
                memberResult = oldResult;
            }
        }

        // Randomize a register each generation.
        evolutionScale = FIRESTARTER_SCALE * memberResult;
        if (evolveAge > 0)
            data.RandomData(memberSeed, evolutionScale, registers);

        // Iterate to evolve the data.
        for (unsigned int i = 0; i < FIRESTARTER_EVOLVE_GPU_ITERATIONS; i++) {
            unsigned int d = RANDOMMOD(memberSeed, registers);
            float old = data[d];
            data[d] = old + evolutionScale * RANDOMFACTOR(memberSeed);
            float curResult = memberResult * 0.99f;
            if (TestEvaluate(sharedData, data, code, target, theta, curResult))
                memberResult = curResult;
            else
                data[d] = old;
        }

        // Did the results improve?
        if (!pass || (memberResult < oldResult)) {
            // If the result was better, save the results.
            oldCode = code;
            oldData = data;
            evolveAge = 0;

            // Update the best result.
            if (memberResult < bestResult) {
                bestCode = code;
                bestData = data;
                bestResult = memberResult;
                bestAge = evolveAge;
            }
        } else {
            // Revert to the original code and data.
            code = oldCode;
            data = oldData;
            memberResult = oldResult;
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
#endif
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
    unsigned short evolveAge = 0xFFF;
    unsigned short bestAge = 0;
    unsigned int registers = 0;

    // The first generation is initalized with random numbers.
    float variationResults[FIRESTARTER_VARIATIONS];
    float memberResult = FIRESTARTER_START_RESULT;
    float bestResult = FIRESTARTER_START_RESULT;
    float oldResult = FIRESTARTER_START_RESULT;
    unsigned int memberVariation = 0;
    unsigned int oldVariation = 0;
    FireStarterCode bestCode;
    FireStarterCode oldCode;
    FireStarterData bestData[FIRESTARTER_VARIATIONS];
    FireStarterData oldData[FIRESTARTER_VARIATIONS];

    // Perform all the passes on the GPU.
    for (unsigned int pass = 0; pass < passes; pass++) {
        // Evolve the code and data.
        if (!(pass & 7) && ((evolveAge >= 64) || (memberResult >= FIRESTARTER_START_RESULT))) {
            code.InitCode(memberSeed);
            registers = code.Optimize();
            memberResult = 0.0f;
            memberVariation = 0;
            for (unsigned int v = 0; (v < FIRESTARTER_VARIATIONS); v++) {
                data[v].InitData(memberSeed, registers);
                variationResults[v] = FIRESTARTER_START_RESULT;
                TestEvaluate(sharedData, data[v], code, target[v], theta, variationResults[v]);
                if (variationResults[v] > memberResult) {
                    memberResult = variationResults[v];
                    memberVariation = v;
                }
            }
            if (pass && (memberResult >= FIRESTARTER_START_RESULT)) {
                code = oldCode;
                for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++)
                    data[v] = oldData[v];
                memberResult = oldResult;
                memberVariation = oldVariation;
            } else {
                oldCode = code;
                for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++)
                    oldData[v] = data[v];
                oldResult = memberResult;
                oldVariation = memberVariation;
                evolveAge = 1;
            }
        }

        // Randomize a register each generation.
        float variationResult = variationResults[memberVariation];
        float evolutionScale = variationResult * FIRESTARTER_SCALE;
        if (evolveAge > 1)
            data[memberVariation].RandomData(memberSeed, evolutionScale, registers);

        // Iterate to evolve the highest variation.
        for (unsigned int i = 0; i < FIRESTARTER_EVOLVE_GPU_ITERATIONS; i++) {
            unsigned int d = RANDOMMOD(memberSeed, registers);
            float old = data[memberVariation][d];
            data[memberVariation][d] = old + evolutionScale * RANDOMFACTOR(memberSeed);
            float curResult = variationResult * 0.99f;
            if (TestEvaluate(sharedData, data, code, target[memberVariation], theta, curResult))
                variationResult = curResult;
            else
                data[memberVariation][d] = old;
        }
        variationResults[memberVariation] = variationResult;

        // Find the new highest variation.
        unsigned int variation = 0;
        memberResult = variationResults[0];
        for (unsigned int v = 1; v < FIRESTARTER_VARIATIONS; v++) {
            if (variationResults[v] > result) {
                memberResult = variationResults[v];
                variation = v;
            }
        }

        // Did the results improve?
        if (!pass || (memberResult < oldResult)) {
            // If the results were better, update the old results.
            oldCode = code;
            for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++)
                oldData[v] = data[v];
            oldResult = memberResul;
            oldVariation = memberVariation = variation;
            evolveAge = 1;

            // Update the best results.
            if (!pass || (memberResult < bestResult)) {
                bestCode = code;
                for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++)
                    bestData[v] = data[v];
                bestResult = memberResult;
                bestAge = evolveAge;
            }
        } else {
            // Revert to the original code and data.
            code = oldCode;
            for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++)
                data[v] = oldData[v];
            memberResult = oldResult;
            memberVariation = oldVariation;
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