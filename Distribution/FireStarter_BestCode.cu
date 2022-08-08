#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.511311f;
    data->d[1] = 1.606264f;
    data->d[2] = 0.702618f;
    data->d[3] = -0.509167f;
    data->d[4] = 0.022977f;
    data->d[5] = -0.915645f;
    data->d[6] = 0.518323f;
    data->d[7] = -0.792420f;
    data->d[8] = 0.007045f;
    data->d[9] = 2.082282f;
    data->d[10] = 0.780029f;
    data->d[11] = -0.811464f;
    data->d[12] = -0.449260f;
    data->d[13] = -0.765020f;
    data->d[14] = 0.136281f;
    data->d[15] = -0.345592f;
    data->d[16] = 1.213079f;
    data->d[17] = 1.711940f;
    data->d[18] = -0.583726f;
    data->d[19] = 1.815497f;
    data->d[20] = 0.348738f;
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
    *result->MinResult(0) = 0.000159f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.424669f;
    data->d[1] = 1.266859f;
    data->d[2] = 0.623709f;
    data->d[3] = 0.231645f;
    data->d[4] = -0.036803f;
    data->d[5] = 0.518180f;
    data->d[6] = -0.873892f;
    data->d[7] = -0.380766f;
    data->d[8] = -0.071368f;
    data->d[9] = -1.723177f;
    data->d[10] = -0.910804f;
    data->d[11] = 0.416917f;
    data->d[12] = -1.011819f;
    data->d[13] = 0.979504f;
    data->d[14] = -0.001430f;
    data->d[15] = -0.240485f;
    data->d[16] = 0.796231f;
    data->d[17] = -0.791008f;
    data->d[18] = -3.371152f;
    data->d[19] = -2.011252f;
    data->d[20] = -0.800678f;
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
    *result->MinResult(1) = 0.000107f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.166772f;
    data->d[1] = -0.533021f;
    data->d[2] = 4.403865f;
    data->d[3] = -0.142101f;
    data->d[4] = -0.327417f;
    data->d[5] = -0.787791f;
    data->d[6] = -1.190831f;
    data->d[7] = 0.344517f;
    data->d[8] = 5.590003f;
    data->d[9] = 0.001059f;
    data->d[10] = -0.384471f;
    data->d[11] = 0.995756f;
    data->d[12] = 0.172158f;
    data->d[13] = 1.931038f;
    data->d[14] = -1.743909f;
    data->d[15] = -0.050592f;
    data->d[16] = 0.705759f;
    data->d[17] = 1.126406f;
    data->d[18] = 0.999240f;
    data->d[19] = -1.740895f;
    data->d[20] = -1.277119f;
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
    *result->MinResult(2) = 0.000551f;
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
