#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

// VARIATIONS //
// Run date: 07/06/24 10:35:09 Pacific Daylight Time
// Run duration = 949.423566 seconds
// Run generation = 163
// Run evolution = 9
// Run max result = 0.00000048
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
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

// Variation: 0  result = 0.00000009
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.216368f;
    data->d[2] = -0.168463f;
    data->d[3] = 1.656462f;
    data->d[4] = 0.639403f;
    data->d[5] = 0.665626f;
    data->d[6] = 0.805446f;
    data->d[7] = 0.022195f;
    data->d[8] = -2.677966f;
    data->d[9] = 1.014238f;
    data->d[10] = -1.119291f;
    data->d[11] = 0.560145f;
    data->d[12] = 2.426546f;
    data->d[13] = 1.899703f;
    data->d[14] = 4.062001f;
    data->d[15] = 0.521367f;
    data->d[16] = 0.274505f;
    data->d[17] = 1.606865f;
    data->d[18] = 0.482074f;
    data->d[19] = 0.030898f;
    data->d[20] = -0.686223f;
    data->d[21] = 0.021203f;
    data->d[22] = -1.856494f;
    data->d[23] = 1.113131f;
    data->d[24] = 1.010640f;
    data->d[25] = -1.069952f;
    data->d[26] = -1.932751f;
    data->d[27] = 0.986269f;
    data->d[28] = 1.772741f;
    data->d[29] = 0.053639f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000048
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090658f;
    data->d[1] = -0.113239f;
    data->d[2] = 0.234600f;
    data->d[3] = 0.610134f;
    data->d[4] = -0.767097f;
    data->d[5] = 1.360004f;
    data->d[6] = 0.686956f;
    data->d[7] = 1.151199f;
    data->d[8] = -1.594815f;
    data->d[9] = -0.898461f;
    data->d[10] = 2.885136f;
    data->d[11] = -1.783114f;
    data->d[12] = -0.582225f;
    data->d[13] = -0.531008f;
    data->d[14] = 0.978295f;
    data->d[15] = -0.182777f;
    data->d[16] = 0.031822f;
    data->d[17] = 4.023160f;
    data->d[18] = 4.337224f;
    data->d[19] = -0.921149f;
    data->d[20] = -1.290670f;
    data->d[21] = -1.307031f;
    data->d[22] = 0.287335f;
    data->d[23] = -0.849180f;
    data->d[24] = 0.180917f;
    data->d[25] = 1.761295f;
    data->d[26] = -1.204113f;
    data->d[27] = 0.086281f;
    data->d[28] = 0.121933f;
    data->d[29] = 1.589512f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000013
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.345837f;
    data->d[2] = 0.625646f;
    data->d[3] = -2.952000f;
    data->d[4] = 5.098838f;
    data->d[5] = 0.005084f;
    data->d[6] = -0.115310f;
    data->d[7] = 1.744506f;
    data->d[8] = -0.627625f;
    data->d[9] = -4.670576f;
    data->d[10] = 6.977642f;
    data->d[11] = -4.154731f;
    data->d[12] = -1.581211f;
    data->d[13] = -3.784587f;
    data->d[14] = 0.149154f;
    data->d[15] = -2.370118f;
    data->d[16] = 0.790539f;
    data->d[17] = 2.795786f;
    data->d[18] = 1.157910f;
    data->d[19] = -3.290479f;
    data->d[20] = -0.204276f;
    data->d[21] = -0.148567f;
    data->d[22] = -1.985771f;
    data->d[23] = 0.448504f;
    data->d[24] = -1.387717f;
    data->d[25] = 1.291595f;
    data->d[26] = -1.558308f;
    data->d[27] = -1.899141f;
    data->d[28] = -1.721263f;
    data->d[29] = 1.230085f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation2

// END //

inline float Evaluate(const FireStarterData& testData, float n)
{
    FireStarterData data = testData;
// EVALUATE //
    n = data[0] += n;
    n = data[1] *= n;
    n = data[1] += n;
    n *= data[2];
    n = data[1] *= n;
    n *= data[3];
    n += data[4];
    n = data[5] *= n;
    n *= data[6];
    n = data[7] *= n;
    n += data[8];
    n = data[7] *= n;
    n *= data[9];
    n = data[10] *= n;
    n += data[11];
    n *= data[5];
    n = data[12] += n;
    n *= data[12];
    n *= data[1];
    n += data[13];
    n += data[10];
    n *= data[14];
    n *= data[15];
    n = data[16] *= n;
    n += data[7];
    n += data[17];
    n *= data[18];
    n *= data[16];
    n *= data[0];
    n += data[19];
    n *= data[20];
    n += data[21];
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

GPU_GLOBAL void Optimizer(FireStarterPopulation* newResults, const FireStarterPopulation* oldResults, const unsigned int v, const unsigned int registers, const unsigned long long optimizationSeed, const unsigned long long optimizationPass)
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
        target[i] = Target(t, v);
    }

    // Evolve the program registers for each variation.
    unsigned long long seed = optimizationSeed + SEED10(v) + SEED11(member); // Unique seed for the generation/variation/member
    FireStarterData data;
    unsigned int memberAge;
    float result, memberResult;
    float evolutionScale;

    // The first generation is initalized with random numbers.
    if (!optimizationPass) {
        evolutionScale = FIRESTARTER_START_SCALE;
        memberAge = 0;
        memberResult = FIRESTARTER_START_RESULT;
        for (int i = 0; i < 10; i++) {
            data.Init(seed, evolutionScale);
            result = memberResult;
            if (TestEvaluate(data, target, theta, result))
                break;
        }
    } else {
        // Later generations randomize a single register if they were copied.
        data.Copy(oldResults->Data(member, v));
        memberAge = oldResults->Age(member, v);
        if (memberAge > 1) {
            // Randomize a single register.
            evolutionScale = FIRESTARTER_START_SCALE;
            unsigned int d = RANDOMMOD(seed, registers);
            float oldData = data[d];
            data[d] = oldData + RANDOMFACTOR(seed) * evolutionScale * (memberAge - 1);
            memberResult = FIRESTARTER_START_RESULT;
            result = 1.0e+6f;
            if (!TestEvaluate(data, target, theta, result)) {
                data[d] = oldData;
                result = memberResult = oldResults->MinResult(member, v);
            }
        } else {
            result = memberResult = oldResults->MinResult(member, v);
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
    unsigned int age;
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
            unsigned int candidateAge = oldResults->Age(candidate, v);
            if (candidateAge <= 1) {
                float candidateResult = oldResults->MinResult(candidate, v);
                if (candidateResult <= result) {
                    bestCandidate = candidate;
                    result = candidateResult;
                }
            }
        }

        // Switch to the selected member's data and results.
        age = 1;
        if (bestCandidate != member) {
            age += MAX(memberAge, 1);
            data = *oldResults->Data(bestCandidate, v);
        }
    }
    newResults->InitMemberResult(member, v, age, result, data);
} // Optimizer

