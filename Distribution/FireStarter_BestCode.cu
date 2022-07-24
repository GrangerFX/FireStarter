#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "FireStarterTarget.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -1.679313f;
    data->d[1] = 0.122111f;
    data->d[2] = -1.028807f;
    data->d[3] = -0.843759f;
    data->d[4] = 0.650808f;
    data->d[5] = -0.818240f;
    data->d[6] = 0.104037f;
    data->d[7] = 0.734335f;
    data->d[8] = -0.085539f;
    data->d[9] = -1.421968f;
    data->d[10] = -0.431687f;
    data->d[11] = -0.554557f;
    data->d[12] = -0.165124f;
    data->d[13] = -0.678675f;
    data->d[14] = -0.919069f;
    data->d[15] = 0.101186f;
    data->d[16] = -0.587929f;
    data->d[17] = -0.640002f;
    data->d[18] = 0.661726f;
    data->d[19] = -0.434193f;
    data->d[20] = -0.664629f;
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
    *result->MinResult(0) = 0.036704f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.560480f;
    data->d[1] = -2.829356f;
    data->d[2] = 0.656264f;
    data->d[3] = -0.780801f;
    data->d[4] = 0.946728f;
    data->d[5] = -0.074436f;
    data->d[6] = -1.403691f;
    data->d[7] = 0.103994f;
    data->d[8] = -0.112979f;
    data->d[9] = 0.652252f;
    data->d[10] = -0.930417f;
    data->d[11] = -2.715724f;
    data->d[12] = 0.244493f;
    data->d[13] = -0.796333f;
    data->d[14] = -3.108194f;
    data->d[15] = 0.621660f;
    data->d[16] = 0.538074f;
    data->d[17] = 0.518122f;
    data->d[18] = 0.821484f;
    data->d[19] = 0.733693f;
    data->d[20] = 0.470609f;
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
    *result->MinResult(1) = 0.050890f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.101222f;
    data->d[1] = -1.529713f;
    data->d[2] = 0.384267f;
    data->d[3] = 0.140548f;
    data->d[4] = -0.666564f;
    data->d[5] = 0.541144f;
    data->d[6] = -0.834528f;
    data->d[7] = 1.450008f;
    data->d[8] = -0.585979f;
    data->d[9] = -0.978012f;
    data->d[10] = -4.636576f;
    data->d[11] = -0.618078f;
    data->d[12] = -0.545532f;
    data->d[13] = 0.682648f;
    data->d[14] = -0.384292f;
    data->d[15] = 1.703159f;
    data->d[16] = -2.627247f;
    data->d[17] = 1.948041f;
    data->d[18] = -0.732616f;
    data->d[19] = 0.081863f;
    data->d[20] = 0.748059f;
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
    *result->MinResult(2) = 0.049400f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n += data.d[0];
    n += data.d[1];
    n += data.d[2];
    n = data.d[3] *= n;
    n = data.d[4] += n;
    n = data.d[5] += n;
    n *= data.d[6];
    n = data.d[7] *= n;
    n *= data.d[8];
    n = data.d[9] += n;
    n += data.d[10];
    n *= data.d[11];
    n = data.d[5] *= n;
    n = data.d[7] *= n;
    n = data.d[7] += n;
    n = data.d[12] += n;
    n *= data.d[13];
    n += data.d[14];
    n += data.d[3];
    n += data.d[15];
    n = data.d[16] *= n;
    n *= data.d[17];
    n += data.d[7];
    n *= data.d[5];
    n *= data.d[9];
    n += data.d[16];
    n *= data.d[18];
    n += data.d[19];
    n = data.d[4] += n;
    n *= data.d[20];
    n *= data.d[12];
    n += data.d[4];
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

    // Sort the variations largest first. This increases the chance that the generation can fail early.
    int order[FIRESTARTER_VARIATIONS];
    for (int v = 0; v < FIRESTARTER_VARIATIONS; v++)
        order[v] = v;
    if (!init) {
        for (int v = 0; v < FIRESTARTER_VARIATIONS - 1; v++) {
            int maxIndex = v;
            float max = *oldResults->MinResult(member, order[v]);
            for (int i = v + 1; i < FIRESTARTER_VARIATIONS; i++) {
                float curResult = *oldResults->MinResult(member, order[i]);
                if (curResult > max) {
                    max = curResult;
                    maxIndex = i;
                }
            }
            if (maxIndex != v) {
                int swapOrder = order[maxIndex];
                order[maxIndex] = order[v];
                order[v] = swapOrder;
            }
        }
    }

    // Evolve the program data for each variation.
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++) {
        unsigned int variation = order[v];
 
        // Precalculate the target sample values.
        float target[FIRESTARTER_SAMPLES];
        for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
            target[i] = Target(theta[i], variation);

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
            data = *oldResults->Data(member, variation);
            result = oldResult = *oldResults->MinResult(member, variation);
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
                result = fmaxf(fabsf(Evaluate(data, theta) - Target(theta, variation)), result);
            }
        }

        // If the result was worse, copy from a member with better results.
        if (init || (result < oldResult)) {
            // Save better results.
            *newResults->Data(member, variation) = data;
            *newResults->MinResult(member, variation) = result;
            maxResult = fmaxf(maxResult, result);
        } else {
            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of candidates.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            for (int i = 0; i < settings.m_evolveCandidates; i++) {
                unsigned int index = RANDOMMOD(memberSeed, settings.m_population);
                float curResult = *oldResults->MinResult(index, variation);
                if (curResult < bestResult) {
                    bestResult = curResult;
                    bestIndex = index;
                }
            }
            if (bestIndex != member) {
                *newResults->Data(member, variation) = *oldResults->Data(bestIndex, variation);
                *newResults->MinResult(member, variation) = settings.m_evolveStartResult;
                maxResult = fmaxf(maxResult, bestResult);
            } else {
                *newResults->Data(member, variation) = data;
                *newResults->MinResult(member, variation) = result;
                maxResult = fmaxf(maxResult, result);
            }
        }
    }
    *newResults->MaxResult(member) = maxResult;
} // Optimize
// END //
