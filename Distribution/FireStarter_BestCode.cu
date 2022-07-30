#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "FireStarterTarget.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -4.146381f;
    data->d[1] = 0.986069f;
    data->d[2] = -0.730254f;
    data->d[3] = 0.675504f;
    data->d[4] = -0.000002f;
    data->d[5] = -83.794365f;
    data->d[6] = -0.738279f;
    data->d[7] = 0.023365f;
    data->d[8] = -0.391076f;
    data->d[9] = 1.132474f;
    data->d[10] = -0.226210f;
    data->d[11] = 0.201301f;
    data->d[12] = -1.339226f;
    data->d[13] = 0.249886f;
    data->d[14] = -0.793490f;
    data->d[15] = -1.412749f;
    data->d[16] = -1.410415f;
    data->d[17] = 1.006425f;
    data->d[18] = 0.035828f;
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
    *result->MinResult(0) = 0.000182f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.290405f;
    data->d[1] = -1.725852f;
    data->d[2] = 3.320713f;
    data->d[3] = -2.637915f;
    data->d[4] = 0.235684f;
    data->d[5] = 6.386979f;
    data->d[6] = 0.008839f;
    data->d[7] = 0.232886f;
    data->d[8] = -0.239159f;
    data->d[9] = 1.835950f;
    data->d[10] = 0.197876f;
    data->d[11] = 1.012044f;
    data->d[12] = 1.399076f;
    data->d[13] = 0.847877f;
    data->d[14] = 0.501033f;
    data->d[15] = -0.040049f;
    data->d[16] = -1.626961f;
    data->d[17] = -1.883384f;
    data->d[18] = -1.142875f;
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
    *result->MinResult(1) = 0.000035f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.257411f;
    data->d[1] = -0.572193f;
    data->d[2] = 3.103007f;
    data->d[3] = -0.369770f;
    data->d[4] = 1.827538f;
    data->d[5] = 0.291637f;
    data->d[6] = 0.123919f;
    data->d[7] = 0.495608f;
    data->d[8] = 0.739027f;
    data->d[9] = 2.211248f;
    data->d[10] = 0.400680f;
    data->d[11] = 0.606764f;
    data->d[12] = 1.359229f;
    data->d[13] = 9.947443f;
    data->d[14] = 19.853010f;
    data->d[15] = 0.026832f;
    data->d[16] = -2.159874f;
    data->d[17] = 0.238874f;
    data->d[18] = -0.116962f;
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
    *result->MinResult(2) = 0.000187f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n = data.d[0] += n;
    n = data.d[1] += n;
    n *= data.d[2];
    n = data.d[3] *= n;
    n = data.d[4] *= n;
    n *= data.d[5];
    n += data.d[3];
    n = data.d[6] *= n;
    n = data.d[7] *= n;
    n = data.d[8] += n;
    n = data.d[1] *= n;
    n += data.d[9];
    n *= data.d[1];
    n = data.d[10] += n;
    n = data.d[8] += n;
    n = data.d[6] *= n;
    n = data.d[10] += n;
    n += data.d[8];
    n += data.d[11];
    n += data.d[12];
    n += data.d[4];
    n *= data.d[13];
    n += data.d[14];
    n *= data.d[0];
    n += data.d[6];
    n = data.d[15] *= n;
    n += data.d[16];
    n *= data.d[17];
    n *= data.d[18];
    n += data.d[7];
    n *= data.d[15];
    n += data.d[10];
    return isfinite(n) ? n : 0.0f;
} // Evaluate
// END //

// OPTMIZE //
GPU_GLOBAL void Optimize(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int dataSize, const FireStarterSettings settings, const unsigned int seed, const unsigned int init)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= settings.m_population)
        return;
    unsigned int memberSeed = RANDOM(RANDOM(seed) + member);

    // Precalculate the target theta values.
    float theta[FIRESTARTER_SAMPLES];
    float sampleStep = (settings.m_sampleMax - settings.m_sampleMin) / (FIRESTARTER_SAMPLES - 1);
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
        theta[i] = settings.m_sampleMin + i * sampleStep;

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
        float evolutionFactor;
        if (init) {
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR(memberSeed);
            for (int i = dataSize; i < FIRESTARTER_REGISTERS; i++)
                data.d[i] = 0.0f;   // Clear the unused data.
            result = oldResult = settings.m_evolveStartResult;
            evolutionFactor = settings.m_evolveStartFactor;
        } else {
            data = *oldResults->Data(member, v);
            result = oldResult = *oldResults->MinResult(member, v);
            evolutionFactor = settings.m_evolveFactor * result;
        }

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < settings.m_iterations; p++) {
            unsigned int d = RANDOMMOD(memberSeed, dataSize);
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(memberSeed);
            float curResult = 0.0f;
            for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
                curResult = fmaxf(fabsf(Evaluate(data, theta[i]) - target[i]), curResult);
            if (curResult <= result) {
                result = curResult;
                evolutionFactor = settings.m_evolveFactor * result;
            } else
                data.d[d] = oldData;
        }

        // Calculate a more accurate estimate of the result.
        if (settings.m_precision) {
            float precisionStep = (settings.m_sampleMax - settings.m_sampleMin) / (settings.m_precision - 1);
            for (int i = 0; i < settings.m_precision; i++) {
                float theta = settings.m_sampleMin + i * precisionStep;
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
            for (int i = 0; i < settings.m_evolveCandidates; i++) {
                unsigned int index = RANDOMMOD(memberSeed, settings.m_population);
                float curResult = *oldResults->MinResult(index, v);
                if (curResult <= bestResult) {
                    bestResult = curResult;
                    bestIndex = index;
                }
            }
            if (bestIndex != member) {
                *newResults->Data(member, v) = *oldResults->Data(bestIndex, v);
                *newResults->MinResult(member, v) = settings.m_evolveStartResult;
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
// END //
