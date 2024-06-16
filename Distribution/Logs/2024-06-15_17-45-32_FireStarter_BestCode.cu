#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

#if 0
typedef struct FireStarterSharedData {
    float d[FIRESTARTER_REGISTERS * WARP_THREADS];

    inline float& operator[](unsigned int i)
    {
        return d[i * WARP_THREADS + threadIdx.x];
    } // operator[]

    inline void operator=(const FireStarterData &data)
    {
        for (unsigned int i = 0; i < FIRESTARTER_REGISTERS; i++)
            d[i * WARP_THREADS + threadIdx.x] = data.d[i];
    } // operator=

    inline void operator=(const FireStarterData* data)
    {
        for (unsigned int i = 0; i < FIRESTARTER_REGISTERS; i++)
            d[i * WARP_THREADS + threadIdx.x] = data->d[i];
    } // operator=

    inline void Init(unsigned long long& seed, size_t registers, size_t maxRegisters, float startScale)
    {
        for (size_t i = 0; i < registers; i++)
            d[i * WARP_THREADS + threadIdx.x] = RANDOMFACTOR(seed) * startScale; // Randomize the active registers.
        for (size_t i = registers; i < maxRegisters; i++)
            d[i * WARP_THREADS + threadIdx.x] = 0.0f;                            // Clear the unused registers.
    } // Init
} FireStarterSharedData;

// SHARED_EVALUATE //
inline float SharedEvaluate(const FireStarterData& startData, float n)
{
    GPU_SHARED FireStarterSharedData data;
    data = startData;

    n += data[0];
    n *= data[1];
    n = data[2] += n;
    n = data[3] *= n;
    n = data[2] *= n;
    n = data[4] += n;
    n *= data[2];
    n += data[5];
    n *= data[6];
    n = data[7] *= n;
    n += data[8];
    n += data[9];
    n += data[10];
    n = data[11] += n;
    n = data[12] *= n;
    n = data[13] += n;
    n += data[14];
    n *= data[7];
    n *= data[12];
    n += data[11];
    n += data[15];
    n *= data[13];
    n += data[16];
    n *= data[3];
    n = data[4] *= n;
    n += data[4];
    n = data[17] += n;
    n *= data[18];
    n += data[19];
    n += data[20];
    n += data[17];
    n += data[21];
    return isfinite(n) ? n : 0.0f;
} // SharedEvaluate
// END //

//inline float TestSharedEvaluate(const FireStarterData& data, const float target[FIRESTARTER_SAMPLES], const float theta[FIRESTARTER_SAMPLES])
inline float TestEvaluate(const FireStarterData& data, const float target[], const float theta[])
{
    float result = 0.0f;
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
        result = fmaxf(fabsf(SharedEvaluate(data, theta[i]) - target[i]), result);
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

#else

// EVALUATE //
// Run date: 06/15/24 17:45:32 Pacific Daylight Time
// Run duration = 25.132459 seconds
// Run generation = 1
// Run evolution = 0
// Run max result = 0.00127017
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

// Variation: 0  result = 0.00065428
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 2.754437f;
    data->d[1] = 0.243296f;
    data->d[2] = 1.674816f;
    data->d[3] = -0.464969f;
    data->d[4] = 0.957496f;
    data->d[5] = 1.354826f;
    data->d[6] = -0.809627f;
    data->d[7] = -1.296429f;
    data->d[8] = 2.206148f;
    data->d[9] = -1.930052f;
    data->d[10] = 3.561603f;
    data->d[11] = -0.157589f;
    data->d[12] = 1.418847f;
    data->d[13] = -0.095255f;
    data->d[14] = -0.881179f;
    data->d[15] = -4.268456f;
    data->d[16] = -3.892031f;
    data->d[17] = -0.633820f;
    data->d[18] = 1.420928f;
    data->d[19] = 0.319121f;
    data->d[20] = -4.544244f;
    data->d[21] = -1.000417f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000654f;
} // LoadVariation0

// Variation: 1  result = 0.00019947
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 2.458781f;
    data->d[1] = -1.383888f;
    data->d[2] = -1.175956f;
    data->d[3] = 1.820646f;
    data->d[4] = 0.056037f;
    data->d[5] = 1.673776f;
    data->d[6] = -0.294086f;
    data->d[7] = 0.992650f;
    data->d[8] = -0.227135f;
    data->d[9] = 0.173432f;
    data->d[10] = 0.212728f;
    data->d[11] = 0.769288f;
    data->d[12] = -2.560618f;
    data->d[13] = 2.802365f;
    data->d[14] = 0.170692f;
    data->d[15] = -0.139953f;
    data->d[16] = 1.230139f;
    data->d[17] = 5.300412f;
    data->d[18] = -2.502699f;
    data->d[19] = 9.246434f;
    data->d[20] = 1.994029f;
    data->d[21] = -0.170282f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000199f;
} // LoadVariation1

// Variation: 2  result = 0.00127017
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 3.429498f;
    data->d[1] = 0.218638f;
    data->d[2] = 1.148424f;
    data->d[3] = 0.852280f;
    data->d[4] = 1.070170f;
    data->d[5] = -1.116493f;
    data->d[6] = -1.114231f;
    data->d[7] = 1.008961f;
    data->d[8] = 1.027247f;
    data->d[9] = 1.260542f;
    data->d[10] = 0.032225f;
    data->d[11] = -0.386682f;
    data->d[12] = -0.408672f;
    data->d[13] = -3.512583f;
    data->d[14] = 0.405253f;
    data->d[15] = 0.070261f;
    data->d[16] = -0.340568f;
    data->d[17] = -0.247925f;
    data->d[18] = -0.494595f;
    data->d[19] = -7.767920f;
    data->d[20] = -8.170762f;
    data->d[21] = 1.276404f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.001270f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n += data[0];
    n = data[1] *= n;
    n *= data[2];
    n = data[3] *= n;
    n *= data[4];
    n = data[5] += n;
    n = data[6] *= n;
    n = data[7] += n;
    n += data[8];
    n = data[9] *= n;
    n = data[10] += n;
    n = data[1] *= n;
    n *= data[11];
    n *= data[12];
    n *= data[13];
    n = data[14] *= n;
    n *= data[5];
    n *= data[15];
    n += data[16];
    n = data[6] *= n;
    n *= data[17];
    n *= data[9];
    n *= data[18];
    n *= data[1];
    n *= data[14];
    n *= data[19];
    n *= data[10];
    n *= data[3];
    n *= data[6];
    n *= data[20];
    n *= data[7];
    n += data[21];
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
    }
    else {
        // Later generations randomize a single register if they were copied.
        data = *oldResults->Data(settings, member, v);
        memberAge = oldResults->Age(settings, member, v);
        if (memberAge > 1) {
            // Randomize a single register.
            evolutionScale = settings.m_startScale;
            unsigned int d = RANDOMMOD(seed, registers);
            data[d] += RANDOMFACTOR(seed) * evolutionScale * (memberAge - 1);
            memberResult = settings.m_startResult;
            result = TestEvaluate(data, target, theta);
            evolved = true;
        }
        else {
            result = memberResult = oldResults->MinResult(settings, member, v);
            evolutionScale = settings.m_scale * memberResult;
        }
    }

    // Iterate to evolve the registers.
    for (unsigned int p = 0; p < settings.m_iterations; p++) {
        unsigned int d = RANDOMMOD(seed, registers);
        float oldData = data[d];
        data[d] = oldData + evolutionScale * RANDOMFACTOR(seed);
        float curResult = TestEvaluate(data, target, theta);
        if (curResult <= result) {
            result = curResult;
            evolved = true;
        }
        else
            data[d] = oldData;
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