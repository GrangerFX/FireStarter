#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

#if 1
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
// Run date: 06/15/24 17:57:07 Pacific Daylight Time
// Run duration = 63.139934 seconds
// Run generation = 7
// Run evolution = 1
// Run max result = 0.00126201
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

// Variation: 0  result = 0.00054300
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 4.081605f;
    data->d[1] = 0.678320f;
    data->d[2] = 2.481338f;
    data->d[3] = 1.339819f;
    data->d[4] = 0.049582f;
    data->d[5] = -0.631831f;
    data->d[6] = 0.454620f;
    data->d[7] = -0.306874f;
    data->d[8] = -0.895055f;
    data->d[9] = 1.973723f;
    data->d[10] = 1.565426f;
    data->d[11] = -0.377069f;
    data->d[12] = -0.418740f;
    data->d[13] = 0.806189f;
    data->d[14] = -0.756716f;
    data->d[15] = 1.599300f;
    data->d[16] = 2.304268f;
    data->d[17] = 1.730757f;
    data->d[18] = -4.932302f;
    data->d[19] = -1.040547f;
    data->d[20] = -0.595655f;
    data->d[21] = 1.000244f;
    data->d[22] = 4.755714f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000543f;
} // LoadVariation0

// Variation: 1  result = 0.00019404
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 2.496093f;
    data->d[1] = 0.166586f;
    data->d[2] = -1.798972f;
    data->d[3] = 0.881192f;
    data->d[4] = 1.149298f;
    data->d[5] = -2.780736f;
    data->d[6] = -0.258575f;
    data->d[7] = -1.162123f;
    data->d[8] = -0.618716f;
    data->d[9] = 1.242514f;
    data->d[10] = -1.422246f;
    data->d[11] = -0.586796f;
    data->d[12] = 1.325976f;
    data->d[13] = -0.454227f;
    data->d[14] = 2.252730f;
    data->d[15] = -0.067197f;
    data->d[16] = 0.961274f;
    data->d[17] = 0.270485f;
    data->d[18] = -5.330507f;
    data->d[19] = 1.240464f;
    data->d[20] = -3.145052f;
    data->d[21] = -0.183382f;
    data->d[22] = -6.305476f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000194f;
} // LoadVariation1

// Variation: 2  result = 0.00126201
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 3.431663f;
    data->d[1] = 0.612661f;
    data->d[2] = -0.461170f;
    data->d[3] = 0.781295f;
    data->d[4] = -0.868054f;
    data->d[5] = -0.934609f;
    data->d[6] = 0.861122f;
    data->d[7] = -0.652442f;
    data->d[8] = -0.721270f;
    data->d[9] = 1.238647f;
    data->d[10] = 0.070581f;
    data->d[11] = 0.122971f;
    data->d[12] = -2.127566f;
    data->d[13] = -0.295682f;
    data->d[14] = -0.088574f;
    data->d[15] = -3.031141f;
    data->d[16] = -0.661191f;
    data->d[17] = 7.592816f;
    data->d[18] = -4.125913f;
    data->d[19] = -0.756607f;
    data->d[20] = 7.959517f;
    data->d[21] = 1.276405f;
    data->d[22] = 14.601345f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.001262f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n += data[0];
    n = data[1] *= n;
    n *= data[2];
    n = data[3] += n;
    n *= data[4];
    n += data[5];
    n = data[6] *= n;
    n = data[7] += n;
    n += data[8];
    n *= data[9];
    n = data[10] += n;
    n = data[1] *= n;
    n *= data[11];
    n *= data[12];
    n *= data[13];
    n = data[14] *= n;
    n *= data[15];
    n *= data[16];
    n += data[17];
    n = data[6] *= n;
    n *= data[18];
    n = data[14] += n;
    n *= data[19];
    n *= data[1];
    n *= data[14];
    n *= data[20];
    n *= data[10];
    n *= data[21];
    n *= data[6];
    n *= data[3];
    n *= data[7];
    n += data[22];
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