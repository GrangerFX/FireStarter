#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "FireStarterTarget.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.708482f;
    data->d[1] = -0.548815f;
    data->d[2] = 0.753224f;
    data->d[3] = -0.387809f;
    data->d[4] = -0.240686f;
    data->d[5] = -0.595262f;
    data->d[6] = 0.622974f;
    data->d[7] = 0.879245f;
    data->d[8] = 0.838987f;
    data->d[9] = -0.116087f;
    data->d[10] = -2.920173f;
    data->d[11] = -0.443075f;
    data->d[12] = 0.116125f;
    data->d[13] = -0.603896f;
    data->d[14] = -0.412946f;
    data->d[15] = -0.348052f;
    data->d[16] = 0.598740f;
    data->d[17] = -0.904940f;
    data->d[18] = -0.668768f;
    data->d[19] = 0.641672f;
    data->d[20] = -0.101512f;
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
    *result->MinResult(0) = 0.032042f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.846142f;
    data->d[1] = -0.210793f;
    data->d[2] = -1.027447f;
    data->d[3] = -0.398276f;
    data->d[4] = -0.733921f;
    data->d[5] = 0.874182f;
    data->d[6] = -0.810292f;
    data->d[7] = -0.759660f;
    data->d[8] = 3.028939f;
    data->d[9] = 0.180360f;
    data->d[10] = 0.049529f;
    data->d[11] = 0.573418f;
    data->d[12] = 0.437627f;
    data->d[13] = -1.866434f;
    data->d[14] = -0.517006f;
    data->d[15] = -0.367764f;
    data->d[16] = 0.907027f;
    data->d[17] = -0.642064f;
    data->d[18] = 0.805947f;
    data->d[19] = 0.962799f;
    data->d[20] = -0.047944f;
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
    *result->MinResult(1) = 0.044109f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.146350f;
    data->d[1] = -0.703850f;
    data->d[2] = 0.803531f;
    data->d[3] = 0.635587f;
    data->d[4] = 0.586780f;
    data->d[5] = -0.179746f;
    data->d[6] = -0.391981f;
    data->d[7] = -0.363818f;
    data->d[8] = 0.831702f;
    data->d[9] = -0.511472f;
    data->d[10] = -2.414101f;
    data->d[11] = -0.278294f;
    data->d[12] = 0.774555f;
    data->d[13] = -3.236612f;
    data->d[14] = 3.453574f;
    data->d[15] = 0.753740f;
    data->d[16] = 0.586212f;
    data->d[17] = 1.414467f;
    data->d[18] = 0.262771f;
    data->d[19] = -0.500659f;
    data->d[20] = 0.518339f;
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
    *result->MinResult(2) = 0.037768f;
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
