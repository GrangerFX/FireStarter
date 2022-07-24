#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "FireStarterTarget.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.642461f;
    data->d[1] = 0.176127f;
    data->d[2] = 1.046113f;
    data->d[3] = 0.422463f;
    data->d[4] = -0.032154f;
    data->d[5] = 0.301902f;
    data->d[6] = -0.605897f;
    data->d[7] = -0.874826f;
    data->d[8] = 0.441491f;
    data->d[9] = 0.790017f;
    data->d[10] = -0.159495f;
    data->d[11] = 0.357875f;
    data->d[12] = -0.764101f;
    data->d[13] = -0.121654f;
    data->d[14] = 0.207955f;
    data->d[15] = -2.150110f;
    data->d[16] = -0.671519f;
    data->d[17] = -0.865392f;
    data->d[18] = -0.262395f;
    data->d[19] = -3.585122f;
    data->d[20] = 0.800907f;
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
    *result->MinResult(0) = 0.012981f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.571714f;
    data->d[1] = 1.893393f;
    data->d[2] = 0.407406f;
    data->d[3] = 0.277376f;
    data->d[4] = -1.053410f;
    data->d[5] = -0.290259f;
    data->d[6] = 0.470641f;
    data->d[7] = 0.472151f;
    data->d[8] = 0.391661f;
    data->d[9] = -0.122023f;
    data->d[10] = 2.518477f;
    data->d[11] = -0.348041f;
    data->d[12] = -0.394303f;
    data->d[13] = -2.529937f;
    data->d[14] = 1.032982f;
    data->d[15] = 0.283522f;
    data->d[16] = -0.171776f;
    data->d[17] = -0.009430f;
    data->d[18] = -0.829791f;
    data->d[19] = 0.133259f;
    data->d[20] = 0.434961f;
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
    *result->MinResult(1) = 0.020881f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.136653f;
    data->d[1] = -0.672700f;
    data->d[2] = -2.703620f;
    data->d[3] = 0.256622f;
    data->d[4] = -0.345666f;
    data->d[5] = -0.822873f;
    data->d[6] = 0.703837f;
    data->d[7] = -0.737884f;
    data->d[8] = 0.874049f;
    data->d[9] = -0.200789f;
    data->d[10] = 2.640481f;
    data->d[11] = -0.600416f;
    data->d[12] = -0.813199f;
    data->d[13] = -0.053057f;
    data->d[14] = 0.751718f;
    data->d[15] = 0.951197f;
    data->d[16] = 1.448246f;
    data->d[17] = -1.039932f;
    data->d[18] = -1.023859f;
    data->d[19] = 0.402058f;
    data->d[20] = 0.395090f;
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
    *result->MinResult(2) = 0.023905f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n = data.d[0] += n;
    n += data.d[1];
    n = data.d[2] += n;
    n *= data.d[3];
    n += data.d[4];
    n = data.d[5] *= n;
    n = data.d[6] += n;
    n = data.d[7] += n;
    n = data.d[8] += n;
    n *= data.d[9];
    n = data.d[10] *= n;
    n += data.d[2];
    n *= data.d[11];
    n += data.d[12];
    n = data.d[6] *= n;
    n *= data.d[13];
    n = data.d[14] += n;
    n *= data.d[15];
    n += data.d[16];
    n += data.d[17];
    n += data.d[10];
    n = data.d[5] += n;
    n *= data.d[5];
    n = data.d[0] += n;
    n += data.d[18];
    n *= data.d[8];
    n *= data.d[19];
    n *= data.d[0];
    n *= data.d[7];
    n *= data.d[6];
    n += data.d[20];
    n *= data.d[14];
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
                if (curResult <= bestResult) {
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
