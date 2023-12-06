#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
// Run date: 12/05/23 10:33:41 Pacific Standard Time
// Run duration = 1545.982763 seconds
// Run generation = 4
// Run evolution = 5
// Run max result = 0.00001648
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

// Variation: 0  result = 0.00001648
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.342810f;
    data->d[1] = 1.076971f;
    data->d[2] = 0.199115f;
    data->d[3] = 0.361997f;
    data->d[4] = -2.738328f;
    data->d[5] = 0.000001f;
    data->d[6] = -1.179944f;
    data->d[7] = -1.450678f;
    data->d[8] = -2.043823f;
    data->d[9] = -2.097014f;
    data->d[10] = 1.945449f;
    data->d[11] = 0.119658f;
    data->d[12] = 2.461248f;
    data->d[13] = -1.049476f;
    data->d[14] = -0.015157f;
    data->d[15] = 1.489344f;
    data->d[16] = -4.002879f;
    data->d[17] = 5.003083f;
    data->d[18] = -0.007517f;
    data->d[19] = -0.213756f;
    data->d[20] = 0.263365f;
    data->d[21] = 0.018827f;
    data->d[22] = -0.472687f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000016f;
} // LoadVariation0

// Variation: 1  result = 0.00000691
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.640159f;
    data->d[1] = 1.978564f;
    data->d[2] = 3.688755f;
    data->d[3] = -0.059500f;
    data->d[4] = 2.379754f;
    data->d[5] = 0.000094f;
    data->d[6] = 0.163727f;
    data->d[7] = 0.054624f;
    data->d[8] = 1.281717f;
    data->d[9] = -1.982635f;
    data->d[10] = -1.691753f;
    data->d[11] = -2.201128f;
    data->d[12] = 0.531672f;
    data->d[13] = -1.861237f;
    data->d[14] = -0.073729f;
    data->d[15] = 2.342549f;
    data->d[16] = 0.018618f;
    data->d[17] = -0.224338f;
    data->d[18] = -0.140943f;
    data->d[19] = 1.756466f;
    data->d[20] = 2.157747f;
    data->d[21] = 0.490268f;
    data->d[22] = 0.451436f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000007f;
} // LoadVariation1

// Variation: 2  result = 0.00000904
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.486390f;
    data->d[1] = -1.273354f;
    data->d[2] = -3.368603f;
    data->d[3] = 1.745434f;
    data->d[4] = -1.836378f;
    data->d[5] = -0.000518f;
    data->d[6] = 0.800390f;
    data->d[7] = 0.219883f;
    data->d[8] = -2.974894f;
    data->d[9] = -1.107921f;
    data->d[10] = 0.556247f;
    data->d[11] = 0.536189f;
    data->d[12] = -0.082930f;
    data->d[13] = -1.114062f;
    data->d[14] = -1.289471f;
    data->d[15] = -0.967185f;
    data->d[16] = -1.911236f;
    data->d[17] = 0.214040f;
    data->d[18] = -0.069732f;
    data->d[19] = -2.014712f;
    data->d[20] = 0.993440f;
    data->d[21] = -2.468651f;
    data->d[22] = -1.519754f;
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
    n = data.d[1] += n;
    n *= data.d[2];
    n *= data.d[3];
    n = data.d[4] *= n;
    n += data.d[5];
    n *= data.d[1];
    n += data.d[6];
    n = data.d[7] *= n;
    n += data.d[8];
    n = data.d[9] *= n;
    n += data.d[7];
    n = data.d[10] *= n;
    n *= data.d[11];
    n *= data.d[10];
    n = data.d[12] *= n;
    n = data.d[13] *= n;
    n *= data.d[14];
    n = data.d[15] += n;
    n *= data.d[16];
    n = data.d[17] *= n;
    n += data.d[15];
    n *= data.d[4];
    n *= data.d[17];
    n *= data.d[9];
    n *= data.d[12];
    n *= data.d[13];
    n += data.d[18];
    n *= data.d[19];
    n *= data.d[20];
    n *= data.d[21];
    n *= data.d[22];
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
