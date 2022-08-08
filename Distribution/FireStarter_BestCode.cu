#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.212802f;
    data->d[1] = -0.734622f;
    data->d[2] = 0.137908f;
    data->d[3] = 0.051937f;
    data->d[4] = -0.721117f;
    data->d[5] = -2.002993f;
    data->d[6] = -1.075081f;
    data->d[7] = 0.425124f;
    data->d[8] = -0.543737f;
    data->d[9] = -0.145843f;
    data->d[10] = 0.560116f;
    data->d[11] = 0.672353f;
    data->d[12] = 1.905620f;
    data->d[13] = -0.959224f;
    data->d[14] = -0.728269f;
    data->d[15] = -1.307874f;
    data->d[16] = 0.216238f;
    data->d[17] = -2.215032f;
    data->d[18] = -0.164110f;
    data->d[19] = -2.823201f;
    data->d[20] = 0.247970f;
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
    *result->MinResult(0) = 0.000481f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.284534f;
    data->d[1] = -0.454745f;
    data->d[2] = -0.709116f;
    data->d[3] = 0.024826f;
    data->d[4] = -0.583265f;
    data->d[5] = -0.464524f;
    data->d[6] = 0.044255f;
    data->d[7] = 1.250301f;
    data->d[8] = 0.309842f;
    data->d[9] = -0.111296f;
    data->d[10] = -0.428483f;
    data->d[11] = -0.846218f;
    data->d[12] = 0.877354f;
    data->d[13] = 0.601466f;
    data->d[14] = 1.153902f;
    data->d[15] = 1.155231f;
    data->d[16] = 0.545857f;
    data->d[17] = 0.601822f;
    data->d[18] = -0.912715f;
    data->d[19] = 0.234346f;
    data->d[20] = -3.129589f;
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
    *result->MinResult(1) = 0.000136f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.162501f;
    data->d[1] = -0.832030f;
    data->d[2] = -0.277447f;
    data->d[3] = 0.698008f;
    data->d[4] = -0.463015f;
    data->d[5] = -0.758090f;
    data->d[6] = -3.713954f;
    data->d[7] = 0.074685f;
    data->d[8] = -0.502460f;
    data->d[9] = -0.503168f;
    data->d[10] = -0.985360f;
    data->d[11] = -0.591573f;
    data->d[12] = 0.078541f;
    data->d[13] = -0.755503f;
    data->d[14] = 1.963898f;
    data->d[15] = -1.336216f;
    data->d[16] = 1.388942f;
    data->d[17] = -2.392733f;
    data->d[18] = -1.237794f;
    data->d[19] = 1.989490f;
    data->d[20] = -0.124757f;
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
    *result->MinResult(2) = 0.001671f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n = data.d[0] *= n;
    n = data.d[1] += n;
    n = data.d[2] += n;
    n *= data.d[2];
    n *= data.d[3];
    n += data.d[4];
    n = data.d[5] += n;
    n = data.d[1] *= n;
    n *= data.d[6];
    n = data.d[7] *= n;
    n += data.d[8];
    n *= data.d[9];
    n += data.d[0];
    n += data.d[10];
    n += data.d[11];
    n = data.d[5] += n;
    n = data.d[1] *= n;
    n += data.d[12];
    n = data.d[13] *= n;
    n += data.d[7];
    n += data.d[14];
    n *= data.d[15];
    n *= data.d[13];
    n = data.d[16] *= n;
    n = data.d[16] *= n;
    n += data.d[5];
    n += data.d[17];
    n += data.d[18];
    n += data.d[16];
    n *= data.d[19];
    n *= data.d[20];
    n += data.d[1];
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
