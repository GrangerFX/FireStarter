#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -2.659023f;
    data->d[1] = -0.783833f;
    data->d[2] = -139.731400f;
    data->d[3] = 0.008119f;
    data->d[4] = 0.002719f;
    data->d[5] = 2.922921f;
    data->d[6] = -0.511851f;
    data->d[7] = -0.259445f;
    data->d[8] = 0.195793f;
    data->d[9] = 0.135919f;
    data->d[10] = -0.015650f;
    data->d[11] = 0.609735f;
    data->d[12] = 0.777249f;
    data->d[13] = -0.474015f;
    data->d[14] = 1.019479f;
    data->d[15] = 0.028743f;
    data->d[16] = -1.140298f;
    data->d[17] = -1.295173f;
    data->d[18] = 3.806954f;
    data->d[19] = -3.128927f;
    data->d[20] = 2.958968f;
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
    data->d[0] = 0.462422f;
    data->d[1] = -1.722195f;
    data->d[2] = 50.283409f;
    data->d[3] = 0.000258f;
    data->d[4] = -0.015922f;
    data->d[5] = -92.360443f;
    data->d[6] = -0.163260f;
    data->d[7] = -0.152960f;
    data->d[8] = -3.414863f;
    data->d[9] = -1.928705f;
    data->d[10] = -0.314012f;
    data->d[11] = -0.185486f;
    data->d[12] = 0.034818f;
    data->d[13] = 0.471057f;
    data->d[14] = -0.264968f;
    data->d[15] = 0.357517f;
    data->d[16] = 1.208142f;
    data->d[17] = 0.305445f;
    data->d[18] = -0.245751f;
    data->d[19] = -5.905433f;
    data->d[20] = 5.830618f;
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
    *result->MinResult(1) = 0.000023f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.103966f;
    data->d[1] = -2.555130f;
    data->d[2] = 129.523453f;
    data->d[3] = -0.026486f;
    data->d[4] = -0.046536f;
    data->d[5] = 0.004287f;
    data->d[6] = 9.503021f;
    data->d[7] = -0.076649f;
    data->d[8] = -0.521749f;
    data->d[9] = -1.628490f;
    data->d[10] = 0.111846f;
    data->d[11] = 0.312456f;
    data->d[12] = -0.388242f;
    data->d[13] = -0.532946f;
    data->d[14] = 0.712461f;
    data->d[15] = -2.363190f;
    data->d[16] = 0.494474f;
    data->d[17] = 0.466354f;
    data->d[18] = -0.848325f;
    data->d[19] = -9.213281f;
    data->d[20] = 9.043714f;
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
    *result->MinResult(2) = 0.000021f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n = data.d[0] += n;
    n = data.d[1] += n;
    n *= data.d[2];
    n *= data.d[3];
    n = data.d[4] *= n;
    n = data.d[5] *= n;
    n *= data.d[6];
    n = data.d[7] += n;
    n += data.d[0];
    n = data.d[8] += n;
    n += data.d[9];
    n *= data.d[10];
    n = data.d[11] += n;
    n *= data.d[12];
    n += data.d[13];
    n *= data.d[1];
    n += data.d[5];
    n = data.d[11] += n;
    n += data.d[14];
    n *= data.d[7];
    n = data.d[8] *= n;
    n += data.d[15];
    n = data.d[16] += n;
    n = data.d[17] += n;
    n += data.d[18];
    n *= data.d[16];
    n *= data.d[11];
    n *= data.d[8];
    n += data.d[19];
    n += data.d[20];
    n += data.d[4];
    n *= data.d[17];
    return isfinite(n) ? n : 0.0f;
} // Evaluate
// END //

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
    unsigned long long seed = RANDOM64(RANDOM64(generationSeed) + member);
    for (unsigned int v = firstVariation; v <= lastVariation; v++) {
        unsigned long long memberSeed = RANDOM64(seed + v);

        // Precalculate the target sample values.
        float target[FIRESTARTER_SAMPLES];
        for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
            target[i] = Target(theta[i], v);

        // The first generation is initalized with random numbers.
        // Later generations continue to evolve the data.
        FireStarterData data;
        float oldResult;
        bool evolved = false;
        if (init) {
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR64(memberSeed);
            for (int i = dataSize; i < FIRESTARTER_REGISTERS; i++)
                data.d[i] = 0.0f;   // Clear the unused data.
            oldResult = settings.m_startResult;
            evolved = true;
        } else {
            data = *oldResults->Data(member, v);
            oldResult = *oldResults->MinResult(member, v);
            if (*oldResults->Index(member, v) != member) {
                unsigned int d = RANDOMMOD64(memberSeed, dataSize);
                data.d[d] += settings.m_startScale * RANDOMFACTOR64(memberSeed);
                evolved = true;
            }
        }

        // Find the initial result
        float result = 0.0f;
        for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
            result = fmaxf(fabsf(Evaluate(data, theta[i]) - target[i]), result);
        float evolutionScale = evolved ? settings.m_startScale : settings.m_scale * result;

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < settings.m_iterations; p++) {
            unsigned int d = RANDOMMOD64(memberSeed, dataSize);
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionScale * RANDOMFACTOR64(memberSeed);
            float curResult = 0.0f;
            for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
                curResult = fmaxf(fabsf(Evaluate(data, theta[i]) - target[i]), curResult);
            if (curResult <= result) {
                result = curResult;
                evolutionScale = settings.m_scale * result;
                evolved = true;
            } else
                data.d[d] = oldData;
        }

        // Calculate a more accurate estimate of the result.
        if (settings.m_precision) {
            if (evolved) {
                float precisionStep = (TARGET_MAX - TARGET_MIN) / (settings.m_precision - 1);
                for (int i = 0; i < settings.m_precision; i++) {
                    float theta = TARGET_MIN + i * precisionStep;
                    result = fmaxf(fabsf(Evaluate(data, theta) - Target(theta, v)), result);
                }
            } else
                result = oldResult;
        }

        // If the result was worse, copy from a member with better resulOptimizeGenerationss.
        if (init || (result < oldResult)) {
            // Save better results.
            *newResults->Data(member, v) = data;
            *newResults->MinResult(member, v) = result;
            *newResults->Index(member, v) = member;
            *newResults->Debug1(member) = init ? 1 : *oldResults->Debug1(member) + 1;
            *newResults->Debug2(member) = (unsigned int)seed;
            maxResult = fmaxf(maxResult, result);
        } else {
            // Copy a result from among the previous generation's results.
            unsigned int bestCandidate = member;
            float bestResult = oldResult;
            if (settings.m_evolve == FIRESTARTER_EVOLVE_BEST) {
                // The genetic part of genetic programming and a major optimization:
                // Copy the best data from among a random set of candidates.
                for (int i = 0; i < settings.m_candidates; i++) {
                    unsigned int candidate = RANDOMMOD64(memberSeed, settings.m_population);
                    if (candidate == *oldResults->Index(candidate, v)) {   // Only select evolving members
                        float curResult = *oldResults->MinResult(candidate, v);
                        if (curResult <= bestResult) {
                            bestResult = curResult;
                            bestCandidate = candidate;
                        }
                    }
                }
            } else if (settings.m_evolve == FIRESTARTER_EVOLVE_RANDOM)
                bestCandidate = RANDOMMOD64(memberSeed, FIRESTARTER_CODE_POPULATION);

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
