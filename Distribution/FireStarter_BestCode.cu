#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.503216f;
    data->d[1] = -1.240953f;
    data->d[2] = -2.334566f;
    data->d[3] = 0.544985f;
    data->d[4] = 0.774012f;
    data->d[5] = 0.114093f;
    data->d[6] = 5.325245f;
    data->d[7] = 0.786438f;
    data->d[8] = 2.040682f;
    data->d[9] = 0.430259f;
    data->d[10] = -1.746627f;
    data->d[11] = -0.191892f;
    data->d[12] = 0.867733f;
    data->d[13] = -1.526577f;
    data->d[14] = 0.666340f;
    data->d[15] = 3.462732f;
    data->d[16] = -0.453987f;
    data->d[17] = -8.611721f;
    data->d[18] = -0.906269f;
    data->d[19] = 3.536900f;
    data->d[20] = -2.403255f;
    data->d[21] = -2.692716f;
    data->d[22] = -0.496793f;
    data->d[23] = -0.772800f;
    data->d[24] = 0.121509f;
    data->d[25] = -0.380154f;
    data->d[26] = 0.747267f;
    data->d[27] = -0.669098f;
    data->d[28] = 0.393627f;
    data->d[29] = 0.792895f;
    data->d[30] = 7.513114f;
    data->d[31] = -0.018573f;
    *result->MinResult(0) = 0.034563f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 1.254921f;
    data->d[1] = -0.518362f;
    data->d[2] = 0.224793f;
    data->d[3] = 1.121966f;
    data->d[4] = 0.218065f;
    data->d[5] = -0.742732f;
    data->d[6] = 0.496381f;
    data->d[7] = -0.608454f;
    data->d[8] = -122.108955f;
    data->d[9] = 0.838851f;
    data->d[10] = 0.571224f;
    data->d[11] = -0.430129f;
    data->d[12] = 0.520137f;
    data->d[13] = 7.418374f;
    data->d[14] = 0.294243f;
    data->d[15] = -76.788322f;
    data->d[16] = 2.014463f;
    data->d[17] = 0.510239f;
    data->d[18] = 0.961174f;
    data->d[19] = 0.951239f;
    data->d[20] = -4.910347f;
    data->d[21] = 0.329260f;
    data->d[22] = 122.667236f;
    data->d[23] = -50.398331f;
    data->d[24] = -0.248654f;
    data->d[25] = -0.247817f;
    data->d[26] = -0.373046f;
    data->d[27] = 0.629969f;
    data->d[28] = -0.497295f;
    data->d[29] = 128.065079f;
    data->d[30] = -0.763858f;
    data->d[31] = -0.818364f;
    *result->MinResult(1) = 0.027668f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.390004f;
    data->d[1] = 0.118805f;
    data->d[2] = 0.451245f;
    data->d[3] = 0.759506f;
    data->d[4] = -2.379844f;
    data->d[5] = -0.709070f;
    data->d[6] = 0.896569f;
    data->d[7] = 1.534560f;
    data->d[8] = 0.251066f;
    data->d[9] = 0.654574f;
    data->d[10] = 0.342519f;
    data->d[11] = -0.351282f;
    data->d[12] = -1.471082f;
    data->d[13] = 0.061228f;
    data->d[14] = -0.230559f;
    data->d[15] = -0.151996f;
    data->d[16] = 2.954738f;
    data->d[17] = 0.838491f;
    data->d[18] = 0.619818f;
    data->d[19] = -0.401267f;
    data->d[20] = -0.516584f;
    data->d[21] = 0.100589f;
    data->d[22] = 0.769831f;
    data->d[23] = 0.590783f;
    data->d[24] = 0.317133f;
    data->d[25] = 0.003592f;
    data->d[26] = -0.887848f;
    data->d[27] = -1.121655f;
    data->d[28] = -0.887172f;
    data->d[29] = -0.127852f;
    data->d[30] = 0.050268f;
    data->d[31] = 0.539699f;
    *result->MinResult(2) = 0.040962f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n = data.d[24] *= n;
    n = data.d[25] += n;
    n = data.d[17] *= n;
    n = data.d[31] *= n;
    n = data.d[17] *= n;
    n = data.d[14] += n;
    n = data.d[12] += n;
    n = data.d[27] *= n;
    n = data.d[9] += n;
    n = data.d[11] += n;
    n = data.d[18] += n;
    n = data.d[7] += n;
    n = data.d[21] *= n;
    n = data.d[18] += n;
    n = data.d[10] *= n;
    n = data.d[0] *= n;
    n = data.d[7] += n;
    n = data.d[18] += n;
    n = data.d[0] *= n;
    n = data.d[11] *= n;
    n = data.d[19] *= n;
    n = data.d[14] *= n;
    n = data.d[19] *= n;
    n = data.d[31] += n;
    n = data.d[31] += n;
    n = data.d[26] *= n;
    n = data.d[2] *= n;
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
