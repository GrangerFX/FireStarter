#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.000018f;
    data->d[1] = 0.391988f;
    data->d[2] = -0.336443f;
    data->d[3] = -3.324500f;
    data->d[4] = 0.259781f;
    data->d[5] = -0.991203f;
    data->d[6] = -0.408572f;
    data->d[7] = -1.011141f;
    data->d[8] = 0.483570f;
    data->d[9] = -0.623122f;
    data->d[10] = -0.878035f;
    data->d[11] = -1.946701f;
    data->d[12] = 0.187924f;
    data->d[13] = 0.417440f;
    data->d[14] = 0.461920f;
    data->d[15] = -0.716037f;
    data->d[16] = 0.454720f;
    data->d[17] = -2.311534f;
    data->d[18] = 1.925982f;
    data->d[19] = 0.081933f;
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
    *result->MinResult(0) = 0.000060f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 1.375963f;
    data->d[1] = 0.228483f;
    data->d[2] = -0.019403f;
    data->d[3] = -0.976580f;
    data->d[4] = 0.099465f;
    data->d[5] = 0.733812f;
    data->d[6] = 0.724884f;
    data->d[7] = -0.809044f;
    data->d[8] = -1.119765f;
    data->d[9] = -0.348859f;
    data->d[10] = -0.417677f;
    data->d[11] = -0.055798f;
    data->d[12] = 1.938614f;
    data->d[13] = 0.335801f;
    data->d[14] = -2.416228f;
    data->d[15] = 0.116154f;
    data->d[16] = -0.768507f;
    data->d[17] = -1.189196f;
    data->d[18] = 0.287935f;
    data->d[19] = -0.831894f;
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
    *result->MinResult(1) = 0.000041f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -3.195753f;
    data->d[1] = -0.778596f;
    data->d[2] = -0.407516f;
    data->d[3] = 1.310053f;
    data->d[4] = 0.086588f;
    data->d[5] = -0.595078f;
    data->d[6] = -0.138708f;
    data->d[7] = 0.239201f;
    data->d[8] = 0.572161f;
    data->d[9] = -1.158943f;
    data->d[10] = -0.688396f;
    data->d[11] = 0.293349f;
    data->d[12] = 1.115572f;
    data->d[13] = 2.084210f;
    data->d[14] = 0.564156f;
    data->d[15] = -0.481664f;
    data->d[16] = 3.346905f;
    data->d[17] = 2.015300f;
    data->d[18] = -3.827934f;
    data->d[19] = -0.048136f;
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
    *result->MinResult(2) = 0.000102f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n = data.d[0] += n;
    n *= data.d[1];
    n = data.d[2] += n;
    n = data.d[3] += n;
    n *= data.d[0];
    n = data.d[4] *= n;
    n *= data.d[5];
    n = data.d[6] *= n;
    n += data.d[7];
    n = data.d[2] *= n;
    n *= data.d[3];
    n = data.d[8] *= n;
    n = data.d[9] += n;
    n += data.d[2];
    n += data.d[10];
    n += data.d[11];
    n *= data.d[12];
    n = data.d[8] += n;
    n += data.d[8];
    n = data.d[13] *= n;
    n += data.d[14];
    n += data.d[15];
    n = data.d[6] += n;
    n += data.d[16];
    n = data.d[17] += n;
    n += data.d[9];
    n *= data.d[13];
    n += data.d[18];
    n += data.d[17];
    n *= data.d[19];
    n += data.d[6];
    n *= data.d[4];
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
