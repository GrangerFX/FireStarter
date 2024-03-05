#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
// Run date: 03/05/24 11:22:05 Pacific Standard Time
// Run duration = 3355.252201 seconds
// Run generation = 304
// Run evolution = 10
// Run max result = 0.00001426
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
// Run tests = 0
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

// Variation: 0  result = 0.00001425
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.349208f;
    data->d[1] = 0.790240f;
    data->d[2] = 0.077183f;
    data->d[3] = -0.336839f;
    data->d[4] = -0.009675f;
    data->d[5] = -0.004540f;
    data->d[6] = -0.531514f;
    data->d[7] = -6.582896f;
    data->d[8] = 6.304242f;
    data->d[9] = -1.320193f;
    data->d[10] = -0.407148f;
    data->d[11] = 1.199725f;
    data->d[12] = -0.571854f;
    data->d[13] = 0.148333f;
    data->d[14] = 1.949529f;
    data->d[15] = -0.289222f;
    data->d[16] = 0.492603f;
    data->d[17] = 0.826165f;
    data->d[18] = -0.761611f;
    data->d[19] = 1.309152f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000014f;
} // LoadVariation0

// Variation: 1  result = 0.00001061
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.483202f;
    data->d[1] = 0.346722f;
    data->d[2] = 0.237065f;
    data->d[3] = 0.751754f;
    data->d[4] = 1.265789f;
    data->d[5] = -1.330636f;
    data->d[6] = -1.946134f;
    data->d[7] = -1.217509f;
    data->d[8] = -2.478453f;
    data->d[9] = 0.918070f;
    data->d[10] = -0.745176f;
    data->d[11] = 0.006357f;
    data->d[12] = 1.960834f;
    data->d[13] = -0.997257f;
    data->d[14] = 1.196488f;
    data->d[15] = -1.537401f;
    data->d[16] = 1.759989f;
    data->d[17] = -1.693106f;
    data->d[18] = -0.076298f;
    data->d[19] = 0.220727f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000011f;
} // LoadVariation1

// Variation: 2  result = 0.00001426
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.687606f;
    data->d[1] = 0.357588f;
    data->d[2] = -0.230551f;
    data->d[3] = 1.953818f;
    data->d[4] = -1.387007f;
    data->d[5] = 1.430721f;
    data->d[6] = 1.170789f;
    data->d[7] = -0.309747f;
    data->d[8] = -1.105448f;
    data->d[9] = -0.286103f;
    data->d[10] = -0.533738f;
    data->d[11] = -1.076020f;
    data->d[12] = 0.997018f;
    data->d[13] = -0.023000f;
    data->d[14] = -2.983646f;
    data->d[15] = 2.629513f;
    data->d[16] = -2.216792f;
    data->d[17] = 3.031765f;
    data->d[18] = -0.014307f;
    data->d[19] = 0.072761f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000014f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n += data.d[0];
    n = data.d[1] *= n;
    n = data.d[2] *= n;
    n *= data.d[3];
    n = data.d[4] += n;
    n = data.d[5] += n;
    n = data.d[6] *= n;
    n *= data.d[7];
    n += data.d[8];
    n *= data.d[9];
    n *= data.d[6];
    n *= data.d[5];
    n = data.d[10] += n;
    n = data.d[1] += n;
    n = data.d[10] *= n;
    n = data.d[4] *= n;
    n *= data.d[11];
    n = data.d[12] += n;
    n += data.d[13];
    n *= data.d[10];
    n *= data.d[1];
    n = data.d[2] += n;
    n += data.d[2];
    n += data.d[12];
    n = data.d[14] *= n;
    n *= data.d[15];
    n *= data.d[16];
    n += data.d[17];
    n *= data.d[18];
    n *= data.d[19];
    n += data.d[4];
    n *= data.d[14];
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
