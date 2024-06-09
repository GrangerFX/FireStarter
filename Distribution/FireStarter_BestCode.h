#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
// Run date: 06/09/24 09:51:15 Pacific Daylight Time
// Run duration = 558.012023 seconds
// Run generation = 20
// Run evolution = 2
// Run max result = 0.16438279
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

// Variation: 0  result = 0.06065907
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.006785f;
    data->d[1] = 16.113344f;
    data->d[2] = -0.000000f;
    data->d[3] = 4.365886f;
    data->d[4] = -6.498145f;
    data->d[5] = -1.937513f;
    data->d[6] = 0.252742f;
    data->d[7] = 0.000000f;
    data->d[8] = -0.182982f;
    data->d[9] = -8.736174f;
    data->d[10] = 0.000191f;
    data->d[11] = -109.472275f;
    data->d[12] = -28.105442f;
    data->d[13] = 0.126777f;
    data->d[14] = -8.017809f;
    data->d[15] = -1.014439f;
    data->d[16] = 0.000000f;
    data->d[17] = 0.198181f;
    data->d[18] = 14.099992f;
    data->d[19] = 12.798812f;
    data->d[20] = -0.062476f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.060659f;
} // LoadVariation0

// Variation: 1  result = 0.04528264
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.416309f;
    data->d[1] = 9.987932f;
    data->d[2] = 0.000000f;
    data->d[3] = -1.000798f;
    data->d[4] = -18.598989f;
    data->d[5] = -8.433517f;
    data->d[6] = 6.270881f;
    data->d[7] = -0.000000f;
    data->d[8] = -0.045607f;
    data->d[9] = -0.010234f;
    data->d[10] = -0.342728f;
    data->d[11] = 553.679626f;
    data->d[12] = -34.741756f;
    data->d[13] = -1.186855f;
    data->d[14] = 0.215330f;
    data->d[15] = -1.351210f;
    data->d[16] = -0.000000f;
    data->d[17] = 5.396646f;
    data->d[18] = 22.253332f;
    data->d[19] = -2.860690f;
    data->d[20] = 0.002746f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.045283f;
} // LoadVariation1

// Variation: 2  result = 0.16438279
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.123039f;
    data->d[1] = 16.560085f;
    data->d[2] = -0.000000f;
    data->d[3] = 0.927524f;
    data->d[4] = -0.125921f;
    data->d[5] = -0.859950f;
    data->d[6] = 0.020875f;
    data->d[7] = 0.000000f;
    data->d[8] = -14.905693f;
    data->d[9] = -3.573266f;
    data->d[10] = -0.000021f;
    data->d[11] = 57.810871f;
    data->d[12] = -12.701085f;
    data->d[13] = -5.694947f;
    data->d[14] = -11.412903f;
    data->d[15] = 7.540477f;
    data->d[16] = -0.000000f;
    data->d[17] = 3.174899f;
    data->d[18] = -20.194290f;
    data->d[19] = 4.317486f;
    data->d[20] = 0.093547f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.164383f;
} // LoadVariation2

inline float Evaluate(FireStarterData& data, float n)
{
    n = data.d[0] += n;
    n *= data.d[1];
    n = data.d[2] *= n;
    n *= data.d[2];
    n += data.d[3];
    n += data.d[4];
    n += data.d[5];
    n = data.d[6] += n;
    n = data.d[7] *= n;
    n = data.d[8] += n;
    n *= data.d[9];
    n *= data.d[10];
    n = data.d[0] *= n;
    n = data.d[6] *= n;
    n = data.d[11] += n;
    n += data.d[12];
    n = data.d[6] *= n;
    n *= data.d[13];
    n *= data.d[14];
    n *= data.d[15];
    n = data.d[0] += n;
    n = data.d[16] *= n;
    n += data.d[16];
    n += data.d[0];
    n += data.d[17];
    n += data.d[8];
    n *= data.d[18];
    n += data.d[7];
    n *= data.d[19];
    n += data.d[11];
    n *= data.d[6];
    n *= data.d[20];
    return isfinite(n) ? n : 0.0f;
} // Evaluate
// END //

#if FIRESTARTER_OPTIMIZE_LEARN

//inline float TestEvaluate(const FireStarterData& data, const float target[FIRESTARTER_SAMPLES], const float theta[FIRESTARTER_SAMPLES])
inline float TestEvaluate(FireStarterData data, const float target[], const float theta[])
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

    // Evolve the program registers for each variation.
    unsigned long long memberSeed = optimizationSeed + SEED10(v) + SEED11(member); // Unique seed for the generation/variation/member
    unsigned long long seed = memberSeed;
    FireStarterData data;
    unsigned int memberAge;
    float memberResult;
    float evolutionScale;
    bool evolved = false;

    // The first generation is initalized with random numbers.
    if (!optimizationPass) {
        memberAge = 0;
        evolutionScale = settings.m_startScale;
        data.Init(seed, registers, settings.m_registers, evolutionScale);
        data.d[0] = memberResult = settings.m_startResult;
        evolved = true;
    } else {
        // Later generations randomize a single register if they were copied.
        memberAge = oldResults->Age(settings, member, v);
        data = *oldResults->Data(settings, member, v);
        if (memberAge > 1) {
            // Randomize a single register.
            evolutionScale = settings.m_startScale;
            unsigned int d = RANDOMMOD(seed, registers);
            data.d[d] += RANDOMFACTOR(seed) * evolutionScale * (memberAge - 1);
            data.d[0] = memberResult = settings.m_startResult;
            evolved = true;
        } else {
            memberResult = oldResults->MinResult(settings, member, v);
            evolutionScale = settings.m_scale * memberResult;
        }
    }

    // Precalculate the target theta values and target samples.
    float theta[FIRESTARTER_SAMPLES];
    float target[FIRESTARTER_SAMPLES];
    float sampleStep = (TARGET_MAX - TARGET_MIN) / (FIRESTARTER_SAMPLES - 1);
    unsigned long long targetSeed = memberSeed;
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++) {
        float t = theta[i] = TARGET_MIN + RANDOMNUM(targetSeed) * (TARGET_MAX - TARGET_MIN);
        target[i] = Target(t, v);
    }

    // Initial result.
    float result = TestEvaluate(data, target, theta);

    // Iterate to evolve the registers.
    unsigned long long sampleSeed = memberSeed;
    for (unsigned int p = 0; p < settings.m_iterations; p++) {
        FireStarterData testData = data;
        testData.d[RANDOMMOD(seed, registers)] += evolutionScale * RANDOMFACTOR(seed);
        float curResult = 0;
        for (int i = 0; i < FIRESTARTER_SAMPLES; i++) {
            float t = theta[i];
            curResult += data.d[0] = fabsf(Evaluate(testData, t) - Target(t, v));
        }
        curResult /= FIRESTARTER_SAMPLES;
        if (curResult <= result) {
            data = testData;
            result = curResult;
            evolved = true;
        }
    }

#if 0
    // Final evaluation.
    float testStep = (TARGET_MAX - TARGET_MIN) / (FIRESTARTER_SAMPLES - 1);
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++) {
        float t = theta[i] = TARGET_MIN + i * testStep;
        target[i] = Target(t, v);
    }
    result = TestEvaluate(data, target, theta);
#endif

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

#else

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

#endif
