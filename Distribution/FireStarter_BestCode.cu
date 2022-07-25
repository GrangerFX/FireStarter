#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "FireStarterTarget.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.523553f;
    data->d[1] = -0.512418f;
    data->d[2] = -0.965238f;
    data->d[3] = 0.756972f;
    data->d[4] = 3.281722f;
    data->d[5] = 10.194548f;
    data->d[6] = 0.000006f;
    data->d[7] = 0.403497f;
    data->d[8] = 0.481393f;
    data->d[9] = -0.583499f;
    data->d[10] = -0.768781f;
    data->d[11] = 0.241489f;
    data->d[12] = 1.202079f;
    data->d[13] = 0.665396f;
    data->d[14] = -0.389808f;
    data->d[15] = 0.737441f;
    data->d[16] = -0.611693f;
    data->d[17] = 0.866176f;
    data->d[18] = 0.673984f;
    data->d[19] = -0.128699f;
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
    *result->MinResult(0) = 0.000280f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.737069f;
    data->d[1] = 0.339391f;
    data->d[2] = -0.615660f;
    data->d[3] = -0.632052f;
    data->d[4] = 1.368214f;
    data->d[5] = 1.096006f;
    data->d[6] = 0.000087f;
    data->d[7] = 0.642420f;
    data->d[8] = 0.256002f;
    data->d[9] = -1.029653f;
    data->d[10] = 0.564123f;
    data->d[11] = 0.560803f;
    data->d[12] = -0.753936f;
    data->d[13] = 0.504428f;
    data->d[14] = 0.797441f;
    data->d[15] = 0.852716f;
    data->d[16] = -1.328703f;
    data->d[17] = 0.213293f;
    data->d[18] = 0.982296f;
    data->d[19] = 0.450574f;
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
    *result->MinResult(1) = 0.000126f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.391156f;
    data->d[1] = -0.491109f;
    data->d[2] = 0.331432f;
    data->d[3] = -0.415325f;
    data->d[4] = 0.080033f;
    data->d[5] = -18.145346f;
    data->d[6] = -0.000131f;
    data->d[7] = -0.084909f;
    data->d[8] = -0.019604f;
    data->d[9] = 2.955064f;
    data->d[10] = -0.256696f;
    data->d[11] = 0.934036f;
    data->d[12] = 0.662472f;
    data->d[13] = 0.796151f;
    data->d[14] = 1.024133f;
    data->d[15] = 1.354801f;
    data->d[16] = 0.292293f;
    data->d[17] = -0.829468f;
    data->d[18] = -0.855677f;
    data->d[19] = -0.368979f;
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
    *result->MinResult(2) = 0.003434f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n = data.d[0] += n;
    n *= data.d[1];
    n = data.d[2] += n;
    n = data.d[3] += n;
    n = data.d[4] += n;
    n = data.d[2] += n;
    n += data.d[5];
    n *= data.d[6];
    n = data.d[7] += n;
    n *= data.d[8];
    n += data.d[3];
    n = data.d[9] += n;
    n = data.d[4] *= n;
    n = data.d[10] *= n;
    n = data.d[11] *= n;
    n *= data.d[12];
    n += data.d[13];
    n *= data.d[4];
    n *= data.d[9];
    n *= data.d[14];
    n = data.d[15] += n;
    n *= data.d[2];
    n *= data.d[16];
    n *= data.d[17];
    n *= data.d[18];
    n = data.d[7] += n;
    n += data.d[10];
    n *= data.d[0];
    n += data.d[15];
    n *= data.d[19];
    n += data.d[11];
    n += data.d[7];
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
