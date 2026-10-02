#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
// Run date: 04/13/24 10:47:26 Pacific Daylight Time
// Run duration = 506.636273 seconds
// Run generation = 96
// Run evolution = 3
// Run max result = 0.00000060
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
// Run evolveSeed = 1
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
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

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.141417f;
    data->d[2] = 0.896603f;
    data->d[3] = 0.698384f;
    data->d[4] = 0.629915f;
    data->d[5] = 0.119267f;
    data->d[6] = 6.544912f;
    data->d[7] = -0.082012f;
    data->d[8] = -17.714146f;
    data->d[9] = 0.004296f;
    data->d[10] = 0.045601f;
    data->d[11] = 0.413050f;
    data->d[12] = 3.557329f;
    data->d[13] = 1.814704f;
    data->d[14] = 3.708150f;
    data->d[15] = 14.208764f;
    data->d[16] = -2.815240f;
    data->d[17] = 0.084602f;
    data->d[18] = -0.228716f;
    data->d[19] = 0.228716f;
    data->d[20] = 0.156709f;
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
    data->d[0] = -3.090658f;
    data->d[1] = 1.008476f;
    data->d[2] = 0.369243f;
    data->d[3] = -2.535507f;
    data->d[4] = -0.009148f;
    data->d[5] = 1.581465f;
    data->d[6] = 1.826040f;
    data->d[7] = 0.303553f;
    data->d[8] = 0.971932f;
    data->d[9] = -2.247895f;
    data->d[10] = -0.007457f;
    data->d[11] = 13.462908f;
    data->d[12] = 1.974756f;
    data->d[13] = -3.593663f;
    data->d[14] = 1.066516f;
    data->d[15] = 0.356373f;
    data->d[16] = -4.127316f;
    data->d[17] = -0.032623f;
    data->d[18] = -0.776321f;
    data->d[19] = 0.859958f;
    data->d[20] = -1.412425f;
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

// Variation: 2  result = 0.00000060
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.724026f;
    data->d[2] = 0.522234f;
    data->d[3] = -0.243159f;
    data->d[4] = 0.387900f;
    data->d[5] = 0.020737f;
    data->d[6] = -1.199449f;
    data->d[7] = -0.381151f;
    data->d[8] = 1.850517f;
    data->d[9] = -0.036267f;
    data->d[10] = 4.692175f;
    data->d[11] = 0.151449f;
    data->d[12] = -1.213997f;
    data->d[13] = 0.690575f;
    data->d[14] = -1.466292f;
    data->d[15] = -1.999912f;
    data->d[16] = -1.778806f;
    data->d[17] = 1.653495f;
    data->d[18] = 0.191180f;
    data->d[19] = 0.446934f;
    data->d[20] = 0.820541f;
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
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n = data.d[0] += n;
    n = data.d[1] *= n;
    n *= data.d[2];
    n *= data.d[0];
    n = data.d[3] += n;
    n = data.d[4] *= n;
    n *= data.d[5];
    n = data.d[6] += n;
    n *= data.d[7];
    n = data.d[8] *= n;
    n *= data.d[9];
    n *= data.d[6];
    n = data.d[10] *= n;
    n *= data.d[11];
    n *= data.d[8];
    n *= data.d[3];
    n *= data.d[12];
    n += data.d[13];
    n = data.d[14] *= n;
    n = data.d[4] *= n;
    n *= data.d[14];
    n += data.d[15];
    n = data.d[1] *= n;
    n *= data.d[16];
    n *= data.d[10];
    n = data.d[1] += n;
    n *= data.d[4];
    n *= data.d[17];
    n += data.d[1];
    n += data.d[18];
    n += data.d[19];
    n *= data.d[20];
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

GPU_GLOBAL void Optimizer(const FireStarterSettings settings, FireStarterPopulation* newResults, FireStarterPopulation* oldResults, const unsigned int v, const unsigned int dataSize, const unsigned long long optimizationSeed, const unsigned long long optimizationPass)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= settings.m_population)
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

    if (!optimizationPass) {
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
    if (!optimizationPass || (result < oldResult)) {
#if 1
        newResults->InitResult(member, v, 0, FIRESTARTER_REGISTERS, result, data);
#else
        *newResults->Data(member, v) = data;
        *newResults->MinResult(member, v) = result;
        *newResults->Index(member, v) = 0;
#endif
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
#if 1
            newResults->InitResult(member, v, 1, FIRESTARTER_REGISTERS, result, data);
#else
            *newResults->Data(member, v) = data;
            *newResults->MinResult(member, v) = result;
            *newResults->Index(member, v) = 1;
#endif
        } else {
#if 1
            float oldResult = *oldResults->MinResult(bestCandidate, v);
            unsigned int index = MAX(*oldResults->Index(member, v), 1) + 1;
            const FireStarterData* oldData = oldResults->Data(bestCandidate, v);
            newResults->InitResult(member, v, index, FIRESTARTER_REGISTERS, oldResult, oldData);
#else
            *newResults->Data(member, v) = *oldResults->Data(bestCandidate, v);
            *newResults->MinResult(member, v) = *oldResults->MinResult(bestCandidate, v);
            *newResults->Index(member, v) = MAX(*oldResults->Index(member, v), 1) + 1;
#endif
        }
    }
    if (!member && !v)
        newResults->Init(settings);
} // Optimizer
