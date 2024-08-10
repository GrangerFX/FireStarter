#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

// VARIATIONS //
// Run date: 08/10/24 11:20:46 Pacific Daylight Time
// Run duration = 481.787097 seconds
// Run generation = 40
// Run evolution = 0
// Run max result = 0.21094815
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

// Variation: 0  result = 0.14177459
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -4.268861f;
    data->d[1] = 1.159213f;
    data->d[2] = 1.293142f;
    data->d[3] = 0.452434f;
    data->d[4] = -0.607016f;
    data->d[5] = -1.766486f;
    data->d[6] = 0.912277f;
    data->d[7] = -1.545861f;
    data->d[8] = -1.349838f;
    data->d[9] = -1.580574f;
    data->d[10] = 1.406815f;
    data->d[11] = 1.947746f;
    data->d[12] = -1.676159f;
    data->d[13] = -0.865611f;
    data->d[14] = 0.417380f;
    data->d[15] = 1.970374f;
    data->d[16] = 0.183157f;
    data->d[17] = 1.302172f;
    data->d[18] = -1.511937f;
    data->d[19] = -1.505073f;
    data->d[20] = 0.065652f;
    data->d[21] = 1.058329f;
    data->d[22] = 1.072727f;
    data->d[23] = 0.482613f;
    data->d[24] = -1.637661f;
    data->d[25] = -1.711995f;
    data->d[26] = 1.477730f;
    data->d[27] = -1.378315f;
    data->d[28] = -0.145412f;
    data->d[29] = -0.322922f;
    *(result->MinResult()) = 0.141775f;
} // LoadVariation0

// Variation: 1  result = 0.20429885
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -9.126298f;
    data->d[1] = -1.920158f;
    data->d[2] = -0.348512f;
    data->d[3] = 0.540408f;
    data->d[4] = 1.791550f;
    data->d[5] = -1.922921f;
    data->d[6] = -0.448783f;
    data->d[7] = 1.061385f;
    data->d[8] = -1.831356f;
    data->d[9] = 0.742547f;
    data->d[10] = 0.521784f;
    data->d[11] = -0.856619f;
    data->d[12] = -0.527324f;
    data->d[13] = -1.610433f;
    data->d[14] = -0.432051f;
    data->d[15] = 1.978788f;
    data->d[16] = -1.928741f;
    data->d[17] = -0.126398f;
    data->d[18] = -1.161377f;
    data->d[19] = -0.235072f;
    data->d[20] = 0.394842f;
    data->d[21] = -0.200341f;
    data->d[22] = -0.851362f;
    data->d[23] = 1.459817f;
    data->d[24] = -1.887723f;
    data->d[25] = 0.445570f;
    data->d[26] = 1.689017f;
    data->d[27] = 0.350947f;
    data->d[28] = -0.423530f;
    data->d[29] = 1.876572f;
    *(result->MinResult()) = 0.204299f;
} // LoadVariation1

// Variation: 2  result = 0.21094815
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 2.875064f;
    data->d[1] = -1.111095f;
    data->d[2] = -0.709104f;
    data->d[3] = -1.838297f;
    data->d[4] = -0.338424f;
    data->d[5] = 0.824333f;
    data->d[6] = 0.574431f;
    data->d[7] = 1.405652f;
    data->d[8] = -0.021589f;
    data->d[9] = 1.348916f;
    data->d[10] = 0.655269f;
    data->d[11] = -0.450585f;
    data->d[12] = -0.162669f;
    data->d[13] = 1.304591f;
    data->d[14] = 1.528868f;
    data->d[15] = -0.442180f;
    data->d[16] = 0.752468f;
    data->d[17] = -0.949359f;
    data->d[18] = -0.464301f;
    data->d[19] = 0.983362f;
    data->d[20] = -1.622097f;
    data->d[21] = -1.065541f;
    data->d[22] = -0.803980f;
    data->d[23] = 0.127780f;
    data->d[24] = -1.106763f;
    data->d[25] = 1.099782f;
    data->d[26] = -0.697431f;
    data->d[27] = 0.829764f;
    data->d[28] = 1.309067f;
    data->d[29] = 0.024105f;
    *(result->MinResult()) = 0.210948f;
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
    unsigned int tid = threadIdx.x;
    unsigned int codeMember = blockDim.x * blockIdx.x;
    unsigned int dataMember = blockDim.x * blockIdx.x + tid;
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

#if 1
    // Reduction to find the minimum result among the 32 block threads.
    GPU_SHARED float results[WARP_THREADS];
    GPU_SHARED unsigned int minid[WARP_THREADS];
    results[tid] = result;
    minid[tid] = tid;
    if (tid < 16) {
        unsigned int otherid = tid + 16;
        if (results[tid] > results[otherid]) {
            results[tid] = results[otherid];
            minid[tid] = minid[otherid];
        }
    }
    if (tid < 8) {
        unsigned int otherid = tid + 8;
        if (results[tid] > results[otherid]) {
            results[tid] = results[otherid];
            minid[tid] = minid[otherid];
        }
    }
    if (tid < 4) {
        unsigned int otherid = tid + 4;
        if (results[tid] > results[otherid]) {
            results[tid] = results[otherid];
            minid[tid] = minid[otherid];
        }
    }
    if (tid < 2) {
        unsigned int otherid = tid + 2;
        if (results[tid] > results[otherid]) {
            results[tid] = results[otherid];
            minid[tid] = minid[otherid];
        }
    }
    if (tid < 1) {
        unsigned int otherid = tid + 1;
        if (results[tid] > results[otherid]) {
            results[tid] = results[otherid];
            minid[tid] = minid[otherid];
        }
    }

    result = results[0];        // Get the best result in the warp.
    unsigned int id = minid[0]; // Get the best warp thread id.
    sharedData = data;          // Load the shared data with the best data from each warp thread.
    sharedData.Get(data, id);   // Get the best thread's data. Each warp thread will be the same.

    // Store the best code and data in each member's global data.
    newResults->InitMemberResult(data, code, dataMember, variation, result, dataAge, codeAge);
#else
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
#endif
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