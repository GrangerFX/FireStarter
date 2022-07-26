#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "FireStarterTarget.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.015705f;
    data->d[1] = -0.384708f;
    data->d[2] = -0.597348f;
    data->d[3] = -9.271665f;
    data->d[4] = -1.000000f;
    data->d[5] = 1.977698f;
    data->d[6] = -1.131226f;
    data->d[7] = -1.289359f;
    data->d[8] = -0.541480f;
    data->d[9] = -0.703412f;
    data->d[10] = -0.955173f;
    data->d[11] = -1.660050f;
    data->d[12] = 1.537180f;
    data->d[13] = 9.156789f;
    data->d[14] = 0.001561f;
    data->d[15] = 0.451132f;
    data->d[16] = -0.224595f;
    data->d[17] = -0.422401f;
    data->d[18] = -0.000004f;
    data->d[19] = -0.503793f;
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
    *result->MinResult(0) = 0.000094f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -2.222091f;
    data->d[1] = -0.351463f;
    data->d[2] = 0.326832f;
    data->d[3] = 0.973122f;
    data->d[4] = -0.996036f;
    data->d[5] = -0.731657f;
    data->d[6] = 0.251363f;
    data->d[7] = -0.602635f;
    data->d[8] = 0.567261f;
    data->d[9] = -0.966923f;
    data->d[10] = 1.235199f;
    data->d[11] = -5.236984f;
    data->d[12] = -1.324513f;
    data->d[13] = -0.002091f;
    data->d[14] = -4.208272f;
    data->d[15] = 0.236034f;
    data->d[16] = -0.519788f;
    data->d[17] = -0.547972f;
    data->d[18] = -0.207916f;
    data->d[19] = -1.903701f;
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
    *result->MinResult(1) = 0.000043f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.271697f;
    data->d[1] = -1.367700f;
    data->d[2] = -0.291472f;
    data->d[3] = 16.411194f;
    data->d[4] = -0.998757f;
    data->d[5] = 0.970192f;
    data->d[6] = 0.542041f;
    data->d[7] = -0.468352f;
    data->d[8] = -0.278641f;
    data->d[9] = -0.322256f;
    data->d[10] = -0.592625f;
    data->d[11] = 1.735654f;
    data->d[12] = -2.585759f;
    data->d[13] = -0.001989f;
    data->d[14] = 1.645006f;
    data->d[15] = 0.639840f;
    data->d[16] = -0.533378f;
    data->d[17] = -0.064609f;
    data->d[18] = 0.726702f;
    data->d[19] = -0.363564f;
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
    *result->MinResult(2) = 0.001472f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n += data.d[0];
    n *= data.d[1];
    n = data.d[2] += n;
    n = data.d[3] += n;
    n *= data.d[4];
    n = data.d[3] += n;
    n = data.d[2] += n;
    n = data.d[5] += n;
    n += data.d[6];
    n *= data.d[7];
    n = data.d[8] += n;
    n = data.d[9] += n;
    n *= data.d[2];
    n += data.d[8];
    n *= data.d[10];
    n = data.d[5] += n;
    n *= data.d[11];
    n += data.d[12];
    n *= data.d[13];
    n *= data.d[14];
    n += data.d[15];
    n += data.d[3];
    n += data.d[16];
    n = data.d[5] *= n;
    n = data.d[17] += n;
    n += data.d[17];
    n = data.d[5] += n;
    n *= data.d[9];
    n = data.d[18] += n;
    n *= data.d[19];
    n *= data.d[5];
    n += data.d[18];
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
