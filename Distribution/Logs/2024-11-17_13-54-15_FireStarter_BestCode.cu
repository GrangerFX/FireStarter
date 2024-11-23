#pragma once

#include "FireStarterResults.h"

inline float Evaluate(const FireStarterData& testData, float n)
{
    FireStarterData data = testData;
// EVALUATE //
// END //
    return n;
} // Evaluate

inline bool TestEvaluate(const FireStarterData& data, const float target[], const float theta[], float& result)
{
    float maxResult = result;
    result = 0.0f;
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++) {
        float n = fabsf(Evaluate(data, theta[i]) - target[i]);
        if (!isfinite(n) || (n > maxResult)) {
            result = maxResult;
            return false;
        } else
            result = fmaxf(n, result);
    }
    return true;
} // TestEvaluate

GPU_GLOBAL void Optimizer(float* results, FireStarterResult* newPopulation, const FireStarterResult* oldPopulation, const unsigned int variation, const unsigned int registers, const unsigned long long optimizeSeed, const unsigned long long optimizePass, unsigned int population)
{
    // Determine the member to be optimized.
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;

    // Precalculate the target theta values and target samples.
    float theta[FIRESTARTER_SAMPLES];
    float target[FIRESTARTER_SAMPLES];
    float sampleStep = (TARGET_MAX - TARGET_MIN) / (FIRESTARTER_SAMPLES - 1);
    for (unsigned int i = 0; i < FIRESTARTER_SAMPLES; i++) {
        float t = theta[i] = TARGET_MIN + i * sampleStep;
        target[i] = Target(t, variation);
    }

    // Evolve the program registers for each variation.
    const FireStarterResult& oldResult = oldPopulation[member];
    FireStarterData data;
    unsigned short evolveAge;
    float result, memberResult;
    float evolutionScale;
    unsigned long long memberSeed = optimizeSeed + SEED11(member); // Unique seed for the generation/variation/member

    // The first generation is initalized with random numbers.
    if (!optimizePass) {
        for (unsigned int i = 0; i < 10; i++) {
            data.Init(memberSeed, FIRESTARTER_START_SCALE);
            result = FIRESTARTER_START_RESULT;
            if (TestEvaluate(data, target, theta, result))
                break;
        }
        memberResult = FIRESTARTER_START_RESULT;
        evolutionScale = FIRESTARTER_START_SCALE; // Validated as faster than 0.6f * memberResult  11/17/2024
        evolveAge = 0;
    } else {
        // Later generations randomize a single register if they were copied.
        data.Copy(oldResult.Data());
        evolveAge = oldResult.EvolveAge1();
        if (evolveAge > 1) {
            // Randomize a single register.
            unsigned int d = RANDOMMOD(memberSeed, registers);
            float oldData = data[d];
            data[d] = oldData + RANDOMFACTOR(memberSeed) * FIRESTARTER_START_SCALE * (evolveAge - 1);
            result = 1.0e+6f; // Validated as being faster than FIRESTARTER_START_RESULT  11/17/2024
            if (!TestEvaluate(data, target, theta, result)) {
                data[d] = oldData;
                memberResult = result = oldResult.MinResult();
            } else
                memberResult = FIRESTARTER_START_RESULT; // Validated as being faster than result  11/17/2024
            evolutionScale = 0.6f * memberResult; // Validated as being faster than 0.6f * FIRESTARTER_START_RESULT  11/17/2024
        } else {
            result = memberResult = oldResult.MinResult();
            evolutionScale = FIRESTARTER_SCALE * memberResult;
        }
    }

    // Iterate to evolve the registers.
    for (unsigned int i = 0; i < FIRESTARTER_OPTIMIZE_ITERATIONS; i++) {
        unsigned int d = RANDOMMOD(memberSeed, registers);
        float oldData = data[d];
        data[d] = oldData + evolutionScale * RANDOMFACTOR(memberSeed);
        float curResult = result * 0.99f; // Validated as being faster than * 1.0f or * 0.9f. About the same as * 0.999f.  11/17/2024
        if (TestEvaluate(data, target, theta, curResult))
            result = curResult;
        else
            data[d] = oldData;
    }

    // Save the results if they improved or switch to another member's old results.
    unsigned short age;
    if (!optimizePass || (result < memberResult)) {
        // If the result was better, save the results.
        age = 0;
    } else {
        // If the result was worse, copy a result from among the previous generation's results.
        unsigned int bestCandidate = member;

        // The genetic part of genetic programming and a major optimization:
        // Copy the best data from among a random set of candidates.
        for (int i = 0; i < FIRESTARTER_OPTIMIZE_CANDIDATES; i++) {
            // Select evolving members with results better than the current result.
            unsigned int candidate = RANDOMMOD(memberSeed, population);
            unsigned short candidateAge = oldPopulation[candidate].EvolveAge1();
            if (candidateAge <= 1) {
                float candidateResult = oldPopulation[candidate].MinResult();
                if (candidateResult <= result) {
                    bestCandidate = candidate;
                    result = candidateResult;
                }
            }
        }

        // Switch to the selected member's data and results.
        age = 1;
        if (bestCandidate != member) {
            age += MAX(evolveAge, 1);
            data = oldPopulation[bestCandidate].Data();
        }
    }
    if (results)
        results[member] = result;
    if (newPopulation)
        newPopulation[member].Init(data, result, age);
} // Optimizer

