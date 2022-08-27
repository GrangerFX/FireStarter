#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 1.271233f;
    data->d[1] = 0.187263f;
    data->d[2] = 0.685388f;
    data->d[3] = 0.358300f;
    data->d[4] = -0.407480f;
    data->d[5] = -0.448661f;
    data->d[6] = 0.686818f;
    data->d[7] = -0.750907f;
    data->d[8] = -0.696694f;
    data->d[9] = 1.051002f;
    data->d[10] = -1.264848f;
    data->d[11] = 2.023061f;
    data->d[12] = 1.378823f;
    data->d[13] = 0.878291f;
    data->d[14] = 0.346403f;
    data->d[15] = -1.155950f;
    data->d[16] = -0.856147f;
    data->d[17] = 0.633765f;
    data->d[18] = -0.054578f;
    data->d[19] = -0.566154f;
    data->d[20] = 0.694815f;
    data->d[21] = 0.974178f;
    data->d[22] = -0.609834f;
    data->d[23] = 0.259752f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *result->MinResult(0) = 0.000702f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 2.016825f;
    data->d[1] = 0.305823f;
    data->d[2] = 0.465317f;
    data->d[3] = -0.793642f;
    data->d[4] = 0.519988f;
    data->d[5] = -0.584432f;
    data->d[6] = -0.159354f;
    data->d[7] = -1.300816f;
    data->d[8] = 0.529910f;
    data->d[9] = -0.880310f;
    data->d[10] = 1.038599f;
    data->d[11] = -1.164239f;
    data->d[12] = -1.075096f;
    data->d[13] = 0.960915f;
    data->d[14] = -0.928287f;
    data->d[15] = -0.876129f;
    data->d[16] = -0.273066f;
    data->d[17] = 1.563163f;
    data->d[18] = -0.097862f;
    data->d[19] = 0.989042f;
    data->d[20] = 1.394353f;
    data->d[21] = 0.684795f;
    data->d[22] = -0.744189f;
    data->d[23] = 0.524147f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *result->MinResult(1) = 0.000071f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -1.133862f;
    data->d[1] = 0.854895f;
    data->d[2] = -0.433211f;
    data->d[3] = -0.378660f;
    data->d[4] = -0.287503f;
    data->d[5] = 0.839271f;
    data->d[6] = -0.976472f;
    data->d[7] = 1.333758f;
    data->d[8] = -2.427996f;
    data->d[9] = -1.186916f;
    data->d[10] = 0.987677f;
    data->d[11] = -0.770781f;
    data->d[12] = -6.947898f;
    data->d[13] = 0.358981f;
    data->d[14] = -2.686833f;
    data->d[15] = -3.026485f;
    data->d[16] = 0.017240f;
    data->d[17] = 1.114013f;
    data->d[18] = 0.048014f;
    data->d[19] = -2.131155f;
    data->d[20] = -0.328087f;
    data->d[21] = -1.444733f;
    data->d[22] = -1.835778f;
    data->d[23] = 0.338495f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *result->MinResult(2) = 0.001261f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n += data.d[0];
    n = data.d[1] += n;
    n = data.d[2] += n;
    n = data.d[3] *= n;
    n = data.d[4] += n;
    n += data.d[5];
    n = data.d[6] *= n;
    n = data.d[7] += n;
    n = data.d[8] += n;
    n *= data.d[9];
    n += data.d[10];
    n *= data.d[8];
    n *= data.d[11];
    n = data.d[2] *= n;
    n *= data.d[12];
    n *= data.d[13];
    n *= data.d[14];
    n *= data.d[15];
    n *= data.d[16];
    n *= data.d[3];
    n += data.d[4];
    n *= data.d[17];
    n *= data.d[18];
    n *= data.d[19];
    n *= data.d[1];
    n *= data.d[20];
    n += data.d[6];
    n *= data.d[2];
    n *= data.d[7];
    n += data.d[21];
    n *= data.d[22];
    n *= data.d[23];
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
            *newResults->Index(member) = member;
            *newResults->Debug(member) = seed;
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
            *newResults->Index(member) = bestIndex;
            *newResults->Debug(member) = seed;
        }
    }
    *newResults->MaxResult(member) = maxResult;
} // Optimize
