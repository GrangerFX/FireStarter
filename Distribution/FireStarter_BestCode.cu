#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.141593f;
    data->d[1] = 0.364518f;
    data->d[2] = 0.029690f;
    data->d[3] = -0.921938f;
    data->d[4] = -1.219748f;
    data->d[5] = 3.686435f;
    data->d[6] = -0.066796f;
    data->d[7] = 0.589707f;
    data->d[8] = -1.092347f;
    data->d[9] = 1.237858f;
    data->d[10] = 1.499511f;
    data->d[11] = -0.158913f;
    data->d[12] = 22.987646f;
    data->d[13] = -19.625746f;
    data->d[14] = 23.711294f;
    data->d[15] = 0.001956f;
    data->d[16] = -14.545778f;
    data->d[17] = -1.581590f;
    data->d[18] = -0.000000f;
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
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *result->MinResult(0) = 0.000001f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -3.090658f;
    data->d[1] = 0.294273f;
    data->d[2] = 0.467043f;
    data->d[3] = -5.407283f;
    data->d[4] = -1.077156f;
    data->d[5] = 0.775772f;
    data->d[6] = -3.541287f;
    data->d[7] = 0.289636f;
    data->d[8] = 0.152006f;
    data->d[9] = -0.781819f;
    data->d[10] = -0.061378f;
    data->d[11] = 0.043806f;
    data->d[12] = 9.493250f;
    data->d[13] = -5.222623f;
    data->d[14] = 7.255289f;
    data->d[15] = 0.248182f;
    data->d[16] = 0.173126f;
    data->d[17] = 0.057331f;
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
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *result->MinResult(1) = 0.000001f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -2.617994f;
    data->d[1] = 0.480241f;
    data->d[2] = 0.112727f;
    data->d[3] = -4.157291f;
    data->d[4] = 0.567667f;
    data->d[5] = -1.010678f;
    data->d[6] = -0.829096f;
    data->d[7] = 0.439031f;
    data->d[8] = -0.721499f;
    data->d[9] = -0.750821f;
    data->d[10] = 0.543289f;
    data->d[11] = 0.304151f;
    data->d[12] = -12.574543f;
    data->d[13] = 4.802970f;
    data->d[14] = 3.219914f;
    data->d[15] = -0.009624f;
    data->d[16] = 0.846270f;
    data->d[17] = 0.928374f;
    data->d[18] = 0.523599f;
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
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *result->MinResult(2) = 0.000001f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n = data.d[0] += n;
    n = data.d[1] *= n;
    n = data.d[1] *= n;
    n *= data.d[2];
    n += data.d[3];
    n = data.d[4] *= n;
    n = data.d[5] *= n;
    n *= data.d[6];
    n *= data.d[7];
    n = data.d[8] *= n;
    n = data.d[5] *= n;
    n = data.d[9] *= n;
    n = data.d[10] *= n;
    n = data.d[1] *= n;
    n = data.d[11] *= n;
    n *= data.d[4];
    n *= data.d[12];
    n += data.d[13];
    n += data.d[14];
    n *= data.d[15];
    n = data.d[10] *= n;
    n += data.d[16];
    n *= data.d[10];
    n = data.d[1] += n;
    n *= data.d[11];
    n += data.d[17];
    n += data.d[1];
    n *= data.d[9];
    n *= data.d[5];
    n += data.d[8];
    n *= data.d[0];
    n += data.d[18];
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

GPU_GLOBAL void Optimizer(const FireStarterSettings settings, FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int firstVariation, const unsigned int lastVariation, const unsigned int firstMember, const unsigned int lastMember, const unsigned int dataSize, const unsigned long long generationSeed, const unsigned int init)
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
    float maxResult = 0.0f;
    unsigned long long memberSeed = RANDOM64(RANDOM64(generationSeed) + member);
    for (unsigned int v = firstVariation; v <= lastVariation; v++) {
        FireStarterData data;
        unsigned long long seed = RANDOM64(memberSeed + v); // Unique seed for the generation/member/variation
        float oldResult;
        bool evolved = false;

        if (init) {
            // The first generation is initalized with random numbers.
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR64(seed);
            for (int i = dataSize; i < FIRESTARTER_REGISTERS; i++)
                data.d[i] = 0.0f;   // Clear the unused data.
            oldResult = settings.m_startResult;
            evolved = true;
        } else {
            // Later generations randomize a single instruction if they were copied.
            data = *oldResults->Data(member, v);
            oldResult = *oldResults->MinResult(member, v);
            if (*oldResults->Index(member, v) != member) {
                unsigned int d = RANDOMMOD64(seed, dataSize);
                data.d[d] += settings.m_startScale * RANDOMFACTOR64(seed);
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
            unsigned int d = RANDOMMOD64(seed, dataSize);
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionScale * RANDOMFACTOR64(seed);
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
            *newResults->Index(member, v) = member;
            *newResults->Debug1(member) = init ? 1 : *oldResults->Debug1(member) + 1;
            *newResults->Debug2(member) = (unsigned int)memberSeed;
            maxResult = fmaxf(maxResult, result);
        } else {
            // Copy a result from among the previous generation's results.
            unsigned int bestCandidate = member;
            float bestResult = oldResult;
            if (settings.m_evolve == FIRESTARTER_EVOLVE_BEST) {
                // The genetic part of genetic programming and a major optimization:
                // Copy the best data from among a random set of candidates.
                for (int i = 0; i < settings.m_candidates; i++) {
                    unsigned int candidate = RANDOMMOD64(seed, settings.m_population);
                    if (candidate == *oldResults->Index(candidate, v)) {   // Only select evolving members
                        float curResult = *oldResults->MinResult(candidate, v);
                        if (curResult <= bestResult) {
                            bestResult = curResult;
                            bestCandidate = candidate;
                        }
                    }
                }
            } else if (settings.m_evolve == FIRESTARTER_EVOLVE_RANDOM)
                bestCandidate = RANDOMMOD64(seed, FIRESTARTER_CODE_POPULATION);

            // Switch to the selected member's data and results or revert to the previous generation.
            if (bestCandidate != member) {
                *newResults->Data(member, v) = *oldResults->Data(bestCandidate, v);
                *newResults->MinResult(member, v) = *oldResults->MinResult(bestCandidate, v);
                maxResult = fmaxf(maxResult, bestResult);
            } else {
                *newResults->Data(member, v) = data;
                *newResults->MinResult(member, v) = result;
                maxResult = fmaxf(maxResult, result);
            }
            *newResults->Index(member, v) = bestCandidate;
            *newResults->Debug1(member) = *oldResults->Debug1(bestCandidate);
            *newResults->Debug2(member) = *oldResults->Debug2(bestCandidate);
        }
    }
    *newResults->MaxResult(member) = maxResult;
} // Optimizer
