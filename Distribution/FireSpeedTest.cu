#pragma once

#include "FireStarterModes.h"
#ifndef FIRESTARTER_MODE
#define FIRESTARTER_MODE FIRESTARTER_SPEED_TEST
#endif
#include "FireStarterSettings.h"
#include "FireStarterResults.h"

// SpeedTest is used to test the performance of one of the evolution algorithms. This is easier and safer than modifying the code currently in use.
// Currently it is identical to FireEvolverGPU.cu but the evaluate and main kernel function names have been changed to prevent compile or link errors.
// The CUDA evolution kernals are included in FireStarterExecute both to make sure they compile and for when FIRESTARTER_SIMULATE_GPU is enabled.

// Evaluate the emulated code for each of a number of input theta samples.
// The result of the code evaluation will subtracted from the target value for each sample.
// Each sample is checked for infinite numbers.
// The maximum absolute value of the difference for all the samples is returned if it was less than the previous result.
inline bool SpeedTestEvaluate(FireStarterSharedData& sharedData, const FireStarterData& data, const FireStarterCode& code, const float target[], const float theta[], float& result)
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
} // SpeedTestEvaluate

// Each member in the popluation has its code and register data randomly initialized.
// The code and register data is evolved over a number of passes.
// If the result did not improve compared to the previous pass, one register data is randomized.
// If no evolution occurs after six passes, the code and register data is re-randomized.
// The register data is evolved by iterating adding a random value to one register and testing the code.
// After each pass, if the result did not improve the code and data is restored to the last pass when the result did improve.
GPU_GLOBAL void SpeedTest(float* results, FireStarterResult* population, FireStarterCode* codes, const unsigned int variation, const unsigned long long seed, const unsigned int passes, const unsigned int populationCount)
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

    // Precalculate the sample theta values and target values for the current variation.
    float theta[FIRESTARTER_SAMPLES];
    float target[FIRESTARTER_SAMPLES];
    float sampleStep = (TARGET_MAX - TARGET_MIN) / (FIRESTARTER_SAMPLES - 1);
    for (unsigned int i = 0; i < FIRESTARTER_SAMPLES; i++) {
        float t = theta[i] = TARGET_MIN + i * sampleStep;
        target[i] = Target(t, variation);
    }

    // The current evolution age, best evolution age and the number of optimized registers.
    unsigned int evolveAge = 0;
    unsigned int bestAge = 0;
    unsigned int registers = 0;

    // Each member of the population has its own unique random number seed.
    unsigned long long memberSeed = seed + SEED1(member);    // Unique seed for the generation/pass/member/variation

    // The first pass randomly initalizes the code and register data.
    float memberResult = FIRESTARTER_START_RESULT;
    for (unsigned int i = 0; i < FIRESTARTER_EVOLVE_INIT; i++) {
        registers = code.InitOptimizedCode(memberSeed);
        data.InitData(memberSeed, registers);
        if (EvolveGPUEvaluate(sharedData, data, code, target, theta, memberResult))
            break;
    }

    // Initialize the best code, best data, oldData, bestResult and oldResult.
    FireStarterCode bestCode = code;
    FireStarterData bestData = data;
    float bestResult = memberResult;
    float oldResult = memberResult;

    // Perform all the evolution passes on the GPU.
    for (unsigned int pass = 0; pass < passes; pass++) {
        // Check if the user is trying to abort and quit the application.
        if (SetSharedKillSwitch(pass, 0xFF))
            return;

        // Evolve the code and data.
        float evolutionScale;
        if ((evolveAge == FIRESTARTER_EVOLVE_MAX_AGE) || (memberResult == FIRESTARTER_START_RESULT)) {
            // If no evolution occurs after six passes, the code and register data are re-randomized.
            evolutionScale = FIRESTARTER_START_SCALE;
            registers = code.InitOptimizedCode(memberSeed);
            data.InitData(memberSeed, registers);
            memberResult = FIRESTARTER_START_RESULT;
            oldResult = FIRESTARTER_START_RESULT;
            evolveAge = 0;
        } else {
            // If the result did not improve compared to the previous pass, one register data is randomized.
            evolutionScale = memberResult * FIRESTARTER_SCALE;
            if (evolveAge > 0)
                data.RandomData(memberSeed, evolutionScale, registers);
        }

        // Iterate to evolve the register data.
        for (unsigned int i = 0; i < FIRESTARTER_ITERATIONS; i++) {
            unsigned int d = RANDOMMOD(memberSeed, registers);
            float old = data[d];
            data[d] = old + evolutionScale * RANDOMFACTOR(memberSeed);
            float curResult = memberResult * 0.99f;
            if (EvolveGPUEvaluate(sharedData, data, code, target, theta, curResult))
                memberResult = curResult;
            else
                data[d] = old;
        }

        // Did the result improve?
        if (!pass || (memberResult < oldResult)) {
            // The result improved. Save result and reset the evolve age to 0.
            oldResult = memberResult;
            evolveAge = 0;

            // Update the best code, register data, result and age.
            if (!pass || (memberResult < bestResult)) {
                bestCode = code;
                bestData = data;
                bestResult = memberResult;
                bestAge = evolveAge;
            }
        } else
            // The result did not improve. Increment the evolve age.
            evolveAge++;
    }

    // Return the best evolved code.
    codes[member].Copy(bestCode);

    // Return the best result.
    results[member] = bestResult;

    // Optionally return the best register data and evolve age for debugging.
    if (population)
        FireStarterPopulation::PopulationResult(population, member)->InitResult(bestData, bestResult, bestAge);
} // SpeedTest

