#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -1.999610f;
    data->d[1] = 0.271826f;
    data->d[2] = -0.222395f;
    data->d[3] = 1.376755f;
    data->d[4] = -0.794926f;
    data->d[5] = 0.710742f;
    data->d[6] = -0.772844f;
    data->d[7] = -0.489390f;
    data->d[8] = 1.132122f;
    data->d[9] = -0.542012f;
    data->d[10] = 1.054756f;
    data->d[11] = 1.512236f;
    data->d[12] = -0.239186f;
    data->d[13] = -3.483133f;
    data->d[14] = -0.016839f;
    data->d[15] = -0.731724f;
    data->d[16] = -1.141858f;
    data->d[17] = -0.015120f;
    data->d[18] = -0.874726f;
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
    *result->MinResult(0) = 0.000029f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -2.357208f;
    data->d[1] = 0.302395f;
    data->d[2] = -1.057614f;
    data->d[3] = -1.221434f;
    data->d[4] = 0.721208f;
    data->d[5] = -0.328365f;
    data->d[6] = -1.445716f;
    data->d[7] = 0.445304f;
    data->d[8] = 2.209419f;
    data->d[9] = -0.365483f;
    data->d[10] = 0.293300f;
    data->d[11] = 1.454934f;
    data->d[12] = -0.126362f;
    data->d[13] = -4.781540f;
    data->d[14] = -0.742803f;
    data->d[15] = 0.570789f;
    data->d[16] = 0.579905f;
    data->d[17] = -0.587573f;
    data->d[18] = -0.517903f;
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
    *result->MinResult(1) = 0.000028f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -2.080848f;
    data->d[1] = 0.569446f;
    data->d[2] = 3.724564f;
    data->d[3] = -3.381402f;
    data->d[4] = 0.649092f;
    data->d[5] = -0.026618f;
    data->d[6] = -0.378695f;
    data->d[7] = -0.279457f;
    data->d[8] = 0.690648f;
    data->d[9] = -0.022527f;
    data->d[10] = -2.174829f;
    data->d[11] = -0.132762f;
    data->d[12] = -0.040751f;
    data->d[13] = -2.705594f;
    data->d[14] = -2.195339f;
    data->d[15] = -1.758466f;
    data->d[16] = -0.228289f;
    data->d[17] = -0.374747f;
    data->d[18] = 1.319264f;
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
    *result->MinResult(2) = 0.000046f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n += data.d[0];
    n *= data.d[1];
    n = data.d[2] += n;
    n = data.d[3] += n;
    n = data.d[4] += n;
    n += data.d[5];
    n = data.d[6] += n;
    n = data.d[7] *= n;
    n += data.d[8];
    n = data.d[3] *= n;
    n = data.d[6] += n;
    n *= data.d[9];
    n *= data.d[10];
    n *= data.d[2];
    n = data.d[11] += n;
    n = data.d[12] *= n;
    n = data.d[12] *= n;
    n *= data.d[13];
    n += data.d[14];
    n += data.d[4];
    n = data.d[11] *= n;
    n = data.d[15] += n;
    n *= data.d[16];
    n *= data.d[7];
    n += data.d[11];
    n *= data.d[17];
    n = data.d[18] += n;
    n *= data.d[6];
    n *= data.d[15];
    n += data.d[12];
    n *= data.d[3];
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
        unsigned int age;
        bool evolved = false;

        if (init) {
            // The first generation is initalized with random numbers.
            for (unsigned int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR64(seed) * settings.m_startScale;
            for (unsigned int i = dataSize; i < FIRESTARTER_REGISTERS; i++)
                data.d[i] = 0.0f;   // Clear the unused data.
            oldResult = settings.m_startResult;
            age = 0;
            evolved = true;
        } else {
            // Later generations randomize a single instruction if they were copied.
            data = *oldResults->Data(member, v);
            oldResult = *oldResults->MinResult(member, v);
            age = *oldResults->Index(member, v);
            if (age) {
                unsigned int count = age / 4 + 1;
                count = MIN(count, dataSize);
                for (unsigned int i = 0; i < count; i++) {
                    unsigned int d = RANDOMMOD64(seed, dataSize);
                    data.d[d] += RANDOMFACTOR64(seed) * settings.m_startScale;
                }
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
            *newResults->Index(member, v) = 0;
            *newResults->Debug1(member, v) = init ? 1 : *oldResults->Debug1(member, v) + 1;
            *newResults->Debug2(member, v) = (unsigned int)memberSeed;
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
                    if (*oldResults->Index(candidate, v) == 0) {   // Only select evolving members
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
                *newResults->Index(member, v) = age + 1;
                maxResult = fmaxf(maxResult, bestResult);
            } else {
                // Note: result will probably be larger than oldResult
                *newResults->Data(member, v) = data;
                *newResults->MinResult(member, v) = result;
                *newResults->Index(member, v) = 0;
                maxResult = fmaxf(maxResult, result);
            }
            *newResults->Debug1(member, v) = *oldResults->Debug1(bestCandidate, v);
            *newResults->Debug2(member, v) = *oldResults->Debug2(bestCandidate, v);
        }
    }
    *newResults->MaxResult(member) = maxResult;
} // Optimizer
