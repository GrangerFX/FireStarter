#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

// VARIATIONS //
// Run date: 06/16/24 23:21:28 Pacific Daylight Time
// Run duration = 5343.753924 seconds
// Run generation = 394
// Run evolution = 9
// Run max result = 0.00000040
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
    data->d[0] = 0.741075f;
    data->d[1] = -2.328155f;
    data->d[2] = -0.500000f;
    data->d[3] = 0.700766f;
    data->d[4] = 0.864003f;
    data->d[5] = -0.074766f;
    data->d[6] = 0.058840f;
    data->d[7] = 1.339090f;
    data->d[8] = -0.016279f;
    data->d[9] = -4.778575f;
    data->d[10] = 0.643737f;
    data->d[11] = 2.822731f;
    data->d[12] = -0.886578f;
    data->d[13] = 1.010122f;
    data->d[14] = 1.890314f;
    data->d[15] = 1.053143f;
    data->d[16] = -1.187923f;
    data->d[17] = 1.775436f;
    data->d[18] = -0.196866f;
    data->d[19] = -0.119863f;
    data->d[20] = -0.077399f;
    data->d[21] = -1.271257f;
    data->d[22] = -0.250772f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000036
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.761899f;
    data->d[1] = 2.354774f;
    data->d[2] = -0.500004f;
    data->d[3] = -0.575853f;
    data->d[4] = 3.297667f;
    data->d[5] = 2.977586f;
    data->d[6] = 0.556841f;
    data->d[7] = 1.961359f;
    data->d[8] = -1.236712f;
    data->d[9] = -0.003287f;
    data->d[10] = -1.644307f;
    data->d[11] = 1.022908f;
    data->d[12] = 1.415978f;
    data->d[13] = 0.873931f;
    data->d[14] = -1.013949f;
    data->d[15] = -0.473107f;
    data->d[16] = 0.074422f;
    data->d[17] = 0.525634f;
    data->d[18] = 2.052199f;
    data->d[19] = -0.835209f;
    data->d[20] = 2.687594f;
    data->d[21] = 0.580696f;
    data->d[22] = -1.193812f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000040
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.714731f;
    data->d[1] = 1.871160f;
    data->d[2] = -0.500000f;
    data->d[3] = 1.149136f;
    data->d[4] = -0.684104f;
    data->d[5] = 3.973527f;
    data->d[6] = -0.662931f;
    data->d[7] = -4.985754f;
    data->d[8] = -0.045291f;
    data->d[9] = 0.307039f;
    data->d[10] = 0.291463f;
    data->d[11] = -2.033913f;
    data->d[12] = 3.463672f;
    data->d[13] = 2.346212f;
    data->d[14] = -0.220209f;
    data->d[15] = 0.345126f;
    data->d[16] = -0.383185f;
    data->d[17] = -1.532011f;
    data->d[18] = -1.466264f;
    data->d[19] = 2.163828f;
    data->d[20] = 0.113382f;
    data->d[21] = -0.656676f;
    data->d[22] = 2.018988f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation2

// END //

typedef struct FireStarterSharedData {
    float d[FIRESTARTER_REGISTERS * WARP_THREADS];

    inline float& operator[](unsigned int i)
    {
        return d[i * WARP_THREADS + threadIdx.x];
    } // operator[]

    inline void operator=(const FireStarterData& data)
    {
        for (unsigned int i = 0; i < FIRESTARTER_REGISTERS; i++)
            d[i * WARP_THREADS + threadIdx.x] = data[i];
    } // operator=

    inline void Copy(const FireStarterData& data, unsigned int registers)
    {
        for (unsigned int i = 0; i < registers; i++)
            d[i * WARP_THREADS + threadIdx.x] = data[i];
    } // Copy
} FireStarterSharedData;

#if FIRESTARTER_OPTIMIZE_SHARED

inline float Evaluate(const FireStarterData& testData, float n)
{
    GPU_SHARED FireStarterSharedData data;
    data = testData;
//    FireStarterData data;
//    data.Copy(testData, FIRESTARTER_REGISTERS); // Set the data for the current thread.
// EVALUATE //
    n *= data[0];
    n = data[1] += n;
    n = data[2] *= n;
    n = data[3] += n;
    n += data[1];
    n = data[3] *= n;
    n = data[4] += n;
    n += data[5];
    n *= data[6];
    n += data[7];
    n *= data[8];
    n = data[3] *= n;
    n *= data[9];
    n = data[10] += n;
    n += data[11];
    n += data[12];
    n = data[13] += n;
    n = data[14] += n;
    n *= data[13];
    n *= data[3];
    n *= data[15];
    n *= data[16];
    n += data[17];
    n *= data[10];
    n *= data[18];
    n *= data[14];
    n *= data[2];
    n *= data[4];
    n += data[19];
    n += data[20];
    n *= data[21];
    n += data[22];
// END //
    return isfinite(n) ? n : 0.0f;
} // Evaluate

#else

inline float Evaluate(const FireStarterData& testData, float n)
{
//    FireStarterData data(testData);
    FireStarterData data;
    data.Copy(testData);
// EVALUATE //
    n *= data[0];
    n = data[1] += n;
    n = data[2] *= n;
    n = data[3] += n;
    n += data[1];
    n = data[3] *= n;
    n = data[4] += n;
    n += data[5];
    n *= data[6];
    n += data[7];
    n *= data[8];
    n = data[3] *= n;
    n *= data[9];
    n = data[10] += n;
    n += data[11];
    n += data[12];
    n = data[13] += n;
    n = data[14] += n;
    n *= data[13];
    n *= data[3];
    n *= data[15];
    n *= data[16];
    n += data[17];
    n *= data[10];
    n *= data[18];
    n *= data[14];
    n *= data[2];
    n *= data[4];
    n += data[19];
    n += data[20];
    n *= data[21];
    n += data[22];
// END //
    return isfinite(n) ? n : 0.0f;
} // Evaluate

#endif

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
        data.Init(seed, evolutionScale, registers, settings.m_registers);
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
            data[d] += RANDOMFACTOR(seed) * evolutionScale * (memberAge - 1);
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
        float oldData = data[d];
        data[d] = oldData + evolutionScale * RANDOMFACTOR(seed);
        float curResult = TestEvaluate(data, target, theta);
        if (curResult <= result) {
            result = curResult;
            evolved = true;
        } else
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
