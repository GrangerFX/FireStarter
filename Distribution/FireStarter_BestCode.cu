#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
// Run date: 10/07/23 14:47:28 Pacific Daylight Time
// Run duration = 1080.069849 seconds
// Run generation = 34
// Run evolution = 11
// Run result = 0.00000012
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
// Run tests = 2
// Run units = 1
// Run processes = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 5
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
    data->d[0] = -0.672409f;
    data->d[1] = 1.703327f;
    data->d[2] = 0.409108f;
    data->d[3] = -0.583351f;
    data->d[4] = -0.755599f;
    data->d[5] = -0.410075f;
    data->d[6] = -0.155318f;
    data->d[7] = 2.038269f;
    data->d[8] = 0.648244f;
    data->d[9] = 1.557011f;
    data->d[10] = -1.691235f;
    data->d[11] = 1.121164f;
    data->d[12] = 7.562804f;
    data->d[13] = -0.005559f;
    data->d[14] = 1.420780f;
    data->d[15] = -0.916633f;
    data->d[16] = -2.413599f;
    data->d[17] = -2.892650f;
    data->d[18] = 2.689427f;
    data->d[19] = 0.402954f;
    data->d[20] = -1.237548f;
    data->d[21] = -0.078547f;
    data->d[22] = 0.000598f;
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
    data->d[0] = -0.210098f;
    data->d[1] = 0.260265f;
    data->d[2] = 0.389075f;
    data->d[3] = 1.128250f;
    data->d[4] = -2.950629f;
    data->d[5] = 0.382249f;
    data->d[6] = -0.066704f;
    data->d[7] = -1.476026f;
    data->d[8] = 0.021896f;
    data->d[9] = 0.432098f;
    data->d[10] = -0.353756f;
    data->d[11] = 0.233675f;
    data->d[12] = 9.583682f;
    data->d[13] = -0.005212f;
    data->d[14] = -0.261907f;
    data->d[15] = 2.215390f;
    data->d[16] = -2.640942f;
    data->d[17] = -3.427938f;
    data->d[18] = 0.012462f;
    data->d[19] = -0.221307f;
    data->d[20] = -1.146499f;
    data->d[21] = -1.394114f;
    data->d[22] = 0.857473f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000012
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.309729f;
    data->d[1] = -1.896384f;
    data->d[2] = 1.085515f;
    data->d[3] = -0.317944f;
    data->d[4] = 2.794358f;
    data->d[5] = -1.224894f;
    data->d[6] = 0.286339f;
    data->d[7] = 1.852347f;
    data->d[8] = 0.429387f;
    data->d[9] = -2.797787f;
    data->d[10] = -1.615783f;
    data->d[11] = 0.927463f;
    data->d[12] = 0.402164f;
    data->d[13] = 0.081310f;
    data->d[14] = -0.770805f;
    data->d[15] = -1.952801f;
    data->d[16] = 2.413602f;
    data->d[17] = 0.803365f;
    data->d[18] = -1.746372f;
    data->d[19] = 0.464730f;
    data->d[20] = 1.171787f;
    data->d[21] = 0.772738f;
    data->d[22] = 1.085710f;
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
    n = data.d[1] += n;
    n += data.d[2];
    n = data.d[3] *= n;
    n = data.d[4] *= n;
    n *= data.d[3];
    n = data.d[5] *= n;
    n *= data.d[6];
    n = data.d[7] += n;
    n += data.d[8];
    n *= data.d[9];
    n *= data.d[5];
    n = data.d[10] += n;
    n = data.d[11] += n;
    n += data.d[11];
    n *= data.d[12];
    n *= data.d[7];
    n *= data.d[13];
    n = data.d[14] += n;
    n = data.d[15] *= n;
    n += data.d[16];
    n *= data.d[17];
    n *= data.d[15];
    n += data.d[18];
    n *= data.d[10];
    n *= data.d[14];
    n *= data.d[4];
    n += data.d[1];
    n += data.d[19];
    n *= data.d[20];
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
