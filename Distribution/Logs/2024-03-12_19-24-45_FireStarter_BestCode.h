#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
// Run date: 03/12/24 19:24:45 Pacific Daylight Time
// Run duration = 21644.010385 seconds
// Run generation = 89
// Run evolution = 14
// Run max result = 0.00000028
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
// Run evolveSeed = 0
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

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.129987f;
    data->d[1] = 0.530048f;
    data->d[2] = -1.734093f;
    data->d[3] = 0.298508f;
    data->d[4] = -3.619554f;
    data->d[5] = -0.009395f;
    data->d[6] = -296.476715f;
    data->d[7] = 1.735563f;
    data->d[8] = -4.267217f;
    data->d[9] = 4.569271f;
    data->d[10] = -0.011650f;
    data->d[11] = 0.343918f;
    data->d[12] = 0.559517f;
    data->d[13] = 0.221401f;
    data->d[14] = -1.033385f;
    data->d[15] = -0.777999f;
    data->d[16] = -2.181707f;
    data->d[17] = 0.027568f;
    data->d[18] = -0.314484f;
    data->d[19] = 0.594033f;
    data->d[20] = 0.393474f;
    data->d[21] = -0.361082f;
    data->d[22] = 0.000000f;
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
    data->d[0] = 1.060077f;
    data->d[1] = 0.511626f;
    data->d[2] = -2.123626f;
    data->d[3] = -2.088720f;
    data->d[4] = -0.288417f;
    data->d[5] = -0.298569f;
    data->d[6] = 2.136316f;
    data->d[7] = -1.683514f;
    data->d[8] = -1.758349f;
    data->d[9] = -1.745135f;
    data->d[10] = -0.016387f;
    data->d[11] = -0.479209f;
    data->d[12] = -1.071944f;
    data->d[13] = -0.086483f;
    data->d[14] = -0.864955f;
    data->d[15] = -1.111870f;
    data->d[16] = -0.631812f;
    data->d[17] = -0.599485f;
    data->d[18] = 1.382432f;
    data->d[19] = 1.968142f;
    data->d[20] = 1.087429f;
    data->d[21] = -0.896631f;
    data->d[22] = -0.118132f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000028
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.456051f;
    data->d[1] = -0.932346f;
    data->d[2] = 0.150987f;
    data->d[3] = -0.741160f;
    data->d[4] = 0.797642f;
    data->d[5] = -0.022440f;
    data->d[6] = -64.240013f;
    data->d[7] = -1.298510f;
    data->d[8] = 1.113528f;
    data->d[9] = -4.454658f;
    data->d[10] = 0.116226f;
    data->d[11] = 0.371378f;
    data->d[12] = 0.392685f;
    data->d[13] = -1.427229f;
    data->d[14] = 0.882992f;
    data->d[15] = -0.454957f;
    data->d[16] = -0.656779f;
    data->d[17] = 0.168099f;
    data->d[18] = 0.558532f;
    data->d[19] = -0.876576f;
    data->d[20] = 2.158583f;
    data->d[21] = 0.033459f;
    data->d[22] = 0.523599f;
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
    n += data.d[0];
    n *= data.d[1];
    n += data.d[2];
    n = data.d[3] *= n;
    n = data.d[4] *= n;
    n *= data.d[3];
    n *= data.d[5];
    n *= data.d[6];
    n += data.d[7];
    n = data.d[8] *= n;
    n += data.d[9];
    n = data.d[10] *= n;
    n += data.d[11];
    n *= data.d[12];
    n += data.d[13];
    n = data.d[14] *= n;
    n += data.d[15];
    n *= data.d[16];
    n = data.d[14] *= n;
    n = data.d[17] += n;
    n = data.d[18] *= n;
    n *= data.d[19];
    n = data.d[20] += n;
    n *= data.d[17];
    n *= data.d[8];
    n *= data.d[20];
    n *= data.d[14];
    n += data.d[10];
    n *= data.d[21];
    n += data.d[18];
    n *= data.d[4];
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
