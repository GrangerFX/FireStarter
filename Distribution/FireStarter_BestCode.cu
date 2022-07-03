#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "FireStarterTarget.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -1.705259f;
    data->d[1] = -0.622968f;
    data->d[2] = 0.609829f;
    data->d[3] = 0.033529f;
    data->d[4] = 0.355289f;
    data->d[5] = 0.329345f;
    data->d[6] = -0.007042f;
    data->d[7] = -1.096262f;
    data->d[8] = -0.743946f;
    data->d[9] = -0.965197f;
    data->d[10] = 0.657679f;
    data->d[11] = 0.221607f;
    data->d[12] = -0.849478f;
    data->d[13] = -0.054522f;
    data->d[14] = 1.351563f;
    data->d[15] = -0.864706f;
    data->d[16] = 0.117430f;
    data->d[17] = -0.176173f;
    data->d[18] = -0.886596f;
    data->d[19] = 0.118434f;
    data->d[20] = -0.102665f;
    data->d[21] = 0.041274f;
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
    *result->MinResult(0) = 0.000043f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.421832f;
    data->d[1] = -0.356996f;
    data->d[2] = -1.101482f;
    data->d[3] = -0.591623f;
    data->d[4] = 0.146587f;
    data->d[5] = -0.195205f;
    data->d[6] = 0.751884f;
    data->d[7] = -0.968736f;
    data->d[8] = -0.305029f;
    data->d[9] = 2.892542f;
    data->d[10] = -0.097446f;
    data->d[11] = 0.766493f;
    data->d[12] = -0.976942f;
    data->d[13] = -0.313558f;
    data->d[14] = 0.726560f;
    data->d[15] = -1.866203f;
    data->d[16] = 1.371387f;
    data->d[17] = -1.033808f;
    data->d[18] = -0.794760f;
    data->d[19] = -0.382669f;
    data->d[20] = -0.057776f;
    data->d[21] = 0.023825f;
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
    *result->MinResult(1) = 0.000022f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.814390f;
    data->d[1] = 0.764230f;
    data->d[2] = -0.774382f;
    data->d[3] = -0.082316f;
    data->d[4] = 0.253413f;
    data->d[5] = 0.345808f;
    data->d[6] = -0.710815f;
    data->d[7] = -0.821657f;
    data->d[8] = 0.092283f;
    data->d[9] = -0.758136f;
    data->d[10] = -0.023592f;
    data->d[11] = 1.609485f;
    data->d[12] = 0.817740f;
    data->d[13] = -0.483190f;
    data->d[14] = -1.118277f;
    data->d[15] = -0.563430f;
    data->d[16] = 0.379939f;
    data->d[17] = 0.216572f;
    data->d[18] = -0.981459f;
    data->d[19] = 0.033925f;
    data->d[20] = -0.176539f;
    data->d[21] = 0.586879f;
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
    *result->MinResult(2) = 0.000063f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n += data.d[0];
    n *= data.d[1];
    n = data.d[2] *= n;
    n += data.d[3];
    n = data.d[4] *= n;
    n += data.d[5];
    n *= data.d[4];
    n = data.d[6] += n;
    n = data.d[7] += n;
    n += data.d[8];
    n = data.d[9] *= n;
    n += data.d[10];
    n *= data.d[11];
    n += data.d[2];
    n *= data.d[12];
    n *= data.d[9];
    n += data.d[13];
    n = data.d[14] *= n;
    n *= data.d[7];
    n = data.d[15] *= n;
    n = data.d[16] *= n;
    n *= data.d[14];
    n = data.d[17] += n;
    n += data.d[18];
    n += data.d[19];
    n += data.d[17];
    n = data.d[6] += n;
    n *= data.d[20];
    n += data.d[15];
    n += data.d[16];
    n *= data.d[6];
    n += data.d[21];
    return isfinite(n) ? n : 0.0f;
} // Evaluate
// END //

// OPTMIZE //
GPU_GLOBAL void Optimize(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int dataSize, const FireStarterSettings settings, const unsigned int seed, const unsigned int init)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= settings.m_evolvePopulation)
        return;
    unsigned int memberSeed = RANDOM(RANDOM(member) + seed);

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
        for (unsigned int p = 0; p < settings.m_evolveIterations; p++) {
            unsigned int d = RANDOMMOD(memberSeed, dataSize);
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(memberSeed);
            float curResult = 0.0f;
            for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
                curResult = fmaxf(fabsf(Evaluate(data, theta[i]) - target[i]), curResult);
            if (curResult < result) {
                result = curResult;
                evolutionFactor = settings.m_evolveFactor * result;
            } else
                data.d[d] = oldData;
        }

        // Calculate a more accurate estimate of the result.
        if (settings.m_evolvePrecision) {
            float precisionStep = (settings.m_sampleMax - settings.m_sampleMin) / (settings.m_evolvePrecision - 1);
            for (int i = 0; i < settings.m_evolvePrecision; i++) {
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
                unsigned int index = RANDOMMOD(memberSeed, settings.m_evolvePopulation);
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
