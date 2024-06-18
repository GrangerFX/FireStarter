#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

// VARIATIONS //
// Run date: 06/18/24 10:05:35 Pacific Daylight Time
// Run duration = 129.332034 seconds
// Run generation = 45
// Run evolution = 2
// Run max result = 0.00002337
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

// Variation: 0  result = 0.00002027
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.913123f;
    data->d[1] = -0.914221f;
    data->d[2] = -0.976346f;
    data->d[3] = -0.309733f;
    data->d[4] = -3.398588f;
    data->d[5] = 0.548470f;
    data->d[6] = 1.248361f;
    data->d[7] = -1.307191f;
    data->d[8] = 0.005887f;
    data->d[9] = 2.121642f;
    data->d[10] = 0.647826f;
    data->d[11] = 0.048458f;
    data->d[12] = -0.346877f;
    data->d[13] = 1.730039f;
    data->d[14] = 4.372249f;
    data->d[15] = 1.385685f;
    data->d[16] = -3.367742f;
    data->d[17] = -0.179352f;
    data->d[18] = -2.457124f;
    data->d[19] = 2.359217f;
    data->d[20] = 0.004582f;
    data->d[21] = -0.147744f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000020f;
} // LoadVariation0

// Variation: 1  result = 0.00002158
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.135271f;
    data->d[1] = 0.294812f;
    data->d[2] = -0.572139f;
    data->d[3] = -0.446197f;
    data->d[4] = 1.210189f;
    data->d[5] = 0.973718f;
    data->d[6] = -0.399719f;
    data->d[7] = 0.303240f;
    data->d[8] = -0.687010f;
    data->d[9] = 1.393705f;
    data->d[10] = -1.049763f;
    data->d[11] = -0.190969f;
    data->d[12] = 0.625703f;
    data->d[13] = 8.864054f;
    data->d[14] = 1.565730f;
    data->d[15] = 4.903325f;
    data->d[16] = 5.257777f;
    data->d[17] = -8.004611f;
    data->d[18] = -4.419729f;
    data->d[19] = -15.418944f;
    data->d[20] = 11.891389f;
    data->d[21] = -0.009971f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000022f;
} // LoadVariation1

// Variation: 2  result = 0.00002337
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.384507f;
    data->d[1] = -0.345229f;
    data->d[2] = -1.050143f;
    data->d[3] = -1.062778f;
    data->d[4] = -0.758136f;
    data->d[5] = 0.626809f;
    data->d[6] = 1.983205f;
    data->d[7] = -2.417825f;
    data->d[8] = -0.004258f;
    data->d[9] = 3.470768f;
    data->d[10] = -0.539938f;
    data->d[11] = 0.163589f;
    data->d[12] = -3.350423f;
    data->d[13] = 0.458217f;
    data->d[14] = -1.280126f;
    data->d[15] = 2.101235f;
    data->d[16] = 1.705246f;
    data->d[17] = 2.943671f;
    data->d[18] = 0.243380f;
    data->d[19] = -0.061973f;
    data->d[20] = -0.650335f;
    data->d[21] = -0.805354f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000023f;
} // LoadVariation2

// END //

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
    n += data[10];
    n = data[11] *= n;
    n = data[12] *= n;
    n *= data[13];
    n += data[14];
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
    n += data[10];
    n = data[11] *= n;
    n = data[12] *= n;
    n *= data[13];
    n += data[14];
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
