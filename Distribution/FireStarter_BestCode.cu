#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "FireStarterTarget.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.685230f;
    data->d[1] = -1.356168f;
    data->d[2] = -0.463524f;
    data->d[3] = -0.534336f;
    data->d[4] = -0.231085f;
    data->d[5] = -0.671445f;
    data->d[6] = 1.706384f;
    data->d[7] = 0.539043f;
    data->d[8] = 0.865196f;
    data->d[9] = -0.680052f;
    data->d[10] = -0.864897f;
    data->d[11] = 0.315153f;
    data->d[12] = 0.555360f;
    data->d[13] = 1.468605f;
    data->d[14] = -0.032254f;
    data->d[15] = 0.309470f;
    data->d[16] = 1.692684f;
    data->d[17] = 0.124952f;
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
    *result->MinResult(0) = 0.000253f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.517400f;
    data->d[1] = 0.321454f;
    data->d[2] = -0.831539f;
    data->d[3] = -0.752589f;
    data->d[4] = -1.256213f;
    data->d[5] = 2.492686f;
    data->d[6] = 0.745487f;
    data->d[7] = 0.174118f;
    data->d[8] = -0.673927f;
    data->d[9] = 0.762411f;
    data->d[10] = 0.790576f;
    data->d[11] = -0.060866f;
    data->d[12] = -0.729218f;
    data->d[13] = -0.272920f;
    data->d[14] = -0.133003f;
    data->d[15] = -0.255302f;
    data->d[16] = -1.069049f;
    data->d[17] = -0.151091f;
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
    *result->MinResult(1) = 0.000181f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.575476f;
    data->d[1] = 0.575527f;
    data->d[2] = -0.527985f;
    data->d[3] = -0.059228f;
    data->d[4] = -0.674379f;
    data->d[5] = -0.692465f;
    data->d[6] = -1.582943f;
    data->d[7] = -0.019263f;
    data->d[8] = -0.584950f;
    data->d[9] = 0.553719f;
    data->d[10] = 1.079030f;
    data->d[11] = -0.686914f;
    data->d[12] = -0.168141f;
    data->d[13] = -3.083375f;
    data->d[14] = 0.218572f;
    data->d[15] = -0.523228f;
    data->d[16] = -1.182144f;
    data->d[17] = -0.144488f;
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
    *result->MinResult(2) = 0.000233f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n = data.d[0] += n;
    n += data.d[1];
    n *= data.d[2];
    n += data.d[0];
    n = data.d[3] += n;
    n = data.d[4] += n;
    n = data.d[5] += n;
    n = data.d[6] *= n;
    n += data.d[7];
    n = data.d[8] += n;
    n *= data.d[9];
    n = data.d[3] += n;
    n = data.d[3] *= n;
    n = data.d[10] += n;
    n *= data.d[5];
    n += data.d[8];
    n *= data.d[10];
    n *= data.d[6];
    n *= data.d[11];
    n = data.d[12] *= n;
    n = data.d[3] += n;
    n = data.d[4] += n;
    n = data.d[12] += n;
    n += data.d[13];
    n = data.d[3] *= n;
    n += data.d[14];
    n *= data.d[15];
    n += data.d[16];
    n += data.d[12];
    n *= data.d[3];
    n += data.d[4];
    n += data.d[17];
    return isfinite(n) ? n : 0.0f;
} // Evaluate
// END //

// OPTMIZE //
GPU_GLOBAL void Optimize(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int dataSize, const FireStarterSettings settings, const unsigned int seed, const unsigned int init)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= settings.m_evolvePopulation)
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
