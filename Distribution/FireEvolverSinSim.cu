#pragma once
#include "FireStarterResults.h"
#include "FireSinSim.h"
#include "CUDADefines.h"

// Not used in EvolverSinSim. For code checkins in only.
inline float OptimizeEvaluate(const FireStarterData& testData, float n)
{
    FireStarterData data = testData;
    // EVALUATE //
    // END //
    return n;
} // OptimizeEvaluate

GPU_GLOBAL void ShowEvaluate(float* targets, float* results, unsigned int size, float thetaStart, float thetaEnd, FireStarterCode* code, FireStarterData* data, unsigned int variation)
{
    // Determine the member to be optimized.
    unsigned int index = blockIdx.x * blockDim.x + threadIdx.x;
    if (index > 0)
        return;

    // Generate the test data.
    if (results && targets && data) {
        FireStarterCode localCode(code);
        FireStarterData localData(data);
        for (unsigned int s = 0; s < size; s++) {
            float input = SinSimInputSample(s);
            float sample = localCode.Evaluate(localData, input);
            float target = SinSimTargetSample(s);
            targets[s] = target;
            results[s] = sample;
        }
    }
} // ShowEvaluate

// SinSim based evolution.
GPU_GLOBAL void EvolverSinSim(float* results, FireStarterResult* population, FireStarterCode* codes, const unsigned int variation, const unsigned long long seed, const unsigned int passes, const unsigned int populationSize)
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
    FireStarterCode bestCode;
    FireStarterData bestData;
    unsigned int registers;
    unsigned short bestAge;
    float bestResult;

    // The first generation is initalized with random numbers.
    bestCode.InitCode(memberSeed);
    registers = bestCode.Optimize();
    bestData.InitData(memberSeed, FIRESTARTER_START_SCALE, registers);
    bestResult = SINSIM_INIT_GRADE;
    bestAge = 0;

    // The best code, data, result and age.
    FireStarterCode passCode(bestCode);
    FireStarterData passData(bestData);
    float passResult = bestResult;
    unsigned short passAge = bestAge;

    // Perform all the passes on the GPU.
    for (unsigned int pass = 0; pass < passes; pass++) {
        // Iterate to evolve the data.
        if (passAge > SINSIM_NETWORK_MAXAGE) {
            passCode.InitCode(memberSeed);
            registers = passCode.Optimize();
            passData.InitData(memberSeed, 1.0f, registers);
            passResult = SINSIM_INIT_GRADE;
            passAge = 0;
        }
        FireStarterCode code = passCode;

        for (unsigned int i = 0; i < FIRESTARTER_EVOLVE_SINSIM_ITERATIONS; i++) {
            // Randomize a data element.
            FireStarterData newData = passData;
            newData.RandomData(memberSeed, 1.0f, registers);

            // Test and grade the code.
            float result = 0.0f;
            sharedData = newData;
            for (unsigned int s = 0; s < FIRESTARTER_EVOLVE_SINSIM_SAMPLES; s++) {
                float input = SinSimInputSample(s);
                float sample = code.Evaluate(sharedData, input);

                // Grade the candidate samples.
                if (s >= FIRESTARTER_SINSIM_SAMPLES - FIRESTARTER_SINSIM_CANDIDATES) {
                    float target = SinSimTargetSample(s);
                    float difference = sample - target;
                    result += fabsf(difference) * (1.0f / FIRESTARTER_SINSIM_CANDIDATES);
                }
            }

            // Did the result improve?
            if (result < passResult) {
                // If the result improved, save the data.
                passData = newData;
                passResult = result;
                passAge = 0;
            }
            else
                // If not, restore the old data.
                passAge++;
        }

        // If the result was better, save the results.
        if (passResult < bestResult) {
            bestCode = passCode;
            bestData = passData;
            bestResult = passResult;
            bestAge = passAge;
        }
    }

    // Return the array of results or the entire population data.
    results[member] = bestResult;

    // Return the variation data for debugging.
    population[member].InitResult(bestData, bestResult, bestAge);

    // Return the optimized best code.
    codes[member].Copy(bestCode);
} // EvolverSinSim
