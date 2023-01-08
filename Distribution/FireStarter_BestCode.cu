#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.858965f;
    data->d[1] = 0.919740f;
    data->d[2] = -4.594807f;
    data->d[3] = 0.499821f;
    data->d[4] = 0.649260f;
    data->d[5] = 0.026990f;
    data->d[6] = 5.701551f;
    data->d[7] = 0.781947f;
    data->d[8] = -0.447543f;
    data->d[9] = 0.648860f;
    data->d[10] = 0.291600f;
    data->d[11] = -0.107254f;
    data->d[12] = 0.597025f;
    data->d[13] = -0.530870f;
    data->d[14] = 0.714914f;
    data->d[15] = 3.394706f;
    data->d[16] = -0.749057f;
    data->d[17] = -8.609006f;
    data->d[18] = -0.916124f;
    data->d[19] = 3.553504f;
    data->d[20] = -2.704449f;
    data->d[21] = -3.716483f;
    data->d[22] = -0.554407f;
    data->d[23] = -0.695044f;
    data->d[24] = 0.126835f;
    data->d[25] = -0.398198f;
    data->d[26] = 2.332877f;
    data->d[27] = -0.460171f;
    data->d[28] = 0.713443f;
    data->d[29] = 0.484470f;
    data->d[30] = 7.150134f;
    data->d[31] = -0.018158f;
    *(result->MinResult()) = 0.003857f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.904748f;
    data->d[1] = -1.258708f;
    data->d[2] = 0.124986f;
    data->d[3] = 1.185735f;
    data->d[4] = 0.179857f;
    data->d[5] = -1.063845f;
    data->d[6] = 0.451394f;
    data->d[7] = -0.564201f;
    data->d[8] = 0.592924f;
    data->d[9] = 0.827688f;
    data->d[10] = 0.422105f;
    data->d[11] = -0.493831f;
    data->d[12] = 0.653674f;
    data->d[13] = -1.122652f;
    data->d[14] = 0.311963f;
    data->d[15] = -0.319634f;
    data->d[16] = 1.883706f;
    data->d[17] = 0.618754f;
    data->d[18] = 0.962769f;
    data->d[19] = 0.773368f;
    data->d[20] = -0.835122f;
    data->d[21] = -0.536122f;
    data->d[22] = 1.164227f;
    data->d[23] = 0.227446f;
    data->d[24] = -0.210487f;
    data->d[25] = -0.201252f;
    data->d[26] = -0.453757f;
    data->d[27] = 0.344144f;
    data->d[28] = -0.458101f;
    data->d[29] = -0.754569f;
    data->d[30] = -1.026483f;
    data->d[31] = -0.789475f;
    *(result->MinResult()) = 0.011649f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.171553f;
    data->d[1] = 1.252745f;
    data->d[2] = 0.747028f;
    data->d[3] = 0.522649f;
    data->d[4] = -3.026175f;
    data->d[5] = -0.780181f;
    data->d[6] = 0.632095f;
    data->d[7] = -0.564887f;
    data->d[8] = 0.217509f;
    data->d[9] = 0.402559f;
    data->d[10] = -0.612595f;
    data->d[11] = -0.074882f;
    data->d[12] = -1.422300f;
    data->d[13] = 0.095315f;
    data->d[14] = -0.185715f;
    data->d[15] = -1.668308f;
    data->d[16] = 1.290311f;
    data->d[17] = 0.770144f;
    data->d[18] = 0.488515f;
    data->d[19] = -0.439144f;
    data->d[20] = 0.111429f;
    data->d[21] = 0.113168f;
    data->d[22] = 0.855850f;
    data->d[23] = 0.551785f;
    data->d[24] = 0.304962f;
    data->d[25] = 0.002665f;
    data->d[26] = -0.667315f;
    data->d[27] = 0.203712f;
    data->d[28] = -0.731345f;
    data->d[29] = 1.635263f;
    data->d[30] = 1.894108f;
    data->d[31] = 0.488515f;
    *(result->MinResult()) = 0.011851f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n = data.d[24] *= n;
    n = data.d[25] += n;
    n = data.d[17] *= n;
    n = data.d[31] *= n;
    n = data.d[17] *= n;
    n = data.d[14] += n;
    n += data.d[12];
    n *= data.d[16];
    n += data.d[9];
    n = data.d[11] += n;
    n = data.d[18] += n;
    n = data.d[7] += n;
    n *= data.d[20];
    n *= data.d[8];
    n *= data.d[17];
    n *= data.d[27];
    n += data.d[7];
    n += data.d[18];
    n *= data.d[29];
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
GPU_GLOBAL void Optimizer(const FireStarterSettings settings, FireStarterPopulation* newResults, FireStarterPopulation* oldResults, const unsigned int v, const unsigned int firstMember, const unsigned int lastMember, const unsigned int dataSize, const unsigned long long generationSeed, const unsigned int init)
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
    unsigned long long memberSeed = RANDOM64(RANDOM64(generationSeed) + member);
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
        if (age > 1) {
            unsigned int d = RANDOMMOD64(seed, dataSize);
            data.d[d] += RANDOMFACTOR64(seed) * settings.m_startScale * (age - 1);
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
        *newResults->Debug(member, v) = init ? 1 : *oldResults->Debug(member, v) + 1;
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

        // Switch to the selected member's data and results.
        if (bestCandidate == member) {
            // Note: result will be larger than oldResult
            *newResults->Data(member, v) = data;
            *newResults->MinResult(member, v) = result;
            *newResults->Index(member, v) = 1;
        } else {
            *newResults->Data(member, v) = *oldResults->Data(bestCandidate, v);
            *newResults->MinResult(member, v) = *oldResults->MinResult(bestCandidate, v);
            *newResults->Index(member, v) = MAX(*oldResults->Index(member, v), 1) + 1;
        }
        *newResults->Debug(member, v) = *oldResults->Debug(bestCandidate, v);
    }
} // Optimizer
#endif

// Best version
#if 0
GPU_GLOBAL void Optimizer(const FireStarterSettings settings, FireStarterPopulation* newResults, FireStarterPopulation* oldResults, const unsigned int v, const unsigned int firstMember, const unsigned int lastMember, const unsigned int dataSize, const unsigned long long generationSeed, const unsigned int init)
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
    } else {
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
        *newResults->Debug(member, v) = init ? 1 : *oldResults->Debug(member, v) + 1;
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
        } else {
            // Note: result will be larger than oldResult
            *newResults->Data(member, v) = data;
            *newResults->MinResult(member, v) = result;
            *newResults->Index(member, v) = 0;
            maxResult = fmaxf(maxResult, result);
        }
        *newResults->Debug(member, v) = *oldResults->Debug(bestCandidate, v);
    }
    *newResults->MaxResult(member) = maxResult;
} // Optimizer
#endif

// Original version
#if 0
GPU_GLOBAL void Optimizer(const FireStarterSettings settings, FireStarterPopulation* newResults, FireStarterPopulation* oldResults, const unsigned int v, const unsigned int firstMember, const unsigned int lastMember, const unsigned int dataSize, const unsigned long long generationSeed, const unsigned int init)
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
    }  else {
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
        *newResults->Debug(member, v) = init ? 1 : *oldResults->Debug(member, v) + 1;
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
        } else {
            *newResults->Data(member, v) = data;
            *newResults->MinResult(member, v) = result;
            maxResult = fmaxf(maxResult, result);
        }
        *newResults->Index(member, v) = bestCandidate;
        *newResults->Debug(member, v) = *oldResults->Debug(bestCandidate, v);
    }
    *newResults->MaxResult(member) = maxResult;
} // Optimizer
#endif