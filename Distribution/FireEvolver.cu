#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

inline bool TestEvaluate(FireStarterSharedData& sharedData, const FireStarterData& data, const FireStarterCode& code, const float target[], const float theta[], float& result)
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
} // TestEvaluate

// Current best version: Each thread has its own code. The goal is to maximize the number of candidates that can be tested in a given period of time.
GPU_GLOBAL void Evolver(FireStarterPopulation* population, const unsigned int variation, const unsigned int registers, const unsigned long long seed, const unsigned long long generation, const unsigned int passes, const unsigned int populationSize)
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
    float theta[FIRESTARTER_SAMPLES];
    float target[FIRESTARTER_SAMPLES];
    float sampleStep = (TARGET_MAX - TARGET_MIN) / (FIRESTARTER_SAMPLES - 1);
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++) {
        float t = theta[i] = TARGET_MIN + i * sampleStep;
        target[i] = Target(t, variation);
    }

    // Evolve the program registers for each variation.
    unsigned long long memberSeed = seed + SEED10(variation) + SEED1(member) + SEED2(generation);   // Unique seed for the generation/member
    unsigned short evolveAge = 0;
    unsigned short bestAge = 0;

    // The first generation is initalized with random numbers.
    float result = FIRESTARTER_START_RESULT;
    float evolutionScale = FIRESTARTER_START_SCALE;
    for (int i = 1; i <= 10; i++) {
        code.Init(memberSeed);
        data.Init(memberSeed, evolutionScale);
        if (TestEvaluate(sharedData, data, code, target, theta, result))
            break;
        result = FIRESTARTER_START_RESULT;
    }
    FireStarterCode bestCode = code;
    FireStarterData bestData = data;
    FireStarterCode oldCode = code;
    FireStarterData oldData = data;
    float memberResult = result;
    float bestResult = result;
    evolutionScale = FIRESTARTER_SCALE * result;

    // Perform all the passes on the GPU.
    for (unsigned int pass = 0; pass < passes; pass++) {
        // Evolve the code and data.
        if ((evolveAge >= 8) || (memberResult >= FIRESTARTER_START_RESULT)) {
            evolveAge = 0;
            memberResult = FIRESTARTER_START_RESULT;
            evolutionScale = FIRESTARTER_START_SCALE;
            code.Init(memberSeed);
            data.Init(memberSeed, evolutionScale);
            result = memberResult;
        } else {
            evolutionScale = FIRESTARTER_SCALE * memberResult;
            result = memberResult;
            if (evolveAge > 0)
                data.RandomData(memberSeed, evolutionScale);
        }

        // Iterate to evolve the data.
        for (unsigned int i = 0; i < FIRESTARTER_EVOLVE_GPU_ITERATIONS; i++) {
            unsigned int d = RANDOMMOD(memberSeed, FIRESTARTER_REGISTERS);
            float oldData = data[d];
            data[d] = oldData + evolutionScale * RANDOMFACTOR(memberSeed);
            float curResult = result;
            if (TestEvaluate(sharedData, data, code, target, theta, curResult))
                result = curResult;
            else
                data[d] = oldData;
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
    population->InitMemberResult(bestData, member, variation, bestResult, bestAge);
    population->Code(member)->Copy(bestCode);
} // Evolver
