#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
// Run date: 05/04/24 16:26:26 Pacific Daylight Time
// Run duration = 153.232491 seconds
// Run generation = 29
// Run evolution = 1
// Run max result = 0.00505906
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
// Run evolveSeed = 0
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

// Variation: 0  result = 0.00505906
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.044166f;
    data->d[1] = 0.267929f;
    data->d[2] = 1.070131f;
    data->d[3] = -0.091061f;
    data->d[4] = -0.973833f;
    data->d[5] = 0.337377f;
    data->d[6] = -0.384639f;
    data->d[7] = -0.451667f;
    data->d[8] = -0.136158f;
    data->d[9] = -0.162241f;
    data->d[10] = 0.490839f;
    data->d[11] = 1.689376f;
    data->d[12] = -1.628460f;
    data->d[13] = 1.060279f;
    data->d[14] = -0.204588f;
    data->d[15] = -0.161682f;
    data->d[16] = 0.622446f;
    data->d[17] = 1.037355f;
    data->d[18] = 1.749189f;
    data->d[19] = 0.974789f;
    data->d[20] = -0.568993f;
    data->d[21] = 1.364027f;
    data->d[22] = -0.565409f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.005059f;
} // LoadVariation0

// Variation: 1  result = 0.00485492
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.125965f;
    data->d[1] = 0.713994f;
    data->d[2] = 0.092331f;
    data->d[3] = -1.342040f;
    data->d[4] = -0.475658f;
    data->d[5] = 1.155768f;
    data->d[6] = 1.544769f;
    data->d[7] = -1.655189f;
    data->d[8] = 1.678694f;
    data->d[9] = 0.532400f;
    data->d[10] = 0.920879f;
    data->d[11] = -0.730550f;
    data->d[12] = 0.467197f;
    data->d[13] = 0.629291f;
    data->d[14] = -2.033642f;
    data->d[15] = 1.599366f;
    data->d[16] = -1.039336f;
    data->d[17] = -1.642550f;
    data->d[18] = 0.895713f;
    data->d[19] = -2.129337f;
    data->d[20] = -1.897980f;
    data->d[21] = 0.996184f;
    data->d[22] = -0.078701f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.004855f;
} // LoadVariation1

// Variation: 2  result = 0.00493437
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.291560f;
    data->d[1] = -1.893304f;
    data->d[2] = -0.374808f;
    data->d[3] = -1.772712f;
    data->d[4] = -0.043332f;
    data->d[5] = -1.017056f;
    data->d[6] = 0.608447f;
    data->d[7] = -0.468506f;
    data->d[8] = -0.410366f;
    data->d[9] = 0.387019f;
    data->d[10] = -0.458973f;
    data->d[11] = -0.713479f;
    data->d[12] = -1.539071f;
    data->d[13] = 0.515640f;
    data->d[14] = 0.519566f;
    data->d[15] = 1.326608f;
    data->d[16] = -1.527055f;
    data->d[17] = 0.051542f;
    data->d[18] = 1.266414f;
    data->d[19] = 2.233817f;
    data->d[20] = 0.315103f;
    data->d[21] = -1.275173f;
    data->d[22] = 0.864913f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.004934f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n = data.d[0] += n;
    n = data.d[1] *= n;
    n *= data.d[2];
    n = data.d[3] += n;
    n = data.d[4] += n;
    n *= data.d[0];
    n += data.d[5];
    n *= data.d[6];
    n += data.d[7];
    n *= data.d[8];
    n *= data.d[9];
    n = data.d[4] += n;
    n *= data.d[3];
    n *= data.d[10];
    n = data.d[4] += n;
    n = data.d[11] *= n;
    n *= data.d[12];
    n *= data.d[13];
    n = data.d[14] += n;
    n += data.d[15];
    n *= data.d[16];
    n += data.d[4];
    n = data.d[1] += n;
    n *= data.d[1];
    n *= data.d[11];
    n *= data.d[17];
    n *= data.d[14];
    n *= data.d[18];
    n += data.d[19];
    n += data.d[20];
    n += data.d[21];
    n *= data.d[22];
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

#if 1
// Experimental version
GPU_GLOBAL void Optimizer(const FireStarterSettings settings, FireStarterPopulation* newResults, const FireStarterPopulation* oldResults, const unsigned int v, const unsigned int dataSize, const unsigned long long optimizationSeed, const unsigned long long optimizationPass)
{
    const unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
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
    float oldResult, bestResult;
    unsigned int age;
    unsigned int bestMember = member;
    bool evolved;

    if (!optimizationPass) {
        // The first generation is initalized with random numbers.
        for (unsigned int i = 0; i < dataSize; i++)
            data.d[i] = RANDOMFACTOR(seed) * settings.m_startScale;
        for (unsigned int i = dataSize; i < FIRESTARTER_REGISTERS; i++)
            data.d[i] = 0.0f;   // Clear the unused data.
        oldResult = settings.m_startResult;
        bestResult = oldResult;
        age = 0;
        evolved = true;
    } else {
        // Later generations randomize a single instruction if they were copied.
        // If the result was worse, copy a result from among the previous generation's results.
        oldResult = oldResults->MinResult(settings, member, v);
        bestResult = oldResult;
        age = oldResults->Age(settings, member, v) + 1;
//        float weight = age * oldResult;
        float weight = oldResult;
        evolved = false;

        // The genetic part of genetic programming and a major optimization:
        // Copy the best data from among a random set of candidates.
        for (int i = 0; i < settings.m_candidates; i++) {
            unsigned int candidate = RANDOMMOD(seed, settings.m_population);
            unsigned int curAge = oldResults->Age(settings, candidate, v) + 1;
            float curResult = oldResults->MinResult(settings, candidate, v);
//            float curWeight = curResult * curAge;
            float curWeight = curResult;
            if (curWeight <= weight) {
                bestResult = curResult;
                weight = curWeight;
                bestMember = candidate;
            }
        }

        // Copy the data from the best candidate or current member.
        data = *oldResults->Data(settings, bestMember, v);
        evolved = false;
    }

    // Precalculate the target sample values.
    float target[FIRESTARTER_SAMPLES];
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
        target[i] = Target(theta[i], v);

    // Find the initial result
    float result = bestResult;
    float evolutionScale = settings.m_scale * result;

    // Iterate to evolve the data.
    for (unsigned int p = 0; p < settings.m_iterations; p++) {
        unsigned int d1 = RANDOMMOD(seed, dataSize);
//        unsigned int d2 = RANDOMMOD(seed, dataSize);
        float oldData1 = data.d[d1];
//        float oldData2 = data.d[d2];
        data.d[d1] = oldData1 + evolutionScale * RANDOMFACTOR(seed);
//        data.d[d2] = oldData2 + evolutionScale * RANDOMFACTOR(seed);
        float curResult = TestEvaluate(data, target, theta);
        if (curResult <= result) {
            result = curResult;
            evolutionScale = settings.m_scale * result;
            evolved = true;
        } else {
            data.d[d1] = oldData1;
//            data.d[d2] = oldData2;
        }
    }

    // If the result was better, save the results.
    if (!optimizationPass || (evolved && (result < oldResult))) {
        // Calculate a more accurate estimate of the result.
        if (settings.m_precision)
            result = fmaxf(result, TestPrecision(data, v, settings.m_precision));
        age = 0;
    } else {
        // If the best member was not the current member, get the current member's data.
        if (bestMember != member) {
            data = *oldResults->Data(settings, member, v);
            result = oldResult;
        }
    }

    // Always copy the results to the new results for the next generation.
    newResults->InitMemberResult(settings, member, v, age, result, data);
} // Optimizer
#else
// Known good version
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
        unsigned int age = oldResults->Age(settings, member, v);
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
            if (oldResults->Age(settings, candidate, v) <= 1) {   // Only select evolving members
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
            unsigned int oldAge = oldResults->Age(settings, member, v);
            const FireStarterData* oldData = oldResults->Data(settings, bestCandidate, v);
            newResults->InitMemberResult(settings, member, v, MAX(oldAge, 1) + 1, oldResult, oldData);
        }
    }
} // Optimizer
#endif