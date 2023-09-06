#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
// Run date: 09/05/23 17:11:19 Pacific Daylight Time
// Run duration = 38751.435608 seconds
// Run generation = 49
// Run evolution = 5
// Run result = 0.00000043
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 16
// Run units = 4
// Run processes = 4
// Run population = 278528
// Run iterations = 64
// Run generations = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

// Variation: 0  result = 0.00000024
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.794804f;
    data->d[1] = -0.182893f;
    data->d[2] = 2.084230f;
    data->d[3] = -0.951818f;
    data->d[4] = 3.109907f;
    data->d[5] = -2.960067f;
    data->d[6] = -0.885408f;
    data->d[7] = 0.018622f;
    data->d[8] = 0.045638f;
    data->d[9] = 0.688889f;
    data->d[10] = 0.000000f;
    data->d[11] = 7.450625f;
    data->d[12] = 1.451552f;
    data->d[13] = -0.761786f;
    data->d[14] = -0.433029f;
    data->d[15] = -1.994483f;
    data->d[16] = 0.511027f;
    data->d[17] = -0.857726f;
    data->d[18] = -0.439439f;
    data->d[19] = 0.000000f;
    data->d[20] = -1.313663f;
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
    data->d[0] = 0.372699f;
    data->d[1] = 0.554647f;
    data->d[2] = 1.495679f;
    data->d[3] = -0.955575f;
    data->d[4] = -0.887436f;
    data->d[5] = 0.848008f;
    data->d[6] = 0.001299f;
    data->d[7] = -7.217032f;
    data->d[8] = 1.473938f;
    data->d[9] = -1.672320f;
    data->d[10] = 0.783447f;
    data->d[11] = -4.553091f;
    data->d[12] = 1.614438f;
    data->d[13] = 0.572518f;
    data->d[14] = 1.217222f;
    data->d[15] = 1.123047f;
    data->d[16] = 0.892209f;
    data->d[17] = -1.373935f;
    data->d[18] = 0.487103f;
    data->d[19] = -0.061560f;
    data->d[20] = 1.918963f;
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

// Variation: 2  result = 0.00000043
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.847069f;
    data->d[1] = 0.261888f;
    data->d[2] = 1.902299f;
    data->d[3] = -1.104795f;
    data->d[4] = -1.578171f;
    data->d[5] = 1.743552f;
    data->d[6] = -2.909841f;
    data->d[7] = 0.005167f;
    data->d[8] = -0.547996f;
    data->d[9] = 0.101040f;
    data->d[10] = 0.000000f;
    data->d[11] = 38.937363f;
    data->d[12] = -1.234516f;
    data->d[13] = -1.669297f;
    data->d[14] = 1.139212f;
    data->d[15] = -1.335719f;
    data->d[16] = 0.600523f;
    data->d[17] = -0.873319f;
    data->d[18] = -0.338324f;
    data->d[19] = 0.439247f;
    data->d[20] = 1.192038f;
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
    n *= data.d[0];
    n = data.d[1] *= n;
    n *= data.d[2];
    n = data.d[3] += n;
    n *= data.d[4];
    n += data.d[5];
    n *= data.d[6];
    n *= data.d[1];
    n = data.d[7] *= n;
    n += data.d[8];
    n = data.d[9] += n;
    n = data.d[10] *= n;
    n *= data.d[11];
    n += data.d[12];
    n = data.d[10] += n;
    n = data.d[7] += n;
    n *= data.d[10];
    n = data.d[9] *= n;
    n = data.d[3] *= n;
    n *= data.d[13];
    n = data.d[14] *= n;
    n *= data.d[9];
    n *= data.d[3];
    n = data.d[15] += n;
    n *= data.d[15];
    n += data.d[16];
    n += data.d[17];
    n += data.d[18];
    n *= data.d[14];
    n *= data.d[7];
    n += data.d[19];
    n *= data.d[20];
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
