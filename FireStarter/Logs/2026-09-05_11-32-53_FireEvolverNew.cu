#pragma once
#include "FireStarterResults.h"
#include "MoneyMakerStocks.h"

// My own hand made register pattern. Best = 0.00002384
//const unsigned int codeReg[FIRESTARTER_INSTRUCTIONS] = { 0, 4, 1, 8, 2, 5, 3, 9, 0, 6, 1, 10, 2, 7, 3, 11, 0, 4, 1, 12, 2, 5, 3, 13, 0, 6, 1, 14, 2, 7, 3, 15 };

// Gemini suggested register pattern. Best = 0.00005525
//const unsigned int codeReg[FIRESTARTER_INSTRUCTIONS] = { 0, 1, 2, 3, 0, 4, 1, 5, 4, 16, 17, 0, 1, 2, 3, 6, 0, 7, 1, 8, 7, 24, 25, 1, 4, 5, 7, 8, 2, 3, 0, 1 };

// A pattern found with EvolveGPU which always converges in just a few generations.
// REGISTERS //
const unsigned int codeReg[FIRESTARTER_INSTRUCTIONS] = { 0, 1, 2, 3, 4, 5, 6, 3, 7, 8, 9, 10, 11, 12, 13, 14, 9, 15, 16, 17, 18, 19, 13, 13, 20, 14, 8, 12, 13, 2, 21, 5 };
// END //

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

  // Current best single variation version: Each thread has its own code. The goal is to maximize the number of candidates that can be tested in a given period of time.
GPU_GLOBAL void EvolverNew(float* results, FireStarterResult* population, FireStarterCode* codes, const unsigned int variation, const unsigned long long seed, const unsigned int passes, const unsigned int populationCount)
{
    // Check if the user is trying to abort and quit the application.
    if (SetSharedKillSwitch())
        return;

    // Determine the member to be optimized.
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

    // Evolve the program registers for each variation.
    unsigned long long memberSeed = seed + SEED0(member);   // Unique seed for the member
    unsigned short evolveAge = 0;
    unsigned short bestAge = 0;
    unsigned int registers = 0;

    // The first generation is initalized with random numbers.
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

    FireStarterCode bestCode = code;
    FireStarterCode oldCode = code;
    FireStarterData bestData = data;
    FireStarterData oldData = data;
    float bestResult = memberResult;
    float oldResult = memberResult;

    // Perform all the passes on the GPU.
    for (unsigned int pass = 0; pass < passes; pass++) {
        // Check if the user is trying to abort and quit the application.
        if (SetSharedKillSwitch(pass, 0xFF))
            return;

        // Evolve the code and data.
        float evolutionScale;
        if ((evolveAge >= 6) || (memberResult >= FIRESTARTER_START_RESULT)) {
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
            // Randomize a register each generation.
            evolutionScale = memberResult * FIRESTARTER_SCALE;
            if (evolveAge > 0)
                data.RandomData(memberSeed, evolutionScale, registers);
        }

        // Iterate to evolve the data.
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
} // EvolverNew

