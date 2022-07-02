#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "FireStarterTarget.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.100476f;
    data->d[1] = 0.571718f;
    data->d[2] = -1.607269f;
    data->d[3] = -1.027112f;
    data->d[4] = -0.044606f;
    data->d[5] = 0.454348f;
    data->d[6] = -0.560206f;
    data->d[7] = 0.611290f;
    data->d[8] = -0.071203f;
    data->d[9] = -0.405703f;
    data->d[10] = 0.644242f;
    data->d[11] = 0.395631f;
    data->d[12] = -0.270021f;
    data->d[13] = 1.891714f;
    data->d[14] = -5.188652f;
    data->d[15] = 0.604276f;
    data->d[16] = -0.686084f;
    data->d[17] = -0.051975f;
    data->d[18] = -0.575309f;
    data->d[19] = -1.101523f;
    data->d[20] = 0.116749f;
    data->d[21] = 0.636344f;
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
    *result->MinResult(0) = 0.000282f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -1.501981f;
    data->d[1] = -1.063176f;
    data->d[2] = -3.321442f;
    data->d[3] = -0.474177f;
    data->d[4] = 0.725853f;
    data->d[5] = -0.190123f;
    data->d[6] = 0.271052f;
    data->d[7] = -0.688525f;
    data->d[8] = 0.550398f;
    data->d[9] = -1.139403f;
    data->d[10] = 0.098420f;
    data->d[11] = 0.710534f;
    data->d[12] = -1.326558f;
    data->d[13] = 0.856049f;
    data->d[14] = -0.411406f;
    data->d[15] = 0.371219f;
    data->d[16] = 2.477021f;
    data->d[17] = -0.487980f;
    data->d[18] = -1.355615f;
    data->d[19] = -0.052534f;
    data->d[20] = 0.257021f;
    data->d[21] = -0.264509f;
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
    *result->MinResult(1) = 0.000355f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -1.152338f;
    data->d[1] = -0.886149f;
    data->d[2] = 2.060328f;
    data->d[3] = 0.624590f;
    data->d[4] = 0.375906f;
    data->d[5] = -0.384760f;
    data->d[6] = 0.479090f;
    data->d[7] = 1.471164f;
    data->d[8] = -0.969840f;
    data->d[9] = -0.231994f;
    data->d[10] = -0.095566f;
    data->d[11] = 0.411015f;
    data->d[12] = -0.855036f;
    data->d[13] = 1.003424f;
    data->d[14] = 0.445543f;
    data->d[15] = 0.677439f;
    data->d[16] = -0.919810f;
    data->d[17] = 0.763727f;
    data->d[18] = 0.737400f;
    data->d[19] = 1.692155f;
    data->d[20] = -0.271643f;
    data->d[21] = 0.777569f;
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
    *result->MinResult(2) = 0.000600f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n = data.d[0] += n;
    n = data.d[1] += n;
    n += data.d[2];
    n = data.d[3] *= n;
    n *= data.d[1];
    n = data.d[4] *= n;
    n = data.d[5] *= n;
    n *= data.d[6];
    n = data.d[7] += n;
    n *= data.d[0];
    n += data.d[8];
    n += data.d[5];
    n = data.d[9] *= n;
    n = data.d[10] += n;
    n *= data.d[11];
    n = data.d[7] *= n;
    n += data.d[9];
    n += data.d[4];
    n *= data.d[12];
    n *= data.d[13];
    n *= data.d[14];
    n += data.d[15];
    n += data.d[16];
    n = data.d[3] += n;
    n *= data.d[7];
    n += data.d[17];
    n *= data.d[18];
    n += data.d[10];
    n *= data.d[19];
    n += data.d[20];
    n *= data.d[3];
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
        float precisionStep = (settings.m_sampleMax - settings.m_sampleMin) / (settings.m_evolvePrecision - 1);
        for (int i = 0; i < settings.m_evolvePrecision; i++) {
            float theta = settings.m_sampleMin + i * precisionStep;
            result = fmaxf(fabsf(Evaluate(data, theta) - Target(theta, variation)), result);
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
