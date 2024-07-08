#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

// VARIATIONS //
// Run date: 07/07/24 17:08:27 Pacific Daylight Time
// Run duration = 3.376676 seconds
// Run generation = 0
// Run evolution = 0
// Run max result = 0.24178070
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

// Variation: 0  result = 0.19452927
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.102747f;
    data->d[1] = -0.093929f;
    data->d[2] = 1.236203f;
    data->d[3] = -0.384861f;
    data->d[4] = 1.782423f;
    data->d[5] = -0.379306f;
    data->d[6] = -1.088641f;
    data->d[7] = -0.787806f;
    data->d[8] = -1.571840f;
    data->d[9] = 1.639267f;
    data->d[10] = -1.843393f;
    data->d[11] = 1.363181f;
    data->d[12] = 0.976947f;
    data->d[13] = 0.161256f;
    data->d[14] = -0.574698f;
    data->d[15] = 0.618116f;
    data->d[16] = 0.988588f;
    data->d[17] = -1.552721f;
    data->d[18] = 1.722989f;
    data->d[19] = 1.006034f;
    data->d[20] = -0.564143f;
    data->d[21] = 0.536464f;
    data->d[22] = 0.161262f;
    data->d[23] = 1.026260f;
    data->d[24] = 1.329287f;
    data->d[25] = -1.254499f;
    data->d[26] = -0.259315f;
    data->d[27] = 0.061539f;
    data->d[28] = -1.507015f;
    data->d[29] = -1.151422f;
    *(result->MinResult()) = 0.194529f;
} // LoadVariation0

// Variation: 1  result = 0.17402852
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.142885f;
    data->d[1] = 0.121605f;
    data->d[2] = -0.736805f;
    data->d[3] = -0.402302f;
    data->d[4] = 0.977600f;
    data->d[5] = -0.050075f;
    data->d[6] = -0.926587f;
    data->d[7] = 1.620855f;
    data->d[8] = 1.220956f;
    data->d[9] = -0.921138f;
    data->d[10] = 0.363036f;
    data->d[11] = 1.907075f;
    data->d[12] = -1.194769f;
    data->d[13] = 1.652465f;
    data->d[14] = -0.845397f;
    data->d[15] = 1.417747f;
    data->d[16] = 0.441199f;
    data->d[17] = 0.013967f;
    data->d[18] = -1.397136f;
    data->d[19] = -0.882978f;
    data->d[20] = 1.101715f;
    data->d[21] = 0.897336f;
    data->d[22] = -0.253255f;
    data->d[23] = 1.652063f;
    data->d[24] = -1.882921f;
    data->d[25] = 1.705385f;
    data->d[26] = -0.046175f;
    data->d[27] = 0.646224f;
    data->d[28] = -0.215120f;
    data->d[29] = -1.956422f;
    *(result->MinResult()) = 0.174029f;
} // LoadVariation1

// Variation: 2  result = 0.24178070
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.560075f;
    data->d[1] = 0.245819f;
    data->d[2] = 0.109986f;
    data->d[3] = -1.079880f;
    data->d[4] = 1.249560f;
    data->d[5] = 0.093337f;
    data->d[6] = -0.394885f;
    data->d[7] = 0.410618f;
    data->d[8] = 0.002979f;
    data->d[9] = 0.178801f;
    data->d[10] = 0.974348f;
    data->d[11] = -0.232903f;
    data->d[12] = 1.556085f;
    data->d[13] = -0.326257f;
    data->d[14] = -1.464386f;
    data->d[15] = -0.756336f;
    data->d[16] = 0.923379f;
    data->d[17] = -1.125504f;
    data->d[18] = 1.278494f;
    data->d[19] = 1.360131f;
    data->d[20] = -1.018479f;
    data->d[21] = 1.922268f;
    data->d[22] = 0.825463f;
    data->d[23] = -0.932750f;
    data->d[24] = -1.455825f;
    data->d[25] = 0.990814f;
    data->d[26] = 1.816541f;
    data->d[27] = 0.969874f;
    data->d[28] = 0.822130f;
    data->d[29] = -1.562302f;
    *(result->MinResult()) = 0.241781f;
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
