#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.141593f;
    data->d[1] = 0.940564f;
    data->d[2] = -0.921715f;
    data->d[3] = 0.100449f;
    data->d[4] = 1.096324f;
    data->d[5] = 0.817083f;
    data->d[6] = 0.274323f;
    data->d[7] = 1.096729f;
    data->d[8] = 0.929336f;
    data->d[9] = 0.924666f;
    data->d[10] = 0.964110f;
    data->d[11] = 0.294818f;
    data->d[12] = 0.934034f;
    data->d[13] = -0.096276f;
    data->d[14] = 0.096646f;
    data->d[15] = -0.001632f;
    data->d[16] = -1.235898f;
    data->d[17] = 0.666183f;
    data->d[18] = -0.000001f;
    data->d[19] = 0.096870f;
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
    *result->MinResult(0) = 0.000001f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -3.090659f;
    data->d[1] = -0.448769f;
    data->d[2] = -0.601127f;
    data->d[3] = 0.284494f;
    data->d[4] = -0.020247f;
    data->d[5] = 0.447068f;
    data->d[6] = 5.047451f;
    data->d[7] = -0.219899f;
    data->d[8] = 0.010597f;
    data->d[9] = 1.082898f;
    data->d[10] = -0.753305f;
    data->d[11] = 1.234032f;
    data->d[12] = -1.078776f;
    data->d[13] = -0.438546f;
    data->d[14] = 0.438548f;
    data->d[15] = -0.473743f;
    data->d[16] = 0.719383f;
    data->d[17] = 0.562927f;
    data->d[18] = 0.120034f;
    data->d[19] = -0.984158f;
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
    *result->MinResult(1) = 0.000001f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -2.617995f;
    data->d[1] = -0.811203f;
    data->d[2] = -0.229540f;
    data->d[3] = -0.710367f;
    data->d[4] = 0.199340f;
    data->d[5] = -0.948820f;
    data->d[6] = 0.512613f;
    data->d[7] = 0.307072f;
    data->d[8] = 1.631610f;
    data->d[9] = 0.338210f;
    data->d[10] = 0.604705f;
    data->d[11] = 1.349952f;
    data->d[12] = -0.599197f;
    data->d[13] = -0.081304f;
    data->d[14] = 0.082909f;
    data->d[15] = 0.099336f;
    data->d[16] = 2.122959f;
    data->d[17] = -1.498426f;
    data->d[18] = -0.397104f;
    data->d[19] = -1.318535f;
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
    *result->MinResult(2) = 0.000014f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n = data.d[0] += n;
    n = data.d[1] *= n;
    n *= data.d[2];
    n = data.d[3] *= n;
    n = data.d[1] *= n;
    n *= data.d[4];
    n = data.d[5] += n;
    n = data.d[1] += n;
    n *= data.d[6];
    n = data.d[7] += n;
    n = data.d[8] *= n;
    n *= data.d[5];
    n *= data.d[7];
    n = data.d[9] += n;
    n += data.d[1];
    n *= data.d[0];
    n *= data.d[10];
    n *= data.d[11];
    n = data.d[12] *= n;
    n += data.d[13];
    n += data.d[14];
    n *= data.d[9];
    n *= data.d[15];
    n *= data.d[3];
    n += data.d[16];
    n = data.d[12] *= n;
    n *= data.d[17];
    n = data.d[8] *= n;
    n += data.d[18];
    n += data.d[12];
    n *= data.d[19];
    n += data.d[8];
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
