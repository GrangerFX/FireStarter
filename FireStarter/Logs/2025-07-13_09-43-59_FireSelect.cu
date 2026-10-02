#pragma once
#include "FireStarterResults.h"
#include "CUDADefines.h"

// Not used in Evolver. For code checkins in only.
inline float OptimizeEvaluate(const FireStarterData& testData, float n)
{
    FireStarterData data = testData;
// EVALUATE //
    n = data[0] += n;
    n *= data[1];
    n = data[2] += n;
    n = data[3] *= n;
    n = data[4] *= n;
    n = data[3] *= n;
    n = data[5] += n;
    n = data[6] *= n;
    n = data[7] *= n;
    n = data[8] *= n;
    n = data[9] *= n;
    n *= data[8];
    n = data[10] += n;
    n = data[7] *= n;
    n *= data[3];
    n *= data[5];
    n *= data[11];
    n *= data[0];
    n += data[4];
    n *= data[12];
    n *= data[13];
    n *= data[14];
    n *= data[10];
    n *= data[6];
    n += data[15];
    n *= data[16];
    n += data[9];
    n *= data[17];
    n += data[2];
    n = data[18] *= n;
    n += data[18];
    n *= data[7];
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
    for (unsigned int i = 0; i < FIRESTARTER_EVOLVE_GPU_SAMPLES; i++) {
        float t = theta[i] = TARGET_MIN + i * sampleStep;
        target[i] = Target(t, variation);
    }

    // Evolve the program registers for each variation.
    unsigned long long memberSeed = seed + SEED1(member);   // Unique seed for the member
    unsigned short evolveAge = 0xFFF;
    unsigned short bestAge = 0;
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
            code = parentCode;
            code.RandomInstruction(memberSeed);
            code.RandomInstruction(memberSeed);
            if (memberSeed & 1)
                code.RandomInstruction(memberSeed);
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
            if (TestEvaluate(sharedData, data, code, target, theta, curResult))
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
