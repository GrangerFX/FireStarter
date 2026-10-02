#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
// Run date: 05/11/24 10:19:29 Pacific Daylight Time
// Run duration = 292.586787 seconds
// Run generation = 110
// Run evolution = 5
// Run max result = 0.00001992
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
// Run candidates = 16
// Run attempts = 0
// Run optimize = 8

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

// Variation: 0  result = 0.00000280
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.101153f;
    data->d[1] = -1.982065f;
    data->d[2] = 1.987422f;
    data->d[3] = -0.577633f;
    data->d[4] = 0.663293f;
    data->d[5] = -0.973822f;
    data->d[6] = 0.314328f;
    data->d[7] = -0.426353f;
    data->d[8] = 0.478483f;
    data->d[9] = -0.031236f;
    data->d[10] = -28.143427f;
    data->d[11] = -0.024409f;
    data->d[12] = 0.095081f;
    data->d[13] = 0.233193f;
    data->d[14] = 0.829639f;
    data->d[15] = -1.680899f;
    data->d[16] = 0.285998f;
    data->d[17] = -1.948683f;
    data->d[18] = 1.467050f;
    data->d[19] = -1.167770f;
    data->d[20] = 0.003851f;
    data->d[21] = 32.114635f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000003f;
} // LoadVariation0

// Variation: 1  result = 0.00001752
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.357211f;
    data->d[1] = -0.797189f;
    data->d[2] = -1.347918f;
    data->d[3] = 0.181221f;
    data->d[4] = 0.540476f;
    data->d[5] = 0.182666f;
    data->d[6] = -0.898530f;
    data->d[7] = 0.865669f;
    data->d[8] = -0.024968f;
    data->d[9] = 0.005210f;
    data->d[10] = -2.512622f;
    data->d[11] = -2.639992f;
    data->d[12] = -1.631003f;
    data->d[13] = 0.088442f;
    data->d[14] = 0.388685f;
    data->d[15] = 0.902625f;
    data->d[16] = 0.163785f;
    data->d[17] = -0.710605f;
    data->d[18] = -0.186427f;
    data->d[19] = 0.007070f;
    data->d[20] = -0.361026f;
    data->d[21] = -0.683282f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000018f;
} // LoadVariation1

// Variation: 2  result = 0.00001992
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.582360f;
    data->d[1] = -1.477553f;
    data->d[2] = -0.003641f;
    data->d[3] = 0.804186f;
    data->d[4] = 0.181998f;
    data->d[5] = -0.775371f;
    data->d[6] = 2.820942f;
    data->d[7] = -0.455519f;
    data->d[8] = 0.307774f;
    data->d[9] = 0.001928f;
    data->d[10] = -0.964449f;
    data->d[11] = 3.944024f;
    data->d[12] = 0.382486f;
    data->d[13] = -0.236917f;
    data->d[14] = 1.052693f;
    data->d[15] = -2.766635f;
    data->d[16] = -0.612794f;
    data->d[17] = 0.995315f;
    data->d[18] = 1.601882f;
    data->d[19] = 1.275432f;
    data->d[20] = 1.483833f;
    data->d[21] = -0.059125f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000020f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n = data.d[0] += n;
    n += data.d[1];
    n = data.d[2] += n;
    n += data.d[3];
    n = data.d[4] *= n;
    n = data.d[5] += n;
    n *= data.d[6];
    n += data.d[7];
    n = data.d[8] *= n;
    n *= data.d[2];
    n = data.d[9] *= n;
    n = data.d[10] *= n;
    n *= data.d[11];
    n = data.d[12] += n;
    n *= data.d[0];
    n *= data.d[8];
    n += data.d[13];
    n += data.d[14];
    n += data.d[15];
    n = data.d[16] += n;
    n += data.d[10];
    n *= data.d[12];
    n += data.d[9];
    n *= data.d[17];
    n *= data.d[16];
    n = data.d[5] *= n;
    n *= data.d[18];
    n += data.d[19];
    n *= data.d[4];
    n *= data.d[20];
    n += data.d[21];
    n *= data.d[5];
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

GPU_GLOBAL void Optimizer(const FireStarterSettings settings, FireStarterPopulation* newResults, const FireStarterPopulation* oldResults, const unsigned int v, const unsigned int registers, const unsigned long long optimizationSeed, const unsigned long long optimizationPass)
{
    // Determine the member to be optimized.
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= settings.m_population)
        return;

    // Precalculate the target theta values and target samples.
    float theta[FIRESTARTER_SAMPLES];
    float target[FIRESTARTER_SAMPLES];
    float sampleStep = (TARGET_MAX - TARGET_MIN) / (FIRESTARTER_SAMPLES - 1);
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++) {
        float t = theta[i] = TARGET_MIN + i * sampleStep;
        target[i] = Target(t, v);
    }

    // Evolve the program registers for each variation.
    unsigned long long seed = optimizationSeed + SEED10(v) + SEED11(member); // Unique seed for the generation/variation/member
    FireStarterData data;
    float result, oldResult;
    float evolutionScale;
    bool evolved = false;

    // The first generation is initalized with random numbers.
    if (!optimizationPass) {
        data.Init(seed, registers, settings.m_registers, settings.m_startScale);
        oldResult = settings.m_startResult;
        evolutionScale = settings.m_startScale;
        evolved = true;
    } else {
        // Later generations randomize a single register if they were copied.
        data = *oldResults->Data(settings, member, v);
        oldResult = oldResults->MinResult(settings, member, v);
        unsigned int age = oldResults->Age(settings, member, v);
        if (age > 1) {
            // Randomize a single register.
            // Note: TODO: Test two initial random registers and set the evolutionScale to settings.m_scale * result.
            unsigned int d = RANDOMMOD(seed, registers);
            data.d[d] += RANDOMFACTOR(seed) * settings.m_startScale * (age - 1);
            oldResult = settings.m_startResult;
            evolutionScale = settings.m_startScale;
            evolved = true;
        } else {
            result = oldResult;
            evolutionScale = settings.m_scale * oldResult;
        }
    }

    // Find the initial result
    if (evolved)
        result = TestEvaluate(data, target, theta);

    // Iterate to evolve the registers.
    for (unsigned int p = 0; p < settings.m_iterations; p++) {
        unsigned int d = RANDOMMOD(seed, registers);
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
            // Select evolving members with results better than the current result.
            unsigned int candidate = RANDOMMOD(seed, settings.m_population);
            if (oldResults->Age(settings, candidate, v) <= 1) {
                float curResult = oldResults->MinResult(settings, candidate, v);
                if (curResult <= bestResult) {
                    bestResult = curResult;
                    bestCandidate = candidate;
                }
            }
        }

        // Switch to the selected member's data and results.
        if (bestCandidate == member)
            // Note: result will be larger than oldResult when age > 1.
            newResults->InitMemberResult(settings, member, v, 1, result, data);
        else {
            float oldResult = oldResults->MinResult(settings, bestCandidate, v);
            unsigned int oldAge = oldResults->Age(settings, member, v); // Note: TODO: Test with bestCandidate's age.
            const FireStarterData* oldData = oldResults->Data(settings, bestCandidate, v);
            newResults->InitMemberResult(settings, member, v, MAX(oldAge, 1) + 1, oldResult, oldData);
        }
    }
} // Optimizer
