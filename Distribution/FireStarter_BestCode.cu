#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "FireStarterTarget.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.289958f;
    data->d[1] = 0.072279f;
    data->d[2] = 0.587329f;
    data->d[3] = 0.561623f;
    data->d[4] = 0.231906f;
    data->d[5] = -0.137131f;
    data->d[6] = -1.073126f;
    data->d[7] = -0.359694f;
    data->d[8] = -0.900318f;
    data->d[9] = -0.268116f;
    data->d[10] = -0.306006f;
    data->d[11] = -0.262264f;
    data->d[12] = -1.919591f;
    data->d[13] = -1.101834f;
    data->d[14] = -0.142352f;
    data->d[15] = -0.067973f;
    data->d[16] = -0.002392f;
    data->d[17] = -0.570680f;
    data->d[18] = 0.593448f;
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
    *result->MinResult(0) = 0.008863f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -1.089313f;
    data->d[1] = 1.537250f;
    data->d[2] = 0.916087f;
    data->d[3] = -0.558587f;
    data->d[4] = 0.052042f;
    data->d[5] = 0.234523f;
    data->d[6] = 0.649876f;
    data->d[7] = -0.301921f;
    data->d[8] = -0.751250f;
    data->d[9] = -0.545160f;
    data->d[10] = 0.620722f;
    data->d[11] = -1.101911f;
    data->d[12] = -0.192204f;
    data->d[13] = 1.421791f;
    data->d[14] = 0.626325f;
    data->d[15] = 4.796865f;
    data->d[16] = 0.012368f;
    data->d[17] = -0.392982f;
    data->d[18] = -0.058342f;
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
    *result->MinResult(1) = 0.006931f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.503724f;
    data->d[1] = 0.015915f;
    data->d[2] = 0.765104f;
    data->d[3] = -1.617437f;
    data->d[4] = -0.110971f;
    data->d[5] = 1.448260f;
    data->d[6] = 0.213652f;
    data->d[7] = 0.758192f;
    data->d[8] = 1.093229f;
    data->d[9] = 1.021788f;
    data->d[10] = -0.695019f;
    data->d[11] = -1.569467f;
    data->d[12] = -0.590908f;
    data->d[13] = 0.518948f;
    data->d[14] = 0.375349f;
    data->d[15] = 0.134207f;
    data->d[16] = 0.488572f;
    data->d[17] = 3.011281f;
    data->d[18] = 0.007419f;
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
    *result->MinResult(2) = 0.008884f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n = data.d[0] += n;
    n = data.d[1] += n;
    n *= data.d[2];
    n = data.d[3] *= n;
    n *= data.d[4];
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
    n = data.d[13] += n;
    n *= data.d[14];
    n += data.d[15];
    n *= data.d[0];
    n += data.d[6];
    n = data.d[16] *= n;
    n += data.d[17];
    n *= data.d[18];
    n *= data.d[13];
    n += data.d[7];
    n *= data.d[16];
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
