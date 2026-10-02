#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
// Run date: 12/17/23 18:14:02 Pacific Standard Time
// Run duration = 2297.526317 seconds
// Run generation = 1
// Run evolution = 1
// Run max result = 0.00006342
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
// Run tests = 1
// Run states = 64
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

// Variation: 0  result = 0.00001520
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.458901f;
    data->d[1] = 1.441669f;
    data->d[2] = 0.036022f;
    data->d[3] = -0.018428f;
    data->d[4] = 0.035232f;
    data->d[5] = -1.767332f;
    data->d[6] = 0.200782f;
    data->d[7] = -1.303466f;
    data->d[8] = -0.771161f;
    data->d[9] = 5.012894f;
    data->d[10] = -0.950584f;
    data->d[11] = 0.353579f;
    data->d[12] = 0.509119f;
    data->d[13] = -1.647205f;
    data->d[14] = -586.919250f;
    data->d[15] = 0.689612f;
    data->d[16] = 1.934952f;
    data->d[17] = -0.003596f;
    data->d[18] = -0.273514f;
    data->d[19] = -0.263748f;
    data->d[20] = -0.867126f;
    data->d[21] = 0.087453f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000015f;
} // LoadVariation0

// Variation: 1  result = 0.00006342
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.193007f;
    data->d[1] = 1.606460f;
    data->d[2] = -0.751993f;
    data->d[3] = 0.002951f;
    data->d[4] = -1.788672f;
    data->d[5] = -0.533179f;
    data->d[6] = -1.421290f;
    data->d[7] = 1.872104f;
    data->d[8] = 0.228989f;
    data->d[9] = 0.473991f;
    data->d[10] = 0.080357f;
    data->d[11] = 2.408326f;
    data->d[12] = 5.406600f;
    data->d[13] = 0.348934f;
    data->d[14] = -2.416733f;
    data->d[15] = -3.527466f;
    data->d[16] = -4.064031f;
    data->d[17] = -0.040540f;
    data->d[18] = -1.900635f;
    data->d[19] = 0.674822f;
    data->d[20] = -0.338834f;
    data->d[21] = 1.920559f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000063f;
} // LoadVariation1

// Variation: 2  result = 0.00005585
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.831406f;
    data->d[1] = 2.176651f;
    data->d[2] = -0.001270f;
    data->d[3] = 0.307777f;
    data->d[4] = -0.137713f;
    data->d[5] = -2.959504f;
    data->d[6] = -0.062404f;
    data->d[7] = 1.882746f;
    data->d[8] = 0.033825f;
    data->d[9] = 0.684424f;
    data->d[10] = 1.722880f;
    data->d[11] = -1.832881f;
    data->d[12] = 2.362309f;
    data->d[13] = 3.834563f;
    data->d[14] = 6.240067f;
    data->d[15] = 2.154388f;
    data->d[16] = -0.188707f;
    data->d[17] = -2.195523f;
    data->d[18] = -0.532537f;
    data->d[19] = -0.773491f;
    data->d[20] = -0.942486f;
    data->d[21] = 0.614278f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000056f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n *= data.d[0];
    n = data.d[1] += n;
    n *= data.d[2];
    n *= data.d[3];
    n = data.d[4] *= n;
    n += data.d[5];
    n = data.d[1] *= n;
    n *= data.d[1];
    n *= data.d[6];
    n += data.d[7];
    n = data.d[8] *= n;
    n = data.d[9] += n;
    n = data.d[10] += n;
    n *= data.d[11];
    n *= data.d[12];
    n = data.d[13] *= n;
    n = data.d[9] *= n;
    n *= data.d[10];
    n = data.d[14] += n;
    n *= data.d[15];
    n = data.d[16] *= n;
    n += data.d[14];
    n *= data.d[4];
    n *= data.d[16];
    n *= data.d[8];
    n *= data.d[13];
    n *= data.d[9];
    n += data.d[17];
    n *= data.d[18];
    n *= data.d[19];
    n *= data.d[20];
    n *= data.d[21];
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
