#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
// Run date: 11/28/23 11:05:04 Pacific Standard Time
// Run duration = 1378.627481 seconds
// Run generation = 25
// Run evolution = 9
// Run max result = 0.00000021
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 2
// Run optimizeSeed = 2
// Run tests = 1
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
// Run optimize = 8

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.116037f;
    data->d[1] = 0.364541f;
    data->d[2] = 2.652401f;
    data->d[3] = 0.828797f;
    data->d[4] = -1.406518f;
    data->d[5] = -0.458659f;
    data->d[6] = -0.943002f;
    data->d[7] = 0.000462f;
    data->d[8] = 0.085703f;
    data->d[9] = -2.253889f;
    data->d[10] = 0.117224f;
    data->d[11] = -0.055409f;
    data->d[12] = 0.004344f;
    data->d[13] = 1.491618f;
    data->d[14] = -0.670413f;
    data->d[15] = -3.905088f;
    data->d[16] = 2.686446f;
    data->d[17] = 0.364541f;
    data->d[18] = 0.000000f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
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
    data->d[0] = -0.319368f;
    data->d[1] = 0.987056f;
    data->d[2] = -1.615973f;
    data->d[3] = -0.711407f;
    data->d[4] = -1.901555f;
    data->d[5] = -1.513465f;
    data->d[6] = -0.167571f;
    data->d[7] = 0.010179f;
    data->d[8] = 1.699749f;
    data->d[9] = -5.700384f;
    data->d[10] = 0.000000f;
    data->d[11] = 0.072993f;
    data->d[12] = 0.157466f;
    data->d[13] = -1.103566f;
    data->d[14] = 0.046930f;
    data->d[15] = -3.157331f;
    data->d[16] = 1.880887f;
    data->d[17] = 0.868925f;
    data->d[18] = 0.000000f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000021
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.327150f;
    data->d[1] = 0.856478f;
    data->d[2] = -4.044957f;
    data->d[3] = -0.909030f;
    data->d[4] = -0.378929f;
    data->d[5] = -0.677212f;
    data->d[6] = -0.049392f;
    data->d[7] = 0.043642f;
    data->d[8] = 1.477806f;
    data->d[9] = 0.097192f;
    data->d[10] = 9.488643f;
    data->d[11] = 0.131465f;
    data->d[12] = -1.490108f;
    data->d[13] = 3.068333f;
    data->d[14] = -0.325912f;
    data->d[15] = -2.741817f;
    data->d[16] = 2.533156f;
    data->d[17] = 1.380077f;
    data->d[18] = 0.000000f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
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
    n = data.d[0] *= n;
    n = data.d[1] += n;
    n *= data.d[2];
    n *= data.d[3];
    n = data.d[4] *= n;
    n *= data.d[4];
    n = data.d[5] += n;
    n = data.d[6] *= n;
    n = data.d[6] += n;
    n = data.d[7] *= n;
    n += data.d[7];
    n = data.d[8] += n;
    n = data.d[6] *= n;
    n += data.d[9];
    n *= data.d[5];
    n *= data.d[10];
    n = data.d[11] += n;
    n = data.d[11] *= n;
    n += data.d[12];
    n += data.d[6];
    n += data.d[8];
    n *= data.d[13];
    n *= data.d[14];
    n = data.d[11] += n;
    n += data.d[15];
    n = data.d[11] *= n;
    n = data.d[16] += n;
    n *= data.d[1];
    n *= data.d[11];
    n *= data.d[16];
    n += data.d[0];
    n += data.d[17];
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
