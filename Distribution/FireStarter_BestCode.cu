#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.361148f;
    data->d[1] = -0.105252f;
    data->d[2] = -1.070088f;
    data->d[3] = 0.841032f;
    data->d[4] = 0.643290f;
    data->d[5] = -0.896472f;
    data->d[6] = 0.146786f;
    data->d[7] = 0.937106f;
    data->d[8] = 0.796209f;
    data->d[9] = 0.482944f;
    data->d[10] = 0.534159f;
    data->d[11] = -0.003527f;
    data->d[12] = 19.851480f;
    data->d[13] = -0.248087f;
    data->d[14] = -0.000966f;
    data->d[15] = -0.471530f;
    data->d[16] = -0.054898f;
    data->d[17] = 0.559865f;
    data->d[18] = 0.000000f;
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
    *result->MinResult(0) = 0.000498f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.328656f;
    data->d[1] = 0.503367f;
    data->d[2] = 0.447526f;
    data->d[3] = -0.934891f;
    data->d[4] = -0.344384f;
    data->d[5] = 0.632599f;
    data->d[6] = -0.337298f;
    data->d[7] = -0.941238f;
    data->d[8] = -2.778550f;
    data->d[9] = 1.082579f;
    data->d[10] = -0.403258f;
    data->d[11] = -0.376843f;
    data->d[12] = 0.544461f;
    data->d[13] = 0.001043f;
    data->d[14] = -34.295242f;
    data->d[15] = -0.555051f;
    data->d[16] = 1.673099f;
    data->d[17] = -0.660852f;
    data->d[18] = 0.000000f;
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
    *result->MinResult(1) = 0.000186f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.263506f;
    data->d[1] = -0.196872f;
    data->d[2] = -1.472507f;
    data->d[3] = -0.706111f;
    data->d[4] = 0.825057f;
    data->d[5] = 0.623542f;
    data->d[6] = 1.415666f;
    data->d[7] = -0.200216f;
    data->d[8] = -2.387857f;
    data->d[9] = -3.275702f;
    data->d[10] = 2.602072f;
    data->d[11] = 0.513482f;
    data->d[12] = -0.371302f;
    data->d[13] = 2.663337f;
    data->d[14] = 0.204563f;
    data->d[15] = 0.173318f;
    data->d[16] = -2.097189f;
    data->d[17] = 0.943130f;
    data->d[18] = 0.000000f;
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
    *result->MinResult(2) = 0.000245f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n *= data.d[0];
    n = data.d[1] += n;
    n = data.d[2] += n;
    n *= data.d[3];
    n = data.d[4] *= n;
    n = data.d[2] *= n;
    n = data.d[5] *= n;
    n = data.d[6] += n;
    n = data.d[7] *= n;
    n *= data.d[7];
    n = data.d[8] *= n;
    n *= data.d[9];
    n += data.d[4];
    n = data.d[6] += n;
    n = data.d[6] += n;
    n *= data.d[10];
    n *= data.d[11];
    n *= data.d[12];
    n = data.d[5] *= n;
    n *= data.d[13];
    n *= data.d[14];
    n = data.d[8] += n;
    n *= data.d[5];
    n = data.d[15] += n;
    n += data.d[15];
    n += data.d[2];
    n = data.d[1] *= n;
    n += data.d[1];
    n += data.d[8];
    n *= data.d[6];
    n += data.d[16];
    n += data.d[17];
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
