#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.744616f;
    data->d[1] = -1.267243f;
    data->d[2] = -2.641769f;
    data->d[3] = 0.582015f;
    data->d[4] = 0.872304f;
    data->d[5] = 0.157282f;
    data->d[6] = 5.611816f;
    data->d[7] = 0.526478f;
    data->d[8] = -0.376600f;
    data->d[9] = 0.079951f;
    data->d[10] = -2.587168f;
    data->d[11] = 0.350301f;
    data->d[12] = 0.837088f;
    data->d[13] = 2.897529f;
    data->d[14] = 0.766436f;
    data->d[15] = 0.776364f;
    data->d[16] = -0.588559f;
    data->d[17] = -8.992711f;
    data->d[18] = -0.781203f;
    data->d[19] = 3.222342f;
    data->d[20] = -5.114391f;
    data->d[21] = -3.446591f;
    data->d[22] = -0.466522f;
    data->d[23] = -2.084538f;
    data->d[24] = 0.125174f;
    data->d[25] = -0.392607f;
    data->d[26] = 0.649557f;
    data->d[27] = -0.551466f;
    data->d[28] = 0.527214f;
    data->d[29] = -0.131014f;
    data->d[30] = 7.268986f;
    data->d[31] = -0.021930f;
    *result->MinResult(0) = 0.008534f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 1.112478f;
    data->d[1] = 0.033431f;
    data->d[2] = -0.138212f;
    data->d[3] = 1.243425f;
    data->d[4] = 0.327088f;
    data->d[5] = -1.125925f;
    data->d[6] = 0.122266f;
    data->d[7] = 0.302552f;
    data->d[8] = 0.835799f;
    data->d[9] = 0.863910f;
    data->d[10] = 0.390765f;
    data->d[11] = -0.590927f;
    data->d[12] = -1.624390f;
    data->d[13] = -2.786581f;
    data->d[14] = 0.259403f;
    data->d[15] = 1.637733f;
    data->d[16] = 1.656624f;
    data->d[17] = 0.477962f;
    data->d[18] = 0.893927f;
    data->d[19] = 0.753706f;
    data->d[20] = -0.932517f;
    data->d[21] = 0.116406f;
    data->d[22] = 1.075473f;
    data->d[23] = 0.082744f;
    data->d[24] = -0.256644f;
    data->d[25] = -0.242356f;
    data->d[26] = -0.132891f;
    data->d[27] = 0.910131f;
    data->d[28] = -0.622115f;
    data->d[29] = -0.365442f;
    data->d[30] = -1.416350f;
    data->d[31] = -0.698074f;
    *result->MinResult(1) = 0.014455f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.463823f;
    data->d[1] = 1.091095f;
    data->d[2] = 0.652324f;
    data->d[3] = 0.489841f;
    data->d[4] = -1.382206f;
    data->d[5] = -2.556633f;
    data->d[6] = 1.454499f;
    data->d[7] = -0.133157f;
    data->d[8] = 0.136714f;
    data->d[9] = 0.590115f;
    data->d[10] = -2.625927f;
    data->d[11] = -0.355008f;
    data->d[12] = -2.423398f;
    data->d[13] = 0.535522f;
    data->d[14] = -0.257247f;
    data->d[15] = -0.534339f;
    data->d[16] = -0.579588f;
    data->d[17] = 0.763576f;
    data->d[18] = 0.321458f;
    data->d[19] = 0.091637f;
    data->d[20] = -1.282117f;
    data->d[21] = -0.204502f;
    data->d[22] = 7.784713f;
    data->d[23] = 0.442259f;
    data->d[24] = 0.302965f;
    data->d[25] = -0.000264f;
    data->d[26] = -0.800576f;
    data->d[27] = -0.481574f;
    data->d[28] = 0.112610f;
    data->d[29] = 1.189342f;
    data->d[30] = 2.278059f;
    data->d[31] = 0.876274f;
    *result->MinResult(2) = 0.008867f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n = data.d[24] *= n;
    n = data.d[25] += n;
    n = data.d[17] *= n;
    n = data.d[31] *= n;
    n = data.d[17] *= n;
    n = data.d[14] += n;
    n = data.d[4] += n;
    n = data.d[27] *= n;
    n = data.d[9] += n;
    n = data.d[11] += n;
    n = data.d[18] += n;
    n = data.d[7] += n;
    n = data.d[19] += n;
    n = data.d[5] *= n;
    n = data.d[22] += n;
    n = data.d[13] *= n;
    n = data.d[7] += n;
    n = data.d[9] += n;
    n = data.d[0] *= n;
    n = data.d[11] *= n;
    n = data.d[19] *= n;
    n = data.d[14] *= n;
    n = data.d[19] *= n;
    n = data.d[31] += n;
    n = data.d[31] += n;
    n = data.d[26] *= n;
    n = data.d[23] *= n;
    n = data.d[3] += n;
    n = data.d[24] += n;
    n = data.d[3] += n;
    n = data.d[28] += n;
    n = data.d[25] *= n;
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
