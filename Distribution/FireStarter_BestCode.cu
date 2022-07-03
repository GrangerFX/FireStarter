#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "FireStarterTarget.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -1.050210f;
    data->d[1] = 0.765105f;
    data->d[2] = -0.479841f;
    data->d[3] = -0.353436f;
    data->d[4] = 0.370293f;
    data->d[5] = 0.766255f;
    data->d[6] = -0.828412f;
    data->d[7] = -0.352608f;
    data->d[8] = -0.590538f;
    data->d[9] = -0.925860f;
    data->d[10] = -0.818193f;
    data->d[11] = 0.566767f;
    data->d[12] = 0.814929f;
    data->d[13] = 0.424890f;
    data->d[14] = -0.407511f;
    data->d[15] = 1.691461f;
    data->d[16] = -1.726548f;
    data->d[17] = -0.810868f;
    data->d[18] = -0.466812f;
    data->d[19] = 0.300432f;
    data->d[20] = -0.039041f;
    data->d[21] = 0.114722f;
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
    data->d[0] = -0.860461f;
    data->d[1] = -2.572186f;
    data->d[2] = -0.327868f;
    data->d[3] = -0.358985f;
    data->d[4] = -0.148259f;
    data->d[5] = 0.657097f;
    data->d[6] = -1.242195f;
    data->d[7] = -0.531128f;
    data->d[8] = 0.481802f;
    data->d[9] = -0.564776f;
    data->d[10] = 0.177436f;
    data->d[11] = 0.004331f;
    data->d[12] = 0.811979f;
    data->d[13] = -1.197775f;
    data->d[14] = -0.779779f;
    data->d[15] = 0.823603f;
    data->d[16] = -0.581255f;
    data->d[17] = 0.298352f;
    data->d[18] = -2.321058f;
    data->d[19] = -0.841365f;
    data->d[20] = -0.004975f;
    data->d[21] = -0.036793f;
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
    *result->MinResult(1) = 0.000058f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.680270f;
    data->d[1] = -0.307543f;
    data->d[2] = -0.733462f;
    data->d[3] = -1.020976f;
    data->d[4] = -0.713306f;
    data->d[5] = -0.757441f;
    data->d[6] = -0.488448f;
    data->d[7] = -0.943393f;
    data->d[8] = -0.339280f;
    data->d[9] = 0.528129f;
    data->d[10] = -0.963454f;
    data->d[11] = 0.745995f;
    data->d[12] = 0.620664f;
    data->d[13] = -0.394093f;
    data->d[14] = -2.847180f;
    data->d[15] = -0.895326f;
    data->d[16] = 0.381645f;
    data->d[17] = 0.789437f;
    data->d[18] = -1.749516f;
    data->d[19] = -0.312503f;
    data->d[20] = -0.275145f;
    data->d[21] = 0.559478f;
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
    *result->MinResult(2) = 0.000040f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n += data.d[0];
    n *= data.d[1];
    n = data.d[2] *= n;
    n += data.d[3];
    n = data.d[4] *= n;
    n += data.d[5];
    n *= data.d[4];
    n = data.d[6] += n;
    n = data.d[7] += n;
    n += data.d[8];
    n = data.d[9] *= n;
    n += data.d[10];
    n *= data.d[11];
    n += data.d[2];
    n *= data.d[12];
    n *= data.d[9];
    n += data.d[13];
    n = data.d[14] *= n;
    n *= data.d[7];
    n = data.d[15] *= n;
    n = data.d[16] *= n;
    n *= data.d[14];
    n = data.d[17] += n;
    n += data.d[18];
    n += data.d[19];
    n += data.d[17];
    n = data.d[6] += n;
    n *= data.d[20];
    n += data.d[15];
    n += data.d[16];
    n *= data.d[6];
    n += data.d[21];
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
