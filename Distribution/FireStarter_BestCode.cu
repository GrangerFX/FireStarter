#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

// VARIATIONS //
// Run date: 06/19/24 11:10:21 Pacific Daylight Time
// Run duration = 446.713707 seconds
// Run generation = 352
// Run evolution = 11
// Run max result = 0.00000072
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
// Run tests = 0
// Run streams = 1
// Run units = 1
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

// Variation: 0  result = 0.00000010
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.109293f;
    data->d[2] = -1.516313f;
    data->d[3] = -1.061766f;
    data->d[4] = -0.007460f;
    data->d[5] = -2.612478f;
    data->d[6] = 1.030440f;
    data->d[7] = 0.959303f;
    data->d[8] = 0.190765f;
    data->d[9] = 0.731040f;
    data->d[10] = -0.003948f;
    data->d[11] = -1.065886f;
    data->d[12] = 13.321477f;
    data->d[13] = 8.474228f;
    data->d[14] = -2.334205f;
    data->d[15] = -0.014548f;
    data->d[16] = -0.024977f;
    data->d[17] = 2.806776f;
    data->d[18] = 0.000000f;
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

// Variation: 1  result = 0.00000072
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090658f;
    data->d[1] = 0.533091f;
    data->d[2] = 0.318541f;
    data->d[3] = -0.944832f;
    data->d[4] = 0.231962f;
    data->d[5] = 1.810453f;
    data->d[6] = -1.970292f;
    data->d[7] = -3.182336f;
    data->d[8] = -0.287995f;
    data->d[9] = -0.006131f;
    data->d[10] = 1.050085f;
    data->d[11] = -6.504737f;
    data->d[12] = -0.253128f;
    data->d[13] = -7.055454f;
    data->d[14] = 2.983642f;
    data->d[15] = -0.150900f;
    data->d[16] = -0.462322f;
    data->d[17] = 1.574284f;
    data->d[18] = -0.118132f;
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
    *(result->MinResult()) = 0.000001f;
} // LoadVariation1

// Variation: 2  result = 0.00000048
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.130664f;
    data->d[2] = -1.402441f;
    data->d[3] = 2.063460f;
    data->d[4] = -3.659100f;
    data->d[5] = 1.586469f;
    data->d[6] = -3.365626f;
    data->d[7] = 3.224625f;
    data->d[8] = -1.080725f;
    data->d[9] = 1.645689f;
    data->d[10] = 1.556909f;
    data->d[11] = -0.013777f;
    data->d[12] = -0.407431f;
    data->d[13] = 6.135777f;
    data->d[14] = -1.761341f;
    data->d[15] = -0.004811f;
    data->d[16] = 1.410461f;
    data->d[17] = -2.347446f;
    data->d[18] = 0.523598f;
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

// END //

#if 0

#if FIRESTARTER_OPTIMIZE_SHARED

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

    inline void Copy(const FireStarterData& data)
    {
        for (unsigned int i = 0; i < FIRESTARTER_REGISTERS; i++)
            d[i * WARP_THREADS + threadIdx.x] = data[i];
    } // Copy
} FireStarterSharedData;

inline float Evaluate(const FireStarterData& testData, float n)
{
    GPU_SHARED FireStarterSharedData data;
    data = testData;
// EVALUATE //
    n += data[0];
    n = data[1] *= n;
    n = data[2] *= n;
    n = data[2] *= n;
    n += data[3];
    n = data[4] += n;
    n = data[5] += n;
    n = data[6] += n;
    n += data[7];
    n = data[8] *= n;
    n += data[2];
    n = data[1] *= n;
    n = data[9] *= n;
    n *= data[10];
    n *= data[11];
    n = data[12] *= n;
    n *= data[12];
    n *= data[13];
    n = data[6] += n;
    n = data[6] *= n;
    n += data[14];
    n *= data[8];
    n = data[5] += n;
    n *= data[1];
    n *= data[15];
    n *= data[16];
    n *= data[17];
    n += data[9];
    n *= data[4];
    n *= data[5];
    n *= data[6];
    n += data[18];
// END //
    return isfinite(n) ? n : 0.0f;
} // Evaluate

#else

inline float Evaluate(const FireStarterData& testData, float n)
{
    FireStarterData data(testData);
// EVALUATE //
    n += data[0];
    n = data[1] *= n;
    n = data[2] *= n;
    n = data[2] *= n;
    n += data[3];
    n = data[4] += n;
    n = data[5] += n;
    n = data[6] += n;
    n += data[7];
    n = data[8] *= n;
    n += data[2];
    n = data[1] *= n;
    n = data[9] *= n;
    n *= data[10];
    n *= data[11];
    n = data[12] *= n;
    n *= data[12];
    n *= data[13];
    n = data[6] += n;
    n = data[6] *= n;
    n += data[14];
    n *= data[8];
    n = data[5] += n;
    n *= data[1];
    n *= data[15];
    n *= data[16];
    n *= data[17];
    n += data[9];
    n *= data[4];
    n *= data[5];
    n *= data[6];
    n += data[18];
// END //
    return isfinite(n) ? n : 0.0f;
} // Evaluate

//inline float TestEvaluate(const FireStarterData& data, const float target[FIRESTARTER_SAMPLES], const float theta[FIRESTARTER_SAMPLES])
inline float TestEvaluate(const FireStarterData& data, const float target[], const float theta[])
{
    float result = 0.0f;
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
        result = fmaxf(fabsf(Evaluate(data, theta[i]) - target[i]), result);
    return result;
} // TestEvaluate

#endif

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

    // The first generation is initalized with random numbers.
    if (!optimizationPass) {
        evolutionScale = settings.m_startScale;
        data.Init(seed, evolutionScale, registers, settings.m_registers);
        memberAge = 0;
        memberResult = settings.m_startResult;
        result = TestEvaluate(data, target, theta);
    }
    else {
        // Later generations randomize a single register if they were copied.
        data.Copy(oldResults->Data(settings, member, v));
        memberAge = oldResults->Age(settings, member, v);
        if (memberAge > 1) {
            // Randomize a single register.
            evolutionScale = settings.m_startScale;
            unsigned int d = RANDOMMOD(seed, registers);
            data[d] += RANDOMFACTOR(seed) * evolutionScale * (memberAge - 1);
            memberResult = settings.m_startResult;
            result = TestEvaluate(data, target, theta);
        } else {
            result = memberResult = oldResults->MinResult(settings, member, v);
            evolutionScale = settings.m_scale * memberResult;
            result = TestEvaluate(data, target, theta);
        }
    }

    // Iterate to evolve the registers.
    for (unsigned int p = 0; p < settings.m_iterations; p++) {
        unsigned int d = RANDOMMOD(seed, registers);
        float oldData = data[d];
        data[d] = oldData + evolutionScale * RANDOMFACTOR(seed);
        float curResult = TestEvaluate(data, target, theta);
        if (curResult <= result)
            result = curResult;
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

#else

#if 0
// Old way to copy data.
inline float Evaluate(const FireStarterData& testData, float n)
{
    FireStarterData data(testData);
    // EVALUATE //
    n += data[0];
    n = data[1] *= n;
    n = data[2] *= n;
    n = data[2] *= n;
    n += data[3];
    n = data[4] += n;
    n = data[5] += n;
    n = data[6] += n;
    n += data[7];
    n = data[8] *= n;
    n += data[2];
    n = data[1] *= n;
    n = data[9] *= n;
    n *= data[10];
    n *= data[11];
    n = data[12] *= n;
    n *= data[12];
    n *= data[13];
    n = data[6] += n;
    n = data[6] *= n;
    n += data[14];
    n *= data[8];
    n = data[5] += n;
    n *= data[1];
    n *= data[15];
    n *= data[16];
    n *= data[17];
    n += data[9];
    n *= data[4];
    n *= data[5];
    n *= data[6];
    n += data[18];
// END //
    return isfinite(n) ? n : 0.0f;
} // Evaluate
#else
// New way to copy data.
inline float Evaluate(const FireStarterData& testData, float n)
{
    FireStarterData data;
    data.Copy(testData);
    // EVALUATE //
    n += data[0];
    n = data[1] *= n;
    n = data[2] *= n;
    n = data[2] *= n;
    n += data[3];
    n = data[4] += n;
    n = data[5] += n;
    n = data[6] += n;
    n += data[7];
    n = data[8] *= n;
    n += data[2];
    n = data[1] *= n;
    n = data[9] *= n;
    n *= data[10];
    n *= data[11];
    n = data[12] *= n;
    n *= data[12];
    n *= data[13];
    n = data[6] += n;
    n = data[6] *= n;
    n += data[14];
    n *= data[8];
    n = data[5] += n;
    n *= data[1];
    n *= data[15];
    n *= data[16];
    n *= data[17];
    n += data[9];
    n *= data[4];
    n *= data[5];
    n *= data[6];
    n += data[18];
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

    // The first generation is initalized with random numbers.
    if (!optimizationPass) {
        evolutionScale = settings.m_startScale;
        data.Init(seed, evolutionScale, registers, settings.m_registers);
        memberAge = 0;
        memberResult = settings.m_startResult;
        result = TestEvaluate(data, target, theta);
    } else {
        // Later generations randomize a single register if they were copied.
        data.Copy(oldResults->Data(settings, member, v));
        memberAge = oldResults->Age(settings, member, v);
        if (memberAge > 1) {
            // Randomize a single register.
            evolutionScale = settings.m_startScale;
            unsigned int d = RANDOMMOD(seed, registers);
            data[d] += RANDOMFACTOR(seed) * evolutionScale * (memberAge - 1);
            memberResult = settings.m_startResult;
            result = TestEvaluate(data, target, theta);
        } else {
            result = memberResult = oldResults->MinResult(settings, member, v);
            evolutionScale = settings.m_scale * memberResult;
            result = TestEvaluate(data, target, theta);
        }
    }

    // Iterate to evolve the registers.
    for (unsigned int p = 0; p < settings.m_iterations; p++) {
        unsigned int d = RANDOMMOD(seed, registers);
        float oldData = data[d];
        data[d] = oldData + evolutionScale * RANDOMFACTOR(seed);
        float curResult = TestEvaluate(data, target, theta);
        if (curResult <= result)
            result = curResult;
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