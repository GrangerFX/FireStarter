#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

// VARIATIONS //
// Run date: 07/07/24 15:49:55 Pacific Daylight Time
// Run duration = 16.929928 seconds
// Run generation = 1
// Run evolution = 0
// Run max result = 0.00597732
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

// Variation: 0  result = 0.00005618
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 1.862691f;
    data->d[2] = -0.912601f;
    data->d[3] = -0.565746f;
    data->d[4] = -0.075265f;
    data->d[5] = -0.336512f;
    data->d[6] = 1.460287f;
    data->d[7] = -1.842518f;
    data->d[8] = -0.713224f;
    data->d[9] = 1.413094f;
    data->d[10] = 1.575260f;
    data->d[11] = -0.149851f;
    data->d[12] = 1.513755f;
    data->d[13] = 0.557923f;
    data->d[14] = 0.638541f;
    data->d[15] = -0.309939f;
    data->d[16] = -0.723720f;
    data->d[17] = -1.099841f;
    data->d[18] = 1.165641f;
    data->d[19] = 0.095255f;
    data->d[20] = -1.722824f;
    data->d[21] = 0.427276f;
    data->d[22] = -0.085171f;
    data->d[23] = 0.032140f;
    data->d[24] = -0.490260f;
    data->d[25] = -0.665613f;
    data->d[26] = -1.083301f;
    data->d[27] = 1.752919f;
    data->d[28] = 1.685471f;
    data->d[29] = -0.472344f;
    *(result->MinResult()) = 0.000056f;
} // LoadVariation0

// Variation: 1  result = 0.00106907
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -8.075491f;
    data->d[1] = -0.238357f;
    data->d[2] = -1.052357f;
    data->d[3] = 1.348420f;
    data->d[4] = 0.018155f;
    data->d[5] = -0.003990f;
    data->d[6] = -1.249227f;
    data->d[7] = 0.638229f;
    data->d[8] = 1.956555f;
    data->d[9] = -1.875178f;
    data->d[10] = 0.906152f;
    data->d[11] = 1.841402f;
    data->d[12] = 1.201421f;
    data->d[13] = 1.329411f;
    data->d[14] = 0.104160f;
    data->d[15] = 0.123590f;
    data->d[16] = -1.973751f;
    data->d[17] = 1.481723f;
    data->d[18] = 0.503975f;
    data->d[19] = 1.802208f;
    data->d[20] = -0.280411f;
    data->d[21] = -0.384421f;
    data->d[22] = -0.393243f;
    data->d[23] = -1.221376f;
    data->d[24] = -0.497844f;
    data->d[25] = 0.206886f;
    data->d[26] = 0.144261f;
    data->d[27] = -1.092851f;
    data->d[28] = 1.980691f;
    data->d[29] = -1.652503f;
    *(result->MinResult()) = 0.001069f;
} // LoadVariation1

// Variation: 2  result = 0.00597732
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 11.240477f;
    data->d[1] = -0.361335f;
    data->d[2] = 0.736704f;
    data->d[3] = 0.894994f;
    data->d[4] = 0.853286f;
    data->d[5] = -1.947450f;
    data->d[6] = -1.893926f;
    data->d[7] = -0.094345f;
    data->d[8] = 1.483991f;
    data->d[9] = -1.586013f;
    data->d[10] = 1.332924f;
    data->d[11] = 0.344416f;
    data->d[12] = 0.045441f;
    data->d[13] = 1.873188f;
    data->d[14] = -0.233447f;
    data->d[15] = 0.971810f;
    data->d[16] = -0.104477f;
    data->d[17] = 1.646369f;
    data->d[18] = -0.316175f;
    data->d[19] = -0.549740f;
    data->d[20] = 0.018444f;
    data->d[21] = 0.146629f;
    data->d[22] = 0.463197f;
    data->d[23] = -0.587757f;
    data->d[24] = 0.075362f;
    data->d[25] = 0.699738f;
    data->d[26] = 1.168010f;
    data->d[27] = -0.217128f;
    data->d[28] = -1.896342f;
    data->d[29] = -0.511428f;
    *(result->MinResult()) = 0.005977f;
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
            FireStarterCodeInstruction oldCode = code[c];
            code.RandomInstruction(seed, c);

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
        FireStarterCodeInstruction oldCode = code[c];
        code.RandomInstruction(seed, c);

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
