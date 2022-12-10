#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -2.048377f;
    data->d[1] = -0.436435f;
    data->d[2] = -5.675249f;
    data->d[3] = 0.381011f;
    data->d[4] = 6.456905f;
    data->d[5] = -1.189311f;
    data->d[6] = -1.235790f;
    data->d[7] = 0.152161f;
    data->d[8] = 0.109005f;
    data->d[9] = -1.078557f;
    data->d[10] = 0.528385f;
    data->d[11] = 0.925186f;
    data->d[12] = -0.442730f;
    data->d[13] = 0.363431f;
    data->d[14] = 0.356787f;
    data->d[15] = -0.959492f;
    data->d[16] = 0.880477f;
    data->d[17] = 0.890321f;
    data->d[18] = -0.732974f;
    data->d[19] = -0.716310f;
    data->d[20] = -3.444294f;
    data->d[21] = -0.482718f;
    data->d[22] = -0.981243f;
    data->d[23] = 0.087272f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *result->MinResult(0) = 0.000009f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.929201f;
    data->d[1] = 0.063947f;
    data->d[2] = 0.526807f;
    data->d[3] = -0.426461f;
    data->d[4] = 0.806570f;
    data->d[5] = -0.355397f;
    data->d[6] = -0.674007f;
    data->d[7] = -0.800259f;
    data->d[8] = -2.976337f;
    data->d[9] = -0.956736f;
    data->d[10] = -0.253574f;
    data->d[11] = 0.627528f;
    data->d[12] = -0.201835f;
    data->d[13] = -1.483717f;
    data->d[14] = -1.870311f;
    data->d[15] = 0.239748f;
    data->d[16] = 1.516174f;
    data->d[17] = -3.188247f;
    data->d[18] = -0.746805f;
    data->d[19] = -0.698651f;
    data->d[20] = -0.213130f;
    data->d[21] = -0.172212f;
    data->d[22] = -0.676520f;
    data->d[23] = 0.391903f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *result->MinResult(1) = 0.000155f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.933991f;
    data->d[1] = -0.020035f;
    data->d[2] = 0.323324f;
    data->d[3] = 0.465412f;
    data->d[4] = 0.308723f;
    data->d[5] = -0.668257f;
    data->d[6] = -0.341468f;
    data->d[7] = 0.718392f;
    data->d[8] = 6.902498f;
    data->d[9] = -1.054312f;
    data->d[10] = -1.026010f;
    data->d[11] = -0.952464f;
    data->d[12] = 0.334475f;
    data->d[13] = -0.098713f;
    data->d[14] = 1.980327f;
    data->d[15] = -2.225261f;
    data->d[16] = 0.413536f;
    data->d[17] = 0.464322f;
    data->d[18] = -0.354196f;
    data->d[19] = -1.065820f;
    data->d[20] = -3.558077f;
    data->d[21] = 0.881250f;
    data->d[22] = 0.982410f;
    data->d[23] = 1.141910f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *result->MinResult(2) = 0.000339f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n += data.d[0];
    n *= data.d[1];
    n += data.d[2];
    n += data.d[3];
    n = data.d[4] += n;
    n *= data.d[4];
    n += data.d[5];
    n += data.d[6];
    n = data.d[7] *= n;
    n *= data.d[8];
    n = data.d[9] += n;
    n *= data.d[9];
    n += data.d[10];
    n = data.d[11] *= n;
    n = data.d[12] += n;
    n += data.d[13];
    n = data.d[14] += n;
    n *= data.d[7];
    n *= data.d[15];
    n += data.d[16];
    n = data.d[17] += n;
    n += data.d[18];
    n *= data.d[17];
    n *= data.d[19];
    n = data.d[11] += n;
    n *= data.d[11];
    n *= data.d[14];
    n += data.d[20];
    n *= data.d[21];
    n *= data.d[12];
    n += data.d[22];
    n += data.d[23];
    return isfinite(n) ? n : 0.0f;
} // Evaluate
// END //

GPU_GLOBAL void Optimizer(const FireStarterSettings settings, FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int firstVariation, const unsigned int lastVariation, const unsigned int firstMember, const unsigned int lastMember, const unsigned int dataSize, const unsigned long long generationSeed, const unsigned int init)
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
    unsigned long long seed = RANDOM64(RANDOM64(generationSeed) + member);
    for (unsigned int v = firstVariation; v <= lastVariation; v++) {
        unsigned long long memberSeed = RANDOM64(seed + v);

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
                data.d[i] = RANDOMFACTOR64(memberSeed);
            for (int i = dataSize; i < FIRESTARTER_REGISTERS; i++)
                data.d[i] = 0.0f;   // Clear the unused data.
            oldResult = settings.m_startResult;
            evolved = true;
        } else {
            data = *oldResults->Data(member, v);
            oldResult = *oldResults->MinResult(member, v);
            if (*oldResults->Index(member, v) != member) {
                unsigned int d = RANDOMMOD64(memberSeed, dataSize);
                data.d[d] += settings.m_startScale * RANDOMFACTOR64(memberSeed);
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
            unsigned int d = RANDOMMOD64(memberSeed, dataSize);
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionScale * RANDOMFACTOR64(memberSeed);
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
            *newResults->Debug2(member) = (unsigned int)seed;
            maxResult = fmaxf(maxResult, result);
        } else {
            // Copy a result from among the previous generation's results.
            unsigned int bestCandidate = member;
            float bestResult = oldResult;
            if (settings.m_evolve == FIRESTARTER_EVOLVE_BEST) {
                // The genetic part of genetic programming and a major optimization:
                // Copy the best data from among a random set of candidates.
                for (int i = 0; i < settings.m_candidates; i++) {
                    unsigned int candidate = RANDOMMOD64(memberSeed, settings.m_population);
                    if (candidate == *oldResults->Index(candidate, v)) {   // Only select evolving members
                        float curResult = *oldResults->MinResult(candidate, v);
                        if (curResult <= bestResult) {
                            bestResult = curResult;
                            bestCandidate = candidate;
                        }
                    }
                }
            } else if (settings.m_evolve == FIRESTARTER_EVOLVE_RANDOM)
                bestCandidate = RANDOMMOD64(memberSeed, FIRESTARTER_CODE_POPULATION);

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
} // Optimizer
