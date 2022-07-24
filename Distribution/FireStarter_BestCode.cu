#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "FireStarterTarget.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.945611f;
    data->d[1] = 0.548443f;
    data->d[2] = -0.830670f;
    data->d[3] = -0.433779f;
    data->d[4] = -0.563262f;
    data->d[5] = 0.498209f;
    data->d[6] = 0.836540f;
    data->d[7] = 0.872344f;
    data->d[8] = -0.478055f;
    data->d[9] = 1.269527f;
    data->d[10] = -1.356047f;
    data->d[11] = -0.049009f;
    data->d[12] = -0.773409f;
    data->d[13] = -1.238296f;
    data->d[14] = -0.928889f;
    data->d[15] = 0.328239f;
    data->d[16] = 0.215216f;
    data->d[17] = 0.954321f;
    data->d[18] = -1.081521f;
    data->d[19] = -0.973154f;
    data->d[20] = 0.629133f;
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
    *result->MinResult(0) = 0.000278f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -1.184273f;
    data->d[1] = -1.689014f;
    data->d[2] = -2.069993f;
    data->d[3] = -0.926396f;
    data->d[4] = 1.235707f;
    data->d[5] = -0.244121f;
    data->d[6] = -0.451816f;
    data->d[7] = -0.088995f;
    data->d[8] = -0.025572f;
    data->d[9] = -1.276330f;
    data->d[10] = 0.265904f;
    data->d[11] = -0.173589f;
    data->d[12] = -0.251301f;
    data->d[13] = 1.132472f;
    data->d[14] = 0.410666f;
    data->d[15] = 0.868481f;
    data->d[16] = 1.842483f;
    data->d[17] = -2.562047f;
    data->d[18] = -1.354261f;
    data->d[19] = -1.230197f;
    data->d[20] = 0.065213f;
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
    *result->MinResult(1) = 0.000034f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.069981f;
    data->d[1] = -0.915247f;
    data->d[2] = -1.261958f;
    data->d[3] = 0.303427f;
    data->d[4] = 0.443476f;
    data->d[5] = -0.091700f;
    data->d[6] = -0.875998f;
    data->d[7] = 1.081402f;
    data->d[8] = -0.328987f;
    data->d[9] = 0.096035f;
    data->d[10] = -1.622011f;
    data->d[11] = 1.449700f;
    data->d[12] = -3.269209f;
    data->d[13] = 0.185116f;
    data->d[14] = -1.098395f;
    data->d[15] = -0.791297f;
    data->d[16] = -0.521892f;
    data->d[17] = -4.435271f;
    data->d[18] = -1.915326f;
    data->d[19] = -0.077708f;
    data->d[20] = -1.237772f;
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
    *result->MinResult(2) = 0.000239f;
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
    n = data.d[14] *= n;
    n *= data.d[14];
    n += data.d[15];
    n += data.d[16];
    n += data.d[10];
    n = data.d[5] += n;
    n *= data.d[5];
    n = data.d[0] += n;
    n += data.d[17];
    n *= data.d[8];
    n *= data.d[18];
    n *= data.d[0];
    n *= data.d[7];
    n *= data.d[6];
    n += data.d[19];
    n *= data.d[20];
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
