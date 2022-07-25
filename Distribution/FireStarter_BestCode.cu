#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "FireStarterTarget.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.951763f;
    data->d[1] = 0.601769f;
    data->d[2] = -0.069429f;
    data->d[3] = -0.410598f;
    data->d[4] = 1.237881f;
    data->d[5] = -0.894352f;
    data->d[6] = 0.603040f;
    data->d[7] = -0.260879f;
    data->d[8] = -2.071787f;
    data->d[9] = 1.113532f;
    data->d[10] = -1.130868f;
    data->d[11] = -1.481923f;
    data->d[12] = -0.590524f;
    data->d[13] = 0.560023f;
    data->d[14] = 0.319844f;
    data->d[15] = 0.246857f;
    data->d[16] = -0.427627f;
    data->d[17] = -0.399679f;
    data->d[18] = -1.048966f;
    data->d[19] = 0.674835f;
    data->d[20] = -0.204947f;
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
    *result->MinResult(0) = 0.000304f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -1.084404f;
    data->d[1] = -0.368640f;
    data->d[2] = 0.793667f;
    data->d[3] = -0.350720f;
    data->d[4] = 0.699692f;
    data->d[5] = -1.770332f;
    data->d[6] = 1.385697f;
    data->d[7] = 0.145537f;
    data->d[8] = 3.009254f;
    data->d[9] = 0.976142f;
    data->d[10] = -4.336360f;
    data->d[11] = 1.705517f;
    data->d[12] = 1.337053f;
    data->d[13] = 0.979154f;
    data->d[14] = -0.772672f;
    data->d[15] = -1.065844f;
    data->d[16] = 0.666477f;
    data->d[17] = 0.547061f;
    data->d[18] = 0.327579f;
    data->d[19] = -0.751870f;
    data->d[20] = -0.927754f;
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
    *result->MinResult(1) = 0.000125f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.823464f;
    data->d[1] = 0.265702f;
    data->d[2] = -0.819417f;
    data->d[3] = -1.246902f;
    data->d[4] = -0.486438f;
    data->d[5] = 0.947491f;
    data->d[6] = 1.378208f;
    data->d[7] = -0.191058f;
    data->d[8] = -4.385678f;
    data->d[9] = -0.499341f;
    data->d[10] = -19.052631f;
    data->d[11] = -0.051355f;
    data->d[12] = -1.350077f;
    data->d[13] = 1.381990f;
    data->d[14] = -1.230000f;
    data->d[15] = 0.711412f;
    data->d[16] = 0.231867f;
    data->d[17] = -2.203088f;
    data->d[18] = 1.116289f;
    data->d[19] = 2.191548f;
    data->d[20] = 0.974362f;
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
    *result->MinResult(2) = 0.003941f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n = data.d[0] += n;
    n *= data.d[1];
    n += data.d[2];
    n *= data.d[3];
    n = data.d[4] += n;
    n *= data.d[5];
    n += data.d[6];
    n = data.d[7] *= n;
    n = data.d[8] *= n;
    n += data.d[9];
    n *= data.d[10];
    n = data.d[11] *= n;
    n += data.d[0];
    n = data.d[4] *= n;
    n = data.d[7] *= n;
    n = data.d[12] *= n;
    n += data.d[12];
    n += data.d[13];
    n += data.d[14];
    n = data.d[15] += n;
    n += data.d[16];
    n = data.d[17] += n;
    n *= data.d[11];
    n *= data.d[18];
    n += data.d[15];
    n += data.d[8];
    n += data.d[19];
    n = data.d[17] += n;
    n += data.d[4];
    n += data.d[17];
    n *= data.d[7];
    n += data.d[20];
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
