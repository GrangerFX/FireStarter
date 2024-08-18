#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

// VARIATIONS //
// Run date: 08/18/24 14:23:27 Pacific Daylight Time
// Run duration = 185.282526 seconds
// Run generation = 23
// Run evolution = 2
// Run max result = 0.00013721
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_CPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 0
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 0
// Run optimize = 8

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

// Variation: 0  result = 0.00012368
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.587208f;
    data->d[1] = 0.959151f;
    data->d[2] = -1.397658f;
    data->d[3] = -0.527249f;
    data->d[4] = 0.061311f;
    data->d[5] = 3.285598f;
    data->d[6] = 0.079792f;
    data->d[7] = -0.528583f;
    data->d[8] = -1.850002f;
    data->d[9] = 0.992064f;
    data->d[10] = 1.573103f;
    data->d[11] = -0.435247f;
    data->d[12] = -0.302260f;
    data->d[13] = -2.054968f;
    data->d[14] = -0.770543f;
    data->d[15] = -3.889101f;
    data->d[16] = -2.501133f;
    data->d[17] = 1.940964f;
    data->d[18] = -0.293516f;
    data->d[19] = 0.980549f;
    data->d[20] = 1.895974f;
    data->d[21] = 0.409362f;
    data->d[22] = 1.083789f;
    data->d[23] = -0.361300f;
    data->d[24] = 0.013490f;
    data->d[25] = -1.091742f;
    data->d[26] = 0.362847f;
    data->d[27] = -0.129600f;
    data->d[28] = -1.239005f;
    data->d[29] = -1.948304f;
    *(result->MinResult()) = 0.000124f;
} // LoadVariation0

// Variation: 1  result = 0.00013721
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.830689f;
    data->d[1] = 1.466241f;
    data->d[2] = 0.736789f;
    data->d[3] = 1.254193f;
    data->d[4] = -0.007369f;
    data->d[5] = -0.904294f;
    data->d[6] = 0.966612f;
    data->d[7] = 1.243192f;
    data->d[8] = 0.272121f;
    data->d[9] = -0.923096f;
    data->d[10] = -0.237722f;
    data->d[11] = 1.384040f;
    data->d[12] = -0.368652f;
    data->d[13] = -1.940892f;
    data->d[14] = -0.358989f;
    data->d[15] = 2.055519f;
    data->d[16] = 1.785768f;
    data->d[17] = -0.893322f;
    data->d[18] = 0.520370f;
    data->d[19] = 0.230443f;
    data->d[20] = -0.608199f;
    data->d[21] = 1.215314f;
    data->d[22] = 0.316579f;
    data->d[23] = -0.621942f;
    data->d[24] = -0.093548f;
    data->d[25] = -1.845713f;
    data->d[26] = 1.017520f;
    data->d[27] = -0.325811f;
    data->d[28] = 1.018253f;
    data->d[29] = 0.484387f;
    *(result->MinResult()) = 0.000137f;
} // LoadVariation1

// Variation: 2  result = 0.00008881
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.444683f;
    data->d[1] = -1.045798f;
    data->d[2] = 1.042027f;
    data->d[3] = -1.485755f;
    data->d[4] = -0.085410f;
    data->d[5] = -0.353994f;
    data->d[6] = 0.191721f;
    data->d[7] = 1.868685f;
    data->d[8] = -1.502195f;
    data->d[9] = -1.429589f;
    data->d[10] = -0.785912f;
    data->d[11] = -0.707527f;
    data->d[12] = -1.714065f;
    data->d[13] = -0.830970f;
    data->d[14] = 0.208852f;
    data->d[15] = 6.286856f;
    data->d[16] = 1.049752f;
    data->d[17] = -0.195408f;
    data->d[18] = 1.645019f;
    data->d[19] = 1.327171f;
    data->d[20] = 1.980988f;
    data->d[21] = 0.792027f;
    data->d[22] = 0.866539f;
    data->d[23] = 0.829305f;
    data->d[24] = -0.362458f;
    data->d[25] = -0.985325f;
    data->d[26] = -0.055143f;
    data->d[27] = 0.158290f;
    data->d[28] = 0.165456f;
    data->d[29] = 1.345012f;
    *(result->MinResult()) = 0.000089f;
} // LoadVariation2

// END //

inline float Evaluate(const FireStarterData& testData, float n)
{
    FireStarterData data = testData;
// EVALUATE //
    n += data[0];
    n = data[1] *= n;
    n *= data[2];
    n = data[3] *= n;
    n = data[4] *= n;
    n = data[5] += n;
    n = data[6] *= n;
    n = data[7] += n;
    n = data[8] += n;
    n = data[9] *= n;
    n = data[10] += n;
    n = data[1] *= n;
    n *= data[4];
    n *= data[11];
    n = data[12] += n;
    n = data[13] *= n;
    n *= data[5];
    n *= data[14];
    n += data[15];
    n *= data[6];
    n *= data[12];
    n *= data[9];
    n = data[10] += n;
    n *= data[1];
    n *= data[13];
    n *= data[8];
    n *= data[10];
    n *= data[3];
    n += data[16];
    n *= data[17];
    n *= data[7];
    n += data[18];
// END //
    return n;
} // Evaluate

inline bool TestEvaluate(const FireStarterData& data, const float target[], const float theta[], float& result)
{
    float maxResult = result;
    result = 0.0f;
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++) {
        float n = fabsf(Evaluate(data, theta[i]) - target[i]);
        if (!isfinite(n) || (n > maxResult)) {
            result = maxResult;
            return false;
        } else
            result = fmaxf(n, result);
    }
    return true;
} // TestEvaluate

GPU_GLOBAL void Optimizer(FireStarterPopulation* newResults, const FireStarterPopulation* oldResults, const unsigned int variation, const unsigned int registers, const unsigned long long optimizationSeed, const unsigned long long optimizationPass)
{
    // Determine the member to be optimized.
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= FIRESTARTER_POPULATION)
        return;

    // Precalculate the target theta values and target samples.
    float theta[FIRESTARTER_SAMPLES];
    float target[FIRESTARTER_SAMPLES];
    float sampleStep = (TARGET_MAX - TARGET_MIN) / (FIRESTARTER_SAMPLES - 1);
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++) {
        float t = theta[i] = TARGET_MIN + i * sampleStep;
        target[i] = Target(t, variation);
    }

    // Evolve the program registers for each variation.
    unsigned long long seed = optimizationSeed + SEED10(variation) + SEED11(member); // Unique seed for the generation/variation/member
    FireStarterData data;
    unsigned short dataAge;
    float result, memberResult;
    float evolutionScale;

    // The first generation is initalized with random numbers.
    if (!optimizationPass) {
        evolutionScale = FIRESTARTER_START_SCALE;
        dataAge = 0;
        memberResult = FIRESTARTER_START_RESULT;
        for (int i = 0; i < 10; i++) {
            data.Init(seed, evolutionScale);
            result = memberResult;
            if (TestEvaluate(data, target, theta, result))
                break;
        }
    } else {
        // Later generations randomize a single register if they were copied.
        data.Copy(oldResults->Data(member, variation));
        dataAge = oldResults->DataAge(member, variation);
        if (dataAge > 1) {
            // Randomize a single register.
            evolutionScale = FIRESTARTER_START_SCALE;
            unsigned int d = RANDOMMOD(seed, registers);
            float oldData = data[d];
            data[d] = oldData + RANDOMFACTOR(seed) * evolutionScale * (dataAge - 1);
            memberResult = FIRESTARTER_START_RESULT;
            result = 1.0e+6f;
            if (!TestEvaluate(data, target, theta, result)) {
                data[d] = oldData;
                result = memberResult = oldResults->MinResult(member, variation);
            }
        } else {
            result = memberResult = oldResults->MinResult(member, variation);
            evolutionScale = FIRESTARTER_SCALE * memberResult;
        }
    }

    // Iterate to evolve the registers.
    for (unsigned int p = 0; p < FIRESTARTER_ITERATIONS; p++) {
        unsigned int d = RANDOMMOD(seed, registers);
        float oldData = data[d];
        data[d] = oldData + evolutionScale * RANDOMFACTOR(seed);
        float curResult = result * 0.99f;
        if (TestEvaluate(data, target, theta, curResult) && (curResult <= result))
            result = curResult;
        else
            data[d] = oldData;
    }

    // Save the results if they improved or switch to another member's old results.
    unsigned short age;
    if (!optimizationPass || (result < memberResult)) {
        // If the result was better, save the results.
        age = 0;
    } else {
        // If the result was worse, copy a result from among the previous generation's results.
        unsigned int bestCandidate = member;

        // The genetic part of genetic programming and a major optimization:
        // Copy the best data from among a random set of candidates.
        for (int i = 0; i < FIRESTARTER_CANDIDATES; i++) {
            // Select evolving members with results better than the current result.
            unsigned int candidate = RANDOMMOD(seed, FIRESTARTER_POPULATION);
            unsigned short candidateAge = oldResults->DataAge(candidate, variation);
            if (candidateAge <= 1) {
                float candidateResult = oldResults->MinResult(candidate, variation);
                if (candidateResult <= result) {
                    bestCandidate = candidate;
                    result = candidateResult;
                }
            }
        }

        // Switch to the selected member's data and results.
        age = 1;
        if (bestCandidate != member) {
            age += MAX(dataAge, 1);
            data = *oldResults->Data(bestCandidate, variation);
        }
    }
    newResults->InitMemberResult(data, member, variation, result, age);
} // Optimizer

