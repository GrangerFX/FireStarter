#pragma once
#include "FireStarterResults.h"
#include "FireSinSim.h"
#include "CUDADefines.h"

#if 1
// SinSim based evolution.
GPU_GLOBAL void EvolverNew(float* results, FireStarterResult* population, FireStarterCode* codes, const unsigned int variation, const unsigned long long generation, const unsigned long long seed, const unsigned int passes, const unsigned int populationSize)
{
    // Determine the member to be optimized.
    unsigned int member = blockIdx.x * blockDim.x + threadIdx.x;
    if (member >= populationSize)
        return;

    // The shared data for the threads in the warp.
    GPU_SHARED FireStarterSharedData sharedData;

    // Evolve the program registers for each variation.
    unsigned long long memberSeed = seed + SEED1(member) + SEED10(variation);   // Unique seed for the member

    // Initialize or load the code, data, result and age.
    FireStarterCode code;
    FireStarterData data;
    unsigned int registers;
    unsigned short evolveAge;
    float result;
    if (!generation) {
        // The first generation is initalized with random numbers.
        code.Init(memberSeed);
        registers = code.Optimize();
        data.Init(memberSeed, FIRESTARTER_START_SCALE, registers);
        evolveAge = 0;
        result = 1.0e+10f;
    } else {
        // The later generations are loaded from memory.
        code.Copy(codes[member]);
        registers = code.Optimize();
        data.Copy(population[member].Data());
        evolveAge = *population[member].EvolveAge1();
        result = results[member];
    }

    // The best code, data, result and age.
    FireStarterCode bestCode(code);
    FireStarterData bestData(data);
    float bestResult = result;
    unsigned short bestAge = evolveAge;

    // Perform all the passes on the GPU.
    for (unsigned int pass = 0; pass < passes; pass++) {
        // Iterate to evolve the data.
        if (evolveAge > SINSIM_NETWORK_MAXAGE) {
            code.Init(memberSeed);
            registers = code.Optimize();
            data.Init(memberSeed, 1.0f, registers);
            evolveAge = 0;
        }
        FireStarterCode oldCode = code;
        FireStarterData oldData = data;
        float oldResult = result;

        for (unsigned int i = 0; i < FIRESTARTER_EVOLVE_NEW_ITERATIONS; i++) {
            // Randomize a data element.
            data.RandomData(memberSeed, 1.0f, registers);

            // Iterate to evolve the data.
            result = 0.0f;
            sharedData = data;
            for (unsigned int s = 0; s < FIRESTARTER_EVOLVE_NEW_SAMPLES; s++) {
                float input = SinSimInputSample(s);
                float sample = code.Evaluate(sharedData, input);
                float target = SinSimTargetSample(s);
                float difference = sample - target;
                result += fabsf(difference) * (1.0f / FIRESTARTER_EVOLVE_NEW_SAMPLES);
                if (result >= oldResult)
                    break;
            }

            // Did the result improve?
            if (result < oldResult) {
                // If the result improved, save the code and data.
                oldData = data;
                oldResult = result;
                evolveAge = 0;
            } else {
                // If not, restore the old code and data.
                data = oldData;
                result = oldResult;
                evolveAge++;
            }
        }

        // If the result was better, save the results.
        if (result < bestResult) {
            bestCode = code;
            bestData = data;
            bestResult = result;
            bestAge = evolveAge;
        }
    }

    // Return the array of results or the entire population data.
    results[member] = bestResult;

    // Return the variation data for debugging.
    population[member].Init(bestData, bestResult, bestAge);

    // Return the optimized best code.
    codes[member].Copy(bestCode);
} // EvolverNew
#else
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
    unsigned long long memberSeed = seed + SEED1(member) + SEED10(variation);   // Unique seed for the member
    unsigned short evolveAge = 0;
    unsigned short bestAge = 0;
    unsigned int registers = 0;

    // The first generation is initalized with random numbers.
    code.Init(memberSeed);
    registers = code.Optimize();
    data.Init(memberSeed, FIRESTARTER_START_SCALE, registers);
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
            code.Init(memberSeed);
            registers = code.Optimize();
            data.Init(memberSeed, 1.0f, registers);
            memberResult = 1.0e+10f;
            result = 1.0e+10f;
        }

        // Iterate to evolve the data.
        float result = 0.0f;
        sharedData = data;
        for (unsigned int i = 0; i < FIRESTARTER_EVOLVE_NEW_ITERATIONS * FIRESTARTER_EVOLVE_NEW_SAMPLES; i++) {
            float t = TARGET_MIN + (TARGET_MAX - TARGET_MIN) * RANDOMNUM(memberSeed);
            float sample = code.Evaluate(sharedData, t);
            float target = Target(t, variation);
            float difference = sample - target;
            data[1] = difference;
//          result += fabsf(difference); // Average result
            result = (result * (FIRESTARTER_EVOLVE_NEW_SAMPLES - 1) + fabsf(sample - target)) * (1.0f / FIRESTARTER_EVOLVE_NEW_SAMPLES); // Accumulated result.
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
        population[member].Init(bestData, bestResult, bestAge);
} // EvolverNew
#endif