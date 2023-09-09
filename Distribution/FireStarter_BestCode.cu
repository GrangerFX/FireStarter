#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
// Run date: 09/09/23 11:16:43 Pacific Daylight Time
// Run duration = 60.017928 seconds
// Run generation = 0
// Run evolution = 0
// Run result = 0.00001013
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_RANDOM
// Run evolveSeed = 50
// Run optimizeSeed = 0
// Run seeds = 1000
// Run tests = 1
// Run units = 8
// Run processes = 16
// Run population = 278528
// Run iterations = 256
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

// Variation: 0  result = 0.00000352
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.173334f;
    data->d[1] = 0.484138f;
    data->d[2] = -1.784598f;
    data->d[3] = -1.407183f;
    data->d[4] = -0.291207f;
    data->d[5] = -0.549598f;
    data->d[6] = -1.398203f;
    data->d[7] = -1.586489f;
    data->d[8] = -1.156973f;
    data->d[9] = -1.500898f;
    data->d[10] = -1.088211f;
    data->d[11] = -0.057568f;
    data->d[12] = 0.646869f;
    data->d[13] = -0.747155f;
    data->d[14] = -2.629700f;
    data->d[15] = -0.846504f;
    data->d[16] = -1.873533f;
    data->d[17] = -0.249879f;
    data->d[18] = 0.979761f;
    data->d[19] = -1.695521f;
    data->d[20] = 0.150321f;
    data->d[21] = 0.039730f;
    data->d[22] = 1.286232f;
    data->d[23] = -0.244451f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000004f;
} // LoadVariation0

// Variation: 1  result = 0.00000292
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.341576f;
    data->d[1] = -1.492381f;
    data->d[2] = 1.575496f;
    data->d[3] = -0.463011f;
    data->d[4] = 2.316846f;
    data->d[5] = -0.468065f;
    data->d[6] = 2.041062f;
    data->d[7] = 0.297324f;
    data->d[8] = -26.099743f;
    data->d[9] = -0.077066f;
    data->d[10] = -2.345218f;
    data->d[11] = 13.942554f;
    data->d[12] = -10.168387f;
    data->d[13] = -0.008171f;
    data->d[14] = 29.027534f;
    data->d[15] = 0.359546f;
    data->d[16] = -0.346544f;
    data->d[17] = -0.236758f;
    data->d[18] = -17.286205f;
    data->d[19] = -0.025501f;
    data->d[20] = 46.785717f;
    data->d[21] = 155.772125f;
    data->d[22] = -0.679868f;
    data->d[23] = 137.594376f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000003f;
} // LoadVariation1

// Variation: 2  result = 0.00001013
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.124759f;
    data->d[1] = 0.794806f;
    data->d[2] = -2.340395f;
    data->d[3] = 0.818995f;
    data->d[4] = -1.675999f;
    data->d[5] = 1.952990f;
    data->d[6] = -0.509622f;
    data->d[7] = -0.248131f;
    data->d[8] = 0.517119f;
    data->d[9] = 0.769422f;
    data->d[10] = -0.146993f;
    data->d[11] = -0.947289f;
    data->d[12] = 2.058141f;
    data->d[13] = -1.364073f;
    data->d[14] = 1.506167f;
    data->d[15] = -0.264663f;
    data->d[16] = 2.553993f;
    data->d[17] = -0.856127f;
    data->d[18] = -0.620672f;
    data->d[19] = -0.222245f;
    data->d[20] = -3.887755f;
    data->d[21] = 3.613233f;
    data->d[22] = 0.922691f;
    data->d[23] = 0.776901f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000010f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n *= data.d[0];
    n *= data.d[1];
    n += data.d[2];
    n *= data.d[3];
    n *= data.d[4];
    n = data.d[5] *= n;
    n = data.d[6] *= n;
    n = data.d[7] *= n;
    n *= data.d[8];
    n = data.d[7] *= n;
    n = data.d[9] *= n;
    n += data.d[10];
    n *= data.d[11];
    n += data.d[12];
    n *= data.d[13];
    n = data.d[7] *= n;
    n += data.d[14];
    n *= data.d[15];
    n = data.d[16] *= n;
    n += data.d[9];
    n *= data.d[17];
    n *= data.d[6];
    n = data.d[16] *= n;
    n += data.d[5];
    n *= data.d[7];
    n *= data.d[18];
    n *= data.d[19];
    n += data.d[16];
    n += data.d[20];
    n += data.d[21];
    n *= data.d[22];
    n += data.d[23];
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
