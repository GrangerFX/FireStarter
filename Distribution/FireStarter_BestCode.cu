#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.251605f;
    data->d[1] = 0.159276f;
    data->d[2] = -0.504783f;
    data->d[3] = -0.551404f;
    data->d[4] = 0.742369f;
    data->d[5] = 0.336588f;
    data->d[6] = -0.969235f;
    data->d[7] = -0.360001f;
    data->d[8] = -0.903265f;
    data->d[9] = -0.228349f;
    data->d[10] = -0.346272f;
    data->d[11] = -1.001023f;
    data->d[12] = -0.422891f;
    data->d[13] = -1.369886f;
    data->d[14] = -1.468877f;
    data->d[15] = -0.490171f;
    data->d[16] = 0.856146f;
    data->d[17] = 0.922389f;
    data->d[18] = 0.000331f;
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
    *result->MinResult(0) = 0.013550f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -1.131455f;
    data->d[1] = 1.580557f;
    data->d[2] = -0.886054f;
    data->d[3] = 0.536337f;
    data->d[4] = 0.067335f;
    data->d[5] = 1.075459f;
    data->d[6] = 0.647358f;
    data->d[7] = -0.320508f;
    data->d[8] = -0.768989f;
    data->d[9] = -0.440526f;
    data->d[10] = 0.638504f;
    data->d[11] = 0.130286f;
    data->d[12] = 0.410724f;
    data->d[13] = 0.815678f;
    data->d[14] = 1.578824f;
    data->d[15] = 3.805946f;
    data->d[16] = 0.756479f;
    data->d[17] = 0.807177f;
    data->d[18] = 0.002825f;
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
    *result->MinResult(1) = 0.013003f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.542183f;
    data->d[1] = -0.179234f;
    data->d[2] = 0.900895f;
    data->d[3] = -0.467399f;
    data->d[4] = 0.031171f;
    data->d[5] = -1.575066f;
    data->d[6] = 0.554148f;
    data->d[7] = 0.796775f;
    data->d[8] = 1.061809f;
    data->d[9] = 1.097027f;
    data->d[10] = -0.444656f;
    data->d[11] = -0.402069f;
    data->d[12] = -2.515475f;
    data->d[13] = 0.142426f;
    data->d[14] = 0.393053f;
    data->d[15] = 0.043326f;
    data->d[16] = 0.816407f;
    data->d[17] = -0.055504f;
    data->d[18] = 0.231890f;
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
    *result->MinResult(2) = 0.004182f;
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
    n *= data.d[16];
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
    float sampleStep = (TARGET_MAX - TARGET_MIN) / (FIRESTARTER_SAMPLES - 1);
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
        theta[i] = TARGET_MIN + i * sampleStep;

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
        float evolutionScale;
        if (init) {
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR(memberSeed);
            for (int i = dataSize; i < FIRESTARTER_REGISTERS; i++)
                data.d[i] = 0.0f;   // Clear the unused data.
            result = oldResult = settings.m_startResult;
            evolutionScale = settings.m_startScale;
        } else {
            data = *oldResults->Data(member, v);
            result = oldResult = *oldResults->MinResult(member, v);
            evolutionScale = settings.m_scale * result;
        }

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < settings.m_iterations; p++) {
            unsigned int d = RANDOMMOD(memberSeed, dataSize);
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionScale * RANDOMFACTOR(memberSeed);
            float curResult = 0.0f;
            for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
                curResult = fmaxf(fabsf(Evaluate(data, theta[i]) - target[i]), curResult);
            if (curResult <= result) {
                result = curResult;
                evolutionScale = settings.m_scale * result;
            } else
                data.d[d] = oldData;
        }

        // Calculate a more accurate estimate of the result.
        if (settings.m_precision) {
            float precisionStep = (TARGET_MAX - TARGET_MIN) / (settings.m_precision - 1);
            for (int i = 0; i < settings.m_precision; i++) {
                float theta = TARGET_MIN + i * precisionStep;
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
            for (int i = 0; i < settings.m_candidates; i++) {
                unsigned int index = RANDOMMOD(memberSeed, settings.m_population);
                float curResult = *oldResults->MinResult(index, v);
                if (curResult <= bestResult) {
                    bestResult = curResult;
                    bestIndex = index;
                }
            }
            if (bestIndex != member) {
                *newResults->Data(member, v) = *oldResults->Data(bestIndex, v);
                *newResults->MinResult(member, v) = settings.m_startResult;
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
