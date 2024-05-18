#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
// Run date: 05/13/24 09:29:22 Pacific Daylight Time
// Run duration = 340.714605 seconds
// Run generation = 177
// Run evolution = 7
// Run max result = 0.00000060
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
// Run candidates = 16
// Run attempts = 0
// Run optimize = 8

// Run scale = 0.200000f
// Run startResult = 10.000000f

// Variation: 0  result = 0.00000054
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.565715f;
    data->d[1] = -0.282930f;
    data->d[2] = -1.107199f;
    data->d[3] = -1.252762f;
    data->d[4] = 0.782623f;
    data->d[5] = 0.527145f;
    data->d[6] = 0.475744f;
    data->d[7] = 1.677863f;
    data->d[8] = -1.516921f;
    data->d[9] = 0.909843f;
    data->d[10] = 1.053743f;
    data->d[11] = 0.051746f;
    data->d[12] = 1.798121f;
    data->d[13] = 2.647348f;
    data->d[14] = -1.130451f;
    data->d[15] = -9.403367f;
    data->d[16] = -0.878933f;
    data->d[17] = 0.423398f;
    data->d[18] = 4.797549f;
    data->d[19] = -0.162570f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation0

// Variation: 1  result = 0.00000060
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.123938f;
    data->d[1] = 0.949107f;
    data->d[2] = 1.517373f;
    data->d[3] = 2.531154f;
    data->d[4] = -2.523695f;
    data->d[5] = 0.677735f;
    data->d[6] = 0.407814f;
    data->d[7] = -2.054278f;
    data->d[8] = -0.418422f;
    data->d[9] = -0.326544f;
    data->d[10] = 0.488552f;
    data->d[11] = 0.061387f;
    data->d[12] = 1.113056f;
    data->d[13] = 5.612147f;
    data->d[14] = -1.040801f;
    data->d[15] = -2.054229f;
    data->d[16] = -4.259773f;
    data->d[17] = 0.409734f;
    data->d[18] = 0.487034f;
    data->d[19] = -3.214187f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation1

// Variation: 2  result = 0.00000024
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.913091f;
    data->d[1] = -0.341029f;
    data->d[2] = 1.636602f;
    data->d[3] = -0.507049f;
    data->d[4] = 0.931764f;
    data->d[5] = 0.165973f;
    data->d[6] = -0.792043f;
    data->d[7] = -1.512812f;
    data->d[8] = 0.219867f;
    data->d[9] = -2.412680f;
    data->d[10] = 0.508469f;
    data->d[11] = 0.054715f;
    data->d[12] = 1.087405f;
    data->d[13] = -0.103067f;
    data->d[14] = 3.881403f;
    data->d[15] = -4.642398f;
    data->d[16] = -3.003858f;
    data->d[17] = 1.050632f;
    data->d[18] = 2.086912f;
    data->d[19] = -0.805447f;
    data->d[20] = 0.000000f;
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
    n *= data.d[0];
    n *= data.d[1];
    n = data.d[2] *= n;
    n *= data.d[3];
    n = data.d[4] += n;
    n += data.d[5];
    n *= data.d[6];
    n = data.d[7] *= n;
    n *= data.d[4];
    n *= data.d[8];
    n = data.d[9] *= n;
    n = data.d[10] += n;
    n = data.d[11] *= n;
    n = data.d[12] += n;
    n = data.d[13] *= n;
    n *= data.d[14];
    n = data.d[13] += n;
    n *= data.d[10];
    n += data.d[15];
    n *= data.d[16];
    n *= data.d[11];
    n += data.d[17];
    n = data.d[12] += n;
    n *= data.d[12];
    n = data.d[9] *= n;
    n += data.d[18];
    n = data.d[19] *= n;
    n *= data.d[9];
    n += data.d[7];
    n += data.d[2];
    n += data.d[19];
    n += data.d[13];
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
    unsigned int memberAge;
    float result, memberResult;
    float evolutionScale;
    bool evolved = false;

    // The first generation is initalized with random numbers.
    if (!optimizationPass) {
        data.Init(seed, registers, settings.m_registers, settings.m_scale * settings.m_startResult);
        memberAge = 0;
        memberResult = settings.m_startResult;
        result = TestEvaluate(data, target, theta);
        evolutionScale = settings.m_scale * settings.m_startResult;
        evolved = true;
    } else {
        // Later generations randomize a single register if they were copied.
        data = *oldResults->Data(settings, member, v);
        memberAge = oldResults->Age(settings, member, v);
        if (memberAge > 1) {
            // Randomize a single register.
            evolutionScale = settings.m_scale * settings.m_startResult;
            unsigned int d = RANDOMMOD(seed, registers);
            data.d[d] += RANDOMFACTOR(seed) * evolutionScale * (memberAge - 1);
            memberResult = settings.m_startResult;
            result = TestEvaluate(data, target, theta);
            evolved = true;
        } else {
            result = memberResult = oldResults->MinResult(settings, member, v);
            evolutionScale = settings.m_scale * memberResult;
        }
    }

    // Iterate to evolve the registers.
    for (unsigned int p = 0; p < settings.m_iterations; p++) {
        unsigned int d = RANDOMMOD(seed, registers);
        float oldData = data.d[d];
        data.d[d] = oldData + evolutionScale * RANDOMFACTOR(seed);
        float curResult = TestEvaluate(data, target, theta);
        if (curResult <= result) {
            result = curResult;
//            evolutionScale = settings.m_scale * result;
            evolved = true;
        } else
            data.d[d] = oldData;
    }

    // If the result was better, save the results.
    if (!optimizationPass || (result < memberResult))
        newResults->InitMemberResult(settings, member, v, 0, result, data);
    else {
        // If the result was worse, copy a result from among the previous generation's results.
        unsigned int bestCandidate = member;
        unsigned int bestAge = memberAge;
        float bestResult = result;

        // The genetic part of genetic programming and a major optimization:
        // Copy the best data from among a random set of candidates.
        for (int i = 0; i < settings.m_candidates; i++) {
            // Select evolving members with results better than the current result.
            unsigned int candidate = RANDOMMOD(seed, settings.m_population);
            unsigned int candidateAge = oldResults->Age(settings, candidate, v);
            if (candidateAge <= 1) {
                float candidateResult = oldResults->MinResult(settings, candidate, v);
                if (candidateResult <= bestResult) {
                    bestCandidate = candidate;
                    bestAge = candidateAge;
                    bestResult = candidateResult;
                }
            }
        }

        // Switch to the selected member's data and results.
        if (bestCandidate == member)
            // Note: result will be larger than oldResult when oldAge > 1.
            newResults->InitMemberResult(settings, member, v, 1, result, data);
        else {
            const FireStarterData* bestData = oldResults->Data(settings, bestCandidate, v);
            newResults->InitMemberResult(settings, member, v, MAX(memberAge, 1) + 1, bestResult, bestData);
        }
    }
} // Optimizer
