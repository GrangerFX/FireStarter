#pragma once

#include "FireStarterModes.h"
#ifndef FIRESTARTER_MODE
#define FIRESTARTER_MODE FIRESTARTER_OPTIMIZE
#endif
#include "FireStarterSettings.h"
#include "FireStarterResults.h"

// Pre-compiled code evaluation.
// Evaluate the code with the registers set to the testData.
// The CUDA code instructions being evaluated will be inserted into the EVALUATE/END block.
// This allows the code to execute at maximum speed because the registers do not need to be indexed.
inline float OptimizeCompiledEvaluate(const FireStarterData& testData, float n)
{
    FireStarterData data = testData;
    // EVALUATE //
    n += data[0];
    n = data[1] *= n;
    n += data[1];
    n = data[2] *= n;
    n = data[2] *= n;
    n *= data[3];
    n = data[4] += n;
    n = data[5] *= n;
    n += data[5];
    n = data[6] += n;
    n *= data[7];
    n = data[8] *= n;
    n *= data[6];
    n *= data[2];
    n *= data[9];
    n *= data[10];
    n += data[11];
    n *= data[12];
    n = data[13] *= n;
    n = data[4] *= n;
    n += data[14];
    n = data[4] *= n;
    n *= data[15];
    n *= data[16];
    n += data[17];
    n *= data[13];
    n *= data[8];
    n += data[18];
    n *= data[19];
    n *= data[20];
    n *= data[21];
    n *= data[4];
// END //
    return n;
} // OptimizeCompiledEvaluate

// The compiled CUDA code will be evaluated for each of a number of input theta samples.
// The result of the code evaluation will subtracted from the target value for each sample.
// Each sample is checked for infinite numbers.
// The maximum absolute value of the difference for all the samples is returned if it was less than the previous result.
inline bool OptimizeEvaluate(const FireStarterData& data, const float target[], const float theta[], float& result)
{
    float maxResult = result;
    result = 0.0f;
    for (int i = 0; i < FIRESTARTER_OPTIMIZE_SAMPLES; i++) {
        float n = fabsf(OptimizeCompiledEvaluate(data, theta[i]) - target[i]);
        if (!isfinite(n) || (n > maxResult)) {
            result = maxResult;
            return false;
        } else
            result = fmaxf(n, result);
    }
    return true;
} // OptimizeEvaluate

// Optimizer: GPU based data evolution algorithm.
// This function is executed on the GPU for each member of the population.
// The evolved code to be evaluated must have been inserted into the OptimizeCompiledEvaluate function above.
// Optimizer is called repeatedly in a series of passes. Before each pass, the new and old populations are swapped.
GPU_GLOBAL void Optimizer(FireStarterResult* newPopulation, const FireStarterResult* oldPopulation, const unsigned int variation, const unsigned int registers, const unsigned long long optimizeSeed, const unsigned long long optimizePass, unsigned int populationCount)
{
    // Check if the user is trying to abort and quit the application.
    if (SetSharedKillSwitch())
        return;

    // Determine the member to be optimized.
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= populationCount)
        return;

    // Precalculate the sample theta values and target values for the current variation.
    float theta[FIRESTARTER_OPTIMIZE_SAMPLES];
    float target[FIRESTARTER_OPTIMIZE_SAMPLES];
    float sampleStep = (TARGET_MAX - TARGET_MIN) / (FIRESTARTER_OPTIMIZE_SAMPLES - 1);
    unsigned int targetVariation = variation % FIRESTARTER_VARIATIONS;
    for (unsigned int i = 0; i < FIRESTARTER_OPTIMIZE_SAMPLES; i++) {
        float t = theta[i] = TARGET_MIN + i * sampleStep;
        target[i] = Target(t, targetVariation);
    }

    // The initial register values are stored in the FireStarterData array. These are randomly initialized and then evolved for each member.
    FireStarterData data;
    unsigned int evolveAge;
    float result, memberResult;
    float evolutionScale;

    // Each member of the population has its own unique random number seed.
    unsigned long long memberSeed = optimizeSeed + SEED11(member); // Unique seed for the generation/pass/member/variation

    // The first pass initalizes the data with random numbers.
    if (!optimizePass) {
        for (int i = 1; i <= 10; i++) {
            data.InitData(memberSeed, registers);
            result = FIRESTARTER_START_RESULT;
            if (OptimizeEvaluate(data, target, theta, result))
                break;
        }
        memberResult = FIRESTARTER_START_RESULT;
        evolutionScale = FIRESTARTER_START_SCALE;
        evolveAge = 0;
    } else {
        // Later passes randomize a single register if they were copied.
        const FireStarterResult& oldResult = *FireStarterPopulation::PopulationResult(oldPopulation, member, variation);
        data.Copy(oldResult.Data());
        evolveAge = oldResult.EvolveAge();

        // The evolution age of the register data determines how it is initialized.
        if (evolveAge > 1) {
            // When the evolveAge is 2 or more, a single register is set to a random value prior to evolution iteration.
            // This makes it less likely for the evolution to get stuck.
            unsigned int d = RANDOMMOD(memberSeed, registers);
            float oldData = data[d];
            data[d] = oldData + RANDOMFACTOR(memberSeed) * FIRESTARTER_START_SCALE * (evolveAge - 1);

            // Initialize the result to a large but not infinite value.
            // Note that this can generate initial results far worse than FIRESTARTER_START_RESULT.
            // The hope is that the data will evolve to be better during the evolution iterations.
            // This has been proven to be more successful than FIRESTARTER_START_RESULT for large populations.
            result = 1.0e+6f;
            if (!OptimizeEvaluate(data, target, theta, result)) {
                // If the result did not improve, return to the previous data.
                data[d] = oldData;
                memberResult = result = oldResult.MaxResult();
            } else
                memberResult = FIRESTARTER_START_RESULT;
            evolutionScale = (2.0f * FIRESTARTER_SCALE) * memberResult;
        } else {
            // When the evolveAge is 0 or 1, this member was the source of an improved result.
            // Keep keep attempting to evolve the original register data.
            memberResult = result = oldResult.MaxResult();
            evolutionScale = FIRESTARTER_SCALE * memberResult;
        }
    }

    // Iterate to evolve the registers.
    for (unsigned int i = 0; i < FIRESTARTER_OPTIMIZE_ITERATIONS; i++) {
        unsigned int d = RANDOMMOD(memberSeed, registers);
        float oldData = data[d];
        data[d] = oldData + evolutionScale * RANDOMFACTOR(memberSeed);
        float curResult = result * 0.99f;
        if (OptimizeEvaluate(data, target, theta, curResult))
            result = curResult;
        else
            data[d] = oldData;
    }

    // Save the results if they improved or switch to another member's old results.
    if (!optimizePass || (result < memberResult))
        // If the result was better, save the results.
        evolveAge = 0;
    else {
        // This is the natural selection portion of the register data evolution algorithm.
        // Members that did not evolve have a chance to be replaced by copies (offspring) of members with a better result in the previous pass.
        // One register of the copied data will be randomized prior to evolution iteration during the next pass.
        unsigned int bestCandidate = member;

        // Search for a better result among a set of randomly selected candidates.
        for (int i = 0; i < FIRESTARTER_CANDIDATES; i++) {
            // Select evolving members with results better than the current result.
            unsigned int candidate = RANDOMMOD(memberSeed, populationCount);
            const FireStarterResult* candidateResult = FireStarterPopulation::PopulationResult(oldPopulation, candidate, variation);
            unsigned int candidateAge = candidateResult->EvolveAge();
            if (candidateAge <= 1) {
                float candidateMaxResult = candidateResult->MaxResult();
                if (candidateMaxResult <= result) {
                    bestCandidate = candidate;
                    result = candidateMaxResult;
                }
            }
        }

        // If the candate's result was better, copy its data and result.
        if (bestCandidate != member) {
            const FireStarterResult* bestCandidateResult = FireStarterPopulation::PopulationResult(oldPopulation, bestCandidate, variation);
            data = bestCandidateResult->Data();
            evolveAge = 2;
//            evolveAge = evolveAge ? evolveAge + 1 : 2; // The evolveAge will be 2 or more for copied members.
        } else
            evolveAge = 1;  // The result did not improve but none of the candidates was better.
    }

    // Return the best register data, fitness result and evolve age.
    FireStarterPopulation::PopulationResult(newPopulation, member, variation)->InitResult(data, result, evolveAge);
} // Optimizer
