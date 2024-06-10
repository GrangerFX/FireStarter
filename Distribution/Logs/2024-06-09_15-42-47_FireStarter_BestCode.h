#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
// Run date: 06/09/24 15:42:47 Pacific Daylight Time
// Run duration = 2905.168338 seconds
// Run generation = 365
// Run evolution = 9
// Run max result = 0.00000079
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 2

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

// Variation: 0  result = 0.00000048
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141592f;
    data->d[1] = -0.196620f;
    data->d[2] = 0.000001f;
    data->d[3] = 1.431179f;
    data->d[4] = -0.017699f;
    data->d[5] = -1.276389f;
    data->d[6] = -2.156970f;
    data->d[7] = -2.943710f;
    data->d[8] = -2.684669f;
    data->d[9] = -2.063719f;
    data->d[10] = 0.085202f;
    data->d[11] = 1.178079f;
    data->d[12] = -0.101712f;
    data->d[13] = -3.028184f;
    data->d[14] = 4.217962f;
    data->d[15] = 1.617454f;
    data->d[16] = 1.058581f;
    data->d[17] = 0.706854f;
    data->d[18] = 1.084198f;
    data->d[19] = 0.779931f;
    data->d[20] = -0.466283f;
    data->d[21] = -0.000001f;
    data->d[22] = -0.994744f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000066
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090667f;
    data->d[1] = -0.132436f;
    data->d[2] = -0.000004f;
    data->d[3] = 0.825923f;
    data->d[4] = 2.092584f;
    data->d[5] = 4.115680f;
    data->d[6] = -14.873717f;
    data->d[7] = -0.000159f;
    data->d[8] = -0.405568f;
    data->d[9] = -1.428491f;
    data->d[10] = 2.655386f;
    data->d[11] = 1.726552f;
    data->d[12] = 0.457880f;
    data->d[13] = -0.664498f;
    data->d[14] = 2.314108f;
    data->d[15] = 0.435825f;
    data->d[16] = -4.484695f;
    data->d[17] = -1.510031f;
    data->d[18] = -0.920274f;
    data->d[19] = 0.749919f;
    data->d[20] = 0.312089f;
    data->d[21] = -1.251285f;
    data->d[22] = 0.094415f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation1

// Variation: 2  result = 0.00000079
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617990f;
    data->d[1] = -0.498154f;
    data->d[2] = 0.000008f;
    data->d[3] = 3.346740f;
    data->d[4] = 0.003668f;
    data->d[5] = 0.810848f;
    data->d[6] = -0.611814f;
    data->d[7] = 2.307804f;
    data->d[8] = 0.942887f;
    data->d[9] = 2.631737f;
    data->d[10] = 1.724628f;
    data->d[11] = -1.671588f;
    data->d[12] = -0.006551f;
    data->d[13] = -0.430793f;
    data->d[14] = 0.912624f;
    data->d[15] = -0.308055f;
    data->d[16] = 2.090729f;
    data->d[17] = 0.287937f;
    data->d[18] = 0.154225f;
    data->d[19] = -0.546795f;
    data->d[20] = 0.108420f;
    data->d[21] = 0.390739f;
    data->d[22] = 1.340034f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n = data.d[0] += n;
    n = data.d[1] *= n;
    n += data.d[2];
    n = data.d[0] *= n;
    n += data.d[3];
    n = data.d[4] *= n;
    n = data.d[5] += n;
    n *= data.d[5];
    n += data.d[6];
    n *= data.d[7];
    n = data.d[8] += n;
    n *= data.d[0];
    n += data.d[9];
    n = data.d[10] *= n;
    n += data.d[11];
    n *= data.d[12];
    n += data.d[13];
    n = data.d[10] *= n;
    n += data.d[14];
    n *= data.d[15];
    n += data.d[4];
    n *= data.d[8];
    n += data.d[16];
    n *= data.d[17];
    n += data.d[18];
    n *= data.d[19];
    n += data.d[20];
    n = data.d[1] *= n;
    n += data.d[1];
    n *= data.d[10];
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
        evolutionScale = settings.m_startScale;
        data.Init(seed, registers, settings.m_registers, evolutionScale);
        memberAge = 0;
        memberResult = settings.m_startResult;
        result = TestEvaluate(data, target, theta);
        evolved = true;
    } else {
        // Later generations randomize a single register if they were copied.
        data = *oldResults->Data(settings, member, v);
        memberAge = oldResults->Age(settings, member, v);
        if (memberAge > 1) {
            // Randomize a single register.
            evolutionScale = settings.m_startScale;
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
