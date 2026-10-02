#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

// VARIATIONS //
// Run date: 09/21/24 10:36:19 Pacific Daylight Time
// Run duration = 24.561355 seconds
// Run generation = 4
// Run evolution = 0
// Run max result = 0.00001176
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_RANDOM
// Run evolveSeed = 2
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 8
// Run units = 1
// Run states = 11000
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 0
// Run optimize = 0

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

// Variation: 0  result = 0.00001176
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.510109f;
    data->d[1] = 0.013801f;
    data->d[2] = -1.346261f;
    data->d[3] = -1.405232f;
    data->d[4] = 0.104320f;
    data->d[5] = -1.377778f;
    data->d[6] = -0.178660f;
    data->d[7] = 2.426878f;
    data->d[8] = 2.235279f;
    data->d[9] = -0.763882f;
    data->d[10] = -1.087365f;
    data->d[11] = -1.538427f;
    data->d[12] = -0.855038f;
    data->d[13] = -0.130329f;
    data->d[14] = 0.577045f;
    data->d[15] = 1.021502f;
    data->d[16] = 2.222675f;
    data->d[17] = -1.724655f;
    data->d[18] = -0.566782f;
    data->d[19] = -0.923882f;
    data->d[20] = -1.183263f;
    data->d[21] = 0.712279f;
    data->d[22] = 1.265653f;
    data->d[23] = -1.918226f;
    data->d[24] = 0.829698f;
    data->d[25] = 0.676913f;
    data->d[26] = 1.070198f;
    data->d[27] = 1.932053f;
    data->d[28] = -1.675969f;
    data->d[29] = -1.886716f;
    *(result->MinResult()) = 0.000012f;
} // LoadVariation0

// END //

inline float Evaluate(const FireStarterData& testData, float n)
{
    FireStarterData data = testData;
// EVALUATE //
    n = data[0] += n;
    n *= data[1];
    n = data[2] *= n;
    n *= data[3];
    n = data[4] *= n;
    n = data[5] += n;
    n *= data[6];
    n *= data[7];
    n += data[4];
    n *= data[8];
    n = data[2] *= n;
    n = data[2] += n;
    n *= data[2];
    n = data[9] += n;
    n = data[10] *= n;
    n = data[11] *= n;
    n = data[10] *= n;
    n = data[12] += n;
    n = data[9] *= n;
    n += data[11];
    n *= data[9];
    n *= data[5];
    n *= data[12];
    n *= data[0];
    n = data[10] += n;
    n *= data[13];
    n += data[10];
    n = data[14] *= n;
    n += data[15];
    n *= data[14];
    n *= data[16];
    n *= data[17];
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

GPU_GLOBAL void Optimizer(FireStarterPopulation* newResults, const FireStarterPopulation* oldResults, const unsigned int variation, const unsigned int registers, const unsigned long long optimizeSeed, const unsigned long long optimizePass)
{
    // Determine the member to be optimized.
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= FIRESTARTER_POPULATION)
        return;

    // Precalculate the target theta values and target samples.
    float theta[FIRESTARTER_SAMPLES];
    float target[FIRESTARTER_SAMPLES];
    float sampleStep = (TARGET_MAX - TARGET_MIN) / (FIRESTARTER_SAMPLES - 1);
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++) {
        float t = theta[i] = TARGET_MIN + i * sampleStep;
        target[i] = Target(t, variation);
    }

    // Evolve the program registers for each variation.
    unsigned long long memberSeed = optimizeSeed + SEED10(variation) + SEED11(member); // Unique seed for the generation/variation/member
    FireStarterData data;
    unsigned short evolveAge1;
    float result, memberResult;
    float evolutionScale;

    // The first generation is initalized with random numbers.
    if (!optimizePass) {
        memberResult = FIRESTARTER_START_RESULT;
        evolutionScale = FIRESTARTER_START_SCALE;
        for (int i = 0; i < 10; i++) {
            data.Init(memberSeed, evolutionScale);
            result = memberResult;
            if (TestEvaluate(data, target, theta, result))
                break;
        }
        evolveAge1 = 0;
    } else {
        // Later generations randomize a single register if they were copied.
        data.Copy(oldResults->Data(member, variation));
        evolveAge1 = oldResults->EvolveAge1(member, variation);
        if (evolveAge1 > 1) {
            // Randomize a single register.
            evolutionScale = FIRESTARTER_START_SCALE;
            unsigned int d = RANDOMMOD(memberSeed, registers);
            float oldData = data[d];
            data[d] = oldData + RANDOMFACTOR(memberSeed) * evolutionScale * (evolveAge1 - 1);
            memberResult = FIRESTARTER_START_RESULT;
            result = 1.0e+6f;
            if (!TestEvaluate(data, target, theta, result)) {
                data[d] = oldData;
                result = memberResult = oldResults->MinResult(member, variation);
            }
        } else {
            result = memberResult = oldResults->MinResult(member, variation);
            evolutionScale = FIRESTARTER_SCALE * memberResult;
        }
    }

    // Iterate to evolve the registers.
    for (unsigned int p = 0; p < FIRESTARTER_ITERATIONS; p++) {
        unsigned int d = RANDOMMOD(memberSeed, registers);
        float oldData = data[d];
        data[d] = oldData + evolutionScale * RANDOMFACTOR(memberSeed);
        float curResult = result * 0.99f;
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
        for (int i = 0; i < FIRESTARTER_CANDIDATES; i++) {
            // Select evolving members with results better than the current result.
            unsigned int candidate = RANDOMMOD(memberSeed, FIRESTARTER_POPULATION);
            unsigned short candidateAge = oldResults->EvolveAge1(candidate, variation);
            if (candidateAge <= 1) {
                float candidateResult = oldResults->MinResult(candidate, variation);
                if (candidateResult <= result) {
                    bestCandidate = candidate;
                    result = candidateResult;
                }
            }
        }

        // Switch to the selected member's data and results.
        age = 1;
        if (bestCandidate != member) {
            age += MAX(evolveAge1, 1);
            data = *oldResults->Data(bestCandidate, variation);
        }
    }
    newResults->InitMemberResult(data, member, variation, result, age);
} // Optimizer

