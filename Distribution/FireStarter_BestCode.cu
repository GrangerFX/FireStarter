#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -9.745230f;
    data->d[1] = 1.009248f;
    data->d[2] = 0.823461f;
    data->d[3] = -0.431036f;
    data->d[4] = 0.471659f;
    data->d[5] = 0.192931f;
    data->d[6] = -0.087721f;
    data->d[7] = 0.712765f;
    data->d[8] = -0.529344f;
    data->d[9] = -0.200845f;
    data->d[10] = 0.356527f;
    data->d[11] = 0.232052f;
    data->d[12] = -0.802673f;
    data->d[13] = 0.880577f;
    data->d[14] = 3.188561f;
    data->d[15] = 0.760359f;
    data->d[16] = -1.126353f;
    data->d[17] = 0.087651f;
    data->d[18] = -0.787401f;
    data->d[19] = 0.000000f;
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
    *result->MinResult(0) = 10.000000f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.914458f;
    data->d[1] = -0.124111f;
    data->d[2] = -0.408333f;
    data->d[3] = 0.561524f;
    data->d[4] = 0.393047f;
    data->d[5] = 0.265933f;
    data->d[6] = 0.620432f;
    data->d[7] = -0.019997f;
    data->d[8] = 0.769981f;
    data->d[9] = 0.324388f;
    data->d[10] = 0.886152f;
    data->d[11] = 0.591379f;
    data->d[12] = -0.799978f;
    data->d[13] = -0.707901f;
    data->d[14] = -0.581577f;
    data->d[15] = -0.733671f;
    data->d[16] = -0.437048f;
    data->d[17] = 0.117000f;
    data->d[18] = 0.742221f;
    data->d[19] = 0.000000f;
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
    *result->MinResult(1) = 10.000000f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -1.592229f;
    data->d[1] = -0.993823f;
    data->d[2] = 0.375239f;
    data->d[3] = -3.635626f;
    data->d[4] = -0.067797f;
    data->d[5] = 1.230334f;
    data->d[6] = -0.341856f;
    data->d[7] = -0.602239f;
    data->d[8] = 0.642835f;
    data->d[9] = 0.544614f;
    data->d[10] = 0.796327f;
    data->d[11] = -0.182276f;
    data->d[12] = -0.248177f;
    data->d[13] = 0.246931f;
    data->d[14] = -1.292881f;
    data->d[15] = -0.284689f;
    data->d[16] = 4.357918f;
    data->d[17] = -1.607689f;
    data->d[18] = 0.580793f;
    data->d[19] = 0.000000f;
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
    *result->MinResult(2) = 10.000000f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n += data.d[0];
    n = data.d[1] += n;
    n = data.d[2] *= n;
    n += data.d[3];
    n *= data.d[4];
    n = data.d[5] *= n;
    n = data.d[6] *= n;
    n = data.d[7] += n;
    n *= data.d[8];
    n *= data.d[1];
    n *= data.d[9];
    n = data.d[10] += n;
    n += data.d[11];
    n = data.d[12] += n;
    n = data.d[7] += n;
    n *= data.d[2];
    n = data.d[5] += n;
    n = data.d[13] += n;
    n = data.d[7] *= n;
    n *= data.d[14];
    n *= data.d[15];
    n += data.d[5];
    n = data.d[6] += n;
    n += data.d[12];
    n += data.d[16];
    n = data.d[17] += n;
    n += data.d[17];
    n += data.d[10];
    n += data.d[18];
    n *= data.d[13];
    n += data.d[7];
    n *= data.d[6];
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
