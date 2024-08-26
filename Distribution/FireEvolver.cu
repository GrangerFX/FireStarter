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

GPU_GLOBAL void Optimizer(FireStarterPopulation* newResults, const FireStarterPopulation* oldResults, const FireStarterResult* initResult, const unsigned int variation, const unsigned long long optimizeSeed, const unsigned long long optimizePass)
{
    // Determine the member to be optimized.
    unsigned int member = blockIdx.x;
    if (member >= FIRESTARTER_POPULATION)
        return;

    unsigned int tid = threadIdx.x;
    unsigned int dataIndex = blockIdx.x * blockDim.x + threadIdx.x;

    // Precalculate the target theta values and target samples.
    float theta[FIRESTARTER_SAMPLES];
    float target[FIRESTARTER_SAMPLES];
    float sampleStep = (TARGET_MAX - TARGET_MIN) / (FIRESTARTER_SAMPLES - 1);
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++) {
        float t = theta[i] = TARGET_MIN + i * sampleStep;
        target[i] = Target(t, variation);
    }

    // Evolve the program registers for each variation.
    unsigned long long memberSeed = optimizeSeed + SEED0(variation) + SEED1(member);    // Unique seed for the generation/variation/member
    unsigned long long dataSeed = optimizeSeed + SEED10(variation) + SEED11(dataIndex); // Unique seed for the generation/variation/dataIndex
    FireStarterCode code;
    FireStarterData data;
    unsigned short dataAge;
    float result, memberResult;
    float evolutionScale;

    // For the GPU evolve optimize pass, the code is copied from the initial result.
    code.Copy(initResult->Code());

    // The shared data for the threads in the warp.
    GPU_SHARED FireStarterSharedData sharedData;

    // The first generation is initalized with random numbers.
    if (!optimizePass) {
        memberResult = FIRESTARTER_START_RESULT;
        evolutionScale = FIRESTARTER_START_SCALE;
        for (int i = 0; i < 10; i++) {
            data.Init(dataSeed, evolutionScale);
            result = memberResult;
            if (TestEvaluate(sharedData, data, code, target, theta, result))
                break;
        }
        dataAge = 0;
    } else {
        // Later generations randomize a single register if they were copied.
        data.Copy(oldResults->Data(member, variation));
        dataAge = oldResults->DataAge(member, variation);
        if (dataAge > 1) {
            // Randomize a single register.
            evolutionScale = FIRESTARTER_START_SCALE;
            unsigned int d = RANDOMMOD(dataSeed, FIRESTARTER_REGISTERS);
            float oldData = data[d];
            data[d] = oldData + RANDOMFACTOR(dataSeed) * evolutionScale * (dataAge - 1);
            memberResult = FIRESTARTER_START_RESULT;
            result = 1.0e+6f;
            if (!TestEvaluate(sharedData, data, code, target, theta, result)) {
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
        unsigned int d = RANDOMMOD(dataSeed, FIRESTARTER_REGISTERS);
        float oldData = data[d];
        data[d] = oldData + evolutionScale * RANDOMFACTOR(dataSeed);
        float curResult = result * 0.99f;
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
        float otherResults = results[otherid];
        if (result > otherResults) {
            results[tid] = result = otherResults;
            minid[tid] = minid[otherid];
        }
    }
    if (tid < 8) {
        unsigned int otherid = tid + 8;
        float otherResults = results[otherid];
        if (result > otherResults) {
            results[tid] = result = otherResults;
            minid[tid] = minid[otherid];
        }
    }
    if (tid < 4) {
        unsigned int otherid = tid + 4;
        float otherResults = results[otherid];
        if (result > otherResults) {
            results[tid] = result = otherResults;
            minid[tid] = minid[otherid];
        }
    }
    if (tid < 2) {
        unsigned int otherid = tid + 2;
        float otherResults = results[otherid];
        if (result > otherResults) {
            results[tid] = result = otherResults;
            minid[tid] = minid[otherid];
        }
    }
    if (tid < 1) {
        unsigned int otherid = tid + 1;
        float otherResults = results[otherid];
        if (result > otherResults) {
            results[tid] = result = otherResults;
            minid[tid] = minid[otherid];
        }
    }

    // If this thread ID has the best results...
    if (tid == minid[0]) {
        // Save the results if they improved or switch to another member's old results.
        unsigned short age;
        if (!optimizePass || (result < memberResult)) {
            // If the result was better, save the results.
            age = 0;
        } else {
            // If the result was worse, copy a result from among the previous generation's results.
            unsigned int bestCandidate = member;

            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of candidates.
            for (int i = 0; i < FIRESTARTER_CANDIDATES; i++) {
                // Select evolving members with results better than the current result.
                unsigned int candidate = RANDOMMOD(memberSeed, FIRESTARTER_POPULATION);
                unsigned short candidateAge = oldResults->DataAge(candidate, variation);
                if (candidateAge <= 1) {
                    float candidateResult = oldResults->MinResult(candidate, variation);
                    if (candidateResult < result) {
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
        newResults->InitMemberResult(data, code, member, variation, result, age, 0);
    }
} // Optimizer

#if 1
GPU_GLOBAL void Evolver(FireStarterPopulation* newResults, const FireStarterPopulation* oldResults, const unsigned int variation, const unsigned long long evolutionSeed, const unsigned long long evolutionPass)
{
    // Determine the member to be optimized.
    unsigned int tid = threadIdx.x;
    unsigned int member = blockIdx.x;
    unsigned int dataIndex = blockIdx.x * blockDim.x + threadIdx.x;
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
    unsigned long long codeSeed = evolutionSeed + SEED0(variation) + SEED1(member);      // Unique seed for the generation/variation/member
    unsigned long long dataSeed = evolutionSeed + SEED10(variation) + SEED11(dataIndex); // Unique seed for the generation/variation/dataIndex
    FireStarterCode code;
    FireStarterData data;
    unsigned short codeAge = evolutionPass ? oldResults->CodeAge(member, variation) : 0;
    unsigned short dataAge = evolutionPass ? oldResults->DataAge(member, variation) : 0;
    float result, memberResult;
    float evolutionScale;

    // The first generation is initalized with random numbers.
    if (!evolutionPass || (dataAge >= 1000)) {
        memberResult = FIRESTARTER_START_RESULT;
        evolutionScale = FIRESTARTER_START_SCALE;
        for (int i = 0; i < 10; i++) {
            code.Init(codeSeed);
            data.Init(dataSeed, evolutionScale);
            result = memberResult;
            if (TestEvaluate(sharedData, data, code, target, theta, result))
                break;
        }
        memberResult = result;
        codeAge = 0;
        dataAge = 0;
    } else {
        code.Copy(oldResults->Code(member, variation));
        data.Copy(oldResults->Data(member, variation));
        memberResult = oldResults->MinResult(member, variation);
        evolutionScale = FIRESTARTER_SCALE * memberResult;
        result = memberResult;
        
        if (dataAge > 8)
            code.RandomInstruction(codeSeed);
        if (dataAge > 0)
            data.RandomData(dataSeed, evolutionScale);
    }

    // Iterate to evolve the registers.
    for (unsigned int p = 0; p < FIRESTARTER_ITERATIONS; p++) {
        unsigned int d = RANDOMMOD(dataSeed, FIRESTARTER_REGISTERS);
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
        float otherResults = results[otherid];
        if (result > otherResults) {
            results[tid] = result = otherResults;
            minid[tid] = minid[otherid];
        }
    }
    if (tid < 8) {
        unsigned int otherid = tid + 8;
        float otherResults = results[otherid];
        if (result > otherResults) {
            results[tid] = result = otherResults;
            minid[tid] = minid[otherid];
        }
    }
    if (tid < 4) {
        unsigned int otherid = tid + 4;
        float otherResults = results[otherid];
        if (result > otherResults) {
            results[tid] = result = otherResults;
            minid[tid] = minid[otherid];
        }
    }
    if (tid < 2) {
        unsigned int otherid = tid + 2;
        float otherResults = results[otherid];
        if (result > otherResults) {
            results[tid] = result = otherResults;
            minid[tid] = minid[otherid];
        }
    }
    if (tid < 1) {
        unsigned int otherid = tid + 1;
        float otherResults = results[otherid];
        if (result > otherResults) {
            results[tid] = result = otherResults;
            minid[tid] = minid[otherid];
        }
    }

    // If this thread ID has the best results...
    unsigned int id = minid[0];
    if (tid == id) {
        // Save the results if they improved or switch to another member's old results.
        if (!evolutionPass || (result < memberResult)) {
            // If the result was better, save the results.
            dataAge = 0;
        } else {
            // If the result was worse, copy a result from among the previous generation's results.
            unsigned int bestCandidate = member;

#if 1
            if (dataAge > 500) {
                // The genetic part of genetic programming and a major optimization:
                // Copy the best data from among a random set of candidates.
                float bestResult = result;
                for (int i = 0; i < FIRESTARTER_CANDIDATES; i++) {
                    // Select evolving members with results better than the current result.
                    unsigned int candidate = RANDOMMOD(dataSeed, FIRESTARTER_POPULATION);
                    float candidateResult = oldResults->MinResult(candidate, variation);
                    if (candidateResult < bestResult) {
                        bestCandidate = candidate;
                        bestResult = candidateResult;
                    }
                }
                result = bestResult;
            }
#endif

            // Switch to the selected member's data and results.
            code = *oldResults->Code(bestCandidate, variation);
            data = *oldResults->Data(bestCandidate, variation);
            codeAge++;
            dataAge++;
        }
        newResults->InitMemberResult(data, code, member, variation, result, dataAge, codeAge);
    }
} // Evolver
#else
GPU_GLOBAL void Evolver(FireStarterPopulation* newResults, const FireStarterPopulation* oldResults, const unsigned int variation, const unsigned long long evolutionSeed, const unsigned long long evolutionPass)
{
    // Determine the member to be optimized.
    unsigned int tid = threadIdx.x;
    unsigned int member = blockIdx.x;
    unsigned int dataIndex = blockIdx.x * blockDim.x + threadIdx.x;
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
    unsigned long long codeSeed = evolutionSeed + SEED0(variation) + SEED1(member);      // Unique seed for the generation/variation/member
    unsigned long long dataSeed = evolutionSeed + SEED10(variation) + SEED11(dataIndex); // Unique seed for the generation/variation/dataIndex
    FireStarterCode code;
    FireStarterData data;
    unsigned short codeAge = oldResults->CodeAge(member, variation);
    unsigned short dataAge = oldResults->DataAge(member, variation);
    float result, memberResult;
    float evolutionScale;

    // The first generation is initalized with random numbers.
    if (!evolutionPass) {
        memberResult = FIRESTARTER_START_RESULT;
        evolutionScale = FIRESTARTER_START_SCALE;
        for (int i = 0; i < 10; i++) {
            code.Init(codeSeed);
            data.Init(dataSeed, evolutionScale);
            result = memberResult;
            if (TestEvaluate(sharedData, data, code, target, theta, result))
                break;
        }
        memberResult = result;
        codeAge = 0;
        dataAge = 0;
    } else {
        code.Copy(oldResults->Code(member, variation));
        data.Copy(oldResults->Data(member, variation));
        memberResult = oldResults->MinResult(member, variation);
        evolutionScale = FIRESTARTER_SCALE * memberResult;
        result = memberResult;

        if (dataAge > 2) {
            // Randomize a single instruction.
            unsigned int c = RANDOMMOD(codeSeed, FIRESTARTER_INSTRUCTIONS);
            FireStarterCodeInstruction oldCode = code[c];
            code.RandomInstruction(codeSeed, c);
            unsigned int d = RANDOMMOD(dataSeed, FIRESTARTER_REGISTERS);
            float oldData = data[d];
            data[d] = oldData + RANDOMFACTOR(dataSeed) * evolutionScale * (dataAge - 1);
            for (int i = 0; i < 10; i++) {
                result = memberResult;
                if (!TestEvaluate(sharedData, data, code, target, theta, result)) {
                    code[c] = oldCode;
                    data[d] = oldData;
                    result = memberResult;
                } else {
                    dataAge = 0;
                    break;
                }
            }
        } else if (dataAge > 0) {
            unsigned int d = RANDOMMOD(dataSeed, FIRESTARTER_REGISTERS);
            float oldData = data[d];
            data[d] = oldData + RANDOMFACTOR(dataSeed) * evolutionScale * (dataAge - 1);
            result = memberResult;
            if (!TestEvaluate(sharedData, data, code, target, theta, result)) {
                data[d] = oldData;
                result = memberResult;
            }
        }
    }

    // Iterate to evolve the registers.
    for (unsigned int p = 0; p < FIRESTARTER_ITERATIONS; p++) {
        unsigned int d = RANDOMMOD(dataSeed, FIRESTARTER_REGISTERS);
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
        float otherResults = results[otherid];
        if (result > otherResults) {
            results[tid] = result = otherResults;
            minid[tid] = minid[otherid];
        }
    }
    if (tid < 8) {
        unsigned int otherid = tid + 8;
        float otherResults = results[otherid];
        if (result > otherResults) {
            results[tid] = result = otherResults;
            minid[tid] = minid[otherid];
        }
    }
    if (tid < 4) {
        unsigned int otherid = tid + 4;
        float otherResults = results[otherid];
        if (result > otherResults) {
            results[tid] = result = otherResults;
            minid[tid] = minid[otherid];
        }
    }
    if (tid < 2) {
        unsigned int otherid = tid + 2;
        float otherResults = results[otherid];
        if (result > otherResults) {
            results[tid] = result = otherResults;
            minid[tid] = minid[otherid];
        }
    }
    if (tid < 1) {
        unsigned int otherid = tid + 1;
        float otherResults = results[otherid];
        if (result > otherResults) {
            results[tid] = result = otherResults;
            minid[tid] = minid[otherid];
        }
    }

    // Store the best code and data in the member's global data.
    unsigned int id = minid[0];
    if (tid == id) {
        if (result > memberResult) {
            code.Copy(oldResults->Code(member, variation));
            data.Copy(oldResults->Data(member, variation));
            result = memberResult;
        }
        dataAge++;
        codeAge++;
        newResults->InitMemberResult(data, code, member, variation, result, dataAge, codeAge);
    }
} // Evolver
#endif
