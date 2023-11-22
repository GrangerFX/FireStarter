#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
// Run date: 11/21/23 15:00:29 Pacific Standard Time
// Run duration = 63376.769430 seconds
// Run generation = 303
// Run evolution = 13
// Run result = 0.00000119
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

// Variation: 0  result = 0.00000119
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.348221f;
    data->d[1] = -2.420511f;
    data->d[2] = -0.676850f;
    data->d[3] = -0.055264f;
    data->d[4] = -0.361004f;
    data->d[5] = 0.114697f;
    data->d[6] = 0.579456f;
    data->d[7] = 1.745562f;
    data->d[8] = 0.348211f;
    data->d[9] = 0.935243f;
    data->d[10] = -1.047157f;
    data->d[11] = -1.431664f;
    data->d[12] = 0.848407f;
    data->d[13] = -1.414234f;
    data->d[14] = 0.724447f;
    data->d[15] = 0.508086f;
    data->d[16] = 0.399834f;
    data->d[17] = 0.000000f;
    data->d[18] = 0.000000f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation0

// Variation: 1  result = 0.00000048
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.490978f;
    data->d[1] = -2.830404f;
    data->d[2] = 0.664578f;
    data->d[3] = -0.095952f;
    data->d[4] = -0.501556f;
    data->d[5] = 0.152616f;
    data->d[6] = 0.146351f;
    data->d[7] = 0.989753f;
    data->d[8] = 0.712534f;
    data->d[9] = 0.654546f;
    data->d[10] = -1.027634f;
    data->d[11] = -1.351965f;
    data->d[12] = -0.519633f;
    data->d[13] = 1.950494f;
    data->d[14] = -1.068906f;
    data->d[15] = -0.126249f;
    data->d[16] = 0.712172f;
    data->d[17] = 0.000000f;
    data->d[18] = 0.000000f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.000000f;
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

// Variation: 2  result = 0.00000113
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.330727f;
    data->d[1] = -1.545441f;
    data->d[2] = -1.099044f;
    data->d[3] = -0.121399f;
    data->d[4] = -0.305438f;
    data->d[5] = 0.241967f;
    data->d[6] = 0.650823f;
    data->d[7] = 2.104033f;
    data->d[8] = -0.324496f;
    data->d[9] = 0.868100f;
    data->d[10] = -0.678510f;
    data->d[11] = -1.328841f;
    data->d[12] = 3.548232f;
    data->d[13] = -0.327553f;
    data->d[14] = 2.369108f;
    data->d[15] = 0.457622f;
    data->d[16] = 3.124119f;
    data->d[17] = 0.000000f;
    data->d[18] = 0.000000f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n = data.d[0] += n;
    n = data.d[1] += n;
    n = data.d[2] += n;
    n = data.d[3] *= n;
    n = data.d[0] += n;
    n = data.d[4] *= n;
    n = data.d[1] *= n;
    n += data.d[0];
    n *= data.d[5];
    n += data.d[3];
    n *= data.d[6];
    n = data.d[7] += n;
    n = data.d[8] *= n;
    n = data.d[9] *= n;
    n = data.d[8] *= n;
    n = data.d[10] *= n;
    n = data.d[11] += n;
    n *= data.d[2];
    n = data.d[9] *= n;
    n *= data.d[1];
    n *= data.d[7];
    n *= data.d[8];
    n += data.d[9];
    n += data.d[12];
    n = data.d[4] += n;
    n += data.d[10];
    n *= data.d[13];
    n += data.d[14];
    n += data.d[4];
    n *= data.d[15];
    n *= data.d[11];
    n += data.d[16];
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
#if 1
    unsigned long long seed = SEED1(optimizationSeed) + SEED2(v) + SEED3(member); // Unique seed for the generation/variation/member
#else
    unsigned long long memberSeed = RANDOM(RANDOM(optimizationSeed) + member);
    unsigned long long seed = RANDOM(memberSeed + v); // Unique seed for the generation/member/variation
#endif
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
