#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "FireStarterTarget.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.385176f;
    data->d[1] = -0.277501f;
    data->d[2] = -0.867123f;
    data->d[3] = 0.448455f;
    data->d[4] = 3.051292f;
    data->d[5] = -0.637916f;
    data->d[6] = 0.363849f;
    data->d[7] = 0.069109f;
    data->d[8] = -0.083653f;
    data->d[9] = 0.903132f;
    data->d[10] = 0.982266f;
    data->d[11] = 1.206963f;
    data->d[12] = -0.820818f;
    data->d[13] = 0.400716f;
    data->d[14] = -1.120634f;
    data->d[15] = 0.379336f;
    data->d[16] = 0.048756f;
    data->d[17] = 1.187727f;
    data->d[18] = 0.936245f;
    data->d[19] = -0.204347f;
    data->d[20] = -0.185858f;
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
    *result->MinResult(0) = 0.000204f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.375497f;
    data->d[1] = 1.408406f;
    data->d[2] = -0.181373f;
    data->d[3] = 0.438954f;
    data->d[4] = -0.995559f;
    data->d[5] = 1.103216f;
    data->d[6] = -0.675737f;
    data->d[7] = 1.023839f;
    data->d[8] = 1.639631f;
    data->d[9] = 1.710386f;
    data->d[10] = -0.409192f;
    data->d[11] = 2.238908f;
    data->d[12] = -0.680995f;
    data->d[13] = 0.379342f;
    data->d[14] = -0.913731f;
    data->d[15] = -0.093138f;
    data->d[16] = 1.167868f;
    data->d[17] = -0.182812f;
    data->d[18] = -0.964438f;
    data->d[19] = -0.132319f;
    data->d[20] = -0.238465f;
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
    *result->MinResult(1) = 0.000096f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.571167f;
    data->d[1] = 0.577418f;
    data->d[2] = 0.577015f;
    data->d[3] = 0.404433f;
    data->d[4] = 2.313514f;
    data->d[5] = 0.455980f;
    data->d[6] = -0.440913f;
    data->d[7] = -0.025685f;
    data->d[8] = 0.088227f;
    data->d[9] = -0.645270f;
    data->d[10] = 1.488497f;
    data->d[11] = 0.339029f;
    data->d[12] = -0.500404f;
    data->d[13] = 0.780443f;
    data->d[14] = -0.413975f;
    data->d[15] = -0.942093f;
    data->d[16] = -0.565941f;
    data->d[17] = 1.197842f;
    data->d[18] = -1.483342f;
    data->d[19] = -0.428007f;
    data->d[20] = -0.027589f;
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
    *result->MinResult(2) = 0.000169f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n *= data.d[0];
    n += data.d[1];
    n = data.d[2] += n;
    n = data.d[3] *= n;
    n = data.d[4] += n;
    n *= data.d[5];
    n = data.d[6] *= n;
    n = data.d[7] *= n;
    n *= data.d[8];
    n = data.d[2] += n;
    n = data.d[9] *= n;
    n += data.d[10];
    n += data.d[11];
    n *= data.d[4];
    n = data.d[12] *= n;
    n *= data.d[3];
    n *= data.d[9];
    n = data.d[13] *= n;
    n = data.d[2] += n;
    n += data.d[14];
    n += data.d[13];
    n += data.d[15];
    n = data.d[6] *= n;
    n += data.d[2];
    n += data.d[16];
    n += data.d[7];
    n *= data.d[17];
    n *= data.d[6];
    n *= data.d[18];
    n += data.d[19];
    n *= data.d[12];
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
            if (curResult < result) {
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
