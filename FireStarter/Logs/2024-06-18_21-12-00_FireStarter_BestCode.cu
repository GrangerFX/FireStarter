#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

// VARIATIONS //
// Run date: 06/18/24 21:12:00 Pacific Daylight Time
// Run duration = 1118.430203 seconds
// Run generation = 138
// Run evolution = 6
// Run max result = 0.00000930
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

// Variation: 0  result = 0.00000852
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.229142f;
    data->d[2] = 0.405427f;
    data->d[3] = 1.911806f;
    data->d[4] = -0.811894f;
    data->d[5] = -1.471651f;
    data->d[6] = 0.286559f;
    data->d[7] = -2.163249f;
    data->d[8] = 0.637519f;
    data->d[9] = -0.000000f;
    data->d[10] = -1.530569f;
    data->d[11] = -0.803662f;
    data->d[12] = 0.803662f;
    data->d[13] = 4.955423f;
    data->d[14] = 0.737473f;
    data->d[15] = -5.110663f;
    data->d[16] = 8.667828f;
    data->d[17] = 0.209439f;
    data->d[18] = -1.243487f;
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
    *(result->MinResult()) = 0.000009f;
} // LoadVariation0

// Variation: 1  result = 0.00000489
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090683f;
    data->d[1] = 0.376661f;
    data->d[2] = -0.302486f;
    data->d[3] = -1.866386f;
    data->d[4] = -1.547209f;
    data->d[5] = -0.925035f;
    data->d[6] = 2.347077f;
    data->d[7] = -1.131721f;
    data->d[8] = 0.118307f;
    data->d[9] = -0.000079f;
    data->d[10] = -20.365013f;
    data->d[11] = -0.160526f;
    data->d[12] = 0.042368f;
    data->d[13] = -0.096829f;
    data->d[14] = -1.505048f;
    data->d[15] = 0.291339f;
    data->d[16] = 1.183948f;
    data->d[17] = -4.253147f;
    data->d[18] = -3.233162f;
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
    *(result->MinResult()) = 0.000005f;
} // LoadVariation1

// Variation: 2  result = 0.00000930
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617992f;
    data->d[1] = -0.108065f;
    data->d[2] = 1.150640f;
    data->d[3] = 0.862334f;
    data->d[4] = -0.982604f;
    data->d[5] = 0.043222f;
    data->d[6] = -2.663878f;
    data->d[7] = -0.306692f;
    data->d[8] = 0.302792f;
    data->d[9] = 0.000025f;
    data->d[10] = 1.656419f;
    data->d[11] = -0.881003f;
    data->d[12] = 1.404603f;
    data->d[13] = 1.061632f;
    data->d[14] = -1.946903f;
    data->d[15] = 0.949162f;
    data->d[16] = -0.398015f;
    data->d[17] = 2.460219f;
    data->d[18] = 1.580884f;
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
    *(result->MinResult()) = 0.000009f;
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
    n = data[2] += n;
    n = data[1] *= n;
    n *= data[9];
    n *= data[10];
    n = data[11] += n;
    n = data[12] += n;
    n *= data[4];
    n *= data[13];
    n += data[14];
    n = data[6] *= n;
    n += data[11];
    n *= data[8];
    n = data[15] *= n;
    n *= data[1];
    n *= data[16];
    n *= data[15];
    n *= data[17];
    n *= data[2];
    n *= data[18];
    n *= data[5];
    n *= data[6];
    n += data[12];
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
    n = data[2] += n;
    n = data[1] *= n;
    n *= data[9];
    n *= data[10];
    n = data[11] += n;
    n = data[12] += n;
    n *= data[4];
    n *= data[13];
    n += data[14];
    n = data[6] *= n;
    n += data[11];
    n *= data[8];
    n = data[15] *= n;
    n *= data[1];
    n *= data[16];
    n *= data[15];
    n *= data[17];
    n *= data[2];
    n *= data[18];
    n *= data[5];
    n *= data[6];
    n += data[12];
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

//inline float TestEvaluate(const FireStarterData& data, const float target[FIRESTARTER_SAMPLES], const float theta[FIRESTARTER_SAMPLES])
inline bool Experiment(FireStarterData& testData)
{
    FireStarterData data, data1;
    float n;
    data = testData;
    n = 1.0f;
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
    n = data[2] += n;
    n = data[1] *= n;
    n *= data[9];
    n *= data[10];
    n = data[11] += n;
    n = data[12] += n;
    n *= data[4];
    n *= data[13];
    n += data[14];
    n = data[6] *= n;
    n += data[11];
    n *= data[8];
    n = data[15] *= n;
    n *= data[1];
    n *= data[16];
    n *= data[15];
    n *= data[17];
    n *= data[2];
    n *= data[18];
    n *= data[5];
    n *= data[6];
    n += data[12];
// END //
    data1.Copy(data);

    data.Copy(testData);
    n = 1.0f;
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
    n = data[2] += n;
    n = data[1] *= n;
    n *= data[9];
    n *= data[10];
    n = data[11] += n;
    n = data[12] += n;
    n *= data[4];
    n *= data[13];
    n += data[14];
    n = data[6] *= n;
    n += data[11];
    n *= data[8];
    n = data[15] *= n;
    n *= data[1];
    n *= data[16];
    n *= data[15];
    n *= data[17];
    n *= data[2];
    n *= data[18];
    n *= data[5];
    n *= data[6];
    n += data[12];
// END //

    bool result = false;
    for (int i = 0; i < FIRESTARTER_REGISTERS; i++) {
        if (data1[i] != data[i]) {
            data1[i] -= data[i];
            result = true;
        } else
            data1[i] = 0.0f;
    }
    if (result) {
        testData.Copy(data1);
        return true;
    }
    return false;
} // Experiment

inline void Evaluate1(const FireStarterData& testData, float &n)
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
    n = data[2] += n;
    n = data[1] *= n;
    n *= data[9];
    n *= data[10];
    n = data[11] += n;
    n = data[12] += n;
    n *= data[4];
    n *= data[13];
    n += data[14];
    n = data[6] *= n;
    n += data[11];
    n *= data[8];
    n = data[15] *= n;
    n *= data[1];
    n *= data[16];
    n *= data[15];
    n *= data[17];
    n *= data[2];
    n *= data[18];
    n *= data[5];
    n *= data[6];
    n += data[12];
// END //
    n = isfinite(n) ? n : 0.0f;
} // Evaluate1

inline void Evaluate2(const FireStarterData& testData, float& n)
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
    n = data[2] += n;
    n = data[1] *= n;
    n *= data[9];
    n *= data[10];
    n = data[11] += n;
    n = data[12] += n;
    n *= data[4];
    n *= data[13];
    n += data[14];
    n = data[6] *= n;
    n += data[11];
    n *= data[8];
    n = data[15] *= n;
    n *= data[1];
    n *= data[16];
    n *= data[15];
    n *= data[17];
    n *= data[2];
    n *= data[18];
    n *= data[5];
    n *= data[6];
    n += data[12];
// END //
    n = isfinite(n) ? n : 0.0f;
} // Evaluate2

inline int TestEvaluate(const FireStarterData& data, const float target[], const float theta[], float &result)
{
    FireStarterData data1(data);
    FireStarterData data2;
    data2.Copy(data);
    int found = 0;
    result = 0.0f;
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++) {
        float n1 = theta[i];
        float n2 = theta[i];

//        Evaluate1(data1, n1);
//        Evaluate2(data2, n2);
        Evaluate2(data2, n2);
        Evaluate1(data1, n1);
        if (n1 != n2)
            found = i + 1;
        result = fmaxf(fabsf(n1 - target[i]), result);
#if 0
        if (found) {
            for (int i = 0; i < FIRESTARTER_REGISTERS; i++)
                data[i] = data2[i] - data1[i];
            break;
        }
#endif
    }
    return found;
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
    int found = 0;

    // The first generation is initalized with random numbers.
    if (!optimizationPass) {
        evolutionScale = settings.m_startScale;
        data.Init(seed, evolutionScale, registers, settings.m_registers);
        memberAge = 0;
        result = memberResult = settings.m_startResult;
        found = TestEvaluate(data, target, theta, result);
    } else {
        // Later generations randomize a single register if they were copied.
        data.Copy(oldResults->Data(settings, member, v));
        memberAge = oldResults->Age(settings, member, v);
        if (memberAge > 1) {
            // Randomize a single register.
            evolutionScale = settings.m_startScale;
            unsigned int d = RANDOMMOD(seed, registers);
            data[d] += RANDOMFACTOR(seed) * evolutionScale * (memberAge - 1);
            result = memberResult = settings.m_startResult;
            found = TestEvaluate(data, target, theta, result);
        } else {
            result = memberResult = oldResults->MinResult(settings, member, v);
            evolutionScale = settings.m_scale * memberResult;
        }
    }

    // Iterate to evolve the registers.
    unsigned int p = 0;
    while (!found && (p < settings.m_iterations)) {
        unsigned int d = RANDOMMOD(seed, registers);
        float oldData = data[d];
        data[d] = oldData + evolutionScale * RANDOMFACTOR(seed);
        float curResult;
        found = TestEvaluate(data, target, theta, curResult);
        if (found)
            break;
        if (curResult <= result)
            result = curResult;
        else
            data[d] = oldData;
        p++;
    }

    // If the result was better, save the results.
    if (found || !optimizationPass || (result < memberResult))
        newResults->InitMemberResult(settings, member, v, found ? (unsigned int)(found + 1024) : 0, result, data);
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