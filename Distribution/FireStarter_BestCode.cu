#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "FireStarterTarget.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.235389f;
    data->d[1] = 0.021852f;
    data->d[2] = -1.207379f;
    data->d[3] = -0.184853f;
    data->d[4] = 0.498544f;
    data->d[5] = 0.398235f;
    data->d[6] = -0.575949f;
    data->d[7] = 1.228312f;
    data->d[8] = -0.163572f;
    data->d[9] = -1.603914f;
    data->d[10] = -0.427536f;
    data->d[11] = 0.455032f;
    data->d[12] = -0.149740f;
    data->d[13] = -0.081743f;
    data->d[14] = -0.705422f;
    data->d[15] = 0.095914f;
    data->d[16] = 0.790766f;
    data->d[17] = -0.475904f;
    data->d[18] = -0.364722f;
    data->d[19] = -0.814684f;
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
    *result->MinResult(0) = 0.000192f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.785466f;
    data->d[1] = 2.431137f;
    data->d[2] = -0.258206f;
    data->d[3] = -0.293751f;
    data->d[4] = -0.565968f;
    data->d[5] = 0.175402f;
    data->d[6] = 0.135893f;
    data->d[7] = 1.499652f;
    data->d[8] = -0.646272f;
    data->d[9] = 0.251990f;
    data->d[10] = 0.333386f;
    data->d[11] = 0.358487f;
    data->d[12] = -0.068170f;
    data->d[13] = -0.546053f;
    data->d[14] = -0.658302f;
    data->d[15] = -0.846371f;
    data->d[16] = 0.840273f;
    data->d[17] = 0.173056f;
    data->d[18] = 1.267517f;
    data->d[19] = 0.852239f;
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
    *result->MinResult(1) = 0.000067f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.845834f;
    data->d[1] = 0.370586f;
    data->d[2] = -0.344489f;
    data->d[3] = -0.068745f;
    data->d[4] = 0.518460f;
    data->d[5] = -0.488045f;
    data->d[6] = 0.527571f;
    data->d[7] = 0.790203f;
    data->d[8] = 0.475738f;
    data->d[9] = -1.927764f;
    data->d[10] = -0.989966f;
    data->d[11] = 0.078136f;
    data->d[12] = -0.120840f;
    data->d[13] = -0.339389f;
    data->d[14] = -0.144489f;
    data->d[15] = 0.963868f;
    data->d[16] = -0.056714f;
    data->d[17] = -0.021993f;
    data->d[18] = -0.547113f;
    data->d[19] = 0.825550f;
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
    *result->MinResult(2) = 0.000563f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n *= data.d[0];
    n = data.d[1] += n;
    n = data.d[2] *= n;
    n += data.d[3];
    n = data.d[4] += n;
    n = data.d[5] += n;
    n = data.d[6] += n;
    n *= data.d[7];
    n += data.d[8];
    n += data.d[9];
    n *= data.d[2];
    n = data.d[10] *= n;
    n = data.d[4] += n;
    n = data.d[4] *= n;
    n = data.d[11] *= n;
    n += data.d[12];
    n *= data.d[1];
    n = data.d[13] += n;
    n += data.d[10];
    n = data.d[11] += n;
    n += data.d[5];
    n += data.d[14];
    n += data.d[15];
    n += data.d[16];
    n += data.d[11];
    n = data.d[13] += n;
    n *= data.d[4];
    n *= data.d[6];
    n += data.d[17];
    n *= data.d[18];
    n += data.d[13];
    n += data.d[19];
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
