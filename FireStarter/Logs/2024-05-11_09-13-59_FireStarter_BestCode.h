#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
// Run date: 05/11/24 09:13:59 Pacific Daylight Time
// Run duration = 56.942734 seconds
// Run generation = 25
// Run evolution = 2
// Run max result = 0.00014323
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

// Variation: 0  result = 0.00010499
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.159539f;
    data->d[1] = -0.802795f;
    data->d[2] = 1.439921f;
    data->d[3] = 0.166317f;
    data->d[4] = -0.622945f;
    data->d[5] = 1.134889f;
    data->d[6] = -1.535294f;
    data->d[7] = -1.462184f;
    data->d[8] = 1.292853f;
    data->d[9] = 0.969071f;
    data->d[10] = -0.089656f;
    data->d[11] = 1.101029f;
    data->d[12] = -3.644973f;
    data->d[13] = 0.590752f;
    data->d[14] = -1.645779f;
    data->d[15] = 2.552333f;
    data->d[16] = -0.215465f;
    data->d[17] = 0.231686f;
    data->d[18] = -0.276873f;
    data->d[19] = 0.112664f;
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
    *(result->MinResult()) = 0.000105f;
} // LoadVariation0

// Variation: 1  result = 0.00004613
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.062685f;
    data->d[1] = -0.593365f;
    data->d[2] = 5.524378f;
    data->d[3] = 1.505444f;
    data->d[4] = 0.642324f;
    data->d[5] = -2.351999f;
    data->d[6] = -0.860423f;
    data->d[7] = -1.082402f;
    data->d[8] = 0.603908f;
    data->d[9] = -1.140410f;
    data->d[10] = -0.141733f;
    data->d[11] = 1.199983f;
    data->d[12] = -1.516226f;
    data->d[13] = -0.486042f;
    data->d[14] = 0.668091f;
    data->d[15] = -0.459880f;
    data->d[16] = 0.777647f;
    data->d[17] = -1.740896f;
    data->d[18] = -2.940048f;
    data->d[19] = -0.019009f;
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
    *(result->MinResult()) = 0.000046f;
} // LoadVariation1

// Variation: 2  result = 0.00014323
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.521684f;
    data->d[1] = -0.438709f;
    data->d[2] = 0.160218f;
    data->d[3] = 2.451200f;
    data->d[4] = -0.498417f;
    data->d[5] = 2.018561f;
    data->d[6] = -1.711707f;
    data->d[7] = 0.227351f;
    data->d[8] = 0.232697f;
    data->d[9] = -5.697835f;
    data->d[10] = -0.300112f;
    data->d[11] = 1.559006f;
    data->d[12] = 0.785741f;
    data->d[13] = -1.263476f;
    data->d[14] = 0.322192f;
    data->d[15] = -2.147038f;
    data->d[16] = 1.305421f;
    data->d[17] = 0.461925f;
    data->d[18] = 0.289550f;
    data->d[19] = -0.537570f;
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
    *(result->MinResult()) = 0.000143f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n = data.d[0] += n;
    n = data.d[1] *= n;
    n = data.d[2] += n;
    n = data.d[3] += n;
    n *= data.d[4];
    n = data.d[1] += n;
    n = data.d[5] += n;
    n *= data.d[6];
    n += data.d[5];
    n += data.d[7];
    n *= data.d[8];
    n = data.d[9] *= n;
    n = data.d[9] *= n;
    n *= data.d[10];
    n = data.d[11] += n;
    n *= data.d[9];
    n *= data.d[1];
    n += data.d[12];
    n = data.d[11] += n;
    n += data.d[0];
    n *= data.d[13];
    n *= data.d[3];
    n = data.d[14] *= n;
    n = data.d[15] *= n;
    n *= data.d[11];
    n *= data.d[14];
    n *= data.d[16];
    n *= data.d[17];
    n *= data.d[18];
    n += data.d[15];
    n += data.d[2];
    n *= data.d[19];
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
        result = oldResult = settings.m_startResult;
        evolutionScale = settings.m_startScale;
        evolved = true;
    } else {
        // Later generations randomize a single register if they were copied.
        data = *oldResults->Data(settings, member, v);
        result = oldResult = oldResults->MinResult(settings, member, v);
        unsigned int age = oldResults->Age(settings, member, v);
        if (age > 1) {
            // Randomize a single register.
            unsigned int d = RANDOMMOD(seed, registers);
            data.d[d] += RANDOMFACTOR(seed) * settings.m_startScale * (age - 1);
            oldResult = settings.m_startResult;

            // Find the initial result
            result = TestEvaluate(data, target, theta);
            evolutionScale = settings.m_startScale;
            evolved = true;
        } else
            evolutionScale = settings.m_scale * result;
    }

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
