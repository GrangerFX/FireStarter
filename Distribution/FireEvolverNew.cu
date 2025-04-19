#pragma once
#include "FireStarterResults.h"
#include "CUDADefines.h"

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

GPU_GLOBAL void EvolverNew(float* results, FireStarterResult* population, FireStarterCode* codes, const unsigned int variation, const unsigned long long seed, const unsigned int passes, const unsigned int populationSize)
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

    // Evolve the program registers for each variation.
    unsigned long long memberSeed = seed + SEED1(member);   // Unique seed for the member
    unsigned short evolveAge = 0;
    unsigned short bestAge = 0;
    unsigned int registers = 0;

    // The first generation is initalized with random numbers.
    code.InitCode(memberSeed);
    registers = code.Optimize();
    data.InitData(memberSeed, registers);
    FireStarterCode bestCode = code;
    FireStarterCode oldCode = code;
    FireStarterData bestData = data;
    FireStarterData oldData = data;
    float memberResult = 1.0e+10f;
    float result = 1.0e+10f;
    float bestResult = 1.0e+10f;

    // Perform all the passes on the GPU.
    for (unsigned int pass = 0; pass < passes; pass++) {
        float evolutionScale;

        // Evolve the code and data.
        if ((evolveAge >= 1) || (memberResult >= FIRESTARTER_START_RESULT)) {
            evolveAge = 0;
            evolutionScale = FIRESTARTER_START_SCALE;
            code.InitCode(memberSeed);
            registers = code.Optimize();
            data.InitData(memberSeed, registers, 1.0f);
            memberResult = 1.0e+10f;
            result = 1.0e+10f;
        }

        // Iterate to evolve the data.
        float result = 0.0f;
        sharedData = data;
        for (unsigned int i = 0; i < FIRESTARTER_EVOLVE_NEW_ITERATIONS * FIRESTARTER_EVOLVE_NEW_SAMPLES; i++) {
            float t = TARGET_MIN + (TARGET_MAX - TARGET_MIN) * RANDOMNUM(memberSeed);
            float sample = code.Evaluate(sharedData, t);
            float target = Target(t, variation + FIRESTARTER_VARIATION);
            float difference = sample - target;
            data[1] = difference;
//          result += fabsf(difference); // Average result
            result = (result * (FIRESTARTER_EVOLVE_NEW_SAMPLES - 1) + fabsf(difference)) * (1.0f / FIRESTARTER_EVOLVE_NEW_SAMPLES); // Accumulated result.
            if (result >= FIRESTARTER_START_RESULT)
                break;
        }
//      result /= FIRESTARTER_EVOLVE_GPU_ITERATIONS * FIRESTARTER_EVOLVE_NEW_SAMPLES;  // Averge result

        // Did the results improve?
        if (!pass || (result < memberResult)) {
            // If the result was better, save the results.
            if (result < bestResult) {
                bestCode = code;
                sharedData.GetData(bestData);
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
        population[member].InitResult(bestData, bestResult, bestAge);
} // EvolverNew
