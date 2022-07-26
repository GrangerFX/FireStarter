#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "FireStarterTarget.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 1.088528f;
    data->d[1] = -0.140849f;
    data->d[2] = -0.567253f;
    data->d[3] = 1.096882f;
    data->d[4] = -0.548691f;
    data->d[5] = 0.113411f;
    data->d[6] = -0.941047f;
    data->d[7] = 0.285105f;
    data->d[8] = -0.857788f;
    data->d[9] = 0.940951f;
    data->d[10] = -0.557600f;
    data->d[11] = 2.109826f;
    data->d[12] = -0.776915f;
    data->d[13] = -2.329299f;
    data->d[14] = 0.160928f;
    data->d[15] = 0.766205f;
    data->d[16] = -1.546554f;
    data->d[17] = 0.803234f;
    data->d[18] = -1.281064f;
    data->d[19] = 15.349761f;
    data->d[20] = -13.151178f;
    data->d[21] = -0.025790f;
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
    *result->MinResult(0) = 0.000573f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -1.877267f;
    data->d[1] = 0.161783f;
    data->d[2] = 0.402798f;
    data->d[3] = 1.070561f;
    data->d[4] = 0.153461f;
    data->d[5] = -0.607902f;
    data->d[6] = -0.277510f;
    data->d[7] = 0.055375f;
    data->d[8] = 94.107857f;
    data->d[9] = 0.003389f;
    data->d[10] = -1.099895f;
    data->d[11] = 0.038880f;
    data->d[12] = 1.042525f;
    data->d[13] = -0.282451f;
    data->d[14] = -0.725363f;
    data->d[15] = 1.333912f;
    data->d[16] = -0.626106f;
    data->d[17] = 0.720524f;
    data->d[18] = 1.174708f;
    data->d[19] = -0.903313f;
    data->d[20] = -1.574326f;
    data->d[21] = 1.234446f;
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
    *result->MinResult(1) = 0.000062f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.089268f;
    data->d[1] = -1.560002f;
    data->d[2] = -0.046809f;
    data->d[3] = 0.424180f;
    data->d[4] = -0.840401f;
    data->d[5] = 0.454076f;
    data->d[6] = -0.978711f;
    data->d[7] = 0.334990f;
    data->d[8] = -0.147663f;
    data->d[9] = 0.470990f;
    data->d[10] = -0.505813f;
    data->d[11] = 4.493112f;
    data->d[12] = 0.384286f;
    data->d[13] = 0.207015f;
    data->d[14] = 0.531887f;
    data->d[15] = -0.208732f;
    data->d[16] = 0.356205f;
    data->d[17] = 1.204815f;
    data->d[18] = 4.321547f;
    data->d[19] = 13.580428f;
    data->d[20] = -12.609983f;
    data->d[21] = -4.312815f;
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
    *result->MinResult(2) = 0.000145f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n *= data.d[0];
    n = data.d[1] *= n;
    n += data.d[2];
    n = data.d[3] += n;
    n = data.d[3] *= n;
    n += data.d[4];
    n = data.d[5] += n;
    n += data.d[1];
    n = data.d[6] += n;
    n = data.d[3] += n;
    n = data.d[7] += n;
    n += data.d[8];
    n *= data.d[9];
    n += data.d[10];
    n = data.d[11] *= n;
    n *= data.d[5];
    n += data.d[12];
    n *= data.d[3];
    n += data.d[13];
    n *= data.d[14];
    n += data.d[15];
    n += data.d[16];
    n += data.d[17];
    n = data.d[6] += n;
    n *= data.d[6];
    n = data.d[11] += n;
    n *= data.d[7];
    n += data.d[18];
    n += data.d[19];
    n += data.d[20];
    n += data.d[21];
    n += data.d[11];
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
    float sampleStep = (settings.m_sampleMax - settings.m_sampleMin) / (FIRESTARTER_SAMPLES - 1);
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
        theta[i] = settings.m_sampleMin + i * sampleStep;

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
        float evolutionFactor;
        if (init) {
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR(memberSeed);
            for (int i = dataSize; i < FIRESTARTER_REGISTERS; i++)
                data.d[i] = 0.0f;   // Clear the unused data.
            result = oldResult = settings.m_evolveStartResult;
            evolutionFactor = settings.m_evolveStartFactor;
        } else {
            data = *oldResults->Data(member, v);
            result = oldResult = *oldResults->MinResult(member, v);
            evolutionFactor = settings.m_evolveFactor * result;
        }

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < settings.m_iterations; p++) {
            unsigned int d = RANDOMMOD(memberSeed, dataSize);
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(memberSeed);
            float curResult = 0.0f;
            for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
                curResult = fmaxf(fabsf(Evaluate(data, theta[i]) - target[i]), curResult);
            if (curResult <= result) {
                result = curResult;
                evolutionFactor = settings.m_evolveFactor * result;
            } else
                data.d[d] = oldData;
        }

        // Calculate a more accurate estimate of the result.
        if (settings.m_precision) {
            float precisionStep = (settings.m_sampleMax - settings.m_sampleMin) / (settings.m_precision - 1);
            for (int i = 0; i < settings.m_precision; i++) {
                float theta = settings.m_sampleMin + i * precisionStep;
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
            for (int i = 0; i < settings.m_evolveCandidates; i++) {
                unsigned int index = RANDOMMOD(memberSeed, settings.m_population);
                float curResult = *oldResults->MinResult(index, v);
                if (curResult <= bestResult) {
                    bestResult = curResult;
                    bestIndex = index;
                }
            }
            if (bestIndex != member) {
                *newResults->Data(member, v) = *oldResults->Data(bestIndex, v);
                *newResults->MinResult(member, v) = settings.m_evolveStartResult;
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
