#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
// Run date: 08/26/23 10:00:41 Pacific Daylight Time
// Run duration = 582.856399 seconds
// Run generation = 0
// Run evolution = 0
// Run result = 0.00000936
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_RANDOM
// Run evolveSeed = 1874
// Run optimizeSeed = 0
// Run seeds = 11000
// Run tests = 0
// Run units = 8
// Run processes = 16
// Run population = 278528
// Run iterations = 256
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

// Variation: 0  result = 0.00000376
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.927899f;
    data->d[1] = 2.915082f;
    data->d[2] = 0.888453f;
    data->d[3] = -0.000003f;
    data->d[4] = -1.114444f;
    data->d[5] = 0.023177f;
    data->d[6] = 0.173257f;
    data->d[7] = -2.466618f;
    data->d[8] = -1.964936f;
    data->d[9] = -0.733203f;
    data->d[10] = 2.587921f;
    data->d[11] = -1.033833f;
    data->d[12] = 0.016914f;
    data->d[13] = 1.293343f;
    data->d[14] = -0.911931f;
    data->d[15] = 0.913313f;
    data->d[16] = 0.896025f;
    data->d[17] = 1.084206f;
    data->d[18] = 0.192414f;
    data->d[19] = -0.481991f;
    data->d[20] = 1.554120f;
    data->d[21] = -0.000003f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000004f;
} // LoadVariation0

// Variation: 1  result = 0.00000799
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.599177f;
    data->d[1] = 1.851836f;
    data->d[2] = -0.093730f;
    data->d[3] = -0.000002f;
    data->d[4] = 3.697182f;
    data->d[5] = -1.606121f;
    data->d[6] = 0.544805f;
    data->d[7] = 1.692807f;
    data->d[8] = -0.577558f;
    data->d[9] = -0.598380f;
    data->d[10] = 1.060830f;
    data->d[11] = -0.423003f;
    data->d[12] = 0.855313f;
    data->d[13] = 1.938060f;
    data->d[14] = 0.170481f;
    data->d[15] = 1.092492f;
    data->d[16] = 1.802227f;
    data->d[17] = -3.260905f;
    data->d[18] = -0.182901f;
    data->d[19] = 0.254482f;
    data->d[20] = 0.692429f;
    data->d[21] = -0.118103f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000008f;
} // LoadVariation1

// Variation: 2  result = 0.00000936
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.596212f;
    data->d[1] = -1.560885f;
    data->d[2] = -1.799314f;
    data->d[3] = -0.000016f;
    data->d[4] = 0.980860f;
    data->d[5] = 0.357564f;
    data->d[6] = -2.011361f;
    data->d[7] = 0.128039f;
    data->d[8] = 0.717600f;
    data->d[9] = -0.226836f;
    data->d[10] = -2.735838f;
    data->d[11] = 0.211463f;
    data->d[12] = 0.012033f;
    data->d[13] = -1.002095f;
    data->d[14] = -1.246417f;
    data->d[15] = -1.637352f;
    data->d[16] = -1.553569f;
    data->d[17] = -1.228277f;
    data->d[18] = 0.490468f;
    data->d[19] = -1.735493f;
    data->d[20] = -0.533291f;
    data->d[21] = 0.523589f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000009f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n *= data.d[0];
    n += data.d[1];
    n = data.d[2] *= n;
    n = data.d[3] += n;
    n *= data.d[4];
    n *= data.d[3];
    n *= data.d[5];
    n += data.d[6];
    n = data.d[7] *= n;
    n = data.d[7] += n;
    n = data.d[8] *= n;
    n += data.d[9];
    n *= data.d[10];
    n += data.d[11];
    n = data.d[12] *= n;
    n *= data.d[13];
    n *= data.d[14];
    n += data.d[15];
    n = data.d[12] *= n;
    n = data.d[16] += n;
    n *= data.d[12];
    n *= data.d[16];
    n = data.d[17] += n;
    n *= data.d[18];
    n *= data.d[17];
    n *= data.d[7];
    n = data.d[19] += n;
    n *= data.d[2];
    n *= data.d[8];
    n *= data.d[20];
    n *= data.d[19];
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

GPU_GLOBAL void Optimizer(const FireStarterSettings settings, FireStarterPopulation* newResults, FireStarterPopulation* oldResults, const unsigned int v, const unsigned int firstMember, const unsigned int lastMember, const unsigned int dataSize, const unsigned long long generationSeed, const unsigned int initData)
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
    unsigned long long memberSeed = RANDOM(RANDOM(generationSeed) + member);
    FireStarterData data;
    unsigned long long seed = RANDOM(memberSeed + v); // Unique seed for the generation/member/variation
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
