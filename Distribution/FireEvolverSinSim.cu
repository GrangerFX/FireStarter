#pragma once

#include "FireStarterModes.h"
#ifndef FIRESTARTER_MODE
#define FIRESTARTER_MODE FIRESTARTER_EVOLVE_SINSIM
#endif
#include "FireStarterSettings.h"
#include "FireStarterResults.h"
#include "FireSinSim.h"
#include "CUDADefines.h"

// FireEvolverSinSim is an experment in self-refining code. It uses the same input and target values as the original SinSim but uses code evolution instead of a fixed neural network.
// Rather than re-initializing the register data, as in FireStarterGPU or FireStarterOptimizer, an initial set of register data is set once and then allowed to be continuously modified for all the samples.
// The evolution algorithm is not optimized as this is just an experiment. Example: The input and target values could be precalculated.
// This type of continual register modfication is closer to the ideal of a dynamic and self modifying neural network architecture than a fixed function evolution.
GPU_GLOBAL void EvolverSinSim(float* results, FireStarterResult* population, FireStarterCode* codes, const unsigned int variation, const unsigned long long seed, const unsigned int passes, const unsigned int populationCount)
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

    // The best evolution code and register data.
    FireStarterCode code;
    FireStarterData data;

    // The current best evolution age and the number of optimized registers.
    unsigned int evolveAge = 0;
    unsigned int bestAge = 0;
    unsigned int registers = 0;

    // Evolve the program registers for each variation.
    unsigned long long memberSeed = seed + SEED0(member) + SEED10(variation);   // Unique seed for the member

    // The first pass randomly initalizes the code and register data.
    code.InitCode(memberSeed);
    registers = code.Optimize();
    data.InitData(memberSeed, registers);

    // Initialize the best code, data and result.
    FireStarterCode bestCode = code;
    FireStarterData bestData = data;
    float memberResult = SINSIM_INIT_GRADE;
    float bestResult = memberResult;

    // Perform all the passes on the GPU.
    for (unsigned int pass = 0; pass < passes; pass++) {
        // Check if the user is trying to abort and quit the application.
        if (SetSharedKillSwitch(pass, 0xFF))
            return;

        // Iterate to evolve the register data.
        if (evolveAge > SINSIM_NETWORK_MAXAGE) {
            // If no evolution occurs after a number of passes, the code and register data are re-randomized.
            code.InitCode(memberSeed);
            registers = code.Optimize();
            data.InitData(memberSeed, registers, 1.0f);
            memberResult = SINSIM_INIT_GRADE;
            evolveAge = 0;
        }

        // Iterate to evolve the register data.
        for (unsigned int i = 0; i < FIRESTARTER_EVOLVE_SINSIM_ITERATIONS; i++) {
            // Randomize a data element.
            FireStarterData newData = data;
            newData.RandomData(memberSeed, 1.0f, registers);

            // Test and grade the code.
            float newResult = 0.0f;
            sharedData = newData;
            for (unsigned int s = 0; s < FIRESTARTER_SINSIM_WARMUP + FIRESTARTER_EVOLVE_SINSIM_SAMPLES; s++) {
                float input = SinSimNetwork::SinSimInputSample(s);
                float sample = code.Evaluate(sharedData, input);

                // Grade the candidate samples.
                if (s >= FIRESTARTER_SINSIM_WARMUP) {
                    float target = SinSimNetwork::SinSimTargetSample(s);
                    float difference = sample - target;
                    newResult += fabsf(difference) * (1.0f / FIRESTARTER_EVOLVE_SINSIM_SAMPLES);
                }
            }

            // Did the result improve?
            if (newResult < memberResult) {
                // If the result improved, save the data.
                data = newData;
                memberResult = newResult;
                evolveAge = 0;
            } else
                // If not, restore the old data.
                evolveAge++;
        }

        // If the result was better, save the best code, register data and result.
        if (memberResult < bestResult) {
            bestCode = code;
            bestData = data;
            bestResult = memberResult;
            bestAge = evolveAge;
        }
    }

    // Return the best evolved code.
    codes[member].Copy(bestCode);

    // Return the best result.
    results[member] = bestResult;

    // Optionally return the best register data and evolve age for debugging.
    if (population)
        FireStarterPopulation::PopulationResult(population, member, variation)->InitResult(bestData, bestResult, bestAge);
} // EvolverSinSim
