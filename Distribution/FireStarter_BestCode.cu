#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
// Run date: 08/26/23 09:43:06 Pacific Daylight Time
// Run duration = 13.666327 seconds
// Run generation = 17
// Run evolution = 1
// Run result = 0.00388092
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_UNIT
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 0
// Run units = 1
// Run processes = 0
// Run population = 69632
// Run iterations = 256
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

// Variation: 0  result = 0.00081563
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.398114f;
    data->d[1] = -0.115157f;
    data->d[2] = -0.185123f;
    data->d[3] = -0.359408f;
    data->d[4] = -0.082197f;
    data->d[5] = -1.314050f;
    data->d[6] = 0.911794f;
    data->d[7] = -0.863516f;
    data->d[8] = 0.633489f;
    data->d[9] = -51.799675f;
    data->d[10] = 12.800236f;
    data->d[11] = -11.859115f;
    data->d[12] = -10.065188f;
    data->d[13] = -0.632553f;
    data->d[14] = 14.759351f;
    data->d[15] = 384.809998f;
    data->d[16] = 5.492847f;
    data->d[17] = -8.074167f;
    data->d[18] = -0.353787f;
    data->d[19] = -0.000816f;
    data->d[20] = -3.193208f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000816f;
} // LoadVariation0

// Variation: 1  result = 0.00388092
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.024079f;
    data->d[1] = 1.185038f;
    data->d[2] = -1.657755f;
    data->d[3] = -1.563135f;
    data->d[4] = -5.417448f;
    data->d[5] = 0.084755f;
    data->d[6] = -0.772342f;
    data->d[7] = -0.061285f;
    data->d[8] = -42.483006f;
    data->d[9] = 5.618357f;
    data->d[10] = -3.374776f;
    data->d[11] = -52.873001f;
    data->d[12] = -92.551315f;
    data->d[13] = -0.295135f;
    data->d[14] = 0.139224f;
    data->d[15] = 4.252276f;
    data->d[16] = -0.440423f;
    data->d[17] = -2.162585f;
    data->d[18] = 2.441339f;
    data->d[19] = 0.848393f;
    data->d[20] = 0.902812f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.003881f;
} // LoadVariation1

// Variation: 2  result = 0.00204578
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.194034f;
    data->d[1] = -0.056845f;
    data->d[2] = 0.530132f;
    data->d[3] = -0.839918f;
    data->d[4] = -0.006767f;
    data->d[5] = 0.254137f;
    data->d[6] = 20.877785f;
    data->d[7] = -0.455201f;
    data->d[8] = 2.411210f;
    data->d[9] = -7184.263672f;
    data->d[10] = 56.693275f;
    data->d[11] = -19.488693f;
    data->d[12] = 16.659573f;
    data->d[13] = -75.114227f;
    data->d[14] = 21.014175f;
    data->d[15] = 463.679321f;
    data->d[16] = 4.216392f;
    data->d[17] = 4.473566f;
    data->d[18] = 0.831091f;
    data->d[19] = -0.002046f;
    data->d[20] = 0.106493f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.002046f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n = data.d[0] *= n;
    n = data.d[1] *= n;
    n = data.d[2] *= n;
    n = data.d[3] *= n;
    n *= data.d[4];
    n *= data.d[5];
    n *= data.d[6];
    n *= data.d[7];
    n = data.d[8] *= n;
    n *= data.d[9];
    n += data.d[10];
    n = data.d[2] *= n;
    n *= data.d[11];
    n *= data.d[1];
    n = data.d[2] *= n;
    n = data.d[12] += n;
    n += data.d[13];
    n += data.d[3];
    n += data.d[12];
    n *= data.d[14];
    n *= data.d[0];
    n += data.d[15];
    n = data.d[8] *= n;
    n = data.d[16] *= n;
    n = data.d[17] *= n;
    n *= data.d[16];
    n = data.d[2] += n;
    n *= data.d[8];
    n += data.d[2];
    n += data.d[17];
    n *= data.d[18];
    n += data.d[19];
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
