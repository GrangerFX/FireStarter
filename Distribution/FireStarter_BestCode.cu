#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.113048f;
    data->d[1] = 0.655544f;
    data->d[2] = -1.368609f;
    data->d[3] = -0.292387f;
    data->d[4] = 1.009484f;
    data->d[5] = 1.113225f;
    data->d[6] = 1.073908f;
    data->d[7] = 0.411913f;
    data->d[8] = -0.714430f;
    data->d[9] = 0.217826f;
    data->d[10] = -0.785818f;
    data->d[11] = -0.343245f;
    data->d[12] = 0.551169f;
    data->d[13] = 0.742487f;
    data->d[14] = -0.092890f;
    data->d[15] = -0.439714f;
    data->d[16] = -0.086529f;
    data->d[17] = 1.129334f;
    data->d[18] = 0.526612f;
    data->d[19] = -0.541523f;
    data->d[20] = 0.834165f;
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
    *result->MinResult(0) = 0.000055f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.448424f;
    data->d[1] = -1.473133f;
    data->d[2] = -0.173963f;
    data->d[3] = 0.280057f;
    data->d[4] = 0.977121f;
    data->d[5] = 0.383660f;
    data->d[6] = -0.321364f;
    data->d[7] = 0.623062f;
    data->d[8] = 1.014171f;
    data->d[9] = -0.267501f;
    data->d[10] = 0.265497f;
    data->d[11] = 0.116481f;
    data->d[12] = 1.030224f;
    data->d[13] = 0.282568f;
    data->d[14] = -0.247715f;
    data->d[15] = -2.059584f;
    data->d[16] = 1.297460f;
    data->d[17] = 1.394904f;
    data->d[18] = -1.654091f;
    data->d[19] = -0.522783f;
    data->d[20] = -0.922504f;
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
    *result->MinResult(1) = 0.000049f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.219707f;
    data->d[1] = -2.929225f;
    data->d[2] = -0.076646f;
    data->d[3] = -0.308073f;
    data->d[4] = 6.083025f;
    data->d[5] = -0.897303f;
    data->d[6] = -0.755438f;
    data->d[7] = -0.501739f;
    data->d[8] = 0.524604f;
    data->d[9] = -0.542933f;
    data->d[10] = 1.473370f;
    data->d[11] = 0.206917f;
    data->d[12] = -0.798288f;
    data->d[13] = 0.501085f;
    data->d[14] = 0.059227f;
    data->d[15] = -0.993858f;
    data->d[16] = -0.683764f;
    data->d[17] = -8.387207f;
    data->d[18] = -4.509040f;
    data->d[19] = 0.557757f;
    data->d[20] = -2.491274f;
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
    *result->MinResult(2) = 0.000056f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n = data.d[0] *= n;
    n += data.d[1];
    n = data.d[2] *= n;
    n = data.d[3] += n;
    n *= data.d[0];
    n = data.d[4] *= n;
    n = data.d[5] *= n;
    n += data.d[5];
    n += data.d[6];
    n = data.d[7] += n;
    n = data.d[8] += n;
    n = data.d[8] *= n;
    n += data.d[4];
    n = data.d[2] += n;
    n += data.d[9];
    n += data.d[10];
    n += data.d[11];
    n = data.d[12] += n;
    n += data.d[13];
    n += data.d[14];
    n += data.d[2];
    n = data.d[8] *= n;
    n += data.d[15];
    n += data.d[16];
    n *= data.d[17];
    n *= data.d[18];
    n *= data.d[3];
    n += data.d[8];
    n *= data.d[19];
    n += data.d[12];
    n += data.d[20];
    n *= data.d[7];
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
