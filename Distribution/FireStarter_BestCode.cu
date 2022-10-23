#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -4.035352f;
    data->d[1] = 0.893759f;
    data->d[2] = 0.000001f;
    data->d[3] = 0.283701f;
    data->d[4] = 0.194967f;
    data->d[5] = 0.173869f;
    data->d[6] = -13.276315f;
    data->d[7] = 8.647816f;
    data->d[8] = 0.000540f;
    data->d[9] = -3.403981f;
    data->d[10] = -5.357340f;
    data->d[11] = 0.091067f;
    data->d[12] = -0.255138f;
    data->d[13] = 0.149289f;
    data->d[14] = 7.669986f;
    data->d[15] = -6.014521f;
    data->d[16] = -0.699227f;
    data->d[17] = -1.376199f;
    data->d[18] = -0.000000f;
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
    *result->MinResult(0) = 0.000001f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -3.326131f;
    data->d[1] = 0.235474f;
    data->d[2] = -0.000003f;
    data->d[3] = -0.162894f;
    data->d[4] = -0.772871f;
    data->d[5] = 0.977822f;
    data->d[6] = -1.217946f;
    data->d[7] = 1.469010f;
    data->d[8] = -0.361706f;
    data->d[9] = -0.045374f;
    data->d[10] = 0.198355f;
    data->d[11] = 0.111215f;
    data->d[12] = 3.820499f;
    data->d[13] = -0.982572f;
    data->d[14] = 5.888733f;
    data->d[15] = -7.614750f;
    data->d[16] = 30.186790f;
    data->d[17] = 0.678487f;
    data->d[18] = -0.118130f;
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
    *result->MinResult(1) = 0.000002f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.624511f;
    data->d[1] = -1.993481f;
    data->d[2] = -0.000004f;
    data->d[3] = 0.117797f;
    data->d[4] = -4.558999f;
    data->d[5] = 0.819865f;
    data->d[6] = -0.394798f;
    data->d[7] = -0.675449f;
    data->d[8] = -0.302135f;
    data->d[9] = 0.272568f;
    data->d[10] = 0.345310f;
    data->d[11] = 0.509359f;
    data->d[12] = -0.671915f;
    data->d[13] = 0.345599f;
    data->d[14] = 5.169489f;
    data->d[15] = 8.909068f;
    data->d[16] = 9.302976f;
    data->d[17] = 0.724661f;
    data->d[18] = 0.523601f;
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
    *result->MinResult(2) = 0.000002f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n += data.d[0];
    n = data.d[1] += n;
    n += data.d[2];
    n = data.d[3] *= n;
    n = data.d[3] *= n;
    n = data.d[4] *= n;
    n += data.d[4];
    n = data.d[5] += n;
    n = data.d[6] *= n;
    n += data.d[7];
    n += data.d[6];
    n = data.d[8] *= n;
    n = data.d[9] += n;
    n = data.d[3] += n;
    n = data.d[10] += n;
    n *= data.d[11];
    n *= data.d[3];
    n = data.d[12] *= n;
    n += data.d[5];
    n *= data.d[10];
    n = data.d[13] *= n;
    n += data.d[14];
    n *= data.d[9];
    n += data.d[15];
    n *= data.d[8];
    n += data.d[16];
    n *= data.d[12];
    n = data.d[13] *= n;
    n += data.d[13];
    n *= data.d[17];
    n *= data.d[1];
    n += data.d[18];
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
