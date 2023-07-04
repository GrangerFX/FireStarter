#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
// Run date: 07/04/23 14:40:26 Pacific Daylight Time
// Run duration = 98.519453 seconds
// Run generation = 5
// Run evolution = 0
// Run result = 0.00008452
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 64
// Run units = 8
// Run processes = 0
// Run population = 278528
// Run iterations = 64
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

// Variation: 0  result = 0.00005906
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141925f;
    data->d[1] = 0.336483f;
    data->d[2] = -0.504494f;
    data->d[3] = -0.678306f;
    data->d[4] = 1.218139f;
    data->d[5] = 0.226081f;
    data->d[6] = -0.486419f;
    data->d[7] = 0.736116f;
    data->d[8] = -1.199642f;
    data->d[9] = -0.725689f;
    data->d[10] = 1.627687f;
    data->d[11] = -1.226043f;
    data->d[12] = -0.280231f;
    data->d[13] = -1.921057f;
    data->d[14] = 0.030252f;
    data->d[15] = -0.766287f;
    data->d[16] = 1.493796f;
    data->d[17] = -0.000121f;
    data->d[18] = 0.404979f;
    data->d[19] = -2.813047f;
    data->d[20] = 0.021248f;
    data->d[21] = -0.021224f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000059f;
} // LoadVariation0

// Variation: 1  result = 0.00003326
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090439f;
    data->d[1] = -0.145173f;
    data->d[2] = -1.659265f;
    data->d[3] = -0.363689f;
    data->d[4] = 0.925382f;
    data->d[5] = 1.658752f;
    data->d[6] = -1.626257f;
    data->d[7] = -0.956905f;
    data->d[8] = 0.401463f;
    data->d[9] = 1.120498f;
    data->d[10] = 3.613197f;
    data->d[11] = -3.030341f;
    data->d[12] = 0.248309f;
    data->d[13] = 0.005470f;
    data->d[14] = 0.433045f;
    data->d[15] = 0.756585f;
    data->d[16] = -1.251806f;
    data->d[17] = -0.000031f;
    data->d[18] = -0.955626f;
    data->d[19] = 2.072115f;
    data->d[20] = 0.386239f;
    data->d[21] = -0.504365f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000033f;
} // LoadVariation1

// Variation: 2  result = 0.00008452
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.618189f;
    data->d[1] = 0.127017f;
    data->d[2] = 1.117056f;
    data->d[3] = 1.314992f;
    data->d[4] = -0.545485f;
    data->d[5] = -1.112951f;
    data->d[6] = -0.417768f;
    data->d[7] = -3.408188f;
    data->d[8] = 1.623633f;
    data->d[9] = -0.128349f;
    data->d[10] = -1.770747f;
    data->d[11] = -3.820315f;
    data->d[12] = 2.478815f;
    data->d[13] = -1.871868f;
    data->d[14] = -0.020628f;
    data->d[15] = 1.631907f;
    data->d[16] = -0.416896f;
    data->d[17] = -0.000040f;
    data->d[18] = 3.593444f;
    data->d[19] = 0.288701f;
    data->d[20] = -0.001871f;
    data->d[21] = 0.525740f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000085f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n += data.d[0];
    n = data.d[1] *= n;
    n = data.d[2] *= n;
    n *= data.d[2];
    n *= data.d[3];
    n = data.d[4] += n;
    n += data.d[5];
    n += data.d[4];
    n *= data.d[6];
    n *= data.d[7];
    n = data.d[8] *= n;
    n *= data.d[9];
    n = data.d[8] *= n;
    n *= data.d[10];
    n += data.d[11];
    n *= data.d[12];
    n = data.d[13] *= n;
    n = data.d[14] *= n;
    n = data.d[15] += n;
    n *= data.d[16];
    n *= data.d[1];
    n = data.d[17] += n;
    n *= data.d[8];
    n = data.d[15] *= n;
    n *= data.d[17];
    n += data.d[13];
    n += data.d[18];
    n += data.d[14];
    n *= data.d[15];
    n *= data.d[19];
    n += data.d[20];
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

GPU_GLOBAL void Optimizer(const FireStarterSettings settings, FireStarterPopulation* newResults, FireStarterPopulation* oldResults, const unsigned int v, const unsigned int firstMember, const unsigned int lastMember, const unsigned int dataSize, const unsigned long long generationSeed, const unsigned int init)
{
    unsigned int member = firstMember + blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= lastMember)
        return;

    // Precalculate the target theta values.
    float theta[FIRESTARTER_SAMPLES];
    float sampleStep = (TARGET_MAX - TARGET_MIN) / (FIRESTARTER_SAMPLES - 1);
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
        theta[i] = TARGET_MIN + i * sampleStep;

    // Evolve the program data for each variation.
    unsigned long long memberSeed = RANDOM(RANDOM(generationSeed) + member);
    FireStarterData data;
    unsigned long long seed = RANDOM(memberSeed + v); // Unique seed for the generation/member/variation
    float oldResult;
    bool evolved = false;

    if (init) {
        // The first generation is initalized with random numbers.
        for (unsigned int i = 0; i < dataSize; i++)
            data.d[i] = RANDOMFACTOR(seed) * settings.m_startScale;
        for (unsigned int i = dataSize; i < FIRESTARTER_REGISTERS; i++)
            data.d[i] = 0.0f;   // Clear the unused data.
        oldResult = settings.m_startResult;
        evolved = true;
    } else {
        // Later generations randomize a single instruction if they were copied.
        data = *oldResults->Data(member, v);
        oldResult = *oldResults->MinResult(member, v);
        unsigned int age = *oldResults->Index(member, v);
        if (age > 1) {
            unsigned int d = RANDOMMOD(seed, dataSize);
            data.d[d] += RANDOMFACTOR(seed) * settings.m_startScale * (age - 1);
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
        unsigned int d = RANDOMMOD(seed, dataSize);
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

    // Calculate a more accurate estimate of the result.
    if (settings.m_precision) {
        if (evolved)
            result = fmaxf(result, TestPrecision(data, v, settings.m_precision));
        else
            result = oldResult;
    }

    // If the result was worse, copy from a member with better resulOptimizeGenerationss.
    if (init || (result < oldResult)) {
        // Save better results.
        *newResults->Data(member, v) = data;
        *newResults->MinResult(member, v) = result;
        *newResults->Index(member, v) = 0;
        *newResults->Debug(member, v) = init ? 1 : *oldResults->Debug(member, v) + 1;
    } else {
        // Copy a result from among the previous generation's results.
        unsigned int bestCandidate = member;
        float bestResult = result;

        // The genetic part of genetic programming and a major optimization:
        // Copy the best data from among a random set of candidates.
        for (int i = 0; i < settings.m_candidates; i++) {
            unsigned int candidate = RANDOMMOD(seed, settings.m_population);
            if (*oldResults->Index(candidate, v) <= 1) {   // Only select evolving members
                float curResult = *oldResults->MinResult(candidate, v);
                if (curResult <= bestResult) {
                    bestResult = curResult;
                    bestCandidate = candidate;
                }
            }
        }

        // Switch to the selected member's data and results.
        if (bestCandidate == member) {
            // Note: result will be larger than oldResult
            *newResults->Data(member, v) = data;
            *newResults->MinResult(member, v) = result;
            *newResults->Index(member, v) = 1;
        } else {
            *newResults->Data(member, v) = *oldResults->Data(bestCandidate, v);
            *newResults->MinResult(member, v) = *oldResults->MinResult(bestCandidate, v);
            *newResults->Index(member, v) = MAX(*oldResults->Index(member, v), 1) + 1;
        }
        *newResults->Debug(member, v) = *oldResults->Debug(bestCandidate, v);
    }
} // Optimizer
