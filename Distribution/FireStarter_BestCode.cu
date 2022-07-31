#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "FireStarterTarget.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.168647f;
    data->d[1] = -0.658706f;
    data->d[2] = -0.873856f;
    data->d[3] = 0.379556f;
    data->d[4] = 0.018298f;
    data->d[5] = 23.775095f;
    data->d[6] = 0.593373f;
    data->d[7] = 0.382937f;
    data->d[8] = 0.544305f;
    data->d[9] = 2.146565f;
    data->d[10] = 0.471182f;
    data->d[11] = 1.049202f;
    data->d[12] = 0.158667f;
    data->d[13] = 0.164940f;
    data->d[14] = 0.283085f;
    data->d[15] = 2.788232f;
    data->d[16] = -0.013770f;
    data->d[17] = 0.000000f;
    data->d[18] = 0.000000f;
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
    *result->MinResult(0) = 0.000480f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -1.364387f;
    data->d[1] = -4.869801f;
    data->d[2] = 0.755991f;
    data->d[3] = -0.276158f;
    data->d[4] = -27.762850f;
    data->d[5] = 0.003120f;
    data->d[6] = 0.080569f;
    data->d[7] = 1.172426f;
    data->d[8] = -0.162546f;
    data->d[9] = 1.344739f;
    data->d[10] = 0.532334f;
    data->d[11] = 0.110537f;
    data->d[12] = 0.324242f;
    data->d[13] = 3.209403f;
    data->d[14] = 0.273156f;
    data->d[15] = 0.283223f;
    data->d[16] = -1.160227f;
    data->d[17] = 0.000000f;
    data->d[18] = 0.000000f;
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
    *result->MinResult(1) = 0.000056f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.561484f;
    data->d[1] = -3.499637f;
    data->d[2] = -0.688449f;
    data->d[3] = 0.661478f;
    data->d[4] = 10.872874f;
    data->d[5] = -0.000015f;
    data->d[6] = -0.305088f;
    data->d[7] = -0.427511f;
    data->d[8] = 0.542110f;
    data->d[9] = 0.395651f;
    data->d[10] = 0.462862f;
    data->d[11] = -1.479334f;
    data->d[12] = -1.217301f;
    data->d[13] = 1.647283f;
    data->d[14] = -0.156960f;
    data->d[15] = -0.454908f;
    data->d[16] = -0.753244f;
    data->d[17] = 0.000000f;
    data->d[18] = 0.000000f;
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
    *result->MinResult(2) = 0.001018f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n = data.d[0] += n;
    n = data.d[1] += n;
    n *= data.d[2];
    n = data.d[3] *= n;
    n *= data.d[4];
    n = data.d[5] *= n;
    n += data.d[3];
    n = data.d[6] *= n;
    n = data.d[7] *= n;
    n = data.d[8] += n;
    n = data.d[1] *= n;
    n += data.d[9];
    n = data.d[1] *= n;
    n = data.d[10] += n;
    n += data.d[8];
    n = data.d[6] *= n;
    n = data.d[10] += n;
    n += data.d[1];
    n += data.d[11];
    n += data.d[12];
    n *= data.d[13];
    n *= data.d[14];
    n += data.d[5];
    n *= data.d[0];
    n = data.d[6] += n;
    n = data.d[7] *= n;
    n += data.d[6];
    n = data.d[15] *= n;
    n *= data.d[15];
    n += data.d[7];
    n *= data.d[16];
    n += data.d[10];
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
    float sampleStep = (FIRESTARTER_SAMPLE_MAX - FIRESTARTER_SAMPLE_MIN) / (FIRESTARTER_SAMPLES - 1);
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
        theta[i] = FIRESTARTER_SAMPLE_MIN + i * sampleStep;

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
            result = oldResult = FIRESTARTER_EVOLVE_START_RESULT;
            evolutionFactor = FIRESTARTER_EVOLVE_START_FACTOR;
        } else {
            data = *oldResults->Data(member, v);
            result = oldResult = *oldResults->MinResult(member, v);
            evolutionFactor = FIRESTARTER_EVOLVE_FACTOR * result;
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
            float precisionStep = (FIRESTARTER_SAMPLE_MAX - FIRESTARTER_SAMPLE_MIN) / (settings.m_precision - 1);
            for (int i = 0; i < settings.m_precision; i++) {
                float theta = FIRESTARTER_SAMPLE_MIN + i * precisionStep;
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
            for (int i = 0; i < FIRESTARTER_EVOLVE_CANDIDATES; i++) {
                unsigned int index = RANDOMMOD(memberSeed, settings.m_population);
                float curResult = *oldResults->MinResult(index, v);
                if (curResult <= bestResult) {
                    bestResult = curResult;
                    bestIndex = index;
                }
            }
            if (bestIndex != member) {
                *newResults->Data(member, v) = *oldResults->Data(bestIndex, v);
                *newResults->MinResult(member, v) = FIRESTARTER_EVOLVE_START_RESULT;
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
