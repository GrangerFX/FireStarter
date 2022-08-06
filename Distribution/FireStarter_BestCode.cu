#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.003643f;
    data->d[1] = -3.145236f;
    data->d[2] = 0.279878f;
    data->d[3] = -0.727789f;
    data->d[4] = 0.434319f;
    data->d[5] = -0.898910f;
    data->d[6] = 1.087626f;
    data->d[7] = -1.130970f;
    data->d[8] = -1.020145f;
    data->d[9] = 1.376990f;
    data->d[10] = -1.532473f;
    data->d[11] = 1.916647f;
    data->d[12] = -0.023702f;
    data->d[13] = 0.822533f;
    data->d[14] = -0.193404f;
    data->d[15] = -0.426242f;
    data->d[16] = 0.650126f;
    data->d[17] = -0.460763f;
    data->d[18] = 1.047570f;
    data->d[19] = -1.941974f;
    data->d[20] = -0.272585f;
    data->d[21] = -0.000000f;
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
    *result->MinResult(0) = 0.000001f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -1.223304f;
    data->d[1] = -1.867354f;
    data->d[2] = 0.203656f;
    data->d[3] = -0.904608f;
    data->d[4] = 0.556221f;
    data->d[5] = -0.946281f;
    data->d[6] = 0.560667f;
    data->d[7] = -0.246439f;
    data->d[8] = 0.912824f;
    data->d[9] = 1.771351f;
    data->d[10] = 0.022743f;
    data->d[11] = -1.044430f;
    data->d[12] = 0.804029f;
    data->d[13] = 0.687435f;
    data->d[14] = -0.318103f;
    data->d[15] = -0.743687f;
    data->d[16] = -0.357034f;
    data->d[17] = -0.969340f;
    data->d[18] = -1.442854f;
    data->d[19] = -2.676803f;
    data->d[20] = 0.414789f;
    data->d[21] = -0.118132f;
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
    *result->MinResult(1) = 0.000001f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -1.404566f;
    data->d[1] = -1.213427f;
    data->d[2] = 0.726173f;
    data->d[3] = 0.908085f;
    data->d[4] = -0.129742f;
    data->d[5] = 3.101505f;
    data->d[6] = 0.275545f;
    data->d[7] = 0.236131f;
    data->d[8] = 0.388938f;
    data->d[9] = 0.167832f;
    data->d[10] = 1.505757f;
    data->d[11] = 0.009372f;
    data->d[12] = 0.455573f;
    data->d[13] = 0.490392f;
    data->d[14] = -3.313184f;
    data->d[15] = 2.780834f;
    data->d[16] = -0.000002f;
    data->d[17] = 0.004211f;
    data->d[18] = 0.689464f;
    data->d[19] = -0.330805f;
    data->d[20] = -0.280572f;
    data->d[21] = 0.523599f;
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
    *result->MinResult(2) = 0.000003f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n += data.d[0];
    n += data.d[1];
    n *= data.d[2];
    n = data.d[3] *= n;
    n = data.d[4] *= n;
    n = data.d[3] *= n;
    n = data.d[5] += n;
    n *= data.d[5];
    n = data.d[6] *= n;
    n += data.d[7];
    n = data.d[6] += n;
    n *= data.d[8];
    n *= data.d[9];
    n = data.d[10] += n;
    n = data.d[6] *= n;
    n += data.d[11];
    n *= data.d[3];
    n = data.d[12] *= n;
    n *= data.d[13];
    n += data.d[14];
    n += data.d[15];
    n *= data.d[16];
    n *= data.d[17];
    n = data.d[18] += n;
    n += data.d[18];
    n *= data.d[19];
    n += data.d[20];
    n += data.d[12];
    n += data.d[10];
    n *= data.d[6];
    n *= data.d[4];
    n += data.d[21];
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
// END //
