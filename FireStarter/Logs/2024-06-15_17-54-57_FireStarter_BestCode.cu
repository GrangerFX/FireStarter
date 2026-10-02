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
// Run date: 06/15/24 17:54:57 Pacific Daylight Time
// Run duration = 108.475173 seconds
// Run generation = 17
// Run evolution = 1
// Run max result = 0.00002551
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

// Variation: 0  result = 0.00001836
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.830388f;
    data->d[1] = 0.750051f;
    data->d[2] = -1.200955f;
    data->d[3] = -1.207820f;
    data->d[4] = 4.384995f;
    data->d[5] = 0.628433f;
    data->d[6] = -1.499471f;
    data->d[7] = 0.119989f;
    data->d[8] = 1.005367f;
    data->d[9] = 0.067785f;
    data->d[10] = 0.594937f;
    data->d[11] = 0.021198f;
    data->d[12] = -0.623624f;
    data->d[13] = -2.963249f;
    data->d[14] = 4.290774f;
    data->d[15] = -2.379147f;
    data->d[16] = -3.982502f;
    data->d[17] = -0.620907f;
    data->d[18] = -1.555276f;
    data->d[19] = -0.254007f;
    data->d[20] = 0.014597f;
    data->d[21] = 0.314803f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000018f;
} // LoadVariation0

// Variation: 1  result = 0.00002277
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.534558f;
    data->d[1] = 0.133415f;
    data->d[2] = -0.908078f;
    data->d[3] = -0.757089f;
    data->d[4] = 1.437502f;
    data->d[5] = 0.560764f;
    data->d[6] = -0.275041f;
    data->d[7] = 0.127941f;
    data->d[8] = -9.321463f;
    data->d[9] = 0.010473f;
    data->d[10] = 1.528254f;
    data->d[11] = 0.914201f;
    data->d[12] = 0.385393f;
    data->d[13] = 2.703550f;
    data->d[14] = -2.717393f;
    data->d[15] = 6.651568f;
    data->d[16] = 6.639315f;
    data->d[17] = -0.592596f;
    data->d[18] = -0.837360f;
    data->d[19] = 2.718055f;
    data->d[20] = -0.718741f;
    data->d[21] = 0.166925f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000023f;
} // LoadVariation1

// Variation: 2  result = 0.00002551
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.858265f;
    data->d[1] = -0.569102f;
    data->d[2] = -1.445856f;
    data->d[3] = 1.476957f;
    data->d[4] = -3.550573f;
    data->d[5] = 1.150613f;
    data->d[6] = -0.267001f;
    data->d[7] = -0.276344f;
    data->d[8] = -0.592380f;
    data->d[9] = -0.909830f;
    data->d[10] = 0.086241f;
    data->d[11] = 0.245074f;
    data->d[12] = 4.142587f;
    data->d[13] = -2.979781f;
    data->d[14] = 0.567914f;
    data->d[15] = 1.463394f;
    data->d[16] = 4.121333f;
    data->d[17] = -1.641072f;
    data->d[18] = -2.151455f;
    data->d[19] = 1.336498f;
    data->d[20] = -1.947238f;
    data->d[21] = -0.267000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000026f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n += data[0];
    n = data[1] *= n;
    n = data[2] *= n;
    n = data[3] += n;
    n = data[4] += n;
    n *= data[5];
    n += data[2];
    n *= data[6];
    n = data[7] += n;
    n *= data[8];
    n *= data[9];
    n = data[4] += n;
    n *= data[3];
    n *= data[10];
    n = data[11] *= n;
    n = data[12] *= n;
    n *= data[13];
    n *= data[14];
    n = data[15] += n;
    n += data[16];
    n *= data[11];
    n += data[4];
    n = data[1] += n;
    n *= data[1];
    n *= data[12];
    n *= data[17];
    n *= data[15];
    n *= data[18];
    n += data[19];
    n *= data[7];
    n += data[20];
    n *= data[21];
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