#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
// Run date: 08/26/23 09:34:42 Pacific Daylight Time
// Run duration = 3.265868 seconds
// Run generation = 1
// Run evolution = 1
// Run result = 0.43964040
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_CODE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 0
// Run units = 1
// Run processes = 0
// Run population = 17408
// Run iterations = 256
// Run generations = 1
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

// Variation: 0  result = 0.43964040
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.764312f;
    data->d[1] = 0.654484f;
    data->d[2] = -0.050573f;
    data->d[3] = 0.686745f;
    data->d[4] = 0.226463f;
    data->d[5] = 1.147699f;
    data->d[6] = -0.021866f;
    data->d[7] = 0.243625f;
    data->d[8] = -0.644326f;
    data->d[9] = 0.057718f;
    data->d[10] = 1.004087f;
    data->d[11] = 0.658655f;
    data->d[12] = 0.199323f;
    data->d[13] = 0.217427f;
    data->d[14] = 0.277212f;
    data->d[15] = -0.369744f;
    data->d[16] = -0.937246f;
    data->d[17] = 0.778318f;
    data->d[18] = 0.661115f;
    data->d[19] = -0.660549f;
    data->d[20] = -0.852749f;
    data->d[21] = -0.119887f;
    data->d[22] = 0.037646f;
    data->d[23] = -0.220807f;
    data->d[24] = 0.725177f;
    data->d[25] = -0.494796f;
    data->d[26] = 0.368536f;
    data->d[27] = 0.600409f;
    data->d[28] = 0.982019f;
    *(result->MinResult()) = 0.439640f;
} // LoadVariation0

// Variation: 1  result = 0.24304360
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.550493f;
    data->d[1] = -0.917973f;
    data->d[2] = -1.619701f;
    data->d[3] = 0.215296f;
    data->d[4] = 0.661279f;
    data->d[5] = 0.652002f;
    data->d[6] = 3.601870f;
    data->d[7] = 0.321398f;
    data->d[8] = -0.231679f;
    data->d[9] = -10.864533f;
    data->d[10] = -0.901240f;
    data->d[11] = -0.876861f;
    data->d[12] = 0.944295f;
    data->d[13] = 0.295675f;
    data->d[14] = -0.876135f;
    data->d[15] = 1.077603f;
    data->d[16] = 0.573650f;
    data->d[17] = -0.100908f;
    data->d[18] = 7.034690f;
    data->d[19] = -1.156441f;
    data->d[20] = -0.068972f;
    data->d[21] = -0.131158f;
    data->d[22] = -0.190841f;
    data->d[23] = 0.879115f;
    data->d[24] = 0.871007f;
    data->d[25] = 0.711307f;
    data->d[26] = 0.659298f;
    data->d[27] = -0.951454f;
    data->d[28] = -0.921829f;
    *(result->MinResult()) = 0.243044f;
} // LoadVariation1

// Variation: 2  result = 0.43588528
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -4.133366f;
    data->d[1] = -0.014057f;
    data->d[2] = 2.034422f;
    data->d[3] = -0.195969f;
    data->d[4] = -0.550484f;
    data->d[5] = -0.201300f;
    data->d[6] = 1.281728f;
    data->d[7] = -0.796059f;
    data->d[8] = -0.623223f;
    data->d[9] = -7.400227f;
    data->d[10] = 1.764609f;
    data->d[11] = -0.219434f;
    data->d[12] = -6.933154f;
    data->d[13] = -0.739794f;
    data->d[14] = -11.416261f;
    data->d[15] = -0.337315f;
    data->d[16] = -0.878962f;
    data->d[17] = 0.419129f;
    data->d[18] = 12.979118f;
    data->d[19] = 0.892314f;
    data->d[20] = 10.120349f;
    data->d[21] = -0.214418f;
    data->d[22] = -0.950623f;
    data->d[23] = 4.107496f;
    data->d[24] = -0.829217f;
    data->d[25] = 2.655096f;
    data->d[26] = 0.906323f;
    data->d[27] = -0.063016f;
    data->d[28] = -0.950545f;
    *(result->MinResult()) = 0.435885f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n *= data.d[16];
    n = data.d[17] += n;
    n = data.d[15] *= n;
    n = data.d[13] *= n;
    n *= data.d[24];
    n = data.d[4] *= n;
    n = data.d[10] += n;
    n = data.d[28] += n;
    n = data.d[7] *= n;
    n = data.d[11] += n;
    n = data.d[10] *= n;
    n *= data.d[17];
    n += data.d[1];
    n *= data.d[13];
    n = data.d[7] += n;
    n *= data.d[11];
    n *= data.d[21];
    n += data.d[7];
    n = data.d[28] *= n;
    n = data.d[10] *= n;
    n = data.d[10] += n;
    n *= data.d[22];
    n += data.d[23];
    n *= data.d[3];
    n += data.d[15];
    n *= data.d[5];
    n = data.d[4] += n;
    n *= data.d[4];
    n += data.d[28];
    n *= data.d[26];
    n *= data.d[10];
    n += data.d[2];
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

GPU_GLOBAL void Optimizer(const FireStarterSettings settings, FireStarterPopulation* newResults, FireStarterPopulation* oldResults, const unsigned int v, const unsigned int firstMember, const unsigned int lastMember, const unsigned int dataSize, const unsigned long long generationSeed, const unsigned int initData)
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

    if (initData) {
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

    // If the result was better, save the results.
    if (initData || (result < oldResult)) {
        *newResults->Data(member, v) = data;
        *newResults->MinResult(member, v) = result;
        *newResults->Index(member, v) = 0;
        *newResults->Debug(member, v) = initData ? 1 : *oldResults->Debug(member, v) + 1;
    } else {
        // If the result was worse, copy a result from among the previous generation's results.
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
