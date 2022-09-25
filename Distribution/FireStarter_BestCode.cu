#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.312390f;
    data->d[1] = -0.342192f;
    data->d[2] = -0.582653f;
    data->d[3] = 1.095614f;
    data->d[4] = -0.000017f;
    data->d[5] = -0.234393f;
    data->d[6] = 0.326870f;
    data->d[7] = -2.721582f;
    data->d[8] = -0.106453f;
    data->d[9] = -0.289107f;
    data->d[10] = -0.507062f;
    data->d[11] = -0.282496f;
    data->d[12] = 2.564770f;
    data->d[13] = -0.144103f;
    data->d[14] = -2.075285f;
    data->d[15] = -1.316364f;
    data->d[16] = 0.256675f;
    data->d[17] = -3.072208f;
    data->d[18] = -0.708027f;
    data->d[19] = 0.707994f;
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
    *result->MinResult(0) = 0.000007f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -3.566391f;
    data->d[1] = -0.579373f;
    data->d[2] = 1.934574f;
    data->d[3] = -0.879552f;
    data->d[4] = -0.000031f;
    data->d[5] = -0.226019f;
    data->d[6] = 1.054450f;
    data->d[7] = -0.533794f;
    data->d[8] = 0.877126f;
    data->d[9] = 0.254345f;
    data->d[10] = -1.313579f;
    data->d[11] = 1.369853f;
    data->d[12] = -2.414239f;
    data->d[13] = 0.957705f;
    data->d[14] = 0.808794f;
    data->d[15] = -0.221380f;
    data->d[16] = -0.254072f;
    data->d[17] = -0.663909f;
    data->d[18] = 6.735891f;
    data->d[19] = -6.854117f;
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
    *result->MinResult(1) = 0.000003f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -1.052800f;
    data->d[1] = -0.991547f;
    data->d[2] = 1.377187f;
    data->d[3] = -1.950800f;
    data->d[4] = -0.000025f;
    data->d[5] = -0.195316f;
    data->d[6] = 1.111830f;
    data->d[7] = -0.358050f;
    data->d[8] = 0.515989f;
    data->d[9] = -0.805452f;
    data->d[10] = 1.775992f;
    data->d[11] = 0.678101f;
    data->d[12] = 0.194026f;
    data->d[13] = 0.466656f;
    data->d[14] = 0.419043f;
    data->d[15] = 0.168071f;
    data->d[16] = -0.875708f;
    data->d[17] = 1.025677f;
    data->d[18] = -1.538715f;
    data->d[19] = 2.062325f;
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
    *result->MinResult(2) = 0.000053f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n += data.d[0];
    n += data.d[1];
    n += data.d[2];
    n = data.d[3] += n;
    n = data.d[4] *= n;
    n = data.d[3] += n;
    n = data.d[5] *= n;
    n = data.d[3] *= n;
    n += data.d[4];
    n += data.d[6];
    n = data.d[7] *= n;
    n = data.d[8] *= n;
    n *= data.d[9];
    n = data.d[10] += n;
    n *= data.d[10];
    n += data.d[11];
    n += data.d[12];
    n += data.d[13];
    n = data.d[14] += n;
    n *= data.d[15];
    n = data.d[8] *= n;
    n = data.d[8] += n;
    n *= data.d[16];
    n = data.d[17] += n;
    n += data.d[3];
    n += data.d[7];
    n *= data.d[17];
    n += data.d[8];
    n *= data.d[14];
    n *= data.d[5];
    n += data.d[18];
    n += data.d[19];
    return isfinite(n) ? n : 0.0f;
} // Evaluate
// END //

GPU_GLOBAL void Optimize(const FireStarterSettings settings, FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int firstVariation, const unsigned int lastVariation, const unsigned int firstMember, const unsigned int lastMember, const unsigned int dataSize, const unsigned int seed, const unsigned int init)
{
    unsigned int member = firstMember + blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= lastMember)
        return;

    // Precalculate the target theta values.
    float theta[FIRESTARTER_SAMPLES];
    float sampleStep = (TARGET_MAX - TARGET_MIN) / (FIRESTARTER_SAMPLES - 1);
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
        theta[i] = TARGET_MIN + i * sampleStep;

    // Evolve the program data for each variation.
    float maxResult = 0.0f;
    for (unsigned int v = firstVariation; v <= lastVariation; v++) {
        unsigned int memberSeed = RANDOM(RANDOM(RANDOM(seed) + member) + v);

        // Precalculate the target sample values.
        float target[FIRESTARTER_SAMPLES];
        for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
            target[i] = Target(theta[i], v);

        // The first generation is initalized with random numbers.
        // Later generations continue to evolve the data.
        FireStarterData data;
        float oldResult;
        bool evolved = false;
        if (init) {
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR(memberSeed);
            for (int i = dataSize; i < FIRESTARTER_REGISTERS; i++)
                data.d[i] = 0.0f;   // Clear the unused data.
            oldResult = settings.m_startResult;
            evolved = true;
        } else {
            data = *oldResults->Data(member, v);
            oldResult = *oldResults->MinResult(member, v);
            if (*oldResults->Index(member, v) != member) {
                unsigned int d = RANDOMMOD(memberSeed, dataSize);
                data.d[d] += settings.m_startScale * RANDOMFACTOR(memberSeed);
                evolved = true;
            }
        }

        // Find the initial result
        float result = 0.0f;
        for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
            result = fmaxf(fabsf(Evaluate(data, theta[i]) - target[i]), result);
        float evolutionScale = evolved ? settings.m_startScale : settings.m_scale * result;

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
                evolved = true;
            } else
                data.d[d] = oldData;
        }

        // Calculate a more accurate estimate of the result.
        if (settings.m_precision) {
            if (evolved) {
                float precisionStep = (TARGET_MAX - TARGET_MIN) / (settings.m_precision - 1);
                for (int i = 0; i < settings.m_precision; i++) {
                    float theta = TARGET_MIN + i * precisionStep;
                    result = fmaxf(fabsf(Evaluate(data, theta) - Target(theta, v)), result);
                }
            } else
                result = oldResult;
        }

        // If the result was worse, copy from a member with better resulOptimizeGenerationss.
        if (init || (result < oldResult)) {
            // Save better results.
            *newResults->Data(member, v) = data;
            *newResults->MinResult(member, v) = result;
            *newResults->Index(member, v) = member;
            *newResults->Debug1(member) = init ? 1 : *oldResults->Debug1(member) + 1;
            *newResults->Debug2(member) = seed;
            maxResult = fmaxf(maxResult, result);
        } else {
            // Copy a result from among the previous generation's results.
            unsigned int bestCandidate = member;
            float bestResult = oldResult;
            if (settings.m_evolve == FIRESTARTER_EVOLVE_BEST) {
                // The genetic part of genetic programming and a major optimization:
                // Copy the best data from among a random set of candidates.
                for (int i = 0; i < settings.m_candidates; i++) {
                    unsigned int candidate = RANDOMMOD(memberSeed, settings.m_population);
                    if (candidate == *oldResults->Index(candidate, v)) {   // Only select evolving members
                        float curResult = *oldResults->MinResult(candidate, v);
                        if (curResult <= bestResult) {
                            bestResult = curResult;
                            bestCandidate = candidate;
                        }
                    }
                }
            } else if (settings.m_evolve == FIRESTARTER_EVOLVE_RANDOM)
                bestCandidate = RANDOMMOD(memberSeed, FIRESTARTER_CODE_POPULATION);

            // Switch to the selected member's data and results or revert to the previous generation.
            if (bestCandidate != member) {
                *newResults->Data(member, v) = *oldResults->Data(bestCandidate, v);
                *newResults->MinResult(member, v) = *oldResults->MinResult(bestCandidate, v);
                maxResult = fmaxf(maxResult, bestResult);
            } else {
                *newResults->Data(member, v) = data;
                *newResults->MinResult(member, v) = result;
                maxResult = fmaxf(maxResult, result);
            }
            *newResults->Index(member, v) = bestCandidate;
            *newResults->Debug1(member) = *oldResults->Debug1(bestCandidate);
            *newResults->Debug2(member) = *oldResults->Debug2(bestCandidate);
        }
    }
    *newResults->MaxResult(member) = maxResult;
} // Optimize
