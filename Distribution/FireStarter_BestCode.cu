#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "FireStarterTarget.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.248047f;
    data->d[1] = 0.166144f;
    data->d[2] = -0.546826f;
    data->d[3] = -0.776944f;
    data->d[4] = 0.744026f;
    data->d[5] = -0.178697f;
    data->d[6] = -0.907527f;
    data->d[7] = -0.360465f;
    data->d[8] = -0.901680f;
    data->d[9] = -0.228698f;
    data->d[10] = -0.350728f;
    data->d[11] = -0.417284f;
    data->d[12] = -0.443057f;
    data->d[13] = -0.801049f;
    data->d[14] = -0.479648f;
    data->d[15] = -0.510700f;
    data->d[16] = 1.156952f;
    data->d[17] = 1.353815f;
    data->d[18] = 0.004702f;
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
    *result->MinResult(0) = 0.008159f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -1.130484f;
    data->d[1] = 1.582270f;
    data->d[2] = -0.952338f;
    data->d[3] = 0.532322f;
    data->d[4] = -0.010464f;
    data->d[5] = -0.542295f;
    data->d[6] = 0.647566f;
    data->d[7] = -0.319492f;
    data->d[8] = -0.766949f;
    data->d[9] = -0.453460f;
    data->d[10] = 0.633344f;
    data->d[11] = 0.273456f;
    data->d[12] = 0.409059f;
    data->d[13] = 0.960545f;
    data->d[14] = -0.075324f;
    data->d[15] = 4.791542f;
    data->d[16] = -0.917236f;
    data->d[17] = 0.781251f;
    data->d[18] = 0.003442f;
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
    *result->MinResult(1) = 0.008209f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.553339f;
    data->d[1] = -0.193459f;
    data->d[2] = 0.902489f;
    data->d[3] = -0.416983f;
    data->d[4] = 0.028780f;
    data->d[5] = -1.014707f;
    data->d[6] = 0.602336f;
    data->d[7] = 0.794968f;
    data->d[8] = 1.051999f;
    data->d[9] = 1.080473f;
    data->d[10] = -0.437021f;
    data->d[11] = 0.161793f;
    data->d[12] = -2.526126f;
    data->d[13] = 0.133814f;
    data->d[14] = 0.376466f;
    data->d[15] = 0.039905f;
    data->d[16] = -0.762979f;
    data->d[17] = -0.056764f;
    data->d[18] = 0.217742f;
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
    *result->MinResult(2) = 0.003721f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n = data.d[0] += n;
    n = data.d[1] += n;
    n *= data.d[2];
    n = data.d[3] *= n;
    n *= data.d[4];
    n *= data.d[5];
    n = data.d[3] += n;
    n = data.d[6] *= n;
    n = data.d[7] *= n;
    n = data.d[8] += n;
    n = data.d[1] *= n;
    n += data.d[9];
    n = data.d[1] *= n;
    n = data.d[10] += n;
    n = data.d[8] += n;
    n *= data.d[6];
    n = data.d[10] += n;
    n += data.d[8];
    n += data.d[11];
    n += data.d[12];
    n += data.d[13];
    n *= data.d[14];
    n += data.d[15];
    n *= data.d[0];
    n += data.d[16];
    n = data.d[7] *= n;
    n *= data.d[1];
    n *= data.d[17];
    n *= data.d[3];
    n += data.d[7];
    n *= data.d[18];
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
    float sampleStep = (FIRESTARTER_SAMPLE_MAX - FIRESTARTER_SAMPLE_MIN) / (FIRESTARTER_SAMPLES - 1);
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
        theta[i] = FIRESTARTER_SAMPLE_MIN + i * sampleStep;

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
            result = oldResult = FIRESTARTER_EVOLVE_START_RESULT;
            evolutionFactor = FIRESTARTER_EVOLVE_START_FACTOR;
        } else {
            data = *oldResults->Data(member, v);
            result = oldResult = *oldResults->MinResult(member, v);
            evolutionFactor = FIRESTARTER_EVOLVE_FACTOR * result;
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
            float precisionStep = (FIRESTARTER_SAMPLE_MAX - FIRESTARTER_SAMPLE_MIN) / (settings.m_precision - 1);
            for (int i = 0; i < settings.m_precision; i++) {
                float theta = FIRESTARTER_SAMPLE_MIN + i * precisionStep;
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
            for (int i = 0; i < FIRESTARTER_EVOLVE_CANDIDATES; i++) {
                unsigned int index = RANDOMMOD(memberSeed, settings.m_population);
                float curResult = *oldResults->MinResult(index, v);
                if (curResult <= bestResult) {
                    bestResult = curResult;
                    bestIndex = index;
                }
            }
            if (bestIndex != member) {
                *newResults->Data(member, v) = *oldResults->Data(bestIndex, v);
                *newResults->MinResult(member, v) = FIRESTARTER_EVOLVE_START_RESULT;
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
