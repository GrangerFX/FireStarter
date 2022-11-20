#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.735902f;
    data->d[1] = -1.267927f;
    data->d[2] = -2.602717f;
    data->d[3] = 0.579471f;
    data->d[4] = 0.769776f;
    data->d[5] = 0.264141f;
    data->d[6] = 5.618546f;
    data->d[7] = 0.579738f;
    data->d[8] = -0.421231f;
    data->d[9] = 0.070018f;
    data->d[10] = -2.600740f;
    data->d[11] = 0.353466f;
    data->d[12] = 0.836456f;
    data->d[13] = -0.585293f;
    data->d[14] = 0.769026f;
    data->d[15] = 3.325090f;
    data->d[16] = -0.588527f;
    data->d[17] = -8.996612f;
    data->d[18] = -0.780579f;
    data->d[19] = 3.328945f;
    data->d[20] = -7.504484f;
    data->d[21] = -3.457000f;
    data->d[22] = -0.450672f;
    data->d[23] = -2.104439f;
    data->d[24] = 0.125174f;
    data->d[25] = -0.392845f;
    data->d[26] = 0.622203f;
    data->d[27] = -0.536684f;
    data->d[28] = 0.523280f;
    data->d[29] = -0.130256f;
    data->d[30] = 7.258570f;
    data->d[31] = -0.021930f;
    *result->MinResult(0) = 0.014021f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 1.112562f;
    data->d[1] = 0.034002f;
    data->d[2] = -0.143813f;
    data->d[3] = 1.247748f;
    data->d[4] = 0.323053f;
    data->d[5] = -1.113837f;
    data->d[6] = 0.138450f;
    data->d[7] = 0.296102f;
    data->d[8] = 0.836522f;
    data->d[9] = 0.863765f;
    data->d[10] = 0.396142f;
    data->d[11] = -0.597286f;
    data->d[12] = -1.652320f;
    data->d[13] = -2.783697f;
    data->d[14] = 0.261446f;
    data->d[15] = 4.082424f;
    data->d[16] = 2.061762f;
    data->d[17] = 0.479582f;
    data->d[18] = 0.894260f;
    data->d[19] = 0.753364f;
    data->d[20] = -0.939888f;
    data->d[21] = 0.122452f;
    data->d[22] = 1.078833f;
    data->d[23] = 0.082703f;
    data->d[24] = -0.256509f;
    data->d[25] = -0.240974f;
    data->d[26] = -0.132891f;
    data->d[27] = 0.910408f;
    data->d[28] = -0.617742f;
    data->d[29] = -0.369473f;
    data->d[30] = -0.469272f;
    data->d[31] = -0.697507f;
    *result->MinResult(1) = 0.015783f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.465465f;
    data->d[1] = 1.085366f;
    data->d[2] = 0.653394f;
    data->d[3] = 0.489668f;
    data->d[4] = -1.383253f;
    data->d[5] = -2.554617f;
    data->d[6] = 1.454122f;
    data->d[7] = -0.126171f;
    data->d[8] = 0.141958f;
    data->d[9] = 0.588030f;
    data->d[10] = -2.080455f;
    data->d[11] = -0.355601f;
    data->d[12] = -2.428908f;
    data->d[13] = 0.539444f;
    data->d[14] = -0.256960f;
    data->d[15] = -0.535949f;
    data->d[16] = -0.051756f;
    data->d[17] = 0.760058f;
    data->d[18] = 0.321586f;
    data->d[19] = 0.091048f;
    data->d[20] = -1.285487f;
    data->d[21] = -0.195574f;
    data->d[22] = 7.784899f;
    data->d[23] = 0.438614f;
    data->d[24] = 0.302621f;
    data->d[25] = -0.001117f;
    data->d[26] = -0.800019f;
    data->d[27] = -0.483346f;
    data->d[28] = 0.112199f;
    data->d[29] = 1.192351f;
    data->d[30] = 2.164521f;
    data->d[31] = 0.886276f;
    *result->MinResult(2) = 0.011554f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n = data.d[24] *= n;
    n = data.d[25] += n;
    n = data.d[17] *= n;
    n = data.d[31] *= n;
    n *= data.d[17];
    n = data.d[14] += n;
    n += data.d[4];
    n *= data.d[27];
    n += data.d[9];
    n = data.d[11] += n;
    n = data.d[18] += n;
    n = data.d[7] += n;
    n = data.d[19] += n;
    n *= data.d[5];
    n += data.d[22];
    n *= data.d[13];
    n += data.d[7];
    n += data.d[18];
    n *= data.d[0];
    n *= data.d[11];
    n = data.d[19] *= n;
    n *= data.d[14];
    n *= data.d[19];
    n = data.d[31] += n;
    n += data.d[31];
    n *= data.d[26];
    n *= data.d[23];
    n = data.d[3] += n;
    n += data.d[24];
    n += data.d[3];
    n += data.d[28];
    n *= data.d[25];
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
