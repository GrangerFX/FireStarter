#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
// Run date: 01/01/24 11:14:50 Pacific Standard Time
// Run duration = 977.739558 seconds
// Run generation = 19
// Run evolution = 15
// Run max result = 0.00000024
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
// Run tests = 1
// Run states = 64
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

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.409686f;
    data->d[1] = -1.287067f;
    data->d[2] = -1.632680f;
    data->d[3] = -3.498501f;
    data->d[4] = -0.137770f;
    data->d[5] = 0.853367f;
    data->d[6] = -0.570279f;
    data->d[7] = -1.476363f;
    data->d[8] = -0.394557f;
    data->d[9] = 7.144895f;
    data->d[10] = 2.484846f;
    data->d[11] = 1.287884f;
    data->d[12] = -2.243783f;
    data->d[13] = -0.001025f;
    data->d[14] = 0.529139f;
    data->d[15] = -0.611296f;
    data->d[16] = 1.764987f;
    data->d[17] = -3.461056f;
    data->d[18] = 0.155864f;
    data->d[19] = -1.442930f;
    data->d[20] = -1.322458f;
    data->d[21] = -0.101916f;
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
    data->d[0] = 0.596922f;
    data->d[1] = -1.844881f;
    data->d[2] = 0.715107f;
    data->d[3] = 0.111529f;
    data->d[4] = 20.548409f;
    data->d[5] = -2.713856f;
    data->d[6] = -0.374892f;
    data->d[7] = 1.786199f;
    data->d[8] = 0.059012f;
    data->d[9] = 2.233719f;
    data->d[10] = 3.008259f;
    data->d[11] = -5.145660f;
    data->d[12] = 2.081471f;
    data->d[13] = -1.072852f;
    data->d[14] = -2.893957f;
    data->d[15] = -2.164723f;
    data->d[16] = 0.009427f;
    data->d[17] = 3.380336f;
    data->d[18] = 0.686057f;
    data->d[19] = -1.849233f;
    data->d[20] = -0.181228f;
    data->d[21] = 0.956189f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000024
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.645702f;
    data->d[1] = 1.690444f;
    data->d[2] = 1.954757f;
    data->d[3] = -0.639241f;
    data->d[4] = 2.071540f;
    data->d[5] = 0.523220f;
    data->d[6] = -0.863794f;
    data->d[7] = -0.958543f;
    data->d[8] = -0.296617f;
    data->d[9] = 0.351681f;
    data->d[10] = 5.701398f;
    data->d[11] = 3.051902f;
    data->d[12] = -1.658494f;
    data->d[13] = -0.014804f;
    data->d[14] = -1.760671f;
    data->d[15] = 1.260258f;
    data->d[16] = 0.338638f;
    data->d[17] = -1.081930f;
    data->d[18] = -0.512421f;
    data->d[19] = 1.295825f;
    data->d[20] = 1.556430f;
    data->d[21] = -0.370888f;
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
    n = data.d[0] *= n;
    n = data.d[1] += n;
    n = data.d[2] *= n;
    n *= data.d[3];
    n = data.d[4] *= n;
    n = data.d[2] += n;
    n *= data.d[1];
    n = data.d[5] += n;
    n *= data.d[6];
    n += data.d[7];
    n = data.d[8] *= n;
    n = data.d[9] += n;
    n += data.d[10];
    n += data.d[11];
    n += data.d[12];
    n *= data.d[13];
    n *= data.d[9];
    n += data.d[14];
    n += data.d[15];
    n *= data.d[16];
    n *= data.d[5];
    n = data.d[17] += n;
    n = data.d[4] *= n;
    n += data.d[4];
    n *= data.d[8];
    n *= data.d[17];
    n += data.d[18];
    n += data.d[19];
    n += data.d[2];
    n += data.d[0];
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
