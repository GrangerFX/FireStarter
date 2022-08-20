#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.297524f;
    data->d[1] = 0.299468f;
    data->d[2] = 0.361419f;
    data->d[3] = 0.357750f;
    data->d[4] = -0.251255f;
    data->d[5] = -0.294359f;
    data->d[6] = -0.224945f;
    data->d[7] = 0.491291f;
    data->d[8] = 0.798968f;
    data->d[9] = 0.607302f;
    data->d[10] = -8.528979f;
    data->d[11] = 0.613136f;
    data->d[12] = 0.461770f;
    data->d[13] = -0.539778f;
    data->d[14] = -0.873022f;
    data->d[15] = 0.208064f;
    data->d[16] = 1.062118f;
    data->d[17] = 0.731328f;
    data->d[18] = -0.543315f;
    data->d[19] = -0.460327f;
    data->d[20] = -0.151024f;
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
    *result->MinResult(0) = 0.132269f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 1.710085f;
    data->d[1] = 1.813011f;
    data->d[2] = 0.237010f;
    data->d[3] = 0.125067f;
    data->d[4] = -3.793574f;
    data->d[5] = -0.366016f;
    data->d[6] = -0.862931f;
    data->d[7] = 0.020420f;
    data->d[8] = -0.255955f;
    data->d[9] = -1.036637f;
    data->d[10] = -0.784078f;
    data->d[11] = -0.078289f;
    data->d[12] = -0.045401f;
    data->d[13] = 0.470794f;
    data->d[14] = -0.451698f;
    data->d[15] = 0.125396f;
    data->d[16] = 0.950583f;
    data->d[17] = 0.011726f;
    data->d[18] = -0.022280f;
    data->d[19] = -5.158509f;
    data->d[20] = 0.240711f;
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
    *result->MinResult(1) = 0.289881f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.404996f;
    data->d[1] = 1.601474f;
    data->d[2] = 0.514955f;
    data->d[3] = 0.312001f;
    data->d[4] = 0.759412f;
    data->d[5] = -0.401134f;
    data->d[6] = 0.042173f;
    data->d[7] = 0.114528f;
    data->d[8] = -0.813948f;
    data->d[9] = 0.269929f;
    data->d[10] = -1.387574f;
    data->d[11] = 0.550495f;
    data->d[12] = 0.056788f;
    data->d[13] = 0.804820f;
    data->d[14] = -1.319990f;
    data->d[15] = -0.305079f;
    data->d[16] = -0.817215f;
    data->d[17] = 0.380124f;
    data->d[18] = 1.096774f;
    data->d[19] = 0.855943f;
    data->d[20] = -0.429564f;
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
    *result->MinResult(2) = 0.297010f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n = data.d[0] += n;
    n *= data.d[1];
    n = data.d[2] *= n;
    n *= data.d[3];
    n *= data.d[4];
    n = data.d[5] *= n;
    n += data.d[6];
    n += data.d[7];
    n = data.d[2] *= n;
    n = data.d[8] += n;
    n = data.d[9] += n;
    n = data.d[9] += n;
    n += data.d[5];
    n = data.d[8] += n;
    n += data.d[10];
    n *= data.d[11];
    n += data.d[12];
    n += data.d[13];
    n += data.d[14];
    n = data.d[0] += n;
    n += data.d[15];
    n *= data.d[16];
    n += data.d[17];
    n = data.d[18] *= n;
    n += data.d[19];
    n = data.d[0] += n;
    n += data.d[9];
    n += data.d[2];
    n *= data.d[20];
    n *= data.d[8];
    n *= data.d[18];
    n *= data.d[0];
    return isfinite(n) ? n : 0.0f;
} // Evaluate
// END //

GPU_GLOBAL void Optimize(const FireStarterSettings settings, FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int firstMember, const unsigned int lastMember, const unsigned int dataSize, const unsigned int seed, const unsigned int init)
{
    unsigned int member = firstMember + blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= lastMember)
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
