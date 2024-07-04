#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

// VARIATIONS //
// Run date: 07/04/24 12:30:03 Pacific Daylight Time
// Run duration = 2040.098085 seconds
// Run generation = 1002
// Run evolution = 11
// Run max result = 0.00000036
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

// Variation: 0  result = 0.00000036
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.132929f;
    data->d[1] = 0.062479f;
    data->d[2] = 1.590276f;
    data->d[3] = -1.730760f;
    data->d[4] = -5.265469f;
    data->d[5] = 0.757812f;
    data->d[6] = -0.168185f;
    data->d[7] = 0.381375f;
    data->d[8] = -1.965673f;
    data->d[9] = -0.352195f;
    data->d[10] = 1.530245f;
    data->d[11] = 1.644887f;
    data->d[12] = -1.528071f;
    data->d[13] = -0.032263f;
    data->d[14] = -1.532512f;
    data->d[15] = -2.539899f;
    data->d[16] = -1.546543f;
    data->d[17] = 0.067437f;
    data->d[18] = -1.820930f;
    data->d[19] = -0.217119f;
    data->d[20] = 0.613569f;
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

// Variation: 1  result = 0.00000024
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.575055f;
    data->d[1] = 0.167318f;
    data->d[2] = -0.365099f;
    data->d[3] = -0.281143f;
    data->d[4] = 2.189194f;
    data->d[5] = 1.192946f;
    data->d[6] = 0.348576f;
    data->d[7] = 0.022958f;
    data->d[8] = -0.450400f;
    data->d[9] = -1.121022f;
    data->d[10] = 1.263799f;
    data->d[11] = 0.839970f;
    data->d[12] = -2.125304f;
    data->d[13] = 0.613264f;
    data->d[14] = 1.292104f;
    data->d[15] = 1.658782f;
    data->d[16] = 1.054995f;
    data->d[17] = 1.054673f;
    data->d[18] = -0.901256f;
    data->d[19] = -0.152661f;
    data->d[20] = 0.812646f;
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

// Variation: 2  result = 0.00000036
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.068013f;
    data->d[1] = 1.222324f;
    data->d[2] = -1.293605f;
    data->d[3] = -0.384025f;
    data->d[4] = -1.669626f;
    data->d[5] = 0.236228f;
    data->d[6] = 0.216634f;
    data->d[7] = -0.042120f;
    data->d[8] = 0.563830f;
    data->d[9] = 0.914367f;
    data->d[10] = -2.040437f;
    data->d[11] = -1.417634f;
    data->d[12] = 2.354718f;
    data->d[13] = -0.379433f;
    data->d[14] = -0.385358f;
    data->d[15] = 6.239979f;
    data->d[16] = -0.920419f;
    data->d[17] = -1.262855f;
    data->d[18] = 0.430967f;
    data->d[19] = -0.420888f;
    data->d[20] = 0.954514f;
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

inline float Evaluate(FireStarterSharedData& data, const FireStarterData& testData, float n)
{
    data = testData;
    // EVALUATE //
// END //
    return n;
} // Evaluate

inline bool TestEvaluate(FireStarterSharedData& data, const FireStarterData& testData, const float target[], const float theta[], float& result)
{
    float maxResult = result;
    result = 0.0f;
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++) {
        float n = fabsf(Evaluate(data, testData, theta[i]) - target[i]);
        if (!isfinite(n) || (n > maxResult)) {
            result = maxResult;
            return false;
        } else
            result = fmaxf(n, result);
    }
    return true;
} // TestEvaluate

GPU_GLOBAL void Evolver(FireStarterPopulation* newResults, const FireStarterPopulation* oldResults, const unsigned int v, const unsigned int registers, const unsigned long long optimizationSeed, const unsigned long long optimizationPass)
{
    // Determine the member to be optimized.
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= FIRESTARTER_POPULATION)
        return;

    // The shared data for the threads in the warp.
    GPU_SHARED FireStarterSharedData sharedData;

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
            if (TestEvaluate(sharedData, data, target, theta, result))
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
            if (!TestEvaluate(sharedData, data, target, theta, result)) {
                data[d] = oldData;
                result = memberResult = oldResults->MinResult(member, v);
            }
        } else {
            result = memberResult = oldResults->MinResult( member, v);
            evolutionScale = FIRESTARTER_SCALE * memberResult;
        }
    }

    // Iterate to evolve the registers.
    for (unsigned int p = 0; p < FIRESTARTER_ITERATIONS; p++) {
        unsigned int d = RANDOMMOD(seed, registers);
        float oldData = data[d];
        data[d] = oldData + evolutionScale * RANDOMFACTOR(seed);
        float curResult = result;
        if (TestEvaluate(sharedData, data, target, theta, curResult))
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
} // Evolver
