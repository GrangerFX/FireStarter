#pragma once

#include "FireStarterModes.h"
#ifndef FIRESTARTER_MODE
#define FIRESTARTER_MODE FIRESTARTER_EVOLVE_NEW
#endif
#include "FireStarterSettings.h"
#include "FireStarterResults.h"
#include "MoneyMakerStocks.h"

// FireEvolverNew is a modified version of FireEvolverGPU. It tests the idea of using fixed sets of register indices for code emulation.
// This avoids needing to index registers via shared memory and offers a very substantial performance increase.
// It should be possible to build a library of register indices that are successfully able to solve a range of problems.
// These could be pre-compiled into the evolution code and accessed via a switch statement or as entirely separate evolution functions.
// If the opcode evolution was consistent among the 32 warp threads, the evolution code could run even faster but could take more generations to converge.

// My own guess at register pattern. Best = 0.00002384
//const unsigned int codeReg[FIRESTARTER_INSTRUCTIONS] = { 0, 4, 1, 8, 2, 5, 3, 9, 0, 6, 1, 10, 2, 7, 3, 11, 0, 4, 1, 12, 2, 5, 3, 13, 0, 6, 1, 14, 2, 7, 3, 15 };

// Gemini suggested register pattern. Best = 0.00005525
//const unsigned int codeReg[FIRESTARTER_INSTRUCTIONS] = { 0, 1, 2, 3, 0, 4, 1, 5, 4, 16, 17, 0, 1, 2, 3, 6, 0, 7, 1, 8, 7, 24, 25, 1, 4, 5, 7, 8, 2, 3, 0, 1 };

// A pattern found with EvolveGPU which always converges in just a few generations.
// REGISTERS //
const unsigned int codeReg[FIRESTARTER_INSTRUCTIONS] = { 0, 1, 2, 3, 4, 5, 6, 3, 7, 8, 9, 10, 11, 12, 13, 14, 9, 15, 16, 17, 18, 19, 13, 13, 20, 14, 8, 12, 13, 2, 21, 5 };
// END //

// Evaluate the emulated code for each of a number of input theta samples.
// The result of the code evaluation will subtracted from the target value for each sample.
// Each sample is checked for infinite numbers.
// The maximum absolute value of the difference for all the samples is returned if it was less than the previous result.
inline bool EvolveNewEvaluate(const FireStarterData& data, const FireStarterCode& code, const float target[], const float theta[], float& result)
{
    float maxResult = result;
    result = 0.0f;
    for (unsigned int i = 0; i < FIRESTARTER_EVOLVE_NEW_SAMPLES; i++) {
        FireStarterData workData = data;

        float n = theta[i];
        for (unsigned int j = 0; j < FIRESTARTER_INSTRUCTIONS; j++)
            code[j].Evaluate(workData[codeReg[j]], n);
        n = fabsf(n - target[i]);

        if (!isfinite(n) || (n > maxResult)) {
            result = maxResult;
            return false;
        } else
            result = fmaxf(n, result);
    }
    return true;
} // EvolveNewEvaluate

// EvolverNew evolves code opcodes and register data searching for maximum evolvability.
// 
// Each member in the popluation has its code opcodes and register data randomly initialized.
// The code opcodes and register data is evolved over a number of passes.
// If the result did not improve compared to the previous pass, one register data is randomized.
// If no evolution occurs after six passes, the code and register data is re-randomized.
// The register data is evolved by adding a random value to one register and testing the code.
// After each pass, if the result did not improve the code and data is restored to the last pass when the result did improve.
GPU_GLOBAL void EvolverNew(float* results, FireStarterResult* population, FireStarterCode* codes, const unsigned int variation, const unsigned long long seed, const unsigned int passes, const unsigned int populationCount)
{
    // Check if the user is trying to abort and quit the application.
    if (SetSharedKillSwitch())
        return;

    // Determine the member to be evolved.
    unsigned int member = blockIdx.x * blockDim.x + threadIdx.x;
    if (member >= populationCount)
        return;

    // The evolution code and data.
    FireStarterCode code;
    FireStarterData data;

    // Precalculate the target theta values and target samples.
    float theta[FIRESTARTER_EVOLVE_NEW_SAMPLES];
    float target[FIRESTARTER_EVOLVE_NEW_SAMPLES];
    float sampleStep = (TARGET_MAX - TARGET_MIN) / (FIRESTARTER_EVOLVE_NEW_SAMPLES - 1);
    unsigned int targetVariation = variation % FIRESTARTER_VARIATIONS;
    for (unsigned int i = 0; i < FIRESTARTER_EVOLVE_NEW_SAMPLES; i++) {
        float t = theta[i] = TARGET_MIN + i * sampleStep;
        target[i] = Target(t, targetVariation);
    }

    // The current evolution age, best evolution age and the number of optimized registers.
    unsigned int evolveAge = 0;
    unsigned int bestAge = 0;
    unsigned int registers = 0;

    // Each member of the population has its own unique random number seed.
    unsigned long long memberSeed = seed + SEED0(member);    // Unique seed for the generation/pass/member/variation

    // The first pass randomly initalizes the code opcodes and register data.
    float memberResult = FIRESTARTER_START_RESULT;
    for (unsigned int i = 0; i < 10; i++) {
        code.InitCode(memberSeed);
        for (int j = 0; j < FIRESTARTER_INSTRUCTIONS; j++)
            code[j].reg = codeReg[j];
        registers = code.Optimize();
        data.InitData(memberSeed, registers);
        if (EvolveNewEvaluate(data, code, target, theta, memberResult))
            break;
    }

    // Initialize the best and old code, data and result.
    FireStarterCode bestCode = code;
    FireStarterCode oldCode = code;
    FireStarterData bestData = data;
    FireStarterData oldData = data;
    float bestResult = memberResult;
    float oldResult = memberResult;

    // Perform all the evolution passes on the GPU.
    for (unsigned int pass = 0; pass < passes; pass++) {
        // Check if the user is trying to abort and quit the application.
        if (SetSharedKillSwitch(pass, 0xFF))
            return;

        // Evolve the code and data.
        float evolutionScale;
        if ((evolveAge >= 6) || (memberResult >= FIRESTARTER_START_RESULT)) {
            // If no evolution occurs after six passes, the code opcodes and register data are re-randomized.
            evolutionScale = FIRESTARTER_START_SCALE;
            code.InitCode(memberSeed);
            for (int j = 0; j < FIRESTARTER_INSTRUCTIONS; j++)
                code[j].reg = codeReg[j];
            registers = code.Optimize();
            data.InitData(memberSeed, registers);
            oldResult = FIRESTARTER_START_RESULT;
            memberResult = FIRESTARTER_START_RESULT;
            evolveAge = 0;
        } else {
            // If the result did not improve compared to the previous pass, one register data is randomized.
            evolutionScale = memberResult * FIRESTARTER_SCALE;
            if (evolveAge > 0)
                data.RandomData(memberSeed, evolutionScale, registers);
        }

        // Iterate to evolve the register data.
        for (unsigned int i = 0; i < FIRESTARTER_EVOLVE_NEW_ITERATIONS; i++) {
            unsigned int d = RANDOMMOD(memberSeed, registers);
            float old = data[d];
            data[d] = old + evolutionScale * RANDOMFACTOR(memberSeed);
            float curResult = memberResult * 0.99f;
            if (EvolveNewEvaluate(data, code, target, theta, curResult))
                memberResult = curResult;
            else
                data[d] = old;
        }

        // Save the results if they improved or revert to the original code and register data.
        if (!pass || (memberResult < oldResult)) {
            // The result improved. Save the code, data and result.
            oldCode = code;
            oldData = data;
            oldResult = memberResult;
            evolveAge = 0;

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
            data = oldData;
            memberResult = oldResult;
            evolveAge++;
        }
    }

    // Return the optimized best code.
    codes[member].Copy(bestCode);

    // Return the best result.
    results[member] = bestResult;

    // Optionally return the best register data and evolve age for debugging.
    if (population)
        FireStarterPopulation::PopulationResult(population, member)->InitResult(bestData, bestResult, bestAge);
} // EvolverNew

