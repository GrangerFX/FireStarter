#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
// Run date: 03/12/24 10:18:51 Pacific Daylight Time
// Run duration = 32528.157880 seconds
// Run generation = 198
// Run evolution = 16
// Run max result = 0.00000024
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

// Variation: 0  result = 0.00000007
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.341098f;
    data->d[2] = 0.261644f;
    data->d[3] = -3.406425f;
    data->d[4] = -1.578573f;
    data->d[5] = -1.132173f;
    data->d[6] = 0.391928f;
    data->d[7] = -0.000403f;
    data->d[8] = 10.696014f;
    data->d[9] = 0.154227f;
    data->d[10] = 0.286761f;
    data->d[11] = 1.882021f;
    data->d[12] = 0.400184f;
    data->d[13] = 0.552696f;
    data->d[14] = 0.856576f;
    data->d[15] = 1.690859f;
    data->d[16] = 0.060489f;
    data->d[17] = -0.579334f;
    data->d[18] = -1.002835f;
    data->d[19] = -1.302719f;
    data->d[20] = 0.105843f;
    data->d[21] = -0.105843f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000024
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = -0.101808f;
    data->d[2] = -2.991595f;
    data->d[3] = -5.370616f;
    data->d[4] = 6.095873f;
    data->d[5] = 0.062330f;
    data->d[6] = -0.492991f;
    data->d[7] = -0.000055f;
    data->d[8] = -45.389374f;
    data->d[9] = 0.841953f;
    data->d[10] = -1.341281f;
    data->d[11] = 1.766520f;
    data->d[12] = -0.237871f;
    data->d[13] = -0.117967f;
    data->d[14] = -0.688506f;
    data->d[15] = -2.417336f;
    data->d[16] = 3.868320f;
    data->d[17] = 2.214369f;
    data->d[18] = 1.131346f;
    data->d[19] = 1.450071f;
    data->d[20] = -0.151534f;
    data->d[21] = 0.033402f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000024
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -1.048310f;
    data->d[2] = 1.021281f;
    data->d[3] = 0.924897f;
    data->d[4] = 1.394218f;
    data->d[5] = 0.269507f;
    data->d[6] = 0.185810f;
    data->d[7] = -0.598927f;
    data->d[8] = 0.026296f;
    data->d[9] = -1.329346f;
    data->d[10] = 0.230348f;
    data->d[11] = -0.943194f;
    data->d[12] = 0.018675f;
    data->d[13] = -1.871196f;
    data->d[14] = 4.336285f;
    data->d[15] = -1.251874f;
    data->d[16] = -0.103180f;
    data->d[17] = 1.415976f;
    data->d[18] = -0.517586f;
    data->d[19] = -2.300638f;
    data->d[20] = 0.082549f;
    data->d[21] = 0.441049f;
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
    n += data.d[0];
    n = data.d[1] *= n;
    n *= data.d[2];
    n *= data.d[3];
    n *= data.d[4];
    n = data.d[5] *= n;
    n *= data.d[1];
    n = data.d[6] += n;
    n *= data.d[7];
    n = data.d[8] *= n;
    n = data.d[8] += n;
    n = data.d[9] += n;
    n += data.d[6];
    n *= data.d[10];
    n = data.d[11] += n;
    n = data.d[9] += n;
    n *= data.d[9];
    n *= data.d[12];
    n *= data.d[13];
    n = data.d[14] *= n;
    n += data.d[15];
    n = data.d[14] *= n;
    n *= data.d[16];
    n += data.d[17];
    n += data.d[18];
    n += data.d[11];
    n *= data.d[14];
    n *= data.d[19];
    n += data.d[8];
    n *= data.d[5];
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
