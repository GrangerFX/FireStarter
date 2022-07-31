#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "FireStarterTarget.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.296947f;
    data->d[1] = 0.071011f;
    data->d[2] = -0.821627f;
    data->d[3] = -0.271374f;
    data->d[4] = -0.204932f;
    data->d[5] = -0.961672f;
    data->d[6] = -0.359086f;
    data->d[7] = -0.895621f;
    data->d[8] = -0.288747f;
    data->d[9] = -0.317127f;
    data->d[10] = -0.031552f;
    data->d[11] = -0.002471f;
    data->d[12] = -1.077807f;
    data->d[13] = 0.243268f;
    data->d[14] = 0.754705f;
    data->d[15] = 0.123688f;
    data->d[16] = -0.003201f;
    data->d[17] = 0.000000f;
    data->d[18] = 0.000000f;
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
    *result->MinResult(0) = 0.010480f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -1.098979f;
    data->d[1] = 1.543692f;
    data->d[2] = -0.831038f;
    data->d[3] = 0.388666f;
    data->d[4] = -0.187841f;
    data->d[5] = 0.641662f;
    data->d[6] = -0.301243f;
    data->d[7] = -0.751559f;
    data->d[8] = -0.539643f;
    data->d[9] = 0.622943f;
    data->d[10] = -0.450825f;
    data->d[11] = -1.022712f;
    data->d[12] = 1.142538f;
    data->d[13] = 0.739396f;
    data->d[14] = 5.096871f;
    data->d[15] = -0.023369f;
    data->d[16] = 0.013893f;
    data->d[17] = 0.000000f;
    data->d[18] = 0.000000f;
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
    *result->MinResult(1) = 0.007404f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.503740f;
    data->d[1] = 0.022544f;
    data->d[2] = -0.165395f;
    data->d[3] = -1.325501f;
    data->d[4] = 0.442587f;
    data->d[5] = -0.339524f;
    data->d[6] = 0.789433f;
    data->d[7] = 1.099214f;
    data->d[8] = 1.012047f;
    data->d[9] = -0.716267f;
    data->d[10] = -1.203319f;
    data->d[11] = -1.022584f;
    data->d[12] = 0.541867f;
    data->d[13] = 0.380431f;
    data->d[14] = 0.154037f;
    data->d[15] = -0.009074f;
    data->d[16] = 0.491174f;
    data->d[17] = 0.000000f;
    data->d[18] = 0.000000f;
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
    *result->MinResult(2) = 0.014651f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n = data.d[0] += n;
    n = data.d[1] += n;
    n *= data.d[2];
    n = data.d[3] *= n;
    n *= data.d[4];
    n = data.d[3] += n;
    n += data.d[3];
    n = data.d[5] *= n;
    n = data.d[6] *= n;
    n = data.d[7] += n;
    n = data.d[1] *= n;
    n += data.d[8];
    n *= data.d[1];
    n = data.d[9] += n;
    n = data.d[7] += n;
    n = data.d[5] *= n;
    n = data.d[9] += n;
    n += data.d[7];
    n = data.d[10] += n;
    n += data.d[11];
    n = data.d[12] += n;
    n *= data.d[13];
    n += data.d[14];
    n *= data.d[0];
    n += data.d[5];
    n = data.d[6] *= n;
    n *= data.d[10];
    n *= data.d[15];
    n *= data.d[12];
    n += data.d[6];
    n *= data.d[16];
    n += data.d[9];
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
