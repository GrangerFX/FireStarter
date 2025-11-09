#pragma once
#include "FireStarterResults.h"
#include "CUDADefines.h"

inline bool SelectEvaluate(FireStarterSharedData& sharedData, const FireStarterData& data, const FireStarterCode& code, const float target[], const float theta[], float& result)
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
} // SelectEvaluate

// Selecter finds the most promising child code of a parent code.
// Note: Single variation version
GPU_GLOBAL void Selecter(float* results, FireStarterResult* population, FireStarterCode* codes, FireStarterCode* parentCode, const unsigned long long seed, const unsigned int passes, const unsigned int populationSize, const unsigned int variation)
{
    // Determine the member to be optimized.
    unsigned int member = blockIdx.x * blockDim.x + threadIdx.x;
    if (member >= populationSize)
        return;

    // The shared data for the threads in the warp.
    GPU_SHARED FireStarterSharedData sharedData;

    // The first generation is initalized with random numbers.
    FireStarterCode code;
    FireStarterCode bestCode;
    FireStarterCode oldCode;
    FireStarterData data;
    FireStarterData bestData;
    FireStarterData oldData;

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
    unsigned long long memberSeed = seed + SEED1(member);   // Unique seed for the member
    unsigned int evolveAge = 0xFFF;
    unsigned int bestAge = 0;
    unsigned int registers = 0;
    unsigned int oldRegisters = 0;

    // The first generation is initalized with random numbers.
    float memberResult = FIRESTARTER_START_RESULT;
    float bestResult = FIRESTARTER_START_RESULT;
    float oldResult = FIRESTARTER_START_RESULT;

    // Perform all the passes on the GPU.
    for (unsigned int pass = 0; pass < passes; pass++) {
        // Evolve the code and data.
        float evolutionScale;
        if ((evolveAge >= 6) || (memberResult >= FIRESTARTER_START_RESULT)) {
            // Randomize 2 and 3 instructions alternately.
            evolutionScale = FIRESTARTER_START_SCALE;
            if (parentCode) {
                code = parentCode;
                code.RandomInstruction(memberSeed);
                code.RandomInstruction(memberSeed);
                if (memberSeed & 1)
                    code.RandomInstruction(memberSeed);
            } else
                code.InitCode(memberSeed);
            registers = oldRegisters = code.Optimize();
            oldCode = code;
            data.InitData(memberSeed, registers);
            oldData = data;
            memberResult = oldResult = FIRESTARTER_START_RESULT;
            if (bestResult >= FIRESTARTER_START_RESULT) {
                bestCode = code;
                bestData = data;
                bestResult = FIRESTARTER_START_RESULT;
            }
            evolveAge = 0;
        } else {
            // Randomize a register each generation.
            evolutionScale = memberResult * FIRESTARTER_SCALE;
            if (evolveAge > 0)
                data.RandomData(memberSeed, evolutionScale, registers);
        }

        // Iterate to evolve the highest variation.
        for (unsigned int i = 0; i < FIRESTARTER_EVOLVE_GPU_ITERATIONS; i++) {
            unsigned int d = RANDOMMOD(memberSeed, registers);
            float old = data[d];
            data[d] = old + evolutionScale * RANDOMFACTOR(memberSeed);
            float curResult = memberResult * 0.99f;
            if (SelectEvaluate(sharedData, data, code, target, theta, curResult))
                memberResult = curResult;
            else
                data[d] = old;
        }

        // Did the results improve?
        if (!pass || (memberResult < oldResult)) {
            // If the results were better, update the old results.
            oldCode = code;
            oldRegisters = registers;
            oldData = data;
            oldResult = memberResult;
            evolveAge = 1;

            // Update the best results.
            if (!pass || (memberResult < bestResult)) {
                bestCode = code;
                bestData = data;
                bestResult = memberResult;
                bestAge = evolveAge;
            }
        } else {
            // Revert to the original code and data.
            code = oldCode;
            registers = oldRegisters;
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
} // Selecter
