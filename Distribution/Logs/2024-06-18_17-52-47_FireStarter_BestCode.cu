#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

// VARIATIONS //
// Run date: 06/18/24 17:52:47 Pacific Daylight Time
// Run duration = 834.012534 seconds
// Run generation = 81
// Run evolution = 5
// Run max result = 0.00001808
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

// Variation: 0  result = 0.00001808
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141594f;
    data->d[1] = -0.180704f;
    data->d[2] = -0.000000f;
    data->d[3] = -3.759333f;
    data->d[4] = -0.775692f;
    data->d[5] = 0.379029f;
    data->d[6] = 1.596752f;
    data->d[7] = -3.739875f;
    data->d[8] = 0.828506f;
    data->d[9] = -0.000000f;
    data->d[10] = -0.212733f;
    data->d[11] = -2.146071f;
    data->d[12] = 2.146070f;
    data->d[13] = -0.564079f;
    data->d[14] = 3.299012f;
    data->d[15] = 1.743495f;
    data->d[16] = -0.113209f;
    data->d[17] = 2.851067f;
    data->d[18] = 0.007416f;
    data->d[19] = 2.770761f;
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
    *(result->MinResult()) = 0.000018f;
} // LoadVariation0

// Variation: 1  result = 0.00000519
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090708f;
    data->d[1] = 0.115443f;
    data->d[2] = 0.000011f;
    data->d[3] = 2.985421f;
    data->d[4] = -2.335619f;
    data->d[5] = 1.318279f;
    data->d[6] = -4.037511f;
    data->d[7] = -0.490853f;
    data->d[8] = 0.105259f;
    data->d[9] = 0.000018f;
    data->d[10] = -2.818242f;
    data->d[11] = -0.801359f;
    data->d[12] = 0.683172f;
    data->d[13] = -0.582450f;
    data->d[14] = -1.223978f;
    data->d[15] = -6.504360f;
    data->d[16] = 1.194194f;
    data->d[17] = -1.992888f;
    data->d[18] = -0.053222f;
    data->d[19] = -2.441861f;
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

// Variation: 2  result = 0.00001663
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.618561f;
    data->d[1] = -0.182692f;
    data->d[2] = -0.000189f;
    data->d[3] = -0.838557f;
    data->d[4] = 0.581101f;
    data->d[5] = -0.516491f;
    data->d[6] = -0.047074f;
    data->d[7] = 2.627969f;
    data->d[8] = -0.788927f;
    data->d[9] = -0.000011f;
    data->d[10] = 9.075820f;
    data->d[11] = -0.673036f;
    data->d[12] = 1.196054f;
    data->d[13] = 0.121747f;
    data->d[14] = -0.534154f;
    data->d[15] = -1.779960f;
    data->d[16] = -0.103604f;
    data->d[17] = -4.731739f;
    data->d[18] = -1.259408f;
    data->d[19] = 5.426555f;
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
    *(result->MinResult()) = 0.000017f;
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
    n = data[2] += n;
    n = data[2] *= n;
    n += data[3];
    n = data[4] += n;
    n *= data[5];
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
    n *= data[19];
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
    n = data[2] += n;
    n = data[2] *= n;
    n += data[3];
    n = data[4] += n;
    n *= data[5];
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
    n *= data[19];
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
    n = data[2] += n;
    n = data[2] *= n;
    n += data[3];
    n = data[4] += n;
    n *= data[5];
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
    n *= data[19];
    n *= data[6];
    n += data[12];
// END //
    data1.Copy(data);

    data.Copy(testData);
    n = 1.0f;
    // EVALUATE //
    n += data[0];
    n = data[1] *= n;
    n = data[2] += n;
    n = data[2] *= n;
    n += data[3];
    n = data[4] += n;
    n *= data[5];
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
    n *= data[19];
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
    n = data[2] += n;
    n = data[2] *= n;
    n += data[3];
    n = data[4] += n;
    n *= data[5];
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
    n *= data[19];
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
    n = data[2] += n;
    n = data[2] *= n;
    n += data[3];
    n = data[4] += n;
    n *= data[5];
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
    n *= data[19];
    n *= data[6];
    n += data[12];
// END //
    n = isfinite(n) ? n : 0.0f;
} // Evaluate2

//inline float TestEvaluate(const FireStarterData& data, const float target[FIRESTARTER_SAMPLES], const float theta[FIRESTARTER_SAMPLES])
inline int TestEvaluate(FireStarterData& data, const float target[], const float theta[], float &result)
{
    int found = 0;
    result = 0.0f;
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++) {
//        FireStarterData data1(data);
//        FireStarterData data2(data);
        float n1 = theta[i];
        float n2 = theta[i];

//        Evaluate1(data1, n1);
//        Evaluate2(data2, n2);
        Evaluate2(data, n1);
        Evaluate1(data, n2);
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