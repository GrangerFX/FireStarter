#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
// Run date: 07/26/23 08:57:32 Pacific Daylight Time
// Run duration = 61.234052 seconds
// Run generation = 3
// Run evolution = 0
// Run result = 0.00019151
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 64
// Run units = 8
// Run processes = 8
// Run population = 278528
// Run iterations = 64
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

// Variation: 0  result = 0.00017762
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.049633f;
    data->d[1] = 2.528497f;
    data->d[2] = 0.619949f;
    data->d[3] = 2.090068f;
    data->d[4] = -0.409778f;
    data->d[5] = 0.064530f;
    data->d[6] = 1.820198f;
    data->d[7] = 0.198904f;
    data->d[8] = 1.079961f;
    data->d[9] = 1.626956f;
    data->d[10] = -1.533757f;
    data->d[11] = -0.458636f;
    data->d[12] = 0.543058f;
    data->d[13] = -1.451851f;
    data->d[14] = 1.236801f;
    data->d[15] = -0.244607f;
    data->d[16] = 0.884264f;
    data->d[17] = 1.259797f;
    data->d[18] = -0.168823f;
    data->d[19] = 6.022429f;
    data->d[20] = -0.767839f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000178f;
} // LoadVariation0

// Variation: 1  result = 0.00016224
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.827944f;
    data->d[1] = 0.904621f;
    data->d[2] = 0.373090f;
    data->d[3] = 0.444235f;
    data->d[4] = -2.060463f;
    data->d[5] = -0.053217f;
    data->d[6] = -1.170609f;
    data->d[7] = -0.070629f;
    data->d[8] = 1.072690f;
    data->d[9] = 1.331821f;
    data->d[10] = 2.677189f;
    data->d[11] = -0.403565f;
    data->d[12] = -0.213335f;
    data->d[13] = 1.733918f;
    data->d[14] = -0.620674f;
    data->d[15] = 0.251275f;
    data->d[16] = 1.128626f;
    data->d[17] = -1.054520f;
    data->d[18] = -0.046064f;
    data->d[19] = 1.674288f;
    data->d[20] = -0.078242f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000162f;
} // LoadVariation1

// Variation: 2  result = 0.00019151
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.129835f;
    data->d[1] = -0.928325f;
    data->d[2] = 0.179763f;
    data->d[3] = 0.382790f;
    data->d[4] = -0.494019f;
    data->d[5] = 0.492707f;
    data->d[6] = 0.160996f;
    data->d[7] = -0.676012f;
    data->d[8] = -1.872542f;
    data->d[9] = -1.120865f;
    data->d[10] = 0.248173f;
    data->d[11] = 0.064757f;
    data->d[12] = 0.044344f;
    data->d[13] = -0.702867f;
    data->d[14] = -0.383683f;
    data->d[15] = -0.813498f;
    data->d[16] = 0.638020f;
    data->d[17] = 17.646595f;
    data->d[18] = 0.546570f;
    data->d[19] = 3.976058f;
    data->d[20] = 0.978908f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000192f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n = data.d[0] += n;
    n = data.d[1] += n;
    n *= data.d[2];
    n += data.d[3];
    n *= data.d[4];
    n = data.d[5] *= n;
    n *= data.d[1];
    n = data.d[6] += n;
    n += data.d[5];
    n *= data.d[7];
    n = data.d[8] += n;
    n = data.d[9] *= n;
    n += data.d[10];
    n *= data.d[8];
    n = data.d[9] += n;
    n = data.d[11] *= n;
    n += data.d[9];
    n = data.d[6] *= n;
    n *= data.d[12];
    n += data.d[13];
    n *= data.d[11];
    n *= data.d[14];
    n = data.d[15] *= n;
    n *= data.d[0];
    n = data.d[15] += n;
    n += data.d[16];
    n += data.d[17];
    n *= data.d[15];
    n *= data.d[6];
    n *= data.d[18];
    n *= data.d[19];
    n += data.d[20];
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

GPU_GLOBAL void Optimizer(const FireStarterSettings settings, FireStarterPopulation* newResults, FireStarterPopulation* oldResults, const unsigned int v, const unsigned int firstMember, const unsigned int lastMember, const unsigned int dataSize, const unsigned long long generationSeed, const unsigned int init)
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

    if (init) {
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

    // If the result was worse, copy from a member with better resulOptimizeGenerationss.
    if (init || (result < oldResult)) {
        // Save better results.
        *newResults->Data(member, v) = data;
        *newResults->MinResult(member, v) = result;
        *newResults->Index(member, v) = 0;
        *newResults->Debug(member, v) = init ? 1 : *oldResults->Debug(member, v) + 1;
    } else {
        // Copy a result from among the previous generation's results.
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
