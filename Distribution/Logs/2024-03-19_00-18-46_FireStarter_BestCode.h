#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
// Run date: 03/19/24 00:18:46 Pacific Daylight Time
// Run duration = 18039.322781 seconds
// Run generation = 2334
// Run evolution = 20
// Run max result = 0.00000012
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 1
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 4
// Run units = 4
// Run states = 16
// Run generations = 200
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
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
    data->d[0] = -1.046088f;
    data->d[1] = -0.136570f;
    data->d[2] = 1.720527f;
    data->d[3] = 1.702425f;
    data->d[4] = 1.702426f;
    data->d[5] = -2.213054f;
    data->d[6] = -0.092246f;
    data->d[7] = -1.335774f;
    data->d[8] = -0.001612f;
    data->d[9] = 4.651917f;
    data->d[10] = 2.245838f;
    data->d[11] = 0.786978f;
    data->d[12] = -1.321680f;
    data->d[13] = 1.798529f;
    data->d[14] = 1.108587f;
    data->d[15] = -0.108386f;
    data->d[16] = 1.275355f;
    data->d[17] = -0.796215f;
    data->d[18] = -0.638077f;
    data->d[19] = -1.872320f;
    data->d[20] = -0.228594f;
    data->d[21] = 0.030856f;
    data->d[22] = 0.197738f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.143740f;
    data->d[1] = -0.514169f;
    data->d[2] = 2.354550f;
    data->d[3] = 1.694529f;
    data->d[4] = 1.694526f;
    data->d[5] = -0.068963f;
    data->d[6] = 1.257613f;
    data->d[7] = 0.795665f;
    data->d[8] = -0.002833f;
    data->d[9] = 2.004404f;
    data->d[10] = -9.962534f;
    data->d[11] = 0.994265f;
    data->d[12] = 1.211129f;
    data->d[13] = -0.436987f;
    data->d[14] = 1.621962f;
    data->d[15] = 1.764780f;
    data->d[16] = 1.629676f;
    data->d[17] = -0.587730f;
    data->d[18] = 1.148803f;
    data->d[19] = 0.156747f;
    data->d[20] = 1.970539f;
    data->d[21] = -1.376749f;
    data->d[22] = -0.711923f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000012
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.217011f;
    data->d[1] = -1.703183f;
    data->d[2] = 0.405373f;
    data->d[3] = -1.888316f;
    data->d[4] = -1.888318f;
    data->d[5] = -0.104261f;
    data->d[6] = 0.817134f;
    data->d[7] = 0.396259f;
    data->d[8] = 0.014903f;
    data->d[9] = 1.158232f;
    data->d[10] = 1.021980f;
    data->d[11] = 1.125916f;
    data->d[12] = -0.153479f;
    data->d[13] = 0.929521f;
    data->d[14] = 1.520744f;
    data->d[15] = 0.873721f;
    data->d[16] = 1.234696f;
    data->d[17] = -1.428747f;
    data->d[18] = 1.489771f;
    data->d[19] = -0.404336f;
    data->d[20] = -2.100486f;
    data->d[21] = 0.906394f;
    data->d[22] = 1.717691f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n *= data.d[0];
    n += data.d[1];
    n = data.d[2] += n;
    n = data.d[3] += n;
    n += data.d[4];
    n *= data.d[5];
    n *= data.d[2];
    n = data.d[6] *= n;
    n += data.d[7];
    n = data.d[8] *= n;
    n += data.d[9];
    n += data.d[10];
    n = data.d[8] *= n;
    n += data.d[11];
    n = data.d[8] *= n;
    n += data.d[12];
    n += data.d[8];
    n = data.d[13] += n;
    n *= data.d[13];
    n = data.d[6] *= n;
    n *= data.d[14];
    n = data.d[15] += n;
    n *= data.d[15];
    n += data.d[16];
    n += data.d[17];
    n *= data.d[18];
    n += data.d[6];
    n *= data.d[19];
    n *= data.d[3];
    n += data.d[20];
    n += data.d[21];
    n += data.d[22];
    return isfinite(n) ? n : 0.0f;
} // Evaluate
// END //

//inline float TestEvaluate(const FireStarterData& data, const float target[FIRESTARTER_SAMPLES], const float theta[FIRESTARTER_SAMPLES])
inline float TestEvaluate(const FireStarterData& data, const float target[], const float theta[])
{
    float result = 0.0f;
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
        result = fmaxf(fabsf(Evaluate(data, theta[i]) - target[i]), result);
    return result;
} // TestEvaluate

inline float TestPrecision(const FireStarterData& data, unsigned int variation, unsigned int precision)
{
    float result = 0.0f;
    float precisionStep = (TARGET_MAX - TARGET_MIN) / (precision - 1);
    for (int i = 0; i < precision; i++) {
        float theta = TARGET_MIN + i * precisionStep;
        result = fmaxf(fabsf(Evaluate(data, theta) - Target(theta, variation)), result);
    }
    return result;
} // TestPrecision

GPU_GLOBAL void Optimizer(const FireStarterSettings settings, FireStarterPopulation* newResults, FireStarterPopulation* oldResults, const unsigned int v, const unsigned int firstMember, const unsigned int lastMember, const unsigned int dataSize, const unsigned long long optimizationSeed, const unsigned int initData)
{
    unsigned int member = firstMember + blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= lastMember)
        return;

    // Precalculate the target theta values.
    float theta[FIRESTARTER_SAMPLES];
    float sampleStep = (TARGET_MAX - TARGET_MIN) / (FIRESTARTER_SAMPLES - 1);
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
        theta[i] = TARGET_MIN + i * sampleStep;

    // Evolve the program data for each variation.
    unsigned long long seed = optimizationSeed + SEED10(v) + SEED11(member); // Unique seed for the generation/variation/member
    FireStarterData data;
    float oldResult;
    bool evolved = false;

    if (initData) {
        // The first generation is initalized with random numbers.
        for (unsigned int i = 0; i < dataSize; i++)
            data.d[i] = RANDOMFACTOR(seed) * settings.m_startScale;
        for (unsigned int i = dataSize; i < FIRESTARTER_REGISTERS; i++)
            data.d[i] = 0.0f;   // Clear the unused data.
        oldResult = settings.m_startResult;
        evolved = true;
    } else {
        // Later generations randomize a single instruction if they were copied.
        data = *oldResults->Data(member, v);
        oldResult = *oldResults->MinResult(member, v);
        unsigned int age = *oldResults->Index(member, v);
        if (age > 1) {
            unsigned int d = RANDOMMOD(seed, dataSize);
            data.d[d] += RANDOMFACTOR(seed) * settings.m_startScale * (age - 1);
            oldResult = settings.m_startResult;
            evolved = true;
        }
    }

    // Precalculate the target sample values.
    float target[FIRESTARTER_SAMPLES];
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
        target[i] = Target(theta[i], v);

    // Find the initial result
    float result = TestEvaluate(data, target, theta);
    float evolutionScale = evolved ? settings.m_startScale : settings.m_scale * result;

    // Iterate to evolve the data.
    for (unsigned int p = 0; p < settings.m_iterations; p++) {
        unsigned int d = RANDOMMOD(seed, dataSize);
        float oldData = data.d[d];
        data.d[d] = oldData + evolutionScale * RANDOMFACTOR(seed);
        float curResult = TestEvaluate(data, target, theta);
        if (curResult <= result) {
            result = curResult;
            evolutionScale = settings.m_scale * result;
            evolved = true;
        } else
            data.d[d] = oldData;
    }

    // Calculate a more accurate estimate of the result.
    if (settings.m_precision) {
        if (evolved)
            result = fmaxf(result, TestPrecision(data, v, settings.m_precision));
        else
            result = oldResult;
    }

    // If the result was better, save the results.
    if (initData || (result < oldResult)) {
        *newResults->Data(member, v) = data;
        *newResults->MinResult(member, v) = result;
        *newResults->Index(member, v) = 0;
        *newResults->Debug(member, v) = initData ? 1 : *oldResults->Debug(member, v) + 1;
    } else {
        // If the result was worse, copy a result from among the previous generation's results.
        unsigned int bestCandidate = member;
        float bestResult = result;

        // The genetic part of genetic programming and a major optimization:
        // Copy the best data from among a random set of candidates.
        for (int i = 0; i < settings.m_candidates; i++) {
            unsigned int candidate = RANDOMMOD(seed, settings.m_population);
            if (*oldResults->Index(candidate, v) <= 1) {   // Only select evolving members
                float curResult = *oldResults->MinResult(candidate, v);
                if (curResult <= bestResult) {
                    bestResult = curResult;
                    bestCandidate = candidate;
                }
            }
        }

        // Switch to the selected member's data and results.
        if (bestCandidate == member) {
            // Note: result will be larger than oldResult
            *newResults->Data(member, v) = data;
            *newResults->MinResult(member, v) = result;
            *newResults->Index(member, v) = 1;
        } else {
            *newResults->Data(member, v) = *oldResults->Data(bestCandidate, v);
            *newResults->MinResult(member, v) = *oldResults->MinResult(bestCandidate, v);
            *newResults->Index(member, v) = MAX(*oldResults->Index(member, v), 1) + 1;
        }
        *newResults->Debug(member, v) = *oldResults->Debug(bestCandidate, v);
    }
} // Optimizer
