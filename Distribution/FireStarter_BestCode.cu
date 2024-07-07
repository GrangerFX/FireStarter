#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

// VARIATIONS //
// Run date: 07/07/24 14:43:55 Pacific Daylight Time
// Run duration = 16.452975 seconds
// Run generation = 0
// Run evolution = 0
// Run max result = 0.00590945
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_GPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 0
// Run streams = 1
// Run units = 1
// Run states = 1
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

// Variation: 0  result = 0.00047696
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.751299f;
    data->d[1] = 0.392088f;
    data->d[2] = -1.119865f;
    data->d[3] = -1.415588f;
    data->d[4] = 1.206558f;
    data->d[5] = 1.406577f;
    data->d[6] = 0.194628f;
    data->d[7] = 1.686949f;
    data->d[8] = 0.053813f;
    data->d[9] = -1.514560f;
    data->d[10] = 0.200447f;
    data->d[11] = -0.547208f;
    data->d[12] = -1.575806f;
    data->d[13] = -0.782626f;
    data->d[14] = -1.025286f;
    data->d[15] = 0.174049f;
    data->d[16] = 1.549561f;
    data->d[17] = 0.754187f;
    data->d[18] = 0.395467f;
    data->d[19] = 0.230874f;
    data->d[20] = -1.748804f;
    data->d[21] = 0.486544f;
    data->d[22] = -0.678238f;
    data->d[23] = -1.390294f;
    data->d[24] = -0.633824f;
    data->d[25] = 1.627997f;
    data->d[26] = -1.787240f;
    data->d[27] = -1.443422f;
    data->d[28] = -0.449304f;
    data->d[29] = -0.386482f;
    *(result->MinResult()) = 0.000477f;
} // LoadVariation0

// Variation: 1  result = 0.00156951
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.263697f;
    data->d[1] = 0.779758f;
    data->d[2] = 0.429622f;
    data->d[3] = -1.982975f;
    data->d[4] = -0.146030f;
    data->d[5] = 0.255715f;
    data->d[6] = 0.005175f;
    data->d[7] = -0.624518f;
    data->d[8] = 0.638269f;
    data->d[9] = 0.328222f;
    data->d[10] = -1.931507f;
    data->d[11] = 1.015492f;
    data->d[12] = -1.296841f;
    data->d[13] = -1.720746f;
    data->d[14] = -0.828042f;
    data->d[15] = 0.951709f;
    data->d[16] = -0.014069f;
    data->d[17] = 0.358262f;
    data->d[18] = 0.550321f;
    data->d[19] = 0.634898f;
    data->d[20] = -1.865885f;
    data->d[21] = 1.926578f;
    data->d[22] = 0.741785f;
    data->d[23] = -0.882788f;
    data->d[24] = -0.830041f;
    data->d[25] = -1.434281f;
    data->d[26] = 1.004565f;
    data->d[27] = 0.543859f;
    data->d[28] = -1.407439f;
    data->d[29] = -0.398529f;
    *(result->MinResult()) = 0.001570f;
} // LoadVariation1

// Variation: 2  result = 0.00590945
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.879469f;
    data->d[1] = -0.907394f;
    data->d[2] = 1.239916f;
    data->d[3] = 1.103013f;
    data->d[4] = -0.931857f;
    data->d[5] = -0.744797f;
    data->d[6] = 0.588586f;
    data->d[7] = 0.736395f;
    data->d[8] = -1.580989f;
    data->d[9] = 0.612583f;
    data->d[10] = 1.407750f;
    data->d[11] = -1.372962f;
    data->d[12] = -0.899546f;
    data->d[13] = 0.666478f;
    data->d[14] = 0.909962f;
    data->d[15] = 0.393364f;
    data->d[16] = -1.702320f;
    data->d[17] = 1.319244f;
    data->d[18] = -0.841720f;
    data->d[19] = 0.244337f;
    data->d[20] = 1.284875f;
    data->d[21] = 0.968977f;
    data->d[22] = 1.488330f;
    data->d[23] = -1.351028f;
    data->d[24] = 1.832232f;
    data->d[25] = 1.226925f;
    data->d[26] = 1.970096f;
    data->d[27] = 0.279739f;
    data->d[28] = -1.232596f;
    data->d[29] = 1.510971f;
    *(result->MinResult()) = 0.005909f;
} // LoadVariation2

// END //

inline bool TestEvaluate(FireStarterSharedData& sharedData, const FireStarterData& data, const FireStarterCode& code, const float target[], const float theta[], float& result)
{
    float maxResult = result;
    result = 0.0f;
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++) {
        sharedData = data;
        float n = fabsf(code.Evaluate(sharedData,theta[i]) - target[i]);
        if (!isfinite(n) || (n > maxResult)) {
            result = maxResult;
            return false;
        } else
            result = fmaxf(n, result);
    }
    return true;
} // TestEvaluate

GPU_GLOBAL void Evolver(FireStarterPopulation* newResults, const FireStarterPopulation* oldResults, const unsigned int variation, const unsigned int registers, const unsigned long long evolutionSeed, const unsigned long long evolutionPass)
{
    // Determine the member to be optimized.
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= FIRESTARTER_POPULATION)
        return;

    // The shared data for the threads in the warp.
    GPU_SHARED FireStarterSharedData sharedData;

    // Precalculate the target theta values and target samples.
    float theta[FIRESTARTER_SAMPLES];
    float target[FIRESTARTER_SAMPLES];
    float sampleStep = (TARGET_MAX - TARGET_MIN) / (FIRESTARTER_SAMPLES - 1);
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++) {
        float t = theta[i] = TARGET_MIN + i * sampleStep;
        target[i] = Target(t, variation);
    }

    // Evolve the program registers for each variation.
    unsigned long long seed = evolutionSeed + SEED10(variation) + SEED11(member); // Unique seed for the generation/variation/member
    FireStarterData data;
    FireStarterCode code;
    unsigned int memberAge;
    float result, memberResult;
    float evolutionScale;

    // The first generation is initalized with random numbers.
    if (!evolutionPass) {
        evolutionScale = FIRESTARTER_START_SCALE;
        memberAge = 0;
        memberResult = FIRESTARTER_START_RESULT;
        for (int i = 0; i < 10; i++) {
            data.Init(seed, evolutionScale);
            code.Init(seed);
            result = memberResult;
            if (TestEvaluate(sharedData, data, code, target, theta, result))
                break;
        }
    } else {
        // Later generations randomize a single register if they were copied.
        data.Copy(oldResults->Data(member, variation));
        code.Copy(oldResults->Code(member, variation));
        memberAge = oldResults->Age(member, variation);
        if (memberAge > 1) {
            // Randomize a single register.
            evolutionScale = FIRESTARTER_START_SCALE;
            unsigned int d = RANDOMMOD(seed, registers);
            float oldData = data[d];
            data[d] = oldData + RANDOMFACTOR(seed) * evolutionScale * (memberAge - 1);

            unsigned int c = RANDOMMOD(seed, FIRESTARTER_INSTRUCTIONS);
            unsigned int oldCode = code[c];
            code[c] = RANDOMMOD(seed, FIRESTARTER_REGISTERS * 2);

            memberResult = FIRESTARTER_START_RESULT;
            result = 1.0e+6f;
            if (!TestEvaluate(sharedData, data, code, target, theta, result)) {
                data[d] = oldData;
                code[c] = oldCode;
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

        unsigned int c = RANDOMMOD(seed, FIRESTARTER_INSTRUCTIONS);
        unsigned int oldCode = code[c];
        code[c] = RANDOMMOD(seed, FIRESTARTER_REGISTERS * 2);

        float curResult = result;
        if (TestEvaluate(sharedData, data, code, target, theta, curResult))
            result = curResult;
        else {
            data[d] = oldData;
            code[c] = oldCode;
        }
    }

    // Save the results if they improved or switch to another member's old results.
    unsigned int age;
    if (!evolutionPass || (result < memberResult)) {
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
            unsigned int candidateAge = oldResults->Age(candidate, variation);
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
            age += MAX(memberAge, 1);
            data = *oldResults->Data(bestCandidate, variation);
            code = *oldResults->Code(bestCandidate, variation);
        }
    }
    newResults->InitMemberResult(member, variation, age, result, data, code);
} // Evolver
