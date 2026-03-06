#pragma once
#include "FireStarterResults.h"
#include "MoneyMakerStocks.h"

inline bool EvolveEvaluate(FireStarterSharedData& sharedData, const FireStarterData& data, const FireStarterCode& code, const float target[], const float theta[], float& result)
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
} // EvolveEvaluate

#if FIRESTARTER_VARIATIONS == 1
// Current best single variation version: Each thread has its own code. The goal is to maximize the number of candidates that can be tested in a given period of time.
GPU_GLOBAL void EvolverGPU(float* results, FireStarterResult* population, FireStarterCode* codes, const unsigned int variation, const unsigned long long seed, const unsigned int passes, const unsigned int populationSize)
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
    unsigned int targetVariation = variation % FIRESTARTER_VARIATIONS;
    for (unsigned int i = 0; i < FIRESTARTER_EVOLVE_GPU_SAMPLES; i++) {
        float t = theta[i] = TARGET_MIN + i * sampleStep;
        target[i] = Target(t, targetVariation);
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
        if (EvolveEvaluate(sharedData, data, code, target, theta, memberResult))
            break;
    }

    FireStarterCode bestCode = code;
    FireStarterCode oldCode = code;
    FireStarterData bestData = data;
    FireStarterData oldData = data;
    float bestResult = memberResult;
    float oldResult = memberResult;

    // Perform all the passes on the GPU.
    for (unsigned int pass = 0; pass < passes; pass++) {
        // Evolve the code and data.
        float evolutionScale;
        if ((evolveAge >= 6) || (memberResult >= FIRESTARTER_START_RESULT)) {
            evolutionScale = FIRESTARTER_START_SCALE;
            code.InitCode(memberSeed);
            registers = code.Optimize();
            data.InitData(memberSeed, registers);
            oldResult = FIRESTARTER_START_RESULT;
            memberResult = FIRESTARTER_START_RESULT;
            evolveAge = 0;
        } else {
            // Randomize a register each generation.
            evolutionScale = memberResult * FIRESTARTER_SCALE;
            if (evolveAge > 0)
                data.RandomData(memberSeed, evolutionScale, registers);
        }

        // Iterate to evolve the data.
        for (unsigned int i = 0; i < FIRESTARTER_EVOLVE_GPU_ITERATIONS; i++) {
            unsigned int d = RANDOMMOD(memberSeed, registers);
            float old = data[d];
            data[d] = old + evolutionScale * RANDOMFACTOR(memberSeed);
            float curResult = memberResult * 0.99f;
            if (EvolveEvaluate(sharedData, data, code, target, theta, curResult))
                memberResult = curResult;
            else
                data[d] = old;
        }

        // Did the results improve?
        if (!pass || (memberResult < oldResult)) {
            // If the result was better, save the results.
            oldCode = code;
            oldData = data;
            oldResult = memberResult;
            evolveAge = 0;

            // Update the best result.
            if (!pass || (memberResult < bestResult)) {
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

    // Return the best result.
    results[member] = bestResult;

    // Return the population data for debugging.
    if (population)
        FireStarterPopulation::PopulationResult(population, member)->InitResult(bestData, bestResult, bestAge);
} // EvolverGPU
#else
// Multi-variation version.
GPU_GLOBAL void EvolverGPU(float* results, FireStarterResult* population, FireStarterCode* codes, const unsigned int variation, const unsigned long long seed, const unsigned int passes, const unsigned int populationSize)
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
    FireStarterData bestData[FIRESTARTER_VARIATIONS];
    FireStarterData oldData[FIRESTARTER_VARIATIONS];

    // Precalculate the target theta values and target samples.
    float theta[FIRESTARTER_EVOLVE_GPU_SAMPLES];
    float target[FIRESTARTER_VARIATIONS][FIRESTARTER_EVOLVE_GPU_SAMPLES];
    float sampleStep = (TARGET_MAX - TARGET_MIN) / (FIRESTARTER_EVOLVE_GPU_SAMPLES - 1);
    for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++) {
        unsigned int tv = (v + variation) % FIRESTARTER_VARIATIONS
        for (unsigned int i = 0; i < FIRESTARTER_EVOLVE_GPU_SAMPLES; i++) {
            float t = theta[i] = TARGET_MIN + i * sampleStep;
            target[v][i] = Target(t, v + variation);
        }
    }

    // Evolve the program registers for each variation.
    unsigned long long memberSeed = seed + SEED0(member);   // Unique seed for the member
    unsigned short evolveAge = 0xFFF;
    unsigned short bestAge = 0;
    unsigned int registers = 0;

    // The first generation is initalized with random numbers.
    float memberResult = FIRESTARTER_START_RESULT;
    float memberVariationResults[FIRESTARTER_VARIATIONS];
    for (unsigned int v = 0; (v < FIRESTARTER_VARIATIONS); v++)
        memberVariationResults[v] = FIRESTARTER_START_RESULT;

    // The first generation is initalized with random numbers.
    FireStarterCode bestCode = code;
    FireStarterCode oldCode = code;
    float bestVariationResults[FIRESTARTER_VARIATIONS];
    float oldVariationResults[FIRESTARTER_VARIATIONS];
    for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++) {
        bestData[v] = data[v];
        oldData[v] = data[v];
        bestVariationResults[v] = memberVariationResults[v];
        oldVariationResults[v] = memberVariationResults[v];
    }
    float bestResult = memberResult;
    float oldResult = memberResult;

    for (unsigned int v = 0; (v < FIRESTARTER_VARIATIONS); v++) {
        memberVariationResults[v] = FIRESTARTER_START_RESULT;
        bestVariationResults[v] = FIRESTARTER_START_RESULT;
        oldVariationResults[v] = FIRESTARTER_START_RESULT;
    }
    unsigned int memberVariation = 0;
    unsigned int bestVariation = 0;
    unsigned int oldVariation = 0;

    // Perform all the passes on the GPU.
    for (unsigned int pass = 0; pass < passes; pass++) {
        // Evolve the code and data.
        float evolutionScale;
        if ((evolveAge >= 6) || (memberResult >= FIRESTARTER_START_RESULT)) {
            evolutionScale = FIRESTARTER_START_SCALE;
            code.InitCode(memberSeed);
            registers = code.Optimize();
            for (unsigned int v = 0; (v < FIRESTARTER_VARIATIONS); v++) {
                data[v].InitData(memberSeed, registers);
                memberVariationResults[v] = FIRESTARTER_START_RESULT;
                oldVariationResults[v] = FIRESTARTER_START_RESULT;
            }
            oldResult = FIRESTARTER_START_RESULT;
            memberResult = FIRESTARTER_START_RESULT;
//          memberVariation = 0; // Note: Use the previous max variation for optimization.
            evolveAge = 0;
        } else {
            // Randomize a register each generation.
            evolutionScale = memberResult * FIRESTARTER_SCALE;
            if (evolveAge > 0)
                data[memberVariation].RandomData(memberSeed, evolutionScale, registers);
        }

        // Iterate to evolve the highest variation.
        for (unsigned int i = 0; i < FIRESTARTER_EVOLVE_GPU_ITERATIONS; i++) {
            unsigned int d = RANDOMMOD(memberSeed, registers);
            float old = data[memberVariation][d];
            data[memberVariation][d] = old + evolutionScale * RANDOMFACTOR(memberSeed);
            float curResult = memberResult * 0.99f;
            if (EvolveEvaluate(sharedData, data, code, target[memberVariation], theta, curResult)) {
                memberVariationResults[memberVariation] = curResult;
                memberResult = memberVariationResults[0];
                memberVariation = 0;
                for (unsigned int v = 1; v < FIRESTARTER_VARIATIONS; v++) {
                    if (memberVariationResults[v] > memberResult) {
                        memberResult = memberVariationResults[v];
                        memberVariation = v;
                    }
                }
            } else
                data[memberVariation][d] = old;
        }

        // Did the results improve?
        if (!pass || (memberResult < oldResult)) {
            // If the results were better, update the old results.
            oldCode = code;
            for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++) {
                oldData[v] = data[v];
                oldVariationResults[v] = memberVariationResults[v];
            }
            oldResult = memberResult;
            oldVariation = memberVariation;
            evolveAge = 1;

            // Update the best results.
            if (!pass || (memberResult < bestResult)) {
                bestCode = code;
                for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++) {
                    bestData[v] = data[v];
                    bestVariationResults[v] = memberVariationResults[v];
                }
                bestResult = memberResult;
                bestVariation = memberVariation;
                bestAge = evolveAge;
            }
        } else {
            // Revert to the original code and data.
            code = oldCode;
            for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++) {
                data[v] = oldData[v];
                memberVariationResults[v] = oldVariationResults[v];
            }
            memberResult = oldResult;
            memberVariation = oldVariation;
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
            FireStarterPopulation::PopulationResult(population, member, v)->InitResult(bestData[v], bestVariationResults[v], bestAge);
} // EvolverGPU
#endif
