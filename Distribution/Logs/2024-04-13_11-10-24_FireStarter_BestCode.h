#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
// Run date: 04/13/24 11:10:24 Pacific Daylight Time
// Run duration = 300.801388 seconds
// Run generation = 214
// Run evolution = 6
// Run max result = 0.00000191
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

// Variation: 0  result = 0.00000119
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.497559f;
    data->d[1] = 0.577027f;
    data->d[2] = 1.725323f;
    data->d[3] = -1.179421f;
    data->d[4] = 1.840704f;
    data->d[5] = -2.067305f;
    data->d[6] = -0.500007f;
    data->d[7] = -0.963904f;
    data->d[8] = -1.513339f;
    data->d[9] = 0.025591f;
    data->d[10] = 0.024509f;
    data->d[11] = -1.302355f;
    data->d[12] = -0.745895f;
    data->d[13] = 2.507418f;
    data->d[14] = 0.823828f;
    data->d[15] = 0.707303f;
    data->d[16] = -1.308009f;
    data->d[17] = 0.786188f;
    data->d[18] = -1.281332f;
    data->d[19] = -1.716287f;
    data->d[20] = -0.633665f;
    data->d[21] = 0.896649f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation0

// Variation: 1  result = 0.00000191
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 2.205983f;
    data->d[1] = -0.374461f;
    data->d[2] = -1.217164f;
    data->d[3] = -0.414184f;
    data->d[4] = 1.659335f;
    data->d[5] = 2.166671f;
    data->d[6] = -0.378940f;
    data->d[7] = -0.611248f;
    data->d[8] = 0.021507f;
    data->d[9] = 0.364043f;
    data->d[10] = -0.023326f;
    data->d[11] = -1.111979f;
    data->d[12] = 0.615084f;
    data->d[13] = 7.079610f;
    data->d[14] = 1.795040f;
    data->d[15] = -0.309397f;
    data->d[16] = 2.118835f;
    data->d[17] = 1.235686f;
    data->d[18] = 0.545655f;
    data->d[19] = 0.649433f;
    data->d[20] = 2.502350f;
    data->d[21] = 0.349272f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000002f;
} // LoadVariation1

// Variation: 2  result = 0.00000095
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.641621f;
    data->d[1] = 0.332056f;
    data->d[2] = 1.916010f;
    data->d[3] = -1.127305f;
    data->d[4] = 0.659388f;
    data->d[5] = -1.222863f;
    data->d[6] = -0.969364f;
    data->d[7] = 1.669389f;
    data->d[8] = -0.902537f;
    data->d[9] = 5.032470f;
    data->d[10] = 1.001668f;
    data->d[11] = -0.371475f;
    data->d[12] = 36.113998f;
    data->d[13] = 0.006150f;
    data->d[14] = 4.186949f;
    data->d[15] = 0.024960f;
    data->d[16] = 1.173548f;
    data->d[17] = 1.140118f;
    data->d[18] = -0.987944f;
    data->d[19] = 2.062578f;
    data->d[20] = -0.494172f;
    data->d[21] = 1.166106f;
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
    n *= data.d[0];
    n *= data.d[1];
    n += data.d[2];
    n += data.d[3];
    n = data.d[4] += n;
    n = data.d[5] += n;
    n = data.d[6] *= n;
    n *= data.d[7];
    n = data.d[4] *= n;
    n = data.d[8] *= n;
    n *= data.d[9];
    n += data.d[10];
    n = data.d[11] *= n;
    n += data.d[12];
    n *= data.d[11];
    n *= data.d[13];
    n = data.d[14] += n;
    n *= data.d[15];
    n = data.d[14] *= n;
    n *= data.d[16];
    n *= data.d[17];
    n *= data.d[8];
    n += data.d[18];
    n *= data.d[4];
    n = data.d[19] *= n;
    n += data.d[14];
    n *= data.d[20];
    n *= data.d[19];
    n = data.d[6] += n;
    n += data.d[5];
    n += data.d[6];
    n += data.d[21];
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
#if 0
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
#if 0
            newResults->InitResult(member, v, 1, FIRESTARTER_REGISTERS, result, data);
#else
            *newResults->Data(member, v) = data;
            *newResults->MinResult(member, v) = result;
            *newResults->Index(member, v) = 1;
#endif
        } else {
#if 0
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
