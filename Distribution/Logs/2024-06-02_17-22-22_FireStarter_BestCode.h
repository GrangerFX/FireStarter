#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
// Run date: 06/02/24 17:22:22 Pacific Daylight Time
// Run duration = 1859.764613 seconds
// Run generation = 254
// Run evolution = 8
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
// Run evolveSeed = 2
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
    data->d[0] = -3.141593f;
    data->d[1] = 2.154946f;
    data->d[2] = -1.343130f;
    data->d[3] = -0.035433f;
    data->d[4] = 4.124156f;
    data->d[5] = -0.582354f;
    data->d[6] = -0.800119f;
    data->d[7] = -2.026351f;
    data->d[8] = 0.000066f;
    data->d[9] = -0.018709f;
    data->d[10] = 9.411039f;
    data->d[11] = -1.003269f;
    data->d[12] = 1.241827f;
    data->d[13] = 0.269757f;
    data->d[14] = 0.254550f;
    data->d[15] = -1.873911f;
    data->d[16] = 0.431045f;
    data->d[17] = 1.172964f;
    data->d[18] = -1.172964f;
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
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000024
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = 1.378622f;
    data->d[2] = -0.285217f;
    data->d[3] = 0.786679f;
    data->d[4] = -1.871338f;
    data->d[5] = 1.407067f;
    data->d[6] = 0.553228f;
    data->d[7] = -0.002752f;
    data->d[8] = 1.468549f;
    data->d[9] = 0.129150f;
    data->d[10] = -7.707416f;
    data->d[11] = -0.721879f;
    data->d[12] = 0.246702f;
    data->d[13] = 3.434820f;
    data->d[14] = 0.399069f;
    data->d[15] = -3.820235f;
    data->d[16] = 0.232448f;
    data->d[17] = 0.154646f;
    data->d[18] = -0.272778f;
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
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000036
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 2.209058f;
    data->d[2] = 0.232017f;
    data->d[3] = 1.375231f;
    data->d[4] = -1.651563f;
    data->d[5] = 0.283436f;
    data->d[6] = -1.316836f;
    data->d[7] = 0.416589f;
    data->d[8] = -0.003273f;
    data->d[9] = -0.152285f;
    data->d[10] = -8.365194f;
    data->d[11] = -3.038471f;
    data->d[12] = 0.466407f;
    data->d[13] = 0.166883f;
    data->d[14] = -0.043421f;
    data->d[15] = -2.757711f;
    data->d[16] = 0.056037f;
    data->d[17] = -2.214203f;
    data->d[18] = 2.737802f;
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
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n = data.d[0] += n;
    n = data.d[1] *= n;
    n += data.d[1];
    n = data.d[2] *= n;
    n *= data.d[3];
    n *= data.d[2];
    n += data.d[4];
    n *= data.d[5];
    n = data.d[6] *= n;
    n = data.d[7] *= n;
    n = data.d[8] *= n;
    n = data.d[9] += n;
    n *= data.d[10];
    n += data.d[6];
    n = data.d[9] *= n;
    n = data.d[11] += n;
    n = data.d[12] *= n;
    n *= data.d[9];
    n = data.d[13] += n;
    n += data.d[7];
    n *= data.d[14];
    n += data.d[15];
    n = data.d[0] *= n;
    n += data.d[0];
    n = data.d[13] *= n;
    n *= data.d[8];
    n += data.d[13];
    n *= data.d[12];
    n *= data.d[16];
    n *= data.d[11];
    n += data.d[17];
    n += data.d[18];
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
