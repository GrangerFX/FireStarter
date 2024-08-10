#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

// VARIATIONS //
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
    unsigned int member = blockDim.x * blockIdx.x;
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
    unsigned long long codeSeed = evolutionSeed + SEED10(variation) + SEED11(member); // Unique seed for the generation/variation/thread block
    unsigned long long dataSeed = evolutionSeed + SEED10(variation) + SEED11(member * WARP_THREADS + tid); // Unique seed for the generation/variation/member
    FireStarterCode code;
    FireStarterData data;
    unsigned short codeAge;
    unsigned short dataAge;
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
        code.Copy(oldResults->Code(member, variation));
        data.Copy(oldResults->Data(member, variation));
        codeAge = oldResults->CodeAge(member, variation);
        dataAge = oldResults->DataAge(member, variation);
        float oldResult = oldResults->MinResult(member, variation);

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
                result = memberResult = oldResult;
            }
            dataAge++;
        } else {
            result = memberResult = oldResult;
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

    // Store the best code and data in the member's global data.
    if (tid == minid[0])
        newResults->InitMemberResult(data, code, member, variation, result, dataAge, codeAge);
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