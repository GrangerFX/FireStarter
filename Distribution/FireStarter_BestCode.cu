#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

// VARIATIONS //
// Run date: 07/07/24 15:10:44 Pacific Daylight Time
// Run duration = 20.385544 seconds
// Run generation = 1
// Run evolution = 0
// Run max result = 0.00068551
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

// Variation: 0  result = 0.00031847
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.211146f;
    data->d[1] = -1.648608f;
    data->d[2] = -1.504500f;
    data->d[3] = -1.704637f;
    data->d[4] = 1.671766f;
    data->d[5] = 0.242739f;
    data->d[6] = 0.835948f;
    data->d[7] = -0.102448f;
    data->d[8] = 1.006267f;
    data->d[9] = 0.515576f;
    data->d[10] = 0.275795f;
    data->d[11] = 1.412295f;
    data->d[12] = 0.198529f;
    data->d[13] = -1.127881f;
    data->d[14] = -1.906217f;
    data->d[15] = -1.487615f;
    data->d[16] = 0.176234f;
    data->d[17] = 0.730959f;
    data->d[18] = 1.196638f;
    data->d[19] = 0.029181f;
    data->d[20] = -1.011458f;
    data->d[21] = -0.405334f;
    data->d[22] = -0.379871f;
    data->d[23] = -0.183779f;
    data->d[24] = -1.993109f;
    data->d[25] = 0.897745f;
    data->d[26] = -1.464729f;
    data->d[27] = 0.301500f;
    data->d[28] = 1.062662f;
    data->d[29] = 1.348841f;
    *(result->MinResult()) = 0.000318f;
} // LoadVariation0

// Variation: 1  result = 0.00068551
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.920338f;
    data->d[1] = -0.627760f;
    data->d[2] = 0.310252f;
    data->d[3] = 1.129037f;
    data->d[4] = -1.150536f;
    data->d[5] = 1.264158f;
    data->d[6] = -1.439281f;
    data->d[7] = -0.003990f;
    data->d[8] = -1.046571f;
    data->d[9] = 0.411973f;
    data->d[10] = 0.676541f;
    data->d[11] = 0.918928f;
    data->d[12] = -1.170015f;
    data->d[13] = -1.089055f;
    data->d[14] = -0.051041f;
    data->d[15] = -1.068120f;
    data->d[16] = 0.554597f;
    data->d[17] = -0.964944f;
    data->d[18] = 0.407319f;
    data->d[19] = 1.737457f;
    data->d[20] = -1.883371f;
    data->d[21] = 1.405340f;
    data->d[22] = -0.660742f;
    data->d[23] = -1.634851f;
    data->d[24] = 0.071684f;
    data->d[25] = 1.542096f;
    data->d[26] = 1.422525f;
    data->d[27] = -0.220423f;
    data->d[28] = -0.207387f;
    data->d[29] = 0.102998f;
    *(result->MinResult()) = 0.000686f;
} // LoadVariation1

// Variation: 2  result = 0.00059056
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.269403f;
    data->d[1] = 1.539401f;
    data->d[2] = 1.219512f;
    data->d[3] = -1.436373f;
    data->d[4] = -0.062611f;
    data->d[5] = -0.537485f;
    data->d[6] = -1.354040f;
    data->d[7] = -0.607389f;
    data->d[8] = 1.734455f;
    data->d[9] = -0.083710f;
    data->d[10] = -1.095741f;
    data->d[11] = -0.622376f;
    data->d[12] = 0.909617f;
    data->d[13] = -1.838932f;
    data->d[14] = 1.725521f;
    data->d[15] = -1.564656f;
    data->d[16] = 1.311244f;
    data->d[17] = 0.552311f;
    data->d[18] = 0.701853f;
    data->d[19] = 1.042186f;
    data->d[20] = 1.314472f;
    data->d[21] = 0.066399f;
    data->d[22] = 0.119321f;
    data->d[23] = 0.676545f;
    data->d[24] = -1.027821f;
    data->d[25] = -1.837930f;
    data->d[26] = -0.251839f;
    data->d[27] = -1.604743f;
    data->d[28] = -1.071531f;
    data->d[29] = -1.722462f;
    *(result->MinResult()) = 0.000591f;
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
