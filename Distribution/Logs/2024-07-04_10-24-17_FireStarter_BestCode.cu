#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

// VARIATIONS //
// Run date: 07/04/24 10:24:17 Pacific Daylight Time
// Run duration = 360.301277 seconds
// Run generation = 129
// Run evolution = 10
// Run max result = 0.00000057
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

// Variation: 0  result = 0.00000022
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 2.194331f;
    data->d[2] = -0.099150f;
    data->d[3] = -0.000000f;
    data->d[4] = 0.710640f;
    data->d[5] = -1.195810f;
    data->d[6] = -1.242058f;
    data->d[7] = 0.321630f;
    data->d[8] = 0.776746f;
    data->d[9] = -0.554711f;
    data->d[10] = -2.892464f;
    data->d[11] = 0.563725f;
    data->d[12] = 3.293453f;
    data->d[13] = 1.560063f;
    data->d[14] = 5.205258f;
    data->d[15] = -0.970566f;
    data->d[16] = -5.318038f;
    data->d[17] = -2.069948f;
    data->d[18] = 0.613166f;
    data->d[19] = 0.967501f;
    data->d[20] = 1.003710f;
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

// Variation: 1  result = 0.00000057
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.843397f;
    data->d[1] = 0.334482f;
    data->d[2] = -0.823367f;
    data->d[3] = 0.068096f;
    data->d[4] = 0.843493f;
    data->d[5] = -0.705735f;
    data->d[6] = 1.308268f;
    data->d[7] = -0.106952f;
    data->d[8] = -0.624786f;
    data->d[9] = 0.517466f;
    data->d[10] = -3.377263f;
    data->d[11] = -0.251245f;
    data->d[12] = -1.452376f;
    data->d[13] = -7.327628f;
    data->d[14] = -6.351859f;
    data->d[15] = -3.799869f;
    data->d[16] = 9.186997f;
    data->d[17] = 0.052380f;
    data->d[18] = 1.345607f;
    data->d[19] = 2.608535f;
    data->d[20] = 1.734776f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation1

// Variation: 2  result = 0.00000032
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 2.329655f;
    data->d[1] = -3.011203f;
    data->d[2] = -0.073993f;
    data->d[3] = -1.102369f;
    data->d[4] = 0.141958f;
    data->d[5] = 2.942753f;
    data->d[6] = -1.847166f;
    data->d[7] = 0.800916f;
    data->d[8] = 0.797315f;
    data->d[9] = 0.271886f;
    data->d[10] = -1.653089f;
    data->d[11] = 1.532114f;
    data->d[12] = 0.266057f;
    data->d[13] = 1.747393f;
    data->d[14] = 1.394143f;
    data->d[15] = 0.993793f;
    data->d[16] = -0.161875f;
    data->d[17] = -3.360126f;
    data->d[18] = -1.175867f;
    data->d[19] = 1.980722f;
    data->d[20] = 0.474976f;
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

typedef struct FireStarterSharedData {
    float d[FIRESTARTER_REGISTERS * WARP_THREADS];

    inline float& operator[](unsigned int i)
    {
        return d[i * WARP_THREADS + threadIdx.x];
    } // operator[]

    inline void operator=(const FireStarterData& data)
    {
        for (unsigned int i = 0; i < FIRESTARTER_REGISTERS; i++)
            d[i * WARP_THREADS + threadIdx.x] = data[i];
    } // operator=

    inline void Copy(const FireStarterData& data)
    {
        for (unsigned int i = 0; i < FIRESTARTER_REGISTERS; i++)
            d[i * WARP_THREADS + threadIdx.x] = data[i];
    } // Copy
} FireStarterSharedData;

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
