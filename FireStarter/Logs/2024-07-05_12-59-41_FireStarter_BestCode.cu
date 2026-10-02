#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

// VARIATIONS //
// Run date: 07/05/24 12:59:41 Pacific Daylight Time
// Run duration = 2151.269751 seconds
// Run generation = 828
// Run evolution = 5
// Run max result = 0.00000066
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

// Variation: 0  result = 0.00000009
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.129178f;
    data->d[1] = -1.012415f;
    data->d[2] = 0.867147f;
    data->d[3] = 0.199979f;
    data->d[4] = -0.000000f;
    data->d[5] = -3.058434f;
    data->d[6] = -0.365301f;
    data->d[7] = 0.129367f;
    data->d[8] = 4.311180f;
    data->d[9] = -0.555696f;
    data->d[10] = -2.838372f;
    data->d[11] = -0.273604f;
    data->d[12] = -3.011661f;
    data->d[13] = 1.463667f;
    data->d[14] = -0.069313f;
    data->d[15] = -0.146638f;
    data->d[16] = -0.791761f;
    data->d[17] = -4.010988f;
    data->d[18] = 0.597226f;
    data->d[19] = -1.663712f;
    data->d[20] = -0.199979f;
    data->d[21] = -1.881616f;
    data->d[22] = 1.776748f;
    data->d[23] = -1.793237f;
    data->d[24] = 1.894716f;
    data->d[25] = -1.775629f;
    data->d[26] = -0.458714f;
    data->d[27] = -0.032543f;
    data->d[28] = 0.329622f;
    data->d[29] = 1.047819f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000066
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.771111f;
    data->d[1] = 0.680452f;
    data->d[2] = 0.388772f;
    data->d[3] = -0.254531f;
    data->d[4] = 0.000000f;
    data->d[5] = 1.576236f;
    data->d[6] = 1.441355f;
    data->d[7] = -0.110709f;
    data->d[8] = -0.684412f;
    data->d[9] = 0.057266f;
    data->d[10] = 0.242635f;
    data->d[11] = 0.179346f;
    data->d[12] = -5.563964f;
    data->d[13] = -0.238384f;
    data->d[14] = -0.717692f;
    data->d[15] = 1.062595f;
    data->d[16] = 1.437771f;
    data->d[17] = -1.228376f;
    data->d[18] = 1.493873f;
    data->d[19] = -0.564358f;
    data->d[20] = 0.136399f;
    data->d[21] = -1.809020f;
    data->d[22] = -0.436794f;
    data->d[23] = -1.688434f;
    data->d[24] = -1.228360f;
    data->d[25] = 0.938705f;
    data->d[26] = -1.525582f;
    data->d[27] = 1.624833f;
    data->d[28] = -1.827586f;
    data->d[29] = -0.758645f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation1

// Variation: 2  result = 0.00000063
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.252932f;
    data->d[1] = -0.365062f;
    data->d[2] = 1.009272f;
    data->d[3] = 0.069075f;
    data->d[4] = 0.000000f;
    data->d[5] = 0.203391f;
    data->d[6] = 1.769639f;
    data->d[7] = -2.080669f;
    data->d[8] = 0.169744f;
    data->d[9] = -0.573942f;
    data->d[10] = -0.973313f;
    data->d[11] = -1.947394f;
    data->d[12] = 1.649825f;
    data->d[13] = -1.050777f;
    data->d[14] = -0.161176f;
    data->d[15] = -0.521693f;
    data->d[16] = 3.642269f;
    data->d[17] = 0.505399f;
    data->d[18] = -0.733472f;
    data->d[19] = 3.377292f;
    data->d[20] = 0.454524f;
    data->d[21] = 0.602281f;
    data->d[22] = 0.430269f;
    data->d[23] = 0.729747f;
    data->d[24] = -1.041657f;
    data->d[25] = -0.295457f;
    data->d[26] = -1.826214f;
    data->d[27] = -1.229542f;
    data->d[28] = -1.486591f;
    data->d[29] = -0.121533f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation2

// END //

#if FIRESTARTER_OPTIMIZE_SHARED

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
    n = data[0] += n;
    n = data[1] += n;
    n = data[2] *= n;
    n = data[3] += n;
    n += data[1];
    n *= data[0];
    n *= data[4];
    n += data[2];
    n = data[5] *= n;
    n = data[6] *= n;
    n = data[7] *= n;
    n *= data[7];
    n *= data[8];
    n = data[9] += n;
    n += data[10];
    n += data[11];
    n = data[12] *= n;
    n += data[13];
    n *= data[14];
    n = data[15] *= n;
    n = data[9] *= n;
    n += data[16];
    n *= data[12];
    n *= data[15];
    n *= data[9];
    n *= data[17];
    n *= data[5];
    n += data[6];
    n *= data[18];
    n *= data[19];
    n += data[3];
    n += data[20];
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

GPU_GLOBAL void Optimizer(FireStarterPopulation* newResults, const FireStarterPopulation* oldResults, const unsigned int v, const unsigned int registers, const unsigned long long optimizationSeed, const unsigned long long optimizationPass)
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
            data.Init(seed, evolutionScale);
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
} // Optimizer

#else

inline float Evaluate(const FireStarterData& testData, float n)
{
    FireStarterData data = testData;
// EVALUATE //
    n = data[0] += n;
    n = data[1] += n;
    n = data[2] *= n;
    n = data[3] += n;
    n += data[1];
    n *= data[0];
    n *= data[4];
    n += data[2];
    n = data[5] *= n;
    n = data[6] *= n;
    n = data[7] *= n;
    n *= data[7];
    n *= data[8];
    n = data[9] += n;
    n += data[10];
    n += data[11];
    n = data[12] *= n;
    n += data[13];
    n *= data[14];
    n = data[15] *= n;
    n = data[9] *= n;
    n += data[16];
    n *= data[12];
    n *= data[15];
    n *= data[9];
    n *= data[17];
    n *= data[5];
    n += data[6];
    n *= data[18];
    n *= data[19];
    n += data[3];
    n += data[20];
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
            data.Init(seed, evolutionScale);
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
#endif
