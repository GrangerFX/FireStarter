#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "FireStarterTarget.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.201924f;
    data->d[1] = 0.952735f;
    data->d[2] = -1.971396f;
    data->d[3] = 0.806386f;
    data->d[4] = -0.392262f;
    data->d[5] = -0.703395f;
    data->d[6] = 0.433366f;
    data->d[7] = 0.160283f;
    data->d[8] = -1.171632f;
    data->d[9] = -0.152049f;
    data->d[10] = -1.320865f;
    data->d[11] = 1.128600f;
    data->d[12] = 0.505740f;
    data->d[13] = 0.464235f;
    data->d[14] = 0.787647f;
    data->d[15] = -0.848612f;
    data->d[16] = 0.504935f;
    data->d[17] = -0.800846f;
    data->d[18] = -0.315273f;
    data->d[19] = 1.111013f;
    data->d[20] = -0.391845f;
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
    *result->MinResult(0) = 0.000708f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.155236f;
    data->d[1] = 0.739680f;
    data->d[2] = -1.262522f;
    data->d[3] = -0.565146f;
    data->d[4] = -0.751123f;
    data->d[5] = -3.937313f;
    data->d[6] = -0.512421f;
    data->d[7] = 0.682009f;
    data->d[8] = -0.643724f;
    data->d[9] = -0.228796f;
    data->d[10] = -0.775794f;
    data->d[11] = 0.499569f;
    data->d[12] = -0.424827f;
    data->d[13] = 0.746987f;
    data->d[14] = 0.919998f;
    data->d[15] = 1.170493f;
    data->d[16] = 0.203413f;
    data->d[17] = 1.233611f;
    data->d[18] = 1.153560f;
    data->d[19] = -0.813835f;
    data->d[20] = -1.720168f;
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
    *result->MinResult(1) = 0.000250f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.964781f;
    data->d[1] = 0.223002f;
    data->d[2] = -0.653017f;
    data->d[3] = 1.400588f;
    data->d[4] = -0.479284f;
    data->d[5] = -0.582686f;
    data->d[6] = 0.919020f;
    data->d[7] = -0.494732f;
    data->d[8] = 1.489201f;
    data->d[9] = 0.081572f;
    data->d[10] = 0.895050f;
    data->d[11] = -2.207700f;
    data->d[12] = 0.155138f;
    data->d[13] = -0.583197f;
    data->d[14] = 1.052195f;
    data->d[15] = -0.119011f;
    data->d[16] = 0.380126f;
    data->d[17] = 0.552370f;
    data->d[18] = 0.692785f;
    data->d[19] = -2.046128f;
    data->d[20] = -0.078847f;
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
    *result->MinResult(2) = 0.000566f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n *= data.d[0];
    n *= data.d[1];
    n = data.d[2] += n;
    n = data.d[3] += n;
    n = data.d[3] *= n;
    n += data.d[4];
    n = data.d[5] += n;
    n += data.d[2];
    n = data.d[6] += n;
    n = data.d[3] += n;
    n = data.d[7] += n;
    n += data.d[8];
    n = data.d[9] *= n;
    n += data.d[10];
    n = data.d[11] *= n;
    n *= data.d[5];
    n += data.d[12];
    n *= data.d[3];
    n += data.d[9];
    n *= data.d[13];
    n += data.d[14];
    n += data.d[15];
    n += data.d[16];
    n = data.d[6] += n;
    n = data.d[6] *= n;
    n += data.d[11];
    n *= data.d[7];
    n += data.d[17];
    n += data.d[18];
    n += data.d[6];
    n += data.d[19];
    n += data.d[20];
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
