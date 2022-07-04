#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "FireStarterTarget.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.141593f;
    data->d[1] = 1.002820f;
    data->d[2] = 0.809722f;
    data->d[3] = 1.145580f;
    data->d[4] = -0.343317f;
    data->d[5] = -0.552839f;
    data->d[6] = -0.977102f;
    data->d[7] = 0.011905f;
    data->d[8] = 0.759643f;
    data->d[9] = -0.079615f;
    data->d[10] = -0.629818f;
    data->d[11] = -1.075626f;
    data->d[12] = 0.718315f;
    data->d[13] = 1.297227f;
    data->d[14] = -0.120407f;
    data->d[15] = 1.027432f;
    data->d[16] = 1.095671f;
    data->d[17] = 1.707650f;
    data->d[18] = 23.049927f;
    data->d[19] = 0.000000f;
    data->d[20] = -0.456407f;
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
    *result->MinResult(0) = 0.000003f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -3.090658f;
    data->d[1] = 0.420239f;
    data->d[2] = 1.106518f;
    data->d[3] = -0.274413f;
    data->d[4] = -0.864500f;
    data->d[5] = 0.786467f;
    data->d[6] = -0.514748f;
    data->d[7] = 0.186443f;
    data->d[8] = -1.164873f;
    data->d[9] = 0.480127f;
    data->d[10] = -0.532772f;
    data->d[11] = 0.301603f;
    data->d[12] = -1.342865f;
    data->d[13] = -1.047472f;
    data->d[14] = 1.757338f;
    data->d[15] = -0.603316f;
    data->d[16] = -1.640008f;
    data->d[17] = -1.019522f;
    data->d[18] = 0.165067f;
    data->d[19] = 1.411443f;
    data->d[20] = -0.507042f;
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
    *result->MinResult(1) = 0.000002f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -2.617994f;
    data->d[1] = -0.677939f;
    data->d[2] = 1.146389f;
    data->d[3] = -1.477611f;
    data->d[4] = -0.199393f;
    data->d[5] = -0.988466f;
    data->d[6] = 0.476684f;
    data->d[7] = -0.011192f;
    data->d[8] = -1.023059f;
    data->d[9] = -0.462691f;
    data->d[10] = -1.245645f;
    data->d[11] = 0.375737f;
    data->d[12] = 0.751629f;
    data->d[13] = -0.483220f;
    data->d[14] = -0.094635f;
    data->d[15] = -2.262924f;
    data->d[16] = -0.065988f;
    data->d[17] = -0.007223f;
    data->d[18] = -10.613009f;
    data->d[19] = -0.042278f;
    data->d[20] = 1.166937f;
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
    *result->MinResult(2) = 0.000001f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n += data.d[0];
    n = data.d[1] *= n;
    n *= data.d[2];
    n = data.d[3] *= n;
    n = data.d[1] *= n;
    n *= data.d[4];
    n *= data.d[5];
    n = data.d[6] += n;
    n = data.d[7] *= n;
    n *= data.d[1];
    n *= data.d[8];
    n *= data.d[9];
    n *= data.d[10];
    n += data.d[11];
    n = data.d[12] *= n;
    n = data.d[6] += n;
    n += data.d[13];
    n *= data.d[14];
    n += data.d[15];
    n = data.d[6] *= n;
    n = data.d[3] *= n;
    n = data.d[12] *= n;
    n += data.d[3];
    n *= data.d[16];
    n = data.d[6] *= n;
    n *= data.d[17];
    n *= data.d[7];
    n += data.d[18];
    n *= data.d[19];
    n += data.d[6];
    n += data.d[12];
    n *= data.d[20];
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
