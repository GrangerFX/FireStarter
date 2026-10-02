#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
// Run date: 06/01/24 13:13:18 Pacific Daylight Time
// Run duration = 6425.582266 seconds
// Run generation = 204
// Run evolution = 9
// Run max result = 0.00000030
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

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.264130f;
    data->d[1] = -0.829788f;
    data->d[2] = 0.063484f;
    data->d[3] = -0.639766f;
    data->d[4] = -1.302955f;
    data->d[5] = -2.015620f;
    data->d[6] = -1.239239f;
    data->d[7] = -0.400442f;
    data->d[8] = -0.081820f;
    data->d[9] = -0.492404f;
    data->d[10] = -0.558240f;
    data->d[11] = 1.217557f;
    data->d[12] = 0.105467f;
    data->d[13] = 1.464864f;
    data->d[14] = -1.124498f;
    data->d[15] = -0.559603f;
    data->d[16] = 0.178636f;
    data->d[17] = 2.047925f;
    data->d[18] = 0.000000f;
    data->d[19] = 1.947814f;
    data->d[20] = 1.020732f;
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

// Variation: 1  result = 0.00000030
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.208864f;
    data->d[1] = -1.291057f;
    data->d[2] = 0.203041f;
    data->d[3] = -1.653927f;
    data->d[4] = 0.827716f;
    data->d[5] = -5.717590f;
    data->d[6] = -4.249192f;
    data->d[7] = -7.905985f;
    data->d[8] = -1.245589f;
    data->d[9] = 0.000787f;
    data->d[10] = -4.674976f;
    data->d[11] = 2.651126f;
    data->d[12] = -0.246564f;
    data->d[13] = -1.651061f;
    data->d[14] = -0.788554f;
    data->d[15] = -0.812487f;
    data->d[16] = 1.496007f;
    data->d[17] = -0.527776f;
    data->d[18] = -1.212214f;
    data->d[19] = -1.277923f;
    data->d[20] = 0.699457f;
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

// Variation: 2  result = 0.00000024
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.330885f;
    data->d[1] = 1.732511f;
    data->d[2] = -0.114023f;
    data->d[3] = -0.368805f;
    data->d[4] = 0.962773f;
    data->d[5] = -8.755081f;
    data->d[6] = 5.083730f;
    data->d[7] = 10.158158f;
    data->d[8] = -4.677884f;
    data->d[9] = -0.000238f;
    data->d[10] = -1.323665f;
    data->d[11] = 0.139600f;
    data->d[12] = -0.442265f;
    data->d[13] = 0.993588f;
    data->d[14] = -2.420013f;
    data->d[15] = -0.574783f;
    data->d[16] = 1.467186f;
    data->d[17] = -0.741206f;
    data->d[18] = 1.063069f;
    data->d[19] = -1.085907f;
    data->d[20] = -0.332046f;
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
    n = data.d[1] += n;
    n = data.d[0] *= n;
    n *= data.d[2];
    n = data.d[3] += n;
    n = data.d[4] += n;
    n *= data.d[5];
    n = data.d[6] += n;
    n *= data.d[7];
    n *= data.d[6];
    n += data.d[8];
    n *= data.d[9];
    n += data.d[10];
    n = data.d[11] += n;
    n = data.d[0] *= n;
    n *= data.d[11];
    n = data.d[12] *= n;
    n *= data.d[4];
    n = data.d[13] += n;
    n *= data.d[14];
    n *= data.d[13];
    n *= data.d[0];
    n += data.d[15];
    n += data.d[12];
    n += data.d[16];
    n = data.d[3] += n;
    n *= data.d[1];
    n += data.d[17];
    n *= data.d[18];
    n *= data.d[19];
    n += data.d[3];
    n += data.d[20];
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
        unsigned int d1 = RANDOMMOD(seed, registers);
        unsigned int d2 = RANDOMMOD(seed, registers);
        float oldData1 = data.d[d1];
        float oldData2 = data.d[d2];
        data.d[d1] = oldData1 + evolutionScale * RANDOMFACTOR(seed);
        data.d[d2] = oldData2 + evolutionScale * RANDOMFACTOR(seed);
        float curResult = TestEvaluate(data, target, theta);
        if (curResult <= result) {
            result = curResult;
            evolved = true;
        } else {
            data.d[d1] = oldData1;
            data.d[d2] = oldData2;
        }
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
