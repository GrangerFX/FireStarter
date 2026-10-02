#pragma once

#include "FireStarterModes.h"
#ifndef FIRESTARTER_MODE
#define FIRESTARTER_MODE FIRESTARTER_EVOLVE_SELECT
#endif
#include "FireStarterSettings.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// FireSelect is an earlier version of FireEvolverGPU. It evolves both the code and the register data on the GPU.
// Unlike FireEvolverGPU, FireSelect attempts to modify the code instructions when the current code fails to evolve after six passes.
// While FireSelect does converge to six digits of accuracy, FireEvolverGPU's simpler algorithm is much faster.

// Evaluate the emulated code for each of a number of input theta samples.
// The result of the code evaluation will subtracted from the target value for each sample.
// Each sample is checked for infinite numbers.
// The maximum absolute value of the difference for all the samples is returned if it was less than the previous result.
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

// Each member in the popluation has its code and register data randomly initialized.
// The code and register data is evolved over a number of passes.
// If the result did not improve compared to the previous pass, one register data is randomized.
// If no evolution occurs after six passes, two or three code instructions and the register data are re-randomized.
// The register data is evolved by iterating adding a random value to one register and testing the code.
// After each pass, if the result did not improve the code and data is restored to the last pass when the result did improve.
GPU_GLOBAL void Selecter(float* results, FireStarterResult* population, FireStarterCode* codes, FireStarterCode* parentCode, const unsigned long long seed, const unsigned int passes, const unsigned int populationCount, const unsigned int variation)
{
    // Check if the user is trying to abort and quit the application.
    if (SetSharedKillSwitch())
        return;

    // Determine the member to be evolved.
    unsigned int member = blockIdx.x * blockDim.x + threadIdx.x;
    if (member >= populationCount)
        return;

    // The shared memory for the register data to speed up register indexing while emulating the code.
    GPU_SHARED FireStarterSharedData sharedData;

    // The evolution code and register data.
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

    // The current evolution age, best evolution age and the number of optimized registers.
    unsigned int evolveAge = 0;
    unsigned int bestAge = 0;
    unsigned int registers = 0;
    unsigned int oldRegisters = 0;

    // Each member of the population has its own unique random number seed.
    unsigned long long memberSeed = seed + SEED0(member);    // Unique seed for the generation/pass/member/variation

    // The first pass randomly initalizes the code and register data.
    float memberResult = FIRESTARTER_START_RESULT;
    for (unsigned int i = 0; i < 10; i++) {
        registers = code.InitOptimizedCode(memberSeed);
        data.InitData(memberSeed, registers);
        if (SelectEvaluate(sharedData, data, code, target, theta, memberResult))
            break;
    }

    // Initialize the best and old code, data and result.
    FireStarterCode bestCode;
    FireStarterCode oldCode;
    FireStarterData bestData;
    FireStarterData oldData;
    float bestResult = FIRESTARTER_START_RESULT;
    float oldResult = FIRESTARTER_START_RESULT;

    // Perform all the evolution passes on the GPU.
    for (unsigned int pass = 0; pass < passes; pass++) {
        // Check if the user is trying to abort and quit the application.
        if (SetSharedKillSwitch(pass, 0xFF))
            return;

        // Evolve the code and data.
        float evolutionScale;
        if ((evolveAge >= 6) || (memberResult >= FIRESTARTER_START_RESULT)) {
            // If no evolution occurs after six passes, the code and register data are re-randomized.
            evolutionScale = FIRESTARTER_START_SCALE;
            if (parentCode) {
                // Randomize 2 and 3 instructions alternately.
                code = parentCode;
                code.RandomInstruction(memberSeed);
                code.RandomInstruction(memberSeed);
                if (memberSeed & 1)
                    code.RandomInstruction(memberSeed);
            } else
                code.InitCode(memberSeed);
            registers = code.Optimize();
            data.InitData(memberSeed, registers);
            memberResult = oldResult = FIRESTARTER_START_RESULT;
            evolveAge = 0;
        } else {
            // If the result did not improve compared to the previous pass, one register data is randomized.
            evolutionScale = memberResult * FIRESTARTER_SCALE;
            if (evolveAge > 0)
                data.RandomData(memberSeed, evolutionScale, registers);
        }

        // Iterate to evolve the register data.
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

        // Save the results if they improved or revert to the original code and register data.
        if (!pass || (memberResult < oldResult)) {
            // The result improved. Save the code, data and result.
            oldCode = code;
            oldRegisters = registers;
            oldData = data;
            oldResult = memberResult;
            evolveAge = 1;

            // Update the best code, register data, result and age.
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

    // Return the best evolved code.
    codes[member].Copy(bestCode);

    // Return the best result.
    results[member] = bestResult;

    // Optionally return the best register data and evolve age for debugging.
    if (population)
        FireStarterPopulation::PopulationResult(population, member)->InitResult(bestData, bestResult, bestAge);
} // Selecter
