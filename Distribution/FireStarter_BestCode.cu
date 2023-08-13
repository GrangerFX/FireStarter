#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
// Run date: 08/12/23 22:11:19 Pacific Daylight Time
// Run duration = 559.085271 seconds
// Run generation = 74
// Run evolution = 13
// Run result = 0.00001072
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 2
// Run optimizeSeed = 2
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

// Variation: 0  result = 0.00000149
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.132656f;
    data->d[2] = 0.000000f;
    data->d[3] = -2.930538f;
    data->d[4] = 0.072131f;
    data->d[5] = 0.933967f;
    data->d[6] = -0.909481f;
    data->d[7] = 0.049867f;
    data->d[8] = 0.034476f;
    data->d[9] = -0.072116f;
    data->d[10] = 15.390306f;
    data->d[11] = 14344.561523f;
    data->d[12] = -4.921651f;
    data->d[13] = 0.008208f;
    data->d[14] = 0.019759f;
    data->d[15] = 0.152428f;
    data->d[16] = -0.634827f;
    data->d[17] = 0.168378f;
    data->d[18] = -0.003406f;
    data->d[19] = 0.001819f;
    data->d[20] = -0.019388f;
    data->d[21] = 3.870595f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation0

// Variation: 1  result = 0.00000024
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090662f;
    data->d[1] = -0.214282f;
    data->d[2] = -0.000001f;
    data->d[3] = -0.193410f;
    data->d[4] = 0.114411f;
    data->d[5] = -0.204021f;
    data->d[6] = 1.859780f;
    data->d[7] = -0.152756f;
    data->d[8] = -1.413286f;
    data->d[9] = -0.030871f;
    data->d[10] = -2.139075f;
    data->d[11] = -1.274807f;
    data->d[12] = 1.573104f;
    data->d[13] = -4.812694f;
    data->d[14] = -115.464806f;
    data->d[15] = 9.489398f;
    data->d[16] = -2.120912f;
    data->d[17] = -3.766458f;
    data->d[18] = 80.319313f;
    data->d[19] = 365571.843750f;
    data->d[20] = -0.019075f;
    data->d[21] = -0.199538f;
    data->d[22] = -0.118135f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00001072
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617983f;
    data->d[1] = 0.133333f;
    data->d[2] = -0.000002f;
    data->d[3] = -0.307441f;
    data->d[4] = -0.475713f;
    data->d[5] = 0.004201f;
    data->d[6] = -0.324056f;
    data->d[7] = 1.992947f;
    data->d[8] = -2.040252f;
    data->d[9] = 0.354204f;
    data->d[10] = -0.819065f;
    data->d[11] = 0.179529f;
    data->d[12] = 0.117627f;
    data->d[13] = 0.683270f;
    data->d[14] = 120.970581f;
    data->d[15] = 1.040117f;
    data->d[16] = -154.762390f;
    data->d[17] = -2.190407f;
    data->d[18] = 186.519455f;
    data->d[19] = 77358.664062f;
    data->d[20] = -0.042368f;
    data->d[21] = 0.436526f;
    data->d[22] = 0.523606f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000011f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n = data.d[0] += n;
    n *= data.d[1];
    n = data.d[2] += n;
    n *= data.d[3];
    n = data.d[2] *= n;
    n *= data.d[4];
    n += data.d[5];
    n += data.d[6];
    n = data.d[7] += n;
    n = data.d[8] += n;
    n = data.d[9] += n;
    n *= data.d[10];
    n += data.d[11];
    n += data.d[2];
    n = data.d[12] += n;
    n = data.d[13] *= n;
    n = data.d[8] *= n;
    n *= data.d[14];
    n *= data.d[15];
    n *= data.d[7];
    n *= data.d[13];
    n *= data.d[16];
    n += data.d[17];
    n *= data.d[18];
    n += data.d[19];
    n *= data.d[8];
    n *= data.d[9];
    n *= data.d[0];
    n *= data.d[20];
    n *= data.d[12];
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
