#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.141597f;
    data->d[1] = -0.337021f;
    data->d[2] = 1.859952f;
    data->d[3] = -7.797740f;
    data->d[4] = 1.218880f;
    data->d[5] = -0.590784f;
    data->d[6] = -0.691457f;
    data->d[7] = -0.337625f;
    data->d[8] = 0.471743f;
    data->d[9] = 0.180546f;
    data->d[10] = 0.052319f;
    data->d[11] = 3.228355f;
    data->d[12] = -1.049961f;
    data->d[13] = -0.161887f;
    data->d[14] = -0.980843f;
    data->d[15] = -0.582288f;
    data->d[16] = -0.028907f;
    data->d[17] = -0.743289f;
    data->d[18] = 0.000001f;
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
    *result->MinResult(0) = 0.000008f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -3.090662f;
    data->d[1] = -0.557780f;
    data->d[2] = -0.027782f;
    data->d[3] = 1.036813f;
    data->d[4] = -1.880784f;
    data->d[5] = -3.393807f;
    data->d[6] = 0.203952f;
    data->d[7] = -1.125437f;
    data->d[8] = 0.266123f;
    data->d[9] = -0.145047f;
    data->d[10] = -0.757258f;
    data->d[11] = -0.015875f;
    data->d[12] = -3.807035f;
    data->d[13] = 3.165124f;
    data->d[14] = -0.978436f;
    data->d[15] = 0.012900f;
    data->d[16] = 0.384340f;
    data->d[17] = 0.673251f;
    data->d[18] = -0.118133f;
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
    *result->MinResult(1) = 0.000017f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -2.617939f;
    data->d[1] = -0.888828f;
    data->d[2] = -0.022830f;
    data->d[3] = 2.789218f;
    data->d[4] = 0.319643f;
    data->d[5] = 1.340212f;
    data->d[6] = 1.429339f;
    data->d[7] = 0.216018f;
    data->d[8] = 1.431610f;
    data->d[9] = -1.431571f;
    data->d[10] = 0.493125f;
    data->d[11] = 0.140474f;
    data->d[12] = -0.121630f;
    data->d[13] = -5.640915f;
    data->d[14] = -2.690082f;
    data->d[15] = 0.181926f;
    data->d[16] = 1.285712f;
    data->d[17] = 1.356092f;
    data->d[18] = 0.523567f;
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
    *result->MinResult(2) = 0.000085f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n = data.d[0] += n;
    n = data.d[1] *= n;
    n = data.d[1] *= n;
    n *= data.d[2];
    n += data.d[3];
    n = data.d[4] *= n;
    n = data.d[5] *= n;
    n *= data.d[6];
    n *= data.d[7];
    n = data.d[8] *= n;
    n = data.d[5] *= n;
    n = data.d[9] *= n;
    n = data.d[10] *= n;
    n = data.d[1] *= n;
    n = data.d[11] *= n;
    n *= data.d[4];
    n *= data.d[12];
    n += data.d[13];
    n += data.d[14];
    n *= data.d[15];
    n = data.d[10] *= n;
    n += data.d[16];
    n *= data.d[10];
    n = data.d[1] += n;
    n *= data.d[11];
    n += data.d[17];
    n += data.d[1];
    n *= data.d[9];
    n *= data.d[5];
    n += data.d[8];
    n *= data.d[0];
    n += data.d[18];
    return isfinite(n) ? n : 0.0f;
} // Evaluate
// END //

//inline float TestEvaluate(const FireStarterData& data, const float target[FIRESTARTER_SAMPLES], const float theta[FIRESTARTER_SAMPLES])
inline float TestEvaluate(const FireStarterData& data, const float target[], const float theta[])
{
    float result = 0.0f;
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
        result = fmaxf(fabsf(Evaluate(data, theta[i]) - target[i]), result);
    return result;
} // TestEvaluate

inline float TestPrecision(const FireStarterData& data, unsigned int variation, unsigned int precision)
{
    float result = 0.0f;
    float precisionStep = (TARGET_MAX - TARGET_MIN) / (precision - 1);
    for (int i = 0; i < precision; i++) {
        float theta = TARGET_MIN + i * precisionStep;
        result = fmaxf(fabsf(Evaluate(data, theta) - Target(theta, variation)), result);
    }
    return result;
} // TestPrecision

// Experimental version
#if 1
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
    unsigned long long memberSeed = RANDOM64(RANDOM64(generationSeed) + member);
    for (unsigned int v = firstVariation; v <= lastVariation; v++) {
        FireStarterData data;
        unsigned long long seed = RANDOM64(memberSeed + v); // Unique seed for the generation/member/variation
        float oldResult;
        bool evolved = false;

        if (init) {
            // The first generation is initalized with random numbers.
            for (unsigned int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR64(seed) * settings.m_startScale;
            for (unsigned int i = dataSize; i < FIRESTARTER_REGISTERS; i++)
                data.d[i] = 0.0f;   // Clear the unused data.
            oldResult = settings.m_startResult;
            evolved = true;
        } else {
            // Later generations randomize a single instruction if they were copied.
            data = *oldResults->Data(member, v);
            oldResult = *oldResults->MinResult(member, v);
            unsigned int age = *oldResults->Index(member, v);
            if (age >= 2) {
                unsigned int d = RANDOMMOD64(seed, dataSize);
                data.d[d] += RANDOMFACTOR64(seed) * settings.m_startScale;
                oldResult = settings.m_startResult;
                evolved = true;
            }
        }

        // Precalculate the target sample values.
        float target[FIRESTARTER_SAMPLES];
        for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
            target[i] = Target(theta[i], v);

        // Find the initial result
        float result = TestEvaluate(data, target, theta);
        float evolutionScale = evolved ? settings.m_startScale : settings.m_scale * result;

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < settings.m_iterations; p++) {
            unsigned int d = RANDOMMOD64(seed, dataSize);
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionScale * RANDOMFACTOR64(seed);
            float curResult = TestEvaluate(data, target, theta);
            if (curResult <= result) {
                result = curResult;
                evolutionScale = settings.m_scale * result;
                evolved = true;
            } else
                data.d[d] = oldData;
        }

        // Calculate a more accurate estimate of the result.
        if (settings.m_precision) {
            if (evolved)
                result = fmaxf(result, TestPrecision(data, v, settings.m_precision));
            else
                result = oldResult;
        }

        // If the result was worse, copy from a member with better resulOptimizeGenerationss.
        if (init || (result < oldResult)) {
            // Save better results.
            *newResults->Data(member, v) = data;
            *newResults->MinResult(member, v) = result;
            *newResults->Index(member, v) = 0;
            *newResults->Debug1(member, v) = init ? 1 : *oldResults->Debug1(member, v) + 1;
            *newResults->Debug2(member, v) = (unsigned int)memberSeed;
            maxResult = fmaxf(maxResult, result);
        } else {
            // Copy a result from among the previous generation's results.
            unsigned int bestCandidate = member;
            float bestResult = result;

            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of candidates.
            for (int i = 0; i < settings.m_candidates; i++) {
                unsigned int candidate = RANDOMMOD64(seed, settings.m_population);
                if (*oldResults->Index(candidate, v) <= 1) {   // Only select evolving members
                    float curResult = *oldResults->MinResult(candidate, v);
                    if (curResult <= bestResult) {
                        bestResult = curResult;
                        bestCandidate = candidate;
                    }
                }
            }

            // Switch to the selected member's data and results or revert to the previous generation.
            unsigned int age = *oldResults->Index(member, v);
            if (bestCandidate != member) {
                *newResults->Data(member, v) = *oldResults->Data(bestCandidate, v);
                *newResults->MinResult(member, v) = *oldResults->MinResult(bestCandidate, v);
                *newResults->Index(member, v) = MAX(age, 1) + 1;
                maxResult = fmaxf(maxResult, bestResult);
            } else {
                // Note: result will be larger than oldResult
                *newResults->Data(member, v) = data;
                *newResults->MinResult(member, v) = result;
                *newResults->Index(member, v) = 1;
                maxResult = fmaxf(maxResult, result);
            }
            *newResults->Debug1(member, v) = *oldResults->Debug1(bestCandidate, v);
            *newResults->Debug2(member, v) = *oldResults->Debug2(bestCandidate, v);
        }
    }
    *newResults->MaxResult(member) = maxResult;
} // Optimizer
#endif

// Best version
#if 0
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
    unsigned long long memberSeed = RANDOM64(RANDOM64(generationSeed) + member);
    for (unsigned int v = firstVariation; v <= lastVariation; v++) {
        FireStarterData data;
        unsigned long long seed = RANDOM64(memberSeed + v); // Unique seed for the generation/member/variation
        float oldResult;
        unsigned int age;
        bool evolved = false;

        if (init) {
            // The first generation is initalized with random numbers.
            for (unsigned int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR64(seed) * settings.m_startScale;
            for (unsigned int i = dataSize; i < FIRESTARTER_REGISTERS; i++)
                data.d[i] = 0.0f;   // Clear the unused data.
            oldResult = settings.m_startResult;
            age = 0;
            evolved = true;
        }
        else {
            // Later generations randomize a single instruction if they were copied.
            data = *oldResults->Data(member, v);
            oldResult = *oldResults->MinResult(member, v);
            age = *oldResults->Index(member, v);
            if (age) {
                unsigned int d = RANDOMMOD64(seed, dataSize);
                data.d[d] += RANDOMFACTOR64(seed) * settings.m_startScale;
                oldResult = settings.m_startResult;
                evolved = true;
            }
        }

        // Precalculate the target sample values.
        float target[FIRESTARTER_SAMPLES];
        for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
            target[i] = Target(theta[i], v);

        // Find the initial result
        float result = TestEvaluate(data, target, theta);
        float evolutionScale = evolved ? settings.m_startScale : settings.m_scale * result;

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < settings.m_iterations; p++) {
            unsigned int d = RANDOMMOD64(seed, dataSize);
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionScale * RANDOMFACTOR64(seed);
            float curResult = TestEvaluate(data, target, theta);
            if (curResult <= result) {
                result = curResult;
                evolutionScale = settings.m_scale * result;
                evolved = true;
            }
            else
                data.d[d] = oldData;
        }

        // Calculate a more accurate estimate of the result.
        if (settings.m_precision) {
            if (evolved)
                result = fmaxf(result, TestPrecision(data, v, settings.m_precision));
            else
                result = oldResult;
        }

        // If the result was worse, copy from a member with better resulOptimizeGenerationss.
        if (init || (result < oldResult)) {
            // Save better results.
            *newResults->Data(member, v) = data;
            *newResults->MinResult(member, v) = result;
            *newResults->Index(member, v) = 0;
            *newResults->Debug1(member, v) = init ? 1 : *oldResults->Debug1(member, v) + 1;
            *newResults->Debug2(member, v) = (unsigned int)memberSeed;
            maxResult = fmaxf(maxResult, result);
        }
        else {
            // Copy a result from among the previous generation's results.
            unsigned int bestCandidate = member;
            float bestResult = result;

            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of candidates.
            for (int i = 0; i < settings.m_candidates; i++) {
                unsigned int candidate = RANDOMMOD64(seed, settings.m_population);
                if (*oldResults->Index(candidate, v) == 0) {   // Only select evolving members
                    float curResult = *oldResults->MinResult(candidate, v);
                    if (curResult <= bestResult) {
                        bestResult = curResult;
                        bestCandidate = candidate;
                    }
                }
            }

            // Switch to the selected member's data and results or revert to the previous generation.
            if (bestCandidate != member) {
                *newResults->Data(member, v) = *oldResults->Data(bestCandidate, v);
                *newResults->MinResult(member, v) = *oldResults->MinResult(bestCandidate, v);
                *newResults->Index(member, v) = age + 1;
                maxResult = fmaxf(maxResult, bestResult);
            }
            else {
                // Note: result will be larger than oldResult
                *newResults->Data(member, v) = data;
                *newResults->MinResult(member, v) = result;
                *newResults->Index(member, v) = 0;
                maxResult = fmaxf(maxResult, result);
            }
            *newResults->Debug1(member, v) = *oldResults->Debug1(bestCandidate, v);
            *newResults->Debug2(member, v) = *oldResults->Debug2(bestCandidate, v);
        }
    }
    *newResults->MaxResult(member) = maxResult;
} // Optimizer
#endif

// Original version
#if 0
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
    unsigned long long memberSeed = RANDOM64(RANDOM64(generationSeed) + member);
    for (unsigned int v = firstVariation; v <= lastVariation; v++) {
        FireStarterData data;
        unsigned long long seed = RANDOM64(memberSeed + v); // Unique seed for the generation/member/variation
        float oldResult;
        bool evolved = false;

        if (init) {
            // The first generation is initalized with random numbers.
            for (int i = 0; i < dataSize; i++)
                data.d[i] = RANDOMFACTOR64(seed) * settings.m_startScale;
            for (int i = dataSize; i < FIRESTARTER_REGISTERS; i++)
                data.d[i] = 0.0f;   // Clear the unused data.
            oldResult = settings.m_startResult;
            evolved = true;
        }
        else {
            // Later generations randomize a single instruction if they were copied.
            data = *oldResults->Data(member, v);
            oldResult = *oldResults->MinResult(member, v);
            if (*oldResults->Index(member, v) != member) {
                unsigned int d = RANDOMMOD64(seed, dataSize);
                data.d[d] += RANDOMFACTOR64(seed) * settings.m_startScale;
                evolved = true;
            }
        }

        // Precalculate the target sample values.
        float target[FIRESTARTER_SAMPLES];
        for (int i = 0; i < FIRESTARTER_SAMPLES; i++)
            target[i] = Target(theta[i], v);

        // Find the initial result
        float result = TestEvaluate(data, target, theta);
        float evolutionScale = evolved ? settings.m_startScale : settings.m_scale * result;

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < settings.m_iterations; p++) {
            unsigned int d = RANDOMMOD64(seed, dataSize);
            float oldData = data.d[d];
            data.d[d] = oldData + evolutionScale * RANDOMFACTOR64(seed);
            float curResult = TestEvaluate(data, target, theta);
            if (curResult <= result) {
                result = curResult;
                evolutionScale = settings.m_scale * result;
                evolved = true;
            }
            else
                data.d[d] = oldData;
        }

        // Calculate a more accurate estimate of the result.
        if (settings.m_precision) {
            if (evolved)
                result = fmaxf(result, TestPrecision(data, v, settings.m_precision));
            else
                result = oldResult;
        }

        // If the result was worse, copy from a member with better resulOptimizeGenerationss.
        if (init || (result < oldResult)) {
            // Save better results.
            *newResults->Data(member, v) = data;
            *newResults->MinResult(member, v) = result;
            *newResults->Index(member, v) = member;
            *newResults->Debug1(member, v) = init ? 1 : *oldResults->Debug1(member, v) + 1;
            *newResults->Debug2(member, v) = (unsigned int)memberSeed;
            maxResult = fmaxf(maxResult, result);
        }
        else {
            // Copy a result from among the previous generation's results.
            unsigned int bestCandidate = member;
            float bestResult = oldResult;

            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of candidates.
            for (int i = 0; i < settings.m_candidates; i++) {
                unsigned int candidate = RANDOMMOD64(seed, settings.m_population);
                if (candidate == *oldResults->Index(candidate, v)) {   // Only select evolving members
                    float curResult = *oldResults->MinResult(candidate, v);
                    if (curResult <= bestResult) {
                        bestResult = curResult;
                        bestCandidate = candidate;
                    }
                }
            }

            // Switch to the selected member's data and results or revert to the previous generation.
            if (bestCandidate != member) {
                *newResults->Data(member, v) = *oldResults->Data(bestCandidate, v);
                *newResults->MinResult(member, v) = *oldResults->MinResult(bestCandidate, v);
                maxResult = fmaxf(maxResult, bestResult);
            }
            else {
                *newResults->Data(member, v) = data;
                *newResults->MinResult(member, v) = result;
                maxResult = fmaxf(maxResult, result);
            }
            *newResults->Index(member, v) = bestCandidate;
            *newResults->Debug1(member, v) = *oldResults->Debug1(bestCandidate, v);
            *newResults->Debug2(member, v) = *oldResults->Debug2(bestCandidate, v);
        }
    }
    *newResults->MaxResult(member) = maxResult;
} // Optimizer
#endif