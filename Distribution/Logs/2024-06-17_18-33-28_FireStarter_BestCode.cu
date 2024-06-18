#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

// VARIATIONS //
// Run date: 06/17/24 18:33:28 Pacific Daylight Time
// Run duration = 191.389802 seconds
// Run generation = 8
// Run evolution = 1
// Run max result = 0.00016791
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

// Variation: 0  result = 0.00016791
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.695924f;
    data->d[1] = 0.098042f;
    data->d[2] = -0.694174f;
    data->d[3] = -0.796171f;
    data->d[4] = 2.104229f;
    data->d[5] = 0.604753f;
    data->d[6] = -1.229584f;
    data->d[7] = 1.468950f;
    data->d[8] = 2.303108f;
    data->d[9] = -0.716467f;
    data->d[10] = 1.747939f;
    data->d[11] = -0.221007f;
    data->d[12] = -0.156617f;
    data->d[13] = -0.831983f;
    data->d[14] = -0.019786f;
    data->d[15] = -0.514769f;
    data->d[16] = 15.467291f;
    data->d[17] = 5.745551f;
    data->d[18] = -3.921978f;
    data->d[19] = 0.430896f;
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
    *(result->MinResult()) = 0.000168f;
} // LoadVariation0

// Variation: 1  result = 0.00009108
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.988407f;
    data->d[1] = -0.106151f;
    data->d[2] = -0.498994f;
    data->d[3] = 0.830132f;
    data->d[4] = -0.964561f;
    data->d[5] = 1.208458f;
    data->d[6] = -2.798659f;
    data->d[7] = 0.880533f;
    data->d[8] = -0.047837f;
    data->d[9] = 1.033418f;
    data->d[10] = -0.056806f;
    data->d[11] = -4.243221f;
    data->d[12] = -1.467469f;
    data->d[13] = -0.285986f;
    data->d[14] = -3.818542f;
    data->d[15] = 2.112522f;
    data->d[16] = -1.061674f;
    data->d[17] = -4.514578f;
    data->d[18] = -0.969817f;
    data->d[19] = -0.005712f;
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
    *(result->MinResult()) = 0.000091f;
} // LoadVariation1

// Variation: 2  result = 0.00010622
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.200822f;
    data->d[1] = 0.075573f;
    data->d[2] = -1.360440f;
    data->d[3] = 1.266989f;
    data->d[4] = -0.814662f;
    data->d[5] = 0.465254f;
    data->d[6] = -1.573575f;
    data->d[7] = 0.921391f;
    data->d[8] = 2.469110f;
    data->d[9] = -3.715555f;
    data->d[10] = -1.534663f;
    data->d[11] = 0.664893f;
    data->d[12] = -1.501056f;
    data->d[13] = 0.483584f;
    data->d[14] = 0.157922f;
    data->d[15] = 0.710726f;
    data->d[16] = 9.380381f;
    data->d[17] = -0.386616f;
    data->d[18] = -7.671939f;
    data->d[19] = 1.231680f;
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
    *(result->MinResult()) = 0.000106f;
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

    inline void Copy(const FireStarterData& data)
    {
        for (unsigned int i = 0; i < FIRESTARTER_REGISTERS; i++)
            d[i * WARP_THREADS + threadIdx.x] = data[i];
    } // Copy
} FireStarterSharedData;

#if FIRESTARTER_OPTIMIZE_SHARED

inline float Evaluate(const FireStarterData& testData, float n)
{
    GPU_SHARED FireStarterSharedData data;
    data = testData;
//    FireStarterData data;
//    data.Copy(testData); // Set the data for the current thread.
// EVALUATE //
    n += data[0];
    n = data[1] *= n;
    n = data[2] += n;
    n = data[2] *= n;
    n *= data[3];
    n = data[4] += n;
    n = data[5] *= n;
    n = data[6] += n;
    n += data[7];
    n = data[8] *= n;
    n = data[9] += n;
    n = data[1] *= n;
    n *= data[10];
    n *= data[11];
    n += data[12];
    n = data[13] *= n;
    n *= data[4];
    n *= data[14];
    n = data[15] += n;
    n = data[5] *= n;
    n *= data[15];
    n *= data[8];
    n *= data[16];
    n *= data[1];
    n *= data[13];
    n *= data[17];
    n *= data[9];
    n *= data[2];
    n *= data[5];
    n *= data[18];
    n *= data[6];
    n += data[19];
// END //
    return isfinite(n) ? n : 0.0f;
} // Evaluate

#else

#if 0
inline float Evaluate(const FireStarterData& testData, float n)
{
    float n1 = n;
    float n2 = n;
    {
        FireStarterData data(testData);
        n = n1;
// EVALUATE //
    n += data[0];
    n = data[1] *= n;
    n = data[2] += n;
    n = data[2] *= n;
    n *= data[3];
    n = data[4] += n;
    n = data[5] *= n;
    n = data[6] += n;
    n += data[7];
    n = data[8] *= n;
    n = data[9] += n;
    n = data[1] *= n;
    n *= data[10];
    n *= data[11];
    n += data[12];
    n = data[13] *= n;
    n *= data[4];
    n *= data[14];
    n = data[15] += n;
    n = data[5] *= n;
    n *= data[15];
    n *= data[8];
    n *= data[16];
    n *= data[1];
    n *= data[13];
    n *= data[17];
    n *= data[9];
    n *= data[2];
    n *= data[5];
    n *= data[18];
    n *= data[6];
    n += data[19];
// END //
        n1 = n;
    }
    {
        FireStarterData data;
        data.Copy(testData);
        n = n2;
// EVALUATE //
    n += data[0];
    n = data[1] *= n;
    n = data[2] += n;
    n = data[2] *= n;
    n *= data[3];
    n = data[4] += n;
    n = data[5] *= n;
    n = data[6] += n;
    n += data[7];
    n = data[8] *= n;
    n = data[9] += n;
    n = data[1] *= n;
    n *= data[10];
    n *= data[11];
    n += data[12];
    n = data[13] *= n;
    n *= data[4];
    n *= data[14];
    n = data[15] += n;
    n = data[5] *= n;
    n *= data[15];
    n *= data[8];
    n *= data[16];
    n *= data[1];
    n *= data[13];
    n *= data[17];
    n *= data[9];
    n *= data[2];
    n *= data[5];
    n *= data[18];
    n *= data[6];
    n += data[19];
// END //
        n2 = n;
    }
    if (n1 != n2) {
        FireStarterData data1(testData);
        FireStarterData data2;
        data2.Copy(testData);
        for (unsigned int i = 0; i < FIRESTARTER_REGISTERS; i++) {
            if (data1[i] != data2[i])
                return -123456.78;
        }
        return 123456.78f;
    }
    if ((n == 123456.78f) || (n == -123456.78f))
        return 123456.0f;
    if (n == -123456.78f)
        return -123456.0f;
    return isfinite(n) ? n : 0.0f;
} // Evaluate

//inline float TestEvaluate(const FireStarterData& data, const float target[FIRESTARTER_SAMPLES], const float theta[FIRESTARTER_SAMPLES])
inline float TestEvaluate(const FireStarterData& data, const float target[], const float theta[])
{
    float result = 0.0f;
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++) {
        float n = Evaluate(data, theta[i]);
        if ((n == 123456.78f) || (n == -123456.78f))
            return n;

        result = fmaxf(fabsf(n - target[i]), result);
    }
    return result;
} // TestEvaluate
#else
inline float Evaluate(const FireStarterData& testData, float n)
{
    FireStarterData data(testData);
// EVALUATE //
    n += data[0];
    n = data[1] *= n;
    n = data[2] += n;
    n = data[2] *= n;
    n *= data[3];
    n = data[4] += n;
    n = data[5] *= n;
    n = data[6] += n;
    n += data[7];
    n = data[8] *= n;
    n = data[9] += n;
    n = data[1] *= n;
    n *= data[10];
    n *= data[11];
    n += data[12];
    n = data[13] *= n;
    n *= data[4];
    n *= data[14];
    n = data[15] += n;
    n = data[5] *= n;
    n *= data[15];
    n *= data[8];
    n *= data[16];
    n *= data[1];
    n *= data[13];
    n *= data[17];
    n *= data[9];
    n *= data[2];
    n *= data[5];
    n *= data[18];
    n *= data[6];
    n += data[19];
// END //
    if ((n == 123456.78f) || (n == -123456.78f))
        return 123456.0f;
    if (n == -123456.78f)
        return -123456.0f;
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
        } else {
            result = memberResult = oldResults->MinResult(settings, member, v);
            evolutionScale = settings.m_scale * memberResult;
            result = TestEvaluate(data, target, theta);
        }
    }

    // Iterate to evolve the registers.
    if ((result != 123456.78f) && (result != -123456.78f)) // Note: DEBUG!
        for (unsigned int p = 0; p < settings.m_iterations; p++) {
            unsigned int d = RANDOMMOD(seed, registers);
            float oldData = data[d];
            data[d] = oldData + evolutionScale * RANDOMFACTOR(seed);
            float curResult = TestEvaluate(data, target, theta);
            if ((curResult == 123456.78f) || (curResult == -123456.78f)) { // Note: DEBUG!
                result = curResult;
                break;
            }
            if (curResult <= result)
                result = curResult;
            else
                data[d] = oldData;
        }

    // If the result was better, save the results.
    if (!optimizationPass || (result < memberResult) || (result == 123.45678f) || (result == -123.45678f)) // Note: DEBUG!
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
