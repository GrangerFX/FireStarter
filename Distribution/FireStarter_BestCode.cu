#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.056608f;
    data->d[1] = 2.964120f;
    data->d[2] = 1.755574f;
    data->d[3] = -0.440248f;
    data->d[4] = 0.586257f;
    data->d[5] = -1.608119f;
    data->d[6] = -1.072440f;
    data->d[7] = -7.778950f;
    data->d[8] = -0.013943f;
    data->d[9] = 1.294269f;
    data->d[10] = 0.259761f;
    data->d[11] = 2.940291f;
    data->d[12] = 1.167734f;
    data->d[13] = 0.169174f;
    data->d[14] = 0.771046f;
    data->d[15] = 0.869584f;
    data->d[16] = 4.259118f;
    data->d[17] = 0.035232f;
    data->d[18] = 1.007317f;
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
    *result->MinResult(0) = 0.000406f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.890108f;
    data->d[1] = 8.255911f;
    data->d[2] = 1.186011f;
    data->d[3] = 0.500107f;
    data->d[4] = 0.891181f;
    data->d[5] = 0.000352f;
    data->d[6] = -9.890863f;
    data->d[7] = 2.391315f;
    data->d[8] = 5.903541f;
    data->d[9] = -3.231980f;
    data->d[10] = -2.494494f;
    data->d[11] = -4.161912f;
    data->d[12] = -0.914412f;
    data->d[13] = -5.947692f;
    data->d[14] = 5.406288f;
    data->d[15] = 3.245506f;
    data->d[16] = -0.611888f;
    data->d[17] = 4.374847f;
    data->d[18] = -6.027526f;
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
    *result->MinResult(1) = 0.852274f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.152207f;
    data->d[1] = 1.925462f;
    data->d[2] = -0.547605f;
    data->d[3] = 1.738180f;
    data->d[4] = -1.398633f;
    data->d[5] = -2.028015f;
    data->d[6] = 0.595876f;
    data->d[7] = -0.140958f;
    data->d[8] = -0.594334f;
    data->d[9] = 0.516758f;
    data->d[10] = 0.194096f;
    data->d[11] = 1.373630f;
    data->d[12] = -0.077452f;
    data->d[13] = -0.047558f;
    data->d[14] = 2.476355f;
    data->d[15] = -1.202789f;
    data->d[16] = -1.313911f;
    data->d[17] = -0.416816f;
    data->d[18] = 2.274941f;
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
    *result->MinResult(2) = 0.001360f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n = data.d[0] *= n;
    n = data.d[1] += n;
    n = data.d[2] *= n;
    n = data.d[3] *= n;
    n *= data.d[4];
    n = data.d[5] *= n;
    n = data.d[0] *= n;
    n = data.d[6] *= n;
    n = data.d[0] *= n;
    n *= data.d[7];
    n *= data.d[8];
    n = data.d[9] += n;
    n += data.d[10];
    n += data.d[5];
    n += data.d[11];
    n += data.d[12];
    n *= data.d[9];
    n = data.d[0] *= n;
    n += data.d[0];
    n *= data.d[13];
    n = data.d[14] *= n;
    n = data.d[1] += n;
    n *= data.d[14];
    n += data.d[15];
    n *= data.d[2];
    n = data.d[6] *= n;
    n *= data.d[16];
    n *= data.d[17];
    n += data.d[1];
    n += data.d[3];
    n += data.d[18];
    n *= data.d[6];
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