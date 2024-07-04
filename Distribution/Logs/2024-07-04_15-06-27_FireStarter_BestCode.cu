#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

// VARIATIONS //
// Run date: 07/04/24 15:06:27 Pacific Daylight Time
// Run duration = 596.874621 seconds
// Run generation = 599
// Run evolution = 10
// Run max result = 0.00000023
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 0
// Run optimize = 8

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.588390f;
    data->d[1] = -0.789882f;
    data->d[2] = -0.140074f;
    data->d[3] = 1.366920f;
    data->d[4] = 1.226849f;
    data->d[5] = -1.549018f;
    data->d[6] = -0.001170f;
    data->d[7] = -0.529632f;
    data->d[8] = 2.546007f;
    data->d[9] = 1.375262f;
    data->d[10] = 0.456093f;
    data->d[11] = -3.053660f;
    data->d[12] = 0.293147f;
    data->d[13] = -0.568784f;
    data->d[14] = 0.079679f;
    data->d[15] = 0.889584f;
    data->d[16] = -0.161021f;
    data->d[17] = 2.735569f;
    data->d[18] = 1.760749f;
    data->d[19] = 0.019860f;
    data->d[20] = -0.206143f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.459452f;
    data->d[1] = -1.022682f;
    data->d[2] = 0.268542f;
    data->d[3] = 1.399663f;
    data->d[4] = 1.668216f;
    data->d[5] = 5.201929f;
    data->d[6] = -0.000394f;
    data->d[7] = 1.446551f;
    data->d[8] = 3.054363f;
    data->d[9] = 0.263374f;
    data->d[10] = -0.380563f;
    data->d[11] = -0.388769f;
    data->d[12] = -2.004581f;
    data->d[13] = -0.311539f;
    data->d[14] = -0.471279f;
    data->d[15] = -1.081623f;
    data->d[16] = -0.434626f;
    data->d[17] = 0.523622f;
    data->d[18] = -2.394815f;
    data->d[19] = 1.559118f;
    data->d[20] = -1.908793f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000023
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.537756f;
    data->d[1] = -0.540955f;
    data->d[2] = -0.457932f;
    data->d[3] = 1.042293f;
    data->d[4] = 0.584356f;
    data->d[5] = 0.003678f;
    data->d[6] = -4.474482f;
    data->d[7] = 0.526210f;
    data->d[8] = -2.527161f;
    data->d[9] = 3.913452f;
    data->d[10] = -3.726269f;
    data->d[11] = 0.545925f;
    data->d[12] = 0.037918f;
    data->d[13] = 0.903439f;
    data->d[14] = 3.163633f;
    data->d[15] = -0.362455f;
    data->d[16] = 0.029125f;
    data->d[17] = -4.760290f;
    data->d[18] = 1.914558f;
    data->d[19] = 0.657007f;
    data->d[20] = -0.171354f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation2

// END //

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

GPU_GLOBAL void Optimizer(FireStarterPopulation* newResults, const FireStarterPopulation* oldResults, const unsigned int v, const unsigned int registers, const unsigned long long optimizationSeed, const unsigned long long optimizationPass)
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
        target[i] = Target(t, v);
    }

    // Evolve the program registers for each variation.
    unsigned long long seed = optimizationSeed + SEED10(v) + SEED11(member); // Unique seed for the generation/variation/member
    FireStarterData data;
    unsigned int memberAge;
    float result, memberResult;
    float evolutionScale;

    // The first generation is initalized with random numbers.
    if (!optimizationPass) {
        evolutionScale = FIRESTARTER_START_SCALE;
        memberAge = 0;
        memberResult = FIRESTARTER_START_RESULT;
        for (int i = 0; i < 10; i++) {
            data.Init(seed, evolutionScale, registers);
            result = memberResult;
            if (TestEvaluate(data, target, theta, result))
                break;
        }
    } else {
        // Later generations randomize a single register if they were copied.
        data.Copy(oldResults->Data(member, v));
        memberAge = oldResults->Age(member, v);
        if (memberAge > 1) {
            // Randomize a single register.
            evolutionScale = FIRESTARTER_START_SCALE;
            unsigned int d = RANDOMMOD(seed, registers);
            float oldData = data[d];
            data[d] = oldData + RANDOMFACTOR(seed) * evolutionScale * (memberAge - 1);
            memberResult = FIRESTARTER_START_RESULT;
            result = 1.0e+6f;
            if (!TestEvaluate(data, target, theta, result)) {
                data[d] = oldData;
                result = memberResult = oldResults->MinResult(member, v);
            }
        } else {
            result = memberResult = oldResults->MinResult(member, v);
            evolutionScale = FIRESTARTER_SCALE * memberResult;
        }
    }

    // Iterate to evolve the registers.
    for (unsigned int p = 0; p < FIRESTARTER_ITERATIONS; p++) {
        unsigned int d = RANDOMMOD(seed, registers);
        float oldData = data[d];
        data[d] = oldData + evolutionScale * RANDOMFACTOR(seed);
        float curResult = result * 0.99f;
        if (TestEvaluate(data, target, theta, curResult) && (curResult <= result))
            result = curResult;
        else
            data[d] = oldData;
    }

    // If the result was better, save the results.
    if (!optimizationPass || (result < memberResult))
        newResults->InitMemberResult(member, v, 0, result, data);
    else {
        // If the result was worse, copy a result from among the previous generation's results.
        unsigned int bestCandidate = member;
        float bestResult = result;

        // The genetic part of genetic programming and a major optimization:
        // Copy the best data from among a random set of candidates.
        for (int i = 0; i < FIRESTARTER_CANDIDATES; i++) {
            // Select evolving members with results better than the current result.
            unsigned int candidate = RANDOMMOD(seed, FIRESTARTER_POPULATION);
            unsigned int candidateAge = oldResults->Age(candidate, v);
            if (candidateAge <= 1) {
                float candidateResult = oldResults->MinResult(candidate, v);
                if (candidateResult <= bestResult) {
                    bestCandidate = candidate;
                    bestResult = candidateResult;
                }
            }
        }

        // Switch to the selected member's data and results.
        if (bestCandidate == member)
            // Note: result will be larger than oldResult when oldAge > 1.
            newResults->InitMemberResult(member, v, 1, result, data);
        else {
            const FireStarterData* bestData = oldResults->Data(bestCandidate, v);
            newResults->InitMemberResult(member, v, MAX(memberAge, 1) + 1, bestResult, bestData);
        }
    }
} // Optimizer
