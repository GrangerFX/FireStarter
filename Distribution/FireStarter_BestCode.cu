#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "FireStarterTarget.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -1.094908f;
    data->d[1] = -3.027296f;
    data->d[2] = 0.280161f;
    data->d[3] = 0.274723f;
    data->d[4] = -0.573372f;
    data->d[5] = 0.342806f;
    data->d[6] = -0.688292f;
    data->d[7] = 0.655679f;
    data->d[8] = 0.169225f;
    data->d[9] = -0.677859f;
    data->d[10] = -0.462380f;
    data->d[11] = -0.872921f;
    data->d[12] = -0.524032f;
    data->d[13] = -0.222082f;
    data->d[14] = -0.614980f;
    data->d[15] = 0.134917f;
    data->d[16] = 1.397039f;
    data->d[17] = -0.804406f;
    data->d[18] = -0.854300f;
    data->d[19] = -0.000044f;
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
    *result->MinResult(0) = 0.000024f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -3.140879f;
    data->d[1] = 0.257465f;
    data->d[2] = -0.053338f;
    data->d[3] = 0.011056f;
    data->d[4] = -0.002682f;
    data->d[5] = 1.081374f;
    data->d[6] = 0.700150f;
    data->d[7] = 0.660401f;
    data->d[8] = 0.811078f;
    data->d[9] = 1.106193f;
    data->d[10] = 1.061920f;
    data->d[11] = 0.040111f;
    data->d[12] = 0.202810f;
    data->d[13] = 1.544946f;
    data->d[14] = 0.429962f;
    data->d[15] = 0.267904f;
    data->d[16] = -0.803920f;
    data->d[17] = 0.043564f;
    data->d[18] = 0.320687f;
    data->d[19] = -0.118164f;
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
    *result->MinResult(1) = 0.000008f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -3.799654f;
    data->d[1] = 0.407180f;
    data->d[2] = 0.127328f;
    data->d[3] = 0.098617f;
    data->d[4] = 0.150450f;
    data->d[5] = -0.195407f;
    data->d[6] = -0.318370f;
    data->d[7] = -0.400035f;
    data->d[8] = -1.677149f;
    data->d[9] = 0.683000f;
    data->d[10] = 0.822230f;
    data->d[11] = 0.162180f;
    data->d[12] = 0.569215f;
    data->d[13] = 0.866324f;
    data->d[14] = -1.781198f;
    data->d[15] = 0.407584f;
    data->d[16] = 0.197121f;
    data->d[17] = -1.288772f;
    data->d[18] = -0.219363f;
    data->d[19] = 0.523626f;
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
    *result->MinResult(2) = 0.000029f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n = data.d[0] += n;
    n += data.d[1];
    n *= data.d[2];
    n = data.d[3] += n;
    n += data.d[4];
    n *= data.d[0];
    n = data.d[5] += n;
    n *= data.d[6];
    n *= data.d[7];
    n = data.d[8] *= n;
    n = data.d[9] *= n;
    n = data.d[10] += n;
    n = data.d[8] *= n;
    n = data.d[11] += n;
    n += data.d[11];
    n *= data.d[10];
    n += data.d[9];
    n = data.d[12] += n;
    n = data.d[12] += n;
    n *= data.d[13];
    n += data.d[14];
    n += data.d[15];
    n += data.d[16];
    n += data.d[8];
    n = data.d[17] *= n;
    n += data.d[18];
    n = data.d[5] += n;
    n += data.d[17];
    n += data.d[5];
    n *= data.d[3];
    n *= data.d[12];
    n += data.d[19];
    return isfinite(n) ? n : 0.0f;
} // Evaluate
// END //

// OPTMIZE //
GPU_GLOBAL void Optimize(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int dataSize, const FireStarterSettings settings, const unsigned int seed, const unsigned int init)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= settings.m_evolvePopulation)
        return;
    unsigned int memberSeed = RANDOM(RANDOM(member) + seed);

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
        for (unsigned int p = 0; p < settings.m_evolveIterations; p++) {
            unsigned int d = RANDOMMOD(memberSeed, dataSize);
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(memberSeed);
            float curResult = 0.0f;
            for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
                curResult = fmaxf(fabsf(Evaluate(data, theta[i]) - target[i]), curResult);
            if (curResult < result) {
                result = curResult;
                evolutionFactor = settings.m_evolveFactor * result;
            } else
                data.d[d] = oldData;
        }

        // Calculate a more accurate estimate of the result.
        if (settings.m_evolvePrecision) {
            float precisionStep = (settings.m_sampleMax - settings.m_sampleMin) / (settings.m_evolvePrecision - 1);
            for (int i = 0; i < settings.m_evolvePrecision; i++) {
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
                unsigned int index = RANDOMMOD(memberSeed, settings.m_evolvePopulation);
                float curResult = *oldResults->MinResult(index, variation);
                if (curResult < bestResult) {
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
