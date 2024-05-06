#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
// Run date: 05/05/24 20:53:42 Pacific Daylight Time
// Run duration = 17084.285427 seconds
// Run generation = 708
// Run evolution = 13
// Run max result = 0.00000031
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
// Run precision = 0
// Run candidates = 16
// Run attempts = 0
// Run optimize = 8

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.990128f;
    data->d[1] = 0.360064f;
    data->d[2] = 0.488471f;
    data->d[3] = -0.947937f;
    data->d[4] = -2.270846f;
    data->d[5] = -1.056004f;
    data->d[6] = -0.157233f;
    data->d[7] = 1.494422f;
    data->d[8] = -0.022072f;
    data->d[9] = 1.559636f;
    data->d[10] = -0.234568f;
    data->d[11] = -0.653759f;
    data->d[12] = 1.210624f;
    data->d[13] = -1.749158f;
    data->d[14] = 0.158511f;
    data->d[15] = 0.870211f;
    data->d[16] = -8.556007f;
    data->d[17] = -0.001049f;
    data->d[18] = 0.925177f;
    data->d[19] = 1.393963f;
    data->d[20] = -0.046533f;
    data->d[21] = -0.000000f;
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

// Variation: 1  result = 0.00000031
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.052832f;
    data->d[1] = -0.808214f;
    data->d[2] = -0.229612f;
    data->d[3] = 1.433408f;
    data->d[4] = -2.407298f;
    data->d[5] = -0.139113f;
    data->d[6] = -2.318033f;
    data->d[7] = -3.448627f;
    data->d[8] = -0.001173f;
    data->d[9] = -1.349164f;
    data->d[10] = -0.282323f;
    data->d[11] = 0.800168f;
    data->d[12] = 0.419357f;
    data->d[13] = 0.345490f;
    data->d[14] = -0.993221f;
    data->d[15] = 0.814274f;
    data->d[16] = 1.176514f;
    data->d[17] = -1.677993f;
    data->d[18] = 12.259068f;
    data->d[19] = 1.126894f;
    data->d[20] = 1.819631f;
    data->d[21] = -0.118132f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000021
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.868890f;
    data->d[1] = 0.968448f;
    data->d[2] = -2.717552f;
    data->d[3] = 0.788684f;
    data->d[4] = -0.883154f;
    data->d[5] = -0.631789f;
    data->d[6] = -0.266659f;
    data->d[7] = -1.789261f;
    data->d[8] = 0.042136f;
    data->d[9] = -0.092536f;
    data->d[10] = 4.402225f;
    data->d[11] = 1.419519f;
    data->d[12] = 1.270745f;
    data->d[13] = -0.677922f;
    data->d[14] = -0.951307f;
    data->d[15] = 0.321592f;
    data->d[16] = 2.516395f;
    data->d[17] = 0.330919f;
    data->d[18] = 2.591719f;
    data->d[19] = 1.999046f;
    data->d[20] = 0.019113f;
    data->d[21] = 0.523599f;
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

inline float Evaluate(FireStarterData data, float n)
{
    n += data.d[0];
    n += data.d[1];
    n = data.d[2] += n;
    n = data.d[3] *= n;
    n *= data.d[3];
    n = data.d[4] += n;
    n += data.d[5];
    n = data.d[6] += n;
    n += data.d[7];
    n = data.d[8] *= n;
    n *= data.d[9];
    n = data.d[10] *= n;
    n = data.d[11] += n;
    n = data.d[12] *= n;
    n *= data.d[12];
    n *= data.d[13];
    n = data.d[10] += n;
    n *= data.d[11];
    n += data.d[14];
    n *= data.d[4];
    n += data.d[6];
    n *= data.d[15];
    n = data.d[16] += n;
    n *= data.d[17];
    n += data.d[18];
    n += data.d[8];
    n *= data.d[2];
    n *= data.d[19];
    n *= data.d[16];
    n *= data.d[10];
    n *= data.d[20];
    n += data.d[21];
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

inline float TestPrecision(const FireStarterData& data, unsigned int variation, unsigned int precision)
{
    float result = 0.0f;
    float precisionStep = (TARGET_MAX - TARGET_MIN) / (precision - 1);
    for (int i = 0; i < precision; i++) {
        float theta = TARGET_MIN + i * precisionStep;
        result = fmaxf(fabsf(Evaluate(data, theta) - Target(theta, variation)), result);
    }
    return result;
} // TestPrecision

GPU_GLOBAL void Optimizer(const FireStarterSettings settings, FireStarterPopulation* newResults, const FireStarterPopulation* oldResults, const unsigned int v, const unsigned int registers, const unsigned long long optimizationSeed, const unsigned long long optimizationPass)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= settings.m_population)
        return;

    // Precalculate the target theta values.
    float theta[FIRESTARTER_SAMPLES];
    float sampleStep = (TARGET_MAX - TARGET_MIN) / (FIRESTARTER_SAMPLES - 1);
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
        theta[i] = TARGET_MIN + i * sampleStep;

    // Evolve the program data for each variation.
    unsigned long long seed = optimizationSeed + SEED10(v) + SEED11(member); // Unique seed for the generation/variation/member
    FireStarterData data;
    float oldResult;
    bool evolved = false;

    if (!optimizationPass) {
        // The first generation is initalized with random numbers.
        data.Init(seed, registers, settings.m_registers, settings.m_startScale);
        oldResult = settings.m_startResult;
        evolved = true;
    } else {
        // Later generations randomize a single instruction if they were copied.
        data = *oldResults->Data(settings, member, v);
        oldResult = oldResults->MinResult(settings, member, v);
        unsigned int age = oldResults->Age(settings, member, v);
        if (age > 1) {
            unsigned int d = RANDOMMOD(seed, registers);
            data.d[d] += RANDOMFACTOR(seed) * settings.m_startScale;
            if (age > 2) {
                unsigned int d = RANDOMMOD(seed, registers);
                data.d[d] += RANDOMFACTOR(seed) * settings.m_startScale * (age - 1);
            }
            oldResult = settings.m_startResult;
            evolved = true;
        }
    }

    // Precalculate the target sample values.
    float target[FIRESTARTER_SAMPLES];
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
        target[i] = Target(theta[i], v);

    // Find the initial result
    float result = TestEvaluate(data, target, theta);
    float evolutionScale = evolved ? settings.m_startScale : settings.m_scale * result;

    // Iterate to evolve the data.
    for (unsigned int p = 0; p < settings.m_iterations; p++) {
        unsigned int d = RANDOMMOD(seed, registers);
        float oldData = data.d[d];
        data.d[d] = oldData + evolutionScale * RANDOMFACTOR(seed);
        float curResult = TestEvaluate(data, target, theta);
        if (curResult <= result) {
            result = curResult;
            evolutionScale = settings.m_scale * result;
            evolved = true;
        } else
            data.d[d] = oldData;
    }

    // If the result was better, save the results.
    if (!optimizationPass || (result < oldResult))
        newResults->InitMemberResult(settings, member, v, 0, result, data);
    else {
        // If the result was worse, copy a result from among the previous generation's results.
        unsigned int bestCandidate = member;
        float bestResult = result;

        // The genetic part of genetic programming and a major optimization:
        // Copy the best data from among a random set of candidates.
        for (int i = 0; i < settings.m_candidates; i++) {
            unsigned int candidate = RANDOMMOD(seed, settings.m_population);
            if (oldResults->Age(settings, candidate, v) <= 1) {   // Only select evolving members
                float curResult = oldResults->MinResult(settings, candidate, v);
                if (curResult <= bestResult) {
                    bestResult = curResult;
                    bestCandidate = candidate;
                }
            }
        }

        // Switch to the selected member's data and results.
        if (bestCandidate == member)
            // Note: result will be larger than oldResult
            newResults->InitMemberResult(settings, member, v, 1, result, data);
        else {
            float oldResult = oldResults->MinResult(settings, bestCandidate, v);
            unsigned int oldAge = oldResults->Age(settings, member, v);
            const FireStarterData* oldData = oldResults->Data(settings, bestCandidate, v);
            newResults->InitMemberResult(settings, member, v, MAX(oldAge, 1) + 1, oldResult, oldData);
        }
    }
} // Optimizer
