#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.224196f;
    data->d[1] = 0.700453f;
    data->d[2] = 1.124877f;
    data->d[3] = 1.401093f;
    data->d[4] = 0.825271f;
    data->d[5] = -0.324564f;
    data->d[6] = 0.593785f;
    data->d[7] = -0.924975f;
    data->d[8] = 0.043384f;
    data->d[9] = -0.324927f;
    data->d[10] = 0.193697f;
    data->d[11] = -0.328347f;
    data->d[12] = -0.060458f;
    data->d[13] = 0.899170f;
    data->d[14] = 0.545511f;
    data->d[15] = -0.204102f;
    data->d[16] = -0.339011f;
    data->d[17] = -0.201179f;
    data->d[18] = 2.480104f;
    data->d[19] = -0.262536f;
    data->d[20] = 0.951267f;
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
    *result->MinResult(0) = 0.020980f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.337981f;
    data->d[1] = 1.007481f;
    data->d[2] = -0.606710f;
    data->d[3] = -0.828762f;
    data->d[4] = 0.162163f;
    data->d[5] = 0.764053f;
    data->d[6] = -0.428641f;
    data->d[7] = -0.071440f;
    data->d[8] = -0.210606f;
    data->d[9] = -2.382651f;
    data->d[10] = 0.517078f;
    data->d[11] = -1.031953f;
    data->d[12] = -1.083318f;
    data->d[13] = 0.580942f;
    data->d[14] = -2.920142f;
    data->d[15] = -0.148154f;
    data->d[16] = 2.292230f;
    data->d[17] = -0.507378f;
    data->d[18] = 1.037768f;
    data->d[19] = 0.627320f;
    data->d[20] = 0.960308f;
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
    *result->MinResult(1) = 0.017104f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.494287f;
    data->d[1] = -3.429391f;
    data->d[2] = 1.377658f;
    data->d[3] = -0.810963f;
    data->d[4] = 0.604189f;
    data->d[5] = -0.279427f;
    data->d[6] = -0.256159f;
    data->d[7] = 0.131451f;
    data->d[8] = 0.690602f;
    data->d[9] = -0.767877f;
    data->d[10] = -0.432747f;
    data->d[11] = -0.505569f;
    data->d[12] = -0.018423f;
    data->d[13] = 0.139935f;
    data->d[14] = 0.615128f;
    data->d[15] = -0.600138f;
    data->d[16] = 0.489751f;
    data->d[17] = -0.124418f;
    data->d[18] = 0.460987f;
    data->d[19] = -0.839894f;
    data->d[20] = 0.805148f;
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
    *result->MinResult(2) = 0.020388f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n = data.d[0] *= n;
    n = data.d[1] += n;
    n *= data.d[2];
    n = data.d[3] *= n;
    n *= data.d[4];
    n += data.d[5];
    n = data.d[6] += n;
    n = data.d[0] *= n;
    n = data.d[7] += n;
    n *= data.d[8];
    n *= data.d[9];
    n += data.d[10];
    n += data.d[11];
    n = data.d[7] += n;
    n += data.d[6];
    n += data.d[12];
    n = data.d[7] += n;
    n = data.d[13] += n;
    n = data.d[0] *= n;
    n += data.d[14];
    n += data.d[1];
    n *= data.d[15];
    n += data.d[16];
    n *= data.d[0];
    n *= data.d[17];
    n *= data.d[18];
    n = data.d[19] += n;
    n *= data.d[19];
    n += data.d[13];
    n *= data.d[7];
    n *= data.d[3];
    n *= data.d[20];
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
