#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
// Run date: 08/13/23 07:53:17 Pacific Daylight Time
// Run duration = 848.502431 seconds
// Run generation = 57
// Run evolution = 13
// Run result = 0.00000006
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
// Run seeds = 64
// Run tests = 0
// Run units = 1
// Run processes = 0
// Run population = 278528
// Run iterations = 64
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.010152f;
    data->d[1] = -0.031894f;
    data->d[2] = -0.416130f;
    data->d[3] = 70352.851562f;
    data->d[4] = 0.364725f;
    data->d[5] = -1.373427f;
    data->d[6] = -2.141976f;
    data->d[7] = -0.006845f;
    data->d[8] = 4.405323f;
    data->d[9] = -2.055488f;
    data->d[10] = 0.044227f;
    data->d[11] = -0.918145f;
    data->d[12] = -4.168679f;
    data->d[13] = -0.330726f;
    data->d[14] = 0.296056f;
    data->d[15] = -1.726121f;
    data->d[16] = 0.447535f;
    data->d[17] = -0.444554f;
    data->d[18] = 0.559892f;
    data->d[19] = -0.318316f;
    data->d[20] = 0.460861f;
    data->d[21] = 0.402547f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000006
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.104201f;
    data->d[1] = -0.322051f;
    data->d[2] = 0.190173f;
    data->d[3] = -2429.714111f;
    data->d[4] = -0.429134f;
    data->d[5] = -1.604942f;
    data->d[6] = -0.012524f;
    data->d[7] = -0.439678f;
    data->d[8] = 4.694309f;
    data->d[9] = 1.765701f;
    data->d[10] = 0.004186f;
    data->d[11] = 0.083560f;
    data->d[12] = -0.894732f;
    data->d[13] = 1.387141f;
    data->d[14] = -3.255611f;
    data->d[15] = -1.483478f;
    data->d[16] = 1.430473f;
    data->d[17] = -0.237619f;
    data->d[18] = 0.475605f;
    data->d[19] = -0.247423f;
    data->d[20] = 0.737726f;
    data->d[21] = -0.378388f;
    data->d[22] = -0.118132f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000006
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.040093f;
    data->d[1] = -0.104963f;
    data->d[2] = -0.472301f;
    data->d[3] = 0.033967f;
    data->d[4] = -127216.335938f;
    data->d[5] = 8.487762f;
    data->d[6] = -0.127091f;
    data->d[7] = -0.294444f;
    data->d[8] = -3.813827f;
    data->d[9] = -4.661991f;
    data->d[10] = -0.003216f;
    data->d[11] = -1.336991f;
    data->d[12] = 0.556319f;
    data->d[13] = -5.416247f;
    data->d[14] = -0.237555f;
    data->d[15] = -0.242255f;
    data->d[16] = 0.468199f;
    data->d[17] = -0.372291f;
    data->d[18] = -0.144624f;
    data->d[19] = 0.023672f;
    data->d[20] = -1.597550f;
    data->d[21] = 0.238990f;
    data->d[22] = 0.523599f;
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
    n *= data.d[0];
    n += data.d[1];
    n = data.d[2] *= n;
    n *= data.d[3];
    n = data.d[4] *= n;
    n *= data.d[2];
    n = data.d[5] += n;
    n *= data.d[6];
    n = data.d[7] *= n;
    n *= data.d[8];
    n = data.d[5] += n;
    n += data.d[9];
    n *= data.d[10];
    n = data.d[11] += n;
    n += data.d[12];
    n *= data.d[13];
    n *= data.d[7];
    n *= data.d[14];
    n *= data.d[15];
    n = data.d[16] += n;
    n = data.d[17] *= n;
    n = data.d[16] *= n;
    n += data.d[11];
    n *= data.d[17];
    n *= data.d[5];
    n *= data.d[18];
    n += data.d[19];
    n *= data.d[16];
    n *= data.d[20];
    n *= data.d[4];
    n *= data.d[21];
    n += data.d[22];
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

    // If the result was worse, copy from a member with better resulOptimizeGenerationss.
    if (initData || (result < oldResult)) {
        // Save better results.
        *newResults->Data(member, v) = data;
        *newResults->MinResult(member, v) = result;
        *newResults->Index(member, v) = 0;
        *newResults->Debug(member, v) = initData ? 1 : *oldResults->Debug(member, v) + 1;
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
