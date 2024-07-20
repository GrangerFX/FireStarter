#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

// VARIATIONS //
// Run date: 07/13/24 15:37:02 Pacific Daylight Time
// Run duration = 85.291692 seconds
// Run generation = 6
// Run evolution = 0
// Run max result = 0.23798966
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

// Variation: 0  result = 0.19196796
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.738381f;
    data->d[1] = -0.089730f;
    data->d[2] = 1.931301f;
    data->d[3] = 0.184642f;
    data->d[4] = 0.991426f;
    data->d[5] = 0.725155f;
    data->d[6] = -1.220928f;
    data->d[7] = -0.176703f;
    data->d[8] = -0.148528f;
    data->d[9] = -1.885291f;
    data->d[10] = -0.463049f;
    data->d[11] = -1.400245f;
    data->d[12] = -1.787271f;
    data->d[13] = -1.527692f;
    data->d[14] = 0.699599f;
    data->d[15] = 1.637860f;
    data->d[16] = 1.348499f;
    data->d[17] = -1.656228f;
    data->d[18] = 0.301779f;
    data->d[19] = 0.417812f;
    data->d[20] = 1.603227f;
    data->d[21] = -1.973417f;
    data->d[22] = -1.432228f;
    data->d[23] = 0.052455f;
    data->d[24] = -0.489220f;
    data->d[25] = -1.629449f;
    data->d[26] = -0.336638f;
    data->d[27] = -1.708758f;
    data->d[28] = 1.330390f;
    data->d[29] = -1.325168f;
    *(result->MinResult()) = 0.191968f;
} // LoadVariation0

// Variation: 1  result = 0.18506610
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.328629f;
    data->d[1] = -0.113350f;
    data->d[2] = -0.958592f;
    data->d[3] = -1.114465f;
    data->d[4] = -0.827788f;
    data->d[5] = 0.683300f;
    data->d[6] = -0.651721f;
    data->d[7] = -1.132330f;
    data->d[8] = 0.509348f;
    data->d[9] = -0.730097f;
    data->d[10] = 1.664061f;
    data->d[11] = 0.918210f;
    data->d[12] = 1.227092f;
    data->d[13] = -0.642696f;
    data->d[14] = -0.082491f;
    data->d[15] = -1.631889f;
    data->d[16] = 0.581665f;
    data->d[17] = 1.405158f;
    data->d[18] = 1.130542f;
    data->d[19] = 0.298046f;
    data->d[20] = -1.074122f;
    data->d[21] = 0.670691f;
    data->d[22] = -0.746451f;
    data->d[23] = 0.265948f;
    data->d[24] = -0.433481f;
    data->d[25] = -0.194562f;
    data->d[26] = -1.682972f;
    data->d[27] = 1.577868f;
    data->d[28] = 0.700679f;
    data->d[29] = 0.240480f;
    *(result->MinResult()) = 0.185066f;
} // LoadVariation1

// Variation: 2  result = 0.23798966
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.880673f;
    data->d[1] = 1.066142f;
    data->d[2] = -0.610219f;
    data->d[3] = -0.748636f;
    data->d[4] = 0.871106f;
    data->d[5] = 0.727926f;
    data->d[6] = 0.708864f;
    data->d[7] = -1.137021f;
    data->d[8] = 1.348146f;
    data->d[9] = -0.021571f;
    data->d[10] = 1.344514f;
    data->d[11] = 1.517706f;
    data->d[12] = -1.525719f;
    data->d[13] = -1.958613f;
    data->d[14] = 0.785741f;
    data->d[15] = 1.712267f;
    data->d[16] = 1.211053f;
    data->d[17] = 1.328936f;
    data->d[18] = -0.211440f;
    data->d[19] = 1.284768f;
    data->d[20] = -0.638959f;
    data->d[21] = -1.971486f;
    data->d[22] = 1.150060f;
    data->d[23] = 0.599889f;
    data->d[24] = -0.736425f;
    data->d[25] = 1.886217f;
    data->d[26] = -0.849826f;
    data->d[27] = -0.425724f;
    data->d[28] = 1.193032f;
    data->d[29] = -0.499472f;
    *(result->MinResult()) = 0.237990f;
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

#if 1
GPU_GLOBAL void Evolver(FireStarterPopulation * newResults, const FireStarterPopulation * oldResults, const unsigned int variation, const unsigned int registers, const unsigned long long evolutionSeed, const unsigned long long evolutionPass)
{
    // Determine the member to be optimized.
#if 0
    unsigned int codeMember = blockDim.x * blockIdx.x;
#else
    unsigned int codeMember = blockDim.x * blockIdx.x + threadIdx.x;
#endif
    unsigned int dataMember = blockDim.x * blockIdx.x + threadIdx.x;
    if (dataMember >= FIRESTARTER_POPULATION)
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
    unsigned long long dataSeed = evolutionSeed + SEED10(variation) + SEED11(dataMember); // Unique seed for the generation/variation/member
    unsigned long long codeSeed = evolutionSeed + SEED10(variation) + SEED11(codeMember); // Unique seed for the generation/variation/thread block
    FireStarterData data;
    FireStarterCode code;
    unsigned short dataAge = oldResults->DataAge(dataMember, variation);
    unsigned short codeAge = oldResults->CodeAge(codeMember, variation);
    float result, memberResult;
    float evolutionScale;

    // The first generation is initalized with random numbers.
    if (!evolutionPass || (codeAge > 10) || 1) {
        codeAge = 0;
        dataAge = 0;
        evolutionScale = FIRESTARTER_START_SCALE;
        memberResult = FIRESTARTER_START_RESULT;
        for (int i = 0; i < 10; i++) {
            code.Init(codeSeed);
            data.Init(dataSeed, evolutionScale);
            result = memberResult;
            if (TestEvaluate(sharedData, data, code, target, theta, result))
                break;
        }
    } else {
        data.Copy(oldResults->Data(dataMember, variation));
        code.Copy(oldResults->Code(codeMember, variation));
        if (dataAge > 10) {
            // Randomize a single instruction.
            unsigned int c = RANDOMMOD(codeSeed, FIRESTARTER_INSTRUCTIONS);
            FireStarterCodeInstruction oldCode = code[c];
            code.RandomInstruction(codeSeed, c);
            memberResult = FIRESTARTER_START_RESULT;
            for (int i = 0; i < 10; i++) {
                data.Init(dataSeed, evolutionScale);
                result = memberResult;
                if (TestEvaluate(sharedData, data, code, target, theta, result))
                    break;
            }
            dataAge = 0;
            codeAge++;
        } else if (dataAge > 1) {
            evolutionScale = FIRESTARTER_START_SCALE;
            unsigned int d = RANDOMMOD(dataSeed, registers);
            float oldData = data[d];
            data[d] = oldData + RANDOMFACTOR(dataSeed) * evolutionScale * (dataAge - 1);

            result = memberResult = FIRESTARTER_START_RESULT;
            if (!TestEvaluate(sharedData, data, code, target, theta, result)) {
                data[d] = oldData;
                result = memberResult = oldResults->MinResult(dataMember, variation);
            }
            dataAge++;
        } else {
            result = memberResult = oldResults->MinResult(dataMember, variation);
            evolutionScale = FIRESTARTER_SCALE * memberResult;
        }
    }

    // Iterate to evolve the registers.
    for (unsigned int p = 0; p < FIRESTARTER_ITERATIONS; p++) {
        unsigned int d = RANDOMMOD(dataSeed, registers);
        float oldData = data[d];
        data[d] = oldData + evolutionScale * RANDOMFACTOR(dataSeed);
        float curResult = result;
        if (TestEvaluate(sharedData, data, code, target, theta, curResult))
            result = curResult;
        else
            data[d] = oldData;
    }

    // Save the results if they improved or switch to another member's old results.
    if (!evolutionPass || (result < memberResult)) {
        // If the result was better, save the results.
        dataAge = 0;
        codeAge = 0;
    } else {
//        data.Copy(oldResults->Data(dataMember, variation));
//        code.Copy(oldResults->Code(codeMember, variation));
    }
    newResults->InitMemberResult(data, code, dataMember, variation, result, dataAge, codeAge);
} // Evolver
#else
GPU_GLOBAL void Evolver(FireStarterPopulation* newResults, const FireStarterPopulation* oldResults, const unsigned int variation, const unsigned int registers, const unsigned long long evolutionSeed, const unsigned long long evolutionPass)
{
    // Determine the member to be optimized.
#if 0
    unsigned int codeMember = blockDim.x * blockIdx.x;
#else
    unsigned int codeMember = blockDim.x * blockIdx.x + threadIdx.x;
#endif
    unsigned int dataMember = blockDim.x * blockIdx.x + threadIdx.x;
    if (dataMember >= FIRESTARTER_POPULATION)
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
    unsigned long long dataSeed = evolutionSeed + SEED10(variation) + SEED11(dataMember); // Unique seed for the generation/variation/member
    unsigned long long codeSeed = evolutionSeed + SEED10(variation) + SEED11(codeMember); // Unique seed for the generation/variation/thread block
    FireStarterData data;
    FireStarterCode code;
    unsigned short dataAge, codeAge;
    float result, memberResult;
    float evolutionScale;

    // The first generation is initalized with random numbers.
    if (!evolutionPass) {
        code.Init(codeSeed);
        codeAge = 0;
        evolutionScale = FIRESTARTER_START_SCALE;
        dataAge = 0;
        codeAge = 0;
        memberResult = FIRESTARTER_START_RESULT;
        data.Init(dataSeed, evolutionScale);
        result = memberResult;
        TestEvaluate(sharedData, data, code, target, theta, result);
    } else {
        // Later generations randomize a single register if they were copied.
        data.Copy(oldResults->Data(dataMember, variation));
        code.Copy(oldResults->Code(codeMember, variation));
        dataAge = oldResults->DataAge(dataMember, variation);
        codeAge = oldResults->CodeAge(codeMember, variation);
        if (dataAge < 10) {
            if (dataAge > 1) {
                // Randomize a single register.
                evolutionScale = FIRESTARTER_START_SCALE;
                unsigned int d = RANDOMMOD(dataSeed, registers);
                float oldData = data[d];
                data[d] = oldData + RANDOMFACTOR(dataSeed) * evolutionScale * (dataAge - 1);

                memberResult = FIRESTARTER_START_RESULT;
                result = 1.0e+6f;
                if (!TestEvaluate(sharedData, data, code, target, theta, result)) {
                    data[d] = oldData;
                    result = memberResult = oldResults->MinResult(dataMember, variation);
                }
            } else {
                result = memberResult = oldResults->MinResult(dataMember, variation);
                evolutionScale = FIRESTARTER_SCALE * memberResult;
            }
        } else {
            if (codeAge > 10) {
                // Randomize the instructions.
                code.Init(codeSeed);
                codeAge = 0;
                evolutionScale = FIRESTARTER_START_SCALE;
            } else {
                // Randomize a single instruction.
                unsigned int c = RANDOMMOD(codeSeed, FIRESTARTER_INSTRUCTIONS);
                FireStarterCodeInstruction oldCode = code[c];
                code.RandomInstruction(codeSeed, c);
            }
            dataAge = 0;
            result = memberResult = FIRESTARTER_START_RESULT;
            data.Init(dataSeed, evolutionScale);
            TestEvaluate(sharedData, data, code, target, theta, result);
        }
    }

    // Iterate to evolve the registers.
    for (unsigned int p = 0; p < FIRESTARTER_ITERATIONS; p++) {
        unsigned int d = RANDOMMOD(dataSeed, registers);
        float oldData = data[d];
        data[d] = oldData + evolutionScale * RANDOMFACTOR(dataSeed);
        float curResult = result;
        if (TestEvaluate(sharedData, data, code, target, theta, curResult))
            result = curResult;
        else
            data[d] = oldData;
    }

    // Save the results if they improved or switch to another member's old results.
     if (!evolutionPass || (result < memberResult)) {
        // If the result was better, save the results.
        dataAge = 0;
    } else {
        float weight = result * codeAge;

        // If the result was worse, copy a result from among the previous generation's results.
        unsigned int bestCandidate = dataMember;

        // The genetic part of genetic programming and a major optimization:
        // Copy the best data from among a random set of candidates.
        for (int i = 0; i < FIRESTARTER_CANDIDATES; i++) {
            // Select evolving members with results better than the current result.
            unsigned int candidate = RANDOMMOD(codeSeed, FIRESTARTER_POPULATION);
            unsigned short candidateCodeAge = oldResults->CodeAge(candidate, variation);
            float candidateWeight = oldResults->MinResult(candidate, variation) * candidateCodeAge;
            if (candidateWeight <= weight) {
                bestCandidate = candidate;
                codeAge = candidateCodeAge;
                dataAge = oldResults->DataAge(candidate, variation);
                weight = candidateWeight;
            }
        }

        // Switch to the selected member's data and results.
        if (bestCandidate != dataMember) {
            data = *oldResults->Data(bestCandidate, variation);
            code = *oldResults->Code(bestCandidate, variation);
        }
    }
    newResults->InitMemberResult(data, code, dataMember, variation, result, dataAge, codeAge);
} // Evolver
#endif