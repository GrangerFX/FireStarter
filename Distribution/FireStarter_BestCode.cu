#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

// VARIATIONS //
// Run date: 06/19/24 11:32:33 Pacific Daylight Time
// Run duration = 1310.452603 seconds
// Run generation = 80
// Run evolution = 6
// Run max result = 0.00001466
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 0
// Run streams = 1
// Run units = 1
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

// Variation: 0  result = 0.00000328
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.065233f;
    data->d[1] = -2.154119f;
    data->d[2] = -1.316993f;
    data->d[3] = -1.418478f;
    data->d[4] = -2.000837f;
    data->d[5] = -0.286693f;
    data->d[6] = -0.000895f;
    data->d[7] = 0.087765f;
    data->d[8] = -2.458643f;
    data->d[9] = 9.343068f;
    data->d[10] = 0.006168f;
    data->d[11] = -0.564309f;
    data->d[12] = -2.215017f;
    data->d[13] = -2.098915f;
    data->d[14] = 0.097122f;
    data->d[15] = 1.602913f;
    data->d[16] = -0.545813f;
    data->d[17] = 1.453478f;
    data->d[18] = 1.637814f;
    data->d[19] = -3.054224f;
    data->d[20] = 0.294882f;
    data->d[21] = -0.502393f;
    data->d[22] = 0.000423f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000003f;
} // LoadVariation0

// Variation: 1  result = 0.00001466
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.084393f;
    data->d[1] = -4.026033f;
    data->d[2] = 0.315125f;
    data->d[3] = 0.622612f;
    data->d[4] = 0.497712f;
    data->d[5] = -0.258521f;
    data->d[6] = 0.003755f;
    data->d[7] = -4.094462f;
    data->d[8] = 1.798695f;
    data->d[9] = 6.118326f;
    data->d[10] = -0.308140f;
    data->d[11] = -0.233891f;
    data->d[12] = -0.074928f;
    data->d[13] = -2.532006f;
    data->d[14] = 0.594988f;
    data->d[15] = -0.006116f;
    data->d[16] = -3.607760f;
    data->d[17] = 3.466686f;
    data->d[18] = 3.648506f;
    data->d[19] = 3.264558f;
    data->d[20] = -0.123289f;
    data->d[21] = 0.044518f;
    data->d[22] = 0.047613f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000015f;
} // LoadVariation1

// Variation: 2  result = 0.00001397
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.976579f;
    data->d[1] = 2.673606f;
    data->d[2] = 1.264664f;
    data->d[3] = -1.536052f;
    data->d[4] = -0.744944f;
    data->d[5] = 0.629597f;
    data->d[6] = 0.001884f;
    data->d[7] = 0.028100f;
    data->d[8] = -2.754459f;
    data->d[9] = 4.550634f;
    data->d[10] = 1.780870f;
    data->d[11] = 0.078504f;
    data->d[12] = -1.624280f;
    data->d[13] = -0.869479f;
    data->d[14] = 0.128955f;
    data->d[15] = -1.701943f;
    data->d[16] = -0.586012f;
    data->d[17] = -0.259783f;
    data->d[18] = 8.689738f;
    data->d[19] = -0.492505f;
    data->d[20] = -0.383409f;
    data->d[21] = -0.146694f;
    data->d[22] = -0.187993f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000014f;
} // LoadVariation2

// END //

#if 0

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

inline float Evaluate(const FireStarterData& testData, float n)
{
    GPU_SHARED FireStarterSharedData data;
    data = testData;
// EVALUATE //
    n = data[0] += n;
    n += data[1];
    n = data[2] *= n;
    n += data[3];
    n = data[4] *= n;
    n *= data[5];
    n = data[6] += n;
    n *= data[7];
    n *= data[6];
    n = data[8] *= n;
    n += data[9];
    n *= data[2];
    n *= data[10];
    n *= data[11];
    n *= data[0];
    n = data[12] += n;
    n += data[13];
    n = data[14] *= n;
    n += data[8];
    n += data[15];
    n = data[16] *= n;
    n += data[12];
    n *= data[17];
    n += data[18];
    n += data[19];
    n = data[20] *= n;
    n *= data[16];
    n *= data[14];
    n *= data[4];
    n *= data[21];
    n += data[22];
    n *= data[20];
// END //
    return isfinite(n) ? n : 0.0f;
} // Evaluate

#else

inline float Evaluate(const FireStarterData& testData, float n)
{
    FireStarterData data(testData);
// EVALUATE //
    n = data[0] += n;
    n += data[1];
    n = data[2] *= n;
    n += data[3];
    n = data[4] *= n;
    n *= data[5];
    n = data[6] += n;
    n *= data[7];
    n *= data[6];
    n = data[8] *= n;
    n += data[9];
    n *= data[2];
    n *= data[10];
    n *= data[11];
    n *= data[0];
    n = data[12] += n;
    n += data[13];
    n = data[14] *= n;
    n += data[8];
    n += data[15];
    n = data[16] *= n;
    n += data[12];
    n *= data[17];
    n += data[18];
    n += data[19];
    n = data[20] *= n;
    n *= data[16];
    n *= data[14];
    n *= data[4];
    n *= data[21];
    n += data[22];
    n *= data[20];
// END //
    return isfinite(n) ? n : 0.0f;
} // Evaluate

//inline float TestEvaluate(const FireStarterData& data, const float target[FIRESTARTER_SAMPLES], const float theta[FIRESTARTER_SAMPLES])
inline float TestEvaluate(const FireStarterData& data, const float target[], const float theta[])
{
    float result = 0.0f;
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
        result = fmaxf(fabsf(Evaluate(data, theta[i]) - target[i]), result);
    return result;
} // TestEvaluate

#endif

GPU_GLOBAL void Optimizer(const FireStarterSettings settings, FireStarterPopulation* newResults, const FireStarterPopulation* oldResults, const unsigned int v, const unsigned int registers, const unsigned long long optimizationSeed, const unsigned long long optimizationPass)
{
    // Determine the member to be optimized.
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= settings.m_population)
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
        evolutionScale = settings.m_startScale;
        data.Init(seed, evolutionScale, registers, settings.m_registers);
        memberAge = 0;
        memberResult = settings.m_startResult;
        result = TestEvaluate(data, target, theta);
    }
    else {
        // Later generations randomize a single register if they were copied.
        data.Copy(oldResults->Data(settings, member, v));
        memberAge = oldResults->Age(settings, member, v);
        if (memberAge > 1) {
            // Randomize a single register.
            evolutionScale = settings.m_startScale;
            unsigned int d = RANDOMMOD(seed, registers);
            data[d] += RANDOMFACTOR(seed) * evolutionScale * (memberAge - 1);
            memberResult = settings.m_startResult;
            result = TestEvaluate(data, target, theta);
        } else {
            result = memberResult = oldResults->MinResult(settings, member, v);
            evolutionScale = settings.m_scale * memberResult;
            result = TestEvaluate(data, target, theta);
        }
    }

    // Iterate to evolve the registers.
    for (unsigned int p = 0; p < settings.m_iterations; p++) {
        unsigned int d = RANDOMMOD(seed, registers);
        float oldData = data[d];
        data[d] = oldData + evolutionScale * RANDOMFACTOR(seed);
        float curResult = TestEvaluate(data, target, theta);
        if (curResult <= result)
            result = curResult;
        else
            data[d] = oldData;
    }

    // If the result was better, save the results.
    if (!optimizationPass || (result < memberResult))
        newResults->InitMemberResult(settings, member, v, 0, result, data);
    else {
        // If the result was worse, copy a result from among the previous generation's results.
        unsigned int bestCandidate = member;
        unsigned int bestAge = memberAge;
        float bestResult = result;

        // The genetic part of genetic programming and a major optimization:
        // Copy the best data from among a random set of candidates.
        for (int i = 0; i < settings.m_candidates; i++) {
            // Select evolving members with results better than the current result.
            unsigned int candidate = RANDOMMOD(seed, settings.m_population);
            unsigned int candidateAge = oldResults->Age(settings, candidate, v);
            if (candidateAge <= 1) {
                float candidateResult = oldResults->MinResult(settings, candidate, v);
                if (candidateResult <= bestResult) {
                    bestCandidate = candidate;
                    bestAge = candidateAge;
                    bestResult = candidateResult;
                }
            }
        }

        // Switch to the selected member's data and results.
        if (bestCandidate == member)
            // Note: result will be larger than oldResult when oldAge > 1.
            newResults->InitMemberResult(settings, member, v, 1, result, data);
        else {
            const FireStarterData* bestData = oldResults->Data(settings, bestCandidate, v);
            newResults->InitMemberResult(settings, member, v, MAX(memberAge, 1) + 1, bestResult, bestData);
        }
    }
} // Optimizer

#else

#if 1
// Old way to copy data.
inline float Evaluate(const FireStarterData& testData, float n)
{
    FireStarterData data(testData);
    // EVALUATE //
    n = data[0] += n;
    n += data[1];
    n = data[2] *= n;
    n += data[3];
    n = data[4] *= n;
    n *= data[5];
    n = data[6] += n;
    n *= data[7];
    n *= data[6];
    n = data[8] *= n;
    n += data[9];
    n *= data[2];
    n *= data[10];
    n *= data[11];
    n *= data[0];
    n = data[12] += n;
    n += data[13];
    n = data[14] *= n;
    n += data[8];
    n += data[15];
    n = data[16] *= n;
    n += data[12];
    n *= data[17];
    n += data[18];
    n += data[19];
    n = data[20] *= n;
    n *= data[16];
    n *= data[14];
    n *= data[4];
    n *= data[21];
    n += data[22];
    n *= data[20];
// END //
    return isfinite(n) ? n : 0.0f;
} // Evaluate
#else
// New way to copy data.
inline float Evaluate(const FireStarterData& testData, float n)
{
    FireStarterData data;
    data.Copy(testData);
    // EVALUATE //
    n = data[0] += n;
    n += data[1];
    n = data[2] *= n;
    n += data[3];
    n = data[4] *= n;
    n *= data[5];
    n = data[6] += n;
    n *= data[7];
    n *= data[6];
    n = data[8] *= n;
    n += data[9];
    n *= data[2];
    n *= data[10];
    n *= data[11];
    n *= data[0];
    n = data[12] += n;
    n += data[13];
    n = data[14] *= n;
    n += data[8];
    n += data[15];
    n = data[16] *= n;
    n += data[12];
    n *= data[17];
    n += data[18];
    n += data[19];
    n = data[20] *= n;
    n *= data[16];
    n *= data[14];
    n *= data[4];
    n *= data[21];
    n += data[22];
    n *= data[20];
// END //
    return isfinite(n) ? n : 0.0f;
} // Evaluate
#endif

//inline float TestEvaluate(const FireStarterData& data, const float target[FIRESTARTER_SAMPLES], const float theta[FIRESTARTER_SAMPLES])
inline float TestEvaluate(const FireStarterData& data, const float target[], const float theta[])
{
    float result = 0.0f;
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
        result = fmaxf(fabsf(Evaluate(data, theta[i]) - target[i]), result);
    return result;
} // TestEvaluate

GPU_GLOBAL void Optimizer(const FireStarterSettings settings, FireStarterPopulation* newResults, const FireStarterPopulation* oldResults, const unsigned int v, const unsigned int registers, const unsigned long long optimizationSeed, const unsigned long long optimizationPass)
{
    // Determine the member to be optimized.
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= settings.m_population)
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
        evolutionScale = settings.m_startScale;
        data.Init(seed, evolutionScale, registers, settings.m_registers);
        memberAge = 0;
        memberResult = settings.m_startResult;
        result = TestEvaluate(data, target, theta);
    } else {
        // Later generations randomize a single register if they were copied.
        data.Copy(oldResults->Data(settings, member, v));
        memberAge = oldResults->Age(settings, member, v);
        if (memberAge > 1) {
            // Randomize a single register.
            evolutionScale = settings.m_startScale;
            unsigned int d = RANDOMMOD(seed, registers);
            data[d] += RANDOMFACTOR(seed) * evolutionScale * (memberAge - 1);
            memberResult = settings.m_startResult;
            result = TestEvaluate(data, target, theta);
        } else {
            result = memberResult = oldResults->MinResult(settings, member, v);
            evolutionScale = settings.m_scale * memberResult;
            result = TestEvaluate(data, target, theta);
        }
    }

    // Iterate to evolve the registers.
    for (unsigned int p = 0; p < settings.m_iterations; p++) {
        unsigned int d = RANDOMMOD(seed, registers);
        float oldData = data[d];
        data[d] = oldData + evolutionScale * RANDOMFACTOR(seed);
        float curResult = TestEvaluate(data, target, theta);
        if (curResult <= result)
            result = curResult;
        else
            data[d] = oldData;
    }

    // If the result was better, save the results.
    if (!optimizationPass || (result < memberResult))
        newResults->InitMemberResult(settings, member, v, 0, result, data);
    else {
        // If the result was worse, copy a result from among the previous generation's results.
        unsigned int bestCandidate = member;
        unsigned int bestAge = memberAge;
        float bestResult = result;

        // The genetic part of genetic programming and a major optimization:
        // Copy the best data from among a random set of candidates.
        for (int i = 0; i < settings.m_candidates; i++) {
            // Select evolving members with results better than the current result.
            unsigned int candidate = RANDOMMOD(seed, settings.m_population);
            unsigned int candidateAge = oldResults->Age(settings, candidate, v);
            if (candidateAge <= 1) {
                float candidateResult = oldResults->MinResult(settings, candidate, v);
                if (candidateResult <= bestResult) {
                    bestCandidate = candidate;
                    bestAge = candidateAge;
                    bestResult = candidateResult;
                }
            }
        }

        // Switch to the selected member's data and results.
        if (bestCandidate == member)
            // Note: result will be larger than oldResult when oldAge > 1.
            newResults->InitMemberResult(settings, member, v, 1, result, data);
        else {
            const FireStarterData* bestData = oldResults->Data(settings, bestCandidate, v);
            newResults->InitMemberResult(settings, member, v, MAX(memberAge, 1) + 1, bestResult, bestData);
        }
    }
} // Optimizer
#endif