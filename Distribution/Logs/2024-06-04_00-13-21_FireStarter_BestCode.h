#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
// Run date: 06/04/24 00:13:21 Pacific Daylight Time
// Run duration = 21483.550498 seconds
// Run generation = 324
// Run evolution = 9
// Run max result = 0.00000027
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
// Run evolveSeed = 4
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

// Variation: 0  result = 0.00000027
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.282201f;
    data->d[1] = 1.399186f;
    data->d[2] = 0.882334f;
    data->d[3] = -2.295513f;
    data->d[4] = 0.511768f;
    data->d[5] = 0.000002f;
    data->d[6] = -1.145206f;
    data->d[7] = 0.193994f;
    data->d[8] = 0.875256f;
    data->d[9] = -0.646352f;
    data->d[10] = 0.181941f;
    data->d[11] = 0.035690f;
    data->d[12] = 0.744796f;
    data->d[13] = 0.922640f;
    data->d[14] = -0.415852f;
    data->d[15] = 0.484964f;
    data->d[16] = 3.021195f;
    data->d[17] = 6.680786f;
    data->d[18] = 5.952219f;
    data->d[19] = -0.000215f;
    data->d[20] = -0.510673f;
    data->d[21] = -0.997249f;
    data->d[22] = 0.000001f;
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
    data->d[0] = 1.292826f;
    data->d[1] = 0.289501f;
    data->d[2] = -1.218179f;
    data->d[3] = 1.545896f;
    data->d[4] = -1.630914f;
    data->d[5] = -0.000007f;
    data->d[6] = 0.215573f;
    data->d[7] = 0.317970f;
    data->d[8] = -1.013743f;
    data->d[9] = 0.856691f;
    data->d[10] = -3.703532f;
    data->d[11] = -0.660941f;
    data->d[12] = 0.056956f;
    data->d[13] = 9.546797f;
    data->d[14] = -0.732737f;
    data->d[15] = 0.916702f;
    data->d[16] = 1.008917f;
    data->d[17] = -1.638099f;
    data->d[18] = 0.000074f;
    data->d[19] = 6.293053f;
    data->d[20] = -0.228870f;
    data->d[21] = -0.866776f;
    data->d[22] = -0.118136f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000018
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.381208f;
    data->d[1] = -1.051078f;
    data->d[2] = -1.589178f;
    data->d[3] = -2.065864f;
    data->d[4] = -1.390779f;
    data->d[5] = 0.000002f;
    data->d[6] = -0.296447f;
    data->d[7] = -0.162924f;
    data->d[8] = -1.298896f;
    data->d[9] = 0.770124f;
    data->d[10] = -0.129254f;
    data->d[11] = 0.625552f;
    data->d[12] = 2.638738f;
    data->d[13] = 3.395146f;
    data->d[14] = 5.211558f;
    data->d[15] = -0.007693f;
    data->d[16] = -5.042662f;
    data->d[17] = 0.864408f;
    data->d[18] = -0.001613f;
    data->d[19] = -1.175391f;
    data->d[20] = -0.314593f;
    data->d[21] = -0.806561f;
    data->d[22] = 0.523598f;
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
    n *= data.d[2];
    n += data.d[3];
    n = data.d[4] *= n;
    n += data.d[5];
    n = data.d[6] *= n;
    n *= data.d[4];
    n *= data.d[7];
    n = data.d[8] += n;
    n = data.d[9] += n;
    n = data.d[9] += n;
    n *= data.d[10];
    n = data.d[11] += n;
    n *= data.d[12];
    n += data.d[13];
    n += data.d[14];
    n = data.d[15] *= n;
    n *= data.d[16];
    n += data.d[17];
    n *= data.d[9];
    n *= data.d[18];
    n *= data.d[19];
    n += data.d[20];
    n *= data.d[11];
    n = data.d[21] += n;
    n = data.d[21] *= n;
    n += data.d[15];
    n *= data.d[21];
    n *= data.d[6];
    n *= data.d[8];
    n += data.d[22];
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
