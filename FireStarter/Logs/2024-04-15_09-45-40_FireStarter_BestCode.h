#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
// Run date: 04/15/24 09:45:40 Pacific Daylight Time
// Run duration = 271.593117 seconds
// Run generation = 91
// Run evolution = 4
// Run max result = 0.00000036
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 1
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 0
// Run optimize = 8

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

// Variation: 0  result = 0.00000036
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.862366f;
    data->d[1] = 1.664788f;
    data->d[2] = 2.324904f;
    data->d[3] = 0.453002f;
    data->d[4] = 1.732344f;
    data->d[5] = 1.156271f;
    data->d[6] = 0.082911f;
    data->d[7] = 0.295951f;
    data->d[8] = -1.769618f;
    data->d[9] = -0.576389f;
    data->d[10] = -0.547838f;
    data->d[11] = 0.052249f;
    data->d[12] = -0.516078f;
    data->d[13] = 2.150102f;
    data->d[14] = 1.785455f;
    data->d[15] = 0.041024f;
    data->d[16] = -0.158168f;
    data->d[17] = -4.962473f;
    data->d[18] = -1.712924f;
    data->d[19] = -0.233012f;
    data->d[20] = 2.942215f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000024
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.561259f;
    data->d[1] = 1.510901f;
    data->d[2] = 0.546660f;
    data->d[3] = 2.495851f;
    data->d[4] = -0.421609f;
    data->d[5] = 4.467218f;
    data->d[6] = 0.142214f;
    data->d[7] = 0.033261f;
    data->d[8] = -3.266136f;
    data->d[9] = 0.952296f;
    data->d[10] = 0.400757f;
    data->d[11] = 0.040077f;
    data->d[12] = 1.098881f;
    data->d[13] = 1.548457f;
    data->d[14] = 0.684513f;
    data->d[15] = -0.732751f;
    data->d[16] = -0.082707f;
    data->d[17] = 0.243379f;
    data->d[18] = 1.075559f;
    data->d[19] = 0.834315f;
    data->d[20] = 0.782214f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000030
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.439522f;
    data->d[1] = 1.685939f;
    data->d[2] = 0.659151f;
    data->d[3] = -0.369431f;
    data->d[4] = 1.650232f;
    data->d[5] = 2.043540f;
    data->d[6] = 0.370130f;
    data->d[7] = 1.853898f;
    data->d[8] = 2.138027f;
    data->d[9] = -0.143896f;
    data->d[10] = 1.862470f;
    data->d[11] = 0.014486f;
    data->d[12] = 1.074259f;
    data->d[13] = -1.235621f;
    data->d[14] = -0.543849f;
    data->d[15] = 0.011875f;
    data->d[16] = -0.007819f;
    data->d[17] = 0.871818f;
    data->d[18] = 1.964288f;
    data->d[19] = 1.241052f;
    data->d[20] = 0.433213f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n = data.d[0] *= n;
    n *= data.d[1];
    n += data.d[2];
    n += data.d[3];
    n = data.d[4] += n;
    n = data.d[5] *= n;
    n = data.d[6] *= n;
    n *= data.d[7];
    n *= data.d[4];
    n *= data.d[8];
    n = data.d[9] *= n;
    n += data.d[10];
    n = data.d[11] *= n;
    n = data.d[12] += n;
    n = data.d[11] *= n;
    n *= data.d[13];
    n += data.d[14];
    n = data.d[12] *= n;
    n *= data.d[11];
    n *= data.d[15];
    n *= data.d[16];
    n *= data.d[17];
    n = data.d[12] += n;
    n *= data.d[12];
    n = data.d[9] *= n;
    n += data.d[18];
    n *= data.d[5];
    n *= data.d[9];
    n += data.d[6];
    n += data.d[19];
    n += data.d[20];
    n += data.d[0];
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

GPU_GLOBAL void Optimizer(const FireStarterSettings settings, FireStarterPopulation* newResults, const FireStarterPopulation* oldResults, const unsigned int v, const unsigned int dataSize, const unsigned long long optimizationSeed, const unsigned long long optimizationPass)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= settings.m_population)
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

    if (!optimizationPass) {
        // The first generation is initalized with random numbers.
        for (unsigned int i = 0; i < dataSize; i++)
            data.d[i] = RANDOMFACTOR(seed) * settings.m_startScale;
        for (unsigned int i = dataSize; i < FIRESTARTER_REGISTERS; i++)
            data.d[i] = 0.0f;   // Clear the unused data.
        oldResult = settings.m_startResult;
        evolved = true;
    } else {
        // Later generations randomize a single instruction if they were copied.
        data = *oldResults->Data(settings, member, v);
        oldResult = oldResults->MinResult(settings, member, v);
        unsigned int age = oldResults->Index(settings, member, v);
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
    if (!optimizationPass || (result < oldResult))
        newResults->InitMemberResult(settings, member, v, 0, result, data);
    else {
        // If the result was worse, copy a result from among the previous generation's results.
        unsigned int bestCandidate = member;
        float bestResult = result;

        // The genetic part of genetic programming and a major optimization:
        // Copy the best data from among a random set of candidates.
        for (int i = 0; i < settings.m_candidates; i++) {
            unsigned int candidate = RANDOMMOD(seed, settings.m_population);
            if (oldResults->Index(settings, candidate, v) <= 1) {   // Only select evolving members
                float curResult = oldResults->MinResult(settings, candidate, v);
                if (curResult <= bestResult) {
                    bestResult = curResult;
                    bestCandidate = candidate;
                }
            }
        }

        // Switch to the selected member's data and results.
        if (bestCandidate == member)
            // Note: result will be larger than oldResult
            newResults->InitMemberResult(settings, member, v, 1, result, data);
        else {
            float oldResult = oldResults->MinResult(settings, bestCandidate, v);
            unsigned int oldIndex = oldResults->Index(settings, member, v);
            const FireStarterData* oldData = oldResults->Data(settings, bestCandidate, v);
            newResults->InitMemberResult(settings, member, v, MAX(oldIndex, 1) + 1, oldResult, oldData);
        }
    }
} // Optimizer
