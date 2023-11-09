#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
// Run date: 11/09/23 08:55:09 Pacific Standard Time
// Run duration = 1299.240515 seconds
// Run generation = 0
// Run evolution = 0
// Run result = 0.00000072
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 1
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 64

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

// Variation: 0  result = 0.00000018
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141592f;
    data->d[1] = -0.247003f;
    data->d[2] = 2.121958f;
    data->d[3] = -2.417218f;
    data->d[4] = 1.549278f;
    data->d[5] = 2.191301f;
    data->d[6] = -0.004873f;
    data->d[7] = 3.554881f;
    data->d[8] = 1.245377f;
    data->d[9] = 0.223628f;
    data->d[10] = -1.618269f;
    data->d[11] = -1.121950f;
    data->d[12] = -3.781864f;
    data->d[13] = -0.498514f;
    data->d[14] = 0.866495f;
    data->d[15] = -0.650020f;
    data->d[16] = 1.900616f;
    data->d[17] = 0.000000f;
    data->d[18] = 0.910596f;
    data->d[19] = -2.064490f;
    data->d[20] = -0.082630f;
    data->d[21] = 0.082629f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000048
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090661f;
    data->d[1] = 4.491752f;
    data->d[2] = -0.215765f;
    data->d[3] = -2.290512f;
    data->d[4] = 1.778773f;
    data->d[5] = 0.681228f;
    data->d[6] = 0.915674f;
    data->d[7] = -0.010471f;
    data->d[8] = 2.567799f;
    data->d[9] = 0.989322f;
    data->d[10] = -0.066199f;
    data->d[11] = -1.139543f;
    data->d[12] = -0.141187f;
    data->d[13] = -1.650522f;
    data->d[14] = -0.805971f;
    data->d[15] = -0.112546f;
    data->d[16] = -0.610411f;
    data->d[17] = 0.000005f;
    data->d[18] = 0.836649f;
    data->d[19] = 0.021428f;
    data->d[20] = 1.606030f;
    data->d[21] = -1.724162f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000072
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617992f;
    data->d[1] = 0.686469f;
    data->d[2] = -1.760148f;
    data->d[3] = 2.241105f;
    data->d[4] = -2.549839f;
    data->d[5] = 1.327786f;
    data->d[6] = -1.598202f;
    data->d[7] = -0.020662f;
    data->d[8] = 0.974434f;
    data->d[9] = 0.441140f;
    data->d[10] = 0.167139f;
    data->d[11] = 2.920715f;
    data->d[12] = 1.734688f;
    data->d[13] = 0.461400f;
    data->d[14] = 0.055183f;
    data->d[15] = 0.672137f;
    data->d[16] = -1.490999f;
    data->d[17] = 0.000002f;
    data->d[18] = -0.491613f;
    data->d[19] = 0.026242f;
    data->d[20] = -1.679734f;
    data->d[21] = 2.203331f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n += data.d[0];
    n = data.d[1] *= n;
    n = data.d[2] *= n;
    n *= data.d[2];
    n += data.d[3];
    n = data.d[4] *= n;
    n += data.d[5];
    n *= data.d[6];
    n *= data.d[7];
    n += data.d[8];
    n = data.d[9] *= n;
    n *= data.d[10];
    n = data.d[11] += n;
    n *= data.d[11];
    n *= data.d[12];
    n *= data.d[9];
    n = data.d[13] *= n;
    n *= data.d[14];
    n = data.d[15] += n;
    n = data.d[16] *= n;
    n *= data.d[1];
    n = data.d[17] += n;
    n *= data.d[18];
    n = data.d[15] *= n;
    n *= data.d[17];
    n += data.d[4];
    n *= data.d[19];
    n += data.d[13];
    n *= data.d[15];
    n *= data.d[16];
    n += data.d[20];
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
