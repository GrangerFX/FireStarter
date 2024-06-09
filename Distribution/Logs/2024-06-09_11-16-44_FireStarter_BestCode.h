#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
// Run date: 06/09/24 11:16:44 Pacific Daylight Time
// Run duration = 909.799535 seconds
// Run generation = 119
// Run evolution = 9
// Run max result = 0.00000024
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

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.753393f;
    data->d[1] = 0.284927f;
    data->d[2] = -0.680463f;
    data->d[3] = -0.247654f;
    data->d[4] = 4.815069f;
    data->d[5] = 0.782785f;
    data->d[6] = -2.084465f;
    data->d[7] = 1.764962f;
    data->d[8] = 0.059109f;
    data->d[9] = -0.250681f;
    data->d[10] = 1.021218f;
    data->d[11] = 1.203631f;
    data->d[12] = 0.057598f;
    data->d[13] = -1.563427f;
    data->d[14] = -0.512473f;
    data->d[15] = -1.309087f;
    data->d[16] = 1.527250f;
    data->d[17] = 0.255483f;
    data->d[18] = -0.731638f;
    data->d[19] = -0.801368f;
    data->d[20] = 0.792537f;
    data->d[21] = -0.059731f;
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
    data->d[0] = -1.104357f;
    data->d[1] = 0.626228f;
    data->d[2] = -1.243877f;
    data->d[3] = 0.155242f;
    data->d[4] = -3.030651f;
    data->d[5] = -0.242528f;
    data->d[6] = 2.380495f;
    data->d[7] = -0.875087f;
    data->d[8] = -2.447578f;
    data->d[9] = 1.088746f;
    data->d[10] = -2.417171f;
    data->d[11] = 0.941002f;
    data->d[12] = 0.004282f;
    data->d[13] = -0.137361f;
    data->d[14] = 1.132524f;
    data->d[15] = 1.454087f;
    data->d[16] = 0.508127f;
    data->d[17] = 0.158972f;
    data->d[18] = 1.926475f;
    data->d[19] = -0.019858f;
    data->d[20] = 0.091324f;
    data->d[21] = -0.654823f;
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
    data->d[0] = 0.428103f;
    data->d[1] = -0.260183f;
    data->d[2] = 0.792544f;
    data->d[3] = 0.719056f;
    data->d[4] = -3.895751f;
    data->d[5] = 1.524704f;
    data->d[6] = -0.209438f;
    data->d[7] = -3.394825f;
    data->d[8] = -0.672090f;
    data->d[9] = -2.323818f;
    data->d[10] = 2.086505f;
    data->d[11] = 0.049176f;
    data->d[12] = -0.092396f;
    data->d[13] = -1.070347f;
    data->d[14] = -4.164815f;
    data->d[15] = 0.447721f;
    data->d[16] = -0.048602f;
    data->d[17] = -0.711970f;
    data->d[18] = -0.246025f;
    data->d[19] = -4.009449f;
    data->d[20] = -0.345307f;
    data->d[21] = 5.415161f;
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
    n += data.d[0];
    n *= data.d[1];
    n = data.d[2] += n;
    n = data.d[3] *= n;
    n = data.d[2] *= n;
    n = data.d[4] += n;
    n *= data.d[2];
    n += data.d[5];
    n *= data.d[6];
    n = data.d[7] *= n;
    n += data.d[8];
    n += data.d[9];
    n += data.d[10];
    n = data.d[11] += n;
    n = data.d[12] *= n;
    n = data.d[13] += n;
    n += data.d[14];
    n *= data.d[7];
    n *= data.d[12];
    n += data.d[11];
    n += data.d[15];
    n *= data.d[13];
    n += data.d[16];
    n *= data.d[3];
    n = data.d[4] *= n;
    n += data.d[4];
    n = data.d[17] += n;
    n *= data.d[18];
    n += data.d[19];
    n += data.d[20];
    n += data.d[17];
    n += data.d[21];
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
