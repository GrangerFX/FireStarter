#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

// VARIATIONS //
// Run date: 07/07/24 17:14:31 Pacific Daylight Time
// Run duration = 8.563230 seconds
// Run generation = 1
// Run evolution = 0
// Run max result = 0.01166880
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

// Variation: 0  result = 0.00344813
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 4.158548f;
    data->d[1] = -1.791874f;
    data->d[2] = 0.931641f;
    data->d[3] = 0.819146f;
    data->d[4] = -0.181877f;
    data->d[5] = 0.395801f;
    data->d[6] = 0.840447f;
    data->d[7] = 1.544009f;
    data->d[8] = 1.443981f;
    data->d[9] = 1.296705f;
    data->d[10] = -1.467497f;
    data->d[11] = 0.364171f;
    data->d[12] = 0.161075f;
    data->d[13] = -1.634765f;
    data->d[14] = -1.522668f;
    data->d[15] = 0.094521f;
    data->d[16] = -0.574274f;
    data->d[17] = -1.105093f;
    data->d[18] = -1.137873f;
    data->d[19] = -1.492779f;
    data->d[20] = -0.360393f;
    data->d[21] = -0.005272f;
    data->d[22] = -0.697368f;
    data->d[23] = 1.465159f;
    data->d[24] = -0.018219f;
    data->d[25] = 0.535623f;
    data->d[26] = -0.475397f;
    data->d[27] = 0.377075f;
    data->d[28] = -1.013154f;
    data->d[29] = 0.869343f;
    *(result->MinResult()) = 0.003448f;
} // LoadVariation0

// Variation: 1  result = 0.00461155
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -26.594036f;
    data->d[1] = 0.646809f;
    data->d[2] = -0.168090f;
    data->d[3] = 1.032920f;
    data->d[4] = -1.365311f;
    data->d[5] = 1.737496f;
    data->d[6] = -0.613070f;
    data->d[7] = -1.713983f;
    data->d[8] = -1.184930f;
    data->d[9] = 0.664324f;
    data->d[10] = -1.400112f;
    data->d[11] = 0.743579f;
    data->d[12] = -1.442839f;
    data->d[13] = 1.502262f;
    data->d[14] = -1.666623f;
    data->d[15] = 0.206803f;
    data->d[16] = -0.870699f;
    data->d[17] = -0.588570f;
    data->d[18] = 0.157424f;
    data->d[19] = -0.044145f;
    data->d[20] = -1.578264f;
    data->d[21] = -0.888576f;
    data->d[22] = -0.643659f;
    data->d[23] = 0.777590f;
    data->d[24] = -0.776131f;
    data->d[25] = -0.798221f;
    data->d[26] = 1.546963f;
    data->d[27] = -0.089976f;
    data->d[28] = 1.438396f;
    data->d[29] = -1.112669f;
    *(result->MinResult()) = 0.004612f;
} // LoadVariation1

// Variation: 2  result = 0.01166880
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.883068f;
    data->d[1] = 0.632133f;
    data->d[2] = 0.774265f;
    data->d[3] = -0.174707f;
    data->d[4] = -0.324581f;
    data->d[5] = -0.010600f;
    data->d[6] = -1.195837f;
    data->d[7] = -0.883105f;
    data->d[8] = -0.187933f;
    data->d[9] = 0.704203f;
    data->d[10] = -1.692166f;
    data->d[11] = 1.421393f;
    data->d[12] = -1.607787f;
    data->d[13] = 0.043995f;
    data->d[14] = -0.926494f;
    data->d[15] = 1.842345f;
    data->d[16] = 0.606178f;
    data->d[17] = 1.830710f;
    data->d[18] = -1.667878f;
    data->d[19] = 0.445340f;
    data->d[20] = 1.427652f;
    data->d[21] = 1.510265f;
    data->d[22] = -1.972761f;
    data->d[23] = -0.141850f;
    data->d[24] = 0.331308f;
    data->d[25] = -1.848811f;
    data->d[26] = 1.246096f;
    data->d[27] = 1.590803f;
    data->d[28] = 1.001831f;
    data->d[29] = 0.274338f;
    *(result->MinResult()) = 0.011669f;
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
    unsigned long long seed = evolutionSeed + SEED10(variation) + SEED11(member / 32); // Unique seed for the generation/variation/member
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
