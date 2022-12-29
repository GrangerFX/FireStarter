#pragma once

#include "HashRandom.h"
#include "FireStarterResults.h"
#include "CUDADefines.h"

// EVALUATE //
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.476961f;
    data->d[1] = -1.167079f;
    data->d[2] = -2.408368f;
    data->d[3] = 0.332780f;
    data->d[4] = 0.612300f;
    data->d[5] = 0.160120f;
    data->d[6] = 5.203110f;
    data->d[7] = 0.778981f;
    data->d[8] = -0.482722f;
    data->d[9] = -0.751487f;
    data->d[10] = 0.212920f;
    data->d[11] = -0.083035f;
    data->d[12] = 0.915597f;
    data->d[13] = -0.192240f;
    data->d[14] = 0.658268f;
    data->d[15] = 3.345397f;
    data->d[16] = -0.647914f;
    data->d[17] = -8.584152f;
    data->d[18] = -2.595487f;
    data->d[19] = 3.546984f;
    data->d[20] = -2.383957f;
    data->d[21] = -3.492156f;
    data->d[22] = -0.550446f;
    data->d[23] = -0.637503f;
    data->d[24] = 0.121509f;
    data->d[25] = -0.381838f;
    data->d[26] = 2.295975f;
    data->d[27] = -0.803107f;
    data->d[28] = 0.355800f;
    data->d[29] = 0.740349f;
    data->d[30] = 7.228129f;
    data->d[31] = -0.019503f;
    *result->MinResult(0) = 0.028615f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.956261f;
    data->d[1] = -0.575965f;
    data->d[2] = 0.206099f;
    data->d[3] = 1.093520f;
    data->d[4] = 0.081654f;
    data->d[5] = -0.944778f;
    data->d[6] = 0.593330f;
    data->d[7] = -0.477417f;
    data->d[8] = 0.786662f;
    data->d[9] = 0.943735f;
    data->d[10] = 0.533175f;
    data->d[11] = -0.562712f;
    data->d[12] = 0.526742f;
    data->d[13] = 0.505831f;
    data->d[14] = 0.294782f;
    data->d[15] = -0.373480f;
    data->d[16] = 2.371882f;
    data->d[17] = 0.528355f;
    data->d[18] = 0.214389f;
    data->d[19] = 0.816760f;
    data->d[20] = -0.640875f;
    data->d[21] = 0.155528f;
    data->d[22] = 1.172440f;
    data->d[23] = 0.110402f;
    data->d[24] = -0.268906f;
    data->d[25] = -0.251227f;
    data->d[26] = -0.423140f;
    data->d[27] = 0.592608f;
    data->d[28] = -0.707754f;
    data->d[29] = 1.251881f;
    data->d[30] = -0.539737f;
    data->d[31] = -0.741492f;
    *result->MinResult(1) = 0.038712f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.368521f;
    data->d[1] = 0.159923f;
    data->d[2] = 0.549903f;
    data->d[3] = 0.566386f;
    data->d[4] = -2.181653f;
    data->d[5] = -0.712061f;
    data->d[6] = 0.622027f;
    data->d[7] = 0.206009f;
    data->d[8] = 0.211842f;
    data->d[9] = 0.485832f;
    data->d[10] = -0.513862f;
    data->d[11] = -0.402596f;
    data->d[12] = -1.348100f;
    data->d[13] = 0.149370f;
    data->d[14] = -0.171749f;
    data->d[15] = -0.157935f;
    data->d[16] = 1.366271f;
    data->d[17] = 0.731818f;
    data->d[18] = 0.371784f;
    data->d[19] = -0.329764f;
    data->d[20] = -0.598526f;
    data->d[21] = 0.015234f;
    data->d[22] = 0.835134f;
    data->d[23] = 0.432119f;
    data->d[24] = 0.293830f;
    data->d[25] = -0.007824f;
    data->d[26] = -0.721605f;
    data->d[27] = -0.931835f;
    data->d[28] = -0.875448f;
    data->d[29] = -0.203752f;
    data->d[30] = 0.080939f;
    data->d[31] = 0.533882f;
    *result->MinResult(2) = 0.036603f;
} // LoadVariation2

inline float Evaluate(FireStarterData data, float n)
{
    n = data.d[24] *= n;
    n = data.d[25] += n;
    n = data.d[17] *= n;
    n = data.d[31] *= n;
    n *= data.d[17];
    n = data.d[14] += n;
    n += data.d[12];
    n *= data.d[27];
    n += data.d[9];
    n += data.d[11];
    n = data.d[18] += n;
    n = data.d[7] += n;
    n = data.d[19] += n;
    n = data.d[18] += n;
    n *= data.d[10];
    n = data.d[0] *= n;
    n += data.d[7];
    n += data.d[18];
    n *= data.d[0];
    n += data.d[22];
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

#if 0
// Experimental version
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
        } else {
            // Later generations randomize a single instruction if they were copied.
            data = *oldResults->Data(member, v);
            oldResult = *oldResults->MinResult(member, v);
            age = *oldResults->Index(member, v);
            if (age) {
                unsigned int count = age / 4 + 1;
                count = MIN(count, dataSize);
                for (unsigned int i = 0; i < count; i++) {
                    unsigned int d = RANDOMMOD64(seed, dataSize);
                    data.d[d] += RANDOMFACTOR64(seed) * settings.m_startScale;
                }
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
            float bestResult = oldResult;
            if (settings.m_evolve == FIRESTARTER_EVOLVE_BEST) {
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
            } else if (settings.m_evolve == FIRESTARTER_EVOLVE_RANDOM)
                bestCandidate = RANDOMMOD64(seed, FIRESTARTER_CODE_POPULATION);

            // Switch to the selected member's data and results or revert to the previous generation.
            if (bestCandidate != member) {
                *newResults->Data(member, v) = *oldResults->Data(bestCandidate, v);
                *newResults->MinResult(member, v) = *oldResults->MinResult(bestCandidate, v);
                *newResults->Index(member, v) = age + 1;
                maxResult = fmaxf(maxResult, bestResult);
            } else {
                // Note: result will probably be larger than oldResult
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
#else
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
            if (settings.m_evolve == FIRESTARTER_EVOLVE_BEST) {
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
            }
            else if (settings.m_evolve == FIRESTARTER_EVOLVE_RANDOM)
                bestCandidate = RANDOMMOD64(seed, FIRESTARTER_CODE_POPULATION);

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