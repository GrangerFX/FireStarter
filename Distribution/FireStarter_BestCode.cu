#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
// Run date: 11/08/23 09:54:06 Pacific Standard Time
// Run duration = 6752.678240 seconds
// Run generation = 33
// Run evolution = 34
// Run result = 0.00000334
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

// Variation: 0  result = 0.00000097
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.300563f;
    data->d[1] = -1.565100f;
    data->d[2] = 1.616394f;
    data->d[3] = 1.132528f;
    data->d[4] = 0.533499f;
    data->d[5] = -0.064566f;
    data->d[6] = 0.068896f;
    data->d[7] = -0.067837f;
    data->d[8] = -0.636692f;
    data->d[9] = 1.913879f;
    data->d[10] = -0.212572f;
    data->d[11] = 1.243586f;
    data->d[12] = -0.217715f;
    data->d[13] = -0.764853f;
    data->d[14] = -0.002192f;
    data->d[15] = -5.471460f;
    data->d[16] = 2.274030f;
    data->d[17] = 1.811699f;
    data->d[18] = 1.683481f;
    data->d[19] = 0.248143f;
    data->d[20] = -1.156308f;
    data->d[21] = 0.306041f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation0

// Variation: 1  result = 0.00000262
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.510040f;
    data->d[1] = 0.578023f;
    data->d[2] = 1.076511f;
    data->d[3] = 1.565958f;
    data->d[4] = 0.663098f;
    data->d[5] = -0.004845f;
    data->d[6] = -1.064732f;
    data->d[7] = 0.649839f;
    data->d[8] = -0.865035f;
    data->d[9] = -0.198932f;
    data->d[10] = 1.032272f;
    data->d[11] = 1.467046f;
    data->d[12] = -1.212760f;
    data->d[13] = -0.206483f;
    data->d[14] = -0.115364f;
    data->d[15] = 0.060863f;
    data->d[16] = -6.078557f;
    data->d[17] = 2.723587f;
    data->d[18] = 0.775362f;
    data->d[19] = -0.039743f;
    data->d[20] = -0.617930f;
    data->d[21] = -0.361058f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000003f;
} // LoadVariation1

// Variation: 2  result = 0.00000334
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.933389f;
    data->d[1] = -0.751381f;
    data->d[2] = -1.744696f;
    data->d[3] = -0.341802f;
    data->d[4] = -0.214689f;
    data->d[5] = -0.853018f;
    data->d[6] = 1.046369f;
    data->d[7] = -0.879428f;
    data->d[8] = -1.804621f;
    data->d[9] = 0.589963f;
    data->d[10] = 0.573674f;
    data->d[11] = 1.361159f;
    data->d[12] = 2.251859f;
    data->d[13] = -0.532828f;
    data->d[14] = -7.190316f;
    data->d[15] = 0.005603f;
    data->d[16] = 0.607603f;
    data->d[17] = -1.289995f;
    data->d[18] = 4.517951f;
    data->d[19] = 0.869966f;
    data->d[20] = -1.630402f;
    data->d[21] = 0.105531f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000003f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n *= data.d[0];
    n = data.d[1] += n;
    n = data.d[2] *= n;
    n += data.d[3];
    n = data.d[4] *= n;
    n = data.d[5] += n;
    n += data.d[6];
    n = data.d[7] += n;
    n *= data.d[7];
    n += data.d[8];
    n *= data.d[9];
    n = data.d[10] *= n;
    n *= data.d[5];
    n += data.d[2];
    n = data.d[11] += n;
    n = data.d[1] += n;
    n += data.d[12];
    n *= data.d[13];
    n = data.d[11] *= n;
    n *= data.d[14];
    n *= data.d[15];
    n *= data.d[16];
    n += data.d[10];
    n = data.d[17] += n;
    n *= data.d[11];
    n += data.d[18];
    n *= data.d[4];
    n += data.d[1];
    n += data.d[19];
    n *= data.d[17];
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
