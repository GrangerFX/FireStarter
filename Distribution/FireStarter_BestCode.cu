#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -1.015745f;
    data->d[1] = 0.433991f;
    data->d[2] = 0.328969f;
    data->d[3] = -0.678502f;
    data->d[4] = 0.532746f;
    data->d[5] = 0.255518f;
    data->d[6] = 0.660893f;
    data->d[7] = 0.000000f;
    data->d[8] = -19.075369f;
    data->d[9] = 13.466266f;
    data->d[10] = -0.366430f;
    data->d[11] = -0.740262f;
    data->d[12] = 0.139430f;
    data->d[13] = 0.855950f;
    data->d[14] = -0.584026f;
    data->d[15] = -0.942326f;
    data->d[16] = -0.854615f;
    data->d[17] = 1.335505f;
    data->d[18] = -0.853128f;
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
    *result->MinResult(0) = 0.000223f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.160261f;
    data->d[1] = -1.014453f;
    data->d[2] = -0.169898f;
    data->d[3] = 0.366498f;
    data->d[4] = -1.103501f;
    data->d[5] = -0.681010f;
    data->d[6] = 0.290025f;
    data->d[7] = -0.427173f;
    data->d[8] = -0.146435f;
    data->d[9] = -1.209560f;
    data->d[10] = 0.931199f;
    data->d[11] = 0.323012f;
    data->d[12] = -0.563254f;
    data->d[13] = -0.720469f;
    data->d[14] = -0.858824f;
    data->d[15] = 0.191581f;
    data->d[16] = -0.483804f;
    data->d[17] = -0.018349f;
    data->d[18] = 0.919075f;
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
    *result->MinResult(1) = 0.000074f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.364663f;
    data->d[1] = -0.875800f;
    data->d[2] = 0.219624f;
    data->d[3] = -2.874182f;
    data->d[4] = 1.367820f;
    data->d[5] = 0.440934f;
    data->d[6] = 0.567381f;
    data->d[7] = -6.449829f;
    data->d[8] = 0.000000f;
    data->d[9] = -9.451872f;
    data->d[10] = -0.208307f;
    data->d[11] = -0.282876f;
    data->d[12] = 2.718868f;
    data->d[13] = 1.248938f;
    data->d[14] = 0.509592f;
    data->d[15] = -0.459989f;
    data->d[16] = 1.558755f;
    data->d[17] = -0.084822f;
    data->d[18] = -0.648131f;
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
    *result->MinResult(2) = 0.000154f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n *= data.d[0];
    n = data.d[1] *= n;
    n += data.d[2];
    n = data.d[3] += n;
    n = data.d[4] += n;
    n *= data.d[5];
    n = data.d[6] += n;
    n *= data.d[7];
    n = data.d[8] *= n;
    n *= data.d[9];
    n = data.d[4] += n;
    n += data.d[4];
    n += data.d[10];
    n = data.d[6] *= n;
    n *= data.d[11];
    n = data.d[12] *= n;
    n += data.d[13];
    n = data.d[1] += n;
    n += data.d[14];
    n *= data.d[3];
    n += data.d[15];
    n += data.d[16];
    n = data.d[12] += n;
    n += data.d[17];
    n = data.d[8] += n;
    n = data.d[18] *= n;
    n += data.d[1];
    n = data.d[8] += n;
    n *= data.d[8];
    n *= data.d[18];
    n += data.d[12];
    n *= data.d[6];
    return isfinite(n) ? n : 0.0f;
} // Evaluate
// END //

GPU_GLOBAL void Optimize(const FireStarterSettings settings, FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int firstMember, const unsigned int lastMember, const unsigned int dataSize, const unsigned int seed, const unsigned int init)
{
    unsigned int member = firstMember + blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= lastMember)
        return;
    unsigned int memberSeed = RANDOM(RANDOM(seed) + member);

    // Precalculate the target theta values.
    float theta[FIRESTARTER_SAMPLES];
    float sampleStep = (TARGET_MAX - TARGET_MIN) / (FIRESTARTER_SAMPLES - 1);
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
        theta[i] = TARGET_MIN + i * sampleStep;

    // Evolve the program data for each variation.
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++) { 
        // Precalculate the target sample values.
        float target[FIRESTARTER_SAMPLES];
        for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
            target[i] = Target(theta[i], v);

        // The first generation is initalized with random numbers.
        // Later generations continue to evolve the data.
        FireStarterData data;
        float result, oldResult;
        float evolutionScale;
        if (init) {
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR(memberSeed);
            for (int i = dataSize; i < FIRESTARTER_REGISTERS; i++)
                data.d[i] = 0.0f;   // Clear the unused data.
            result = oldResult = settings.m_startResult;
            evolutionScale = settings.m_startScale;
        } else {
            data = *oldResults->Data(member, v);
            result = oldResult = *oldResults->MinResult(member, v);
            evolutionScale = settings.m_scale * result;
        }

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < settings.m_iterations; p++) {
            unsigned int d = RANDOMMOD(memberSeed, dataSize);
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionScale * RANDOMFACTOR(memberSeed);
            float curResult = 0.0f;
            for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
                curResult = fmaxf(fabsf(Evaluate(data, theta[i]) - target[i]), curResult);
            if (curResult <= result) {
                result = curResult;
                evolutionScale = settings.m_scale * result;
            } else
                data.d[d] = oldData;
        }

        // Calculate a more accurate estimate of the result.
        if (settings.m_precision) {
            float precisionStep = (TARGET_MAX - TARGET_MIN) / (settings.m_precision - 1);
            for (int i = 0; i < settings.m_precision; i++) {
                float theta = TARGET_MIN + i * precisionStep;
                result = fmaxf(fabsf(Evaluate(data, theta) - Target(theta, v)), result);
            }
        }

        // If the result was worse, copy from a member with better results.
        if (init || (result < oldResult)) {
            // Save better results.
            *newResults->Data(member, v) = data;
            *newResults->MinResult(member, v) = result;
            maxResult = fmaxf(maxResult, result);
        } else {
            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of candidates.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            for (int i = 0; i < settings.m_candidates; i++) {
                unsigned int index = RANDOMMOD(memberSeed, settings.m_population);
                float curResult = *oldResults->MinResult(index, v);
                if (curResult <= bestResult) {
                    bestResult = curResult;
                    bestIndex = index;
                }
            }
            if (bestIndex != member) {
                *newResults->Data(member, v) = *oldResults->Data(bestIndex, v);
                *newResults->MinResult(member, v) = settings.m_startResult;
                maxResult = fmaxf(maxResult, bestResult);
            } else {
                *newResults->Data(member, v) = data;
                *newResults->MinResult(member, v) = result;
                maxResult = fmaxf(maxResult, result);
            }
        }
    }
    *newResults->MaxResult(member) = maxResult;
} // Optimize
