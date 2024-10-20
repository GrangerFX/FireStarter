#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

inline bool TestEvaluate(FireStarterSharedData& sharedData, const FireStarterData& data, const FireStarterCode& code, const float target[], const float theta[], float& result)
{
    float maxResult = result;
    result = 0.0f;
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++) {
        sharedData = data;
        float n = fabsf(code.Evaluate(sharedData, theta[i]) - target[i]);
        if (!isfinite(n) || (n > maxResult)) {
            result = maxResult;
            return false;
        } else
            result = fmaxf(n, result);
    }
    return true;
} // TestEvaluate

#if FIRESTARTER_EXPERIMENTAL
// Experimental version: The code is different for each thread.
GPU_GLOBAL void Evolver(FireStarterPopulation* newResults, const FireStarterPopulation* oldResults, const unsigned int variation, const unsigned int registers, const unsigned long long evolutionSeed, const unsigned long long evolutionPass, const unsigned long long evolutionPasses, unsigned int population)
{
    // Determine the member to be optimized.
    unsigned int member = blockIdx.x * blockDim.x + threadIdx.x;
    if (member >= population)
        return;

    // The shared data for the threads in the warp.
    GPU_SHARED FireStarterSharedData sharedData;

    // The evolution code and data.
    FireStarterCode code;
    FireStarterData data;

    // Precalculate the target theta values and target samples.
    float theta[FIRESTARTER_SAMPLES];
    float target[FIRESTARTER_SAMPLES];
    float sampleStep = (TARGET_MAX - TARGET_MIN) / (FIRESTARTER_SAMPLES - 1);
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++) {
        float t = theta[i] = TARGET_MIN + i * sampleStep;
        target[i] = Target(t, variation);
    }

    // Evolve the program registers for each variation.
    unsigned long long memberSeed = evolutionSeed + SEED10(variation) + SEED1(member) + SEED2(evolutionPass);   // Unique seed for the generation/member
    unsigned short evolveAge = 0;
    unsigned short bestAge = 0;

    // The first generation is initalized with random numbers.
    float result = FIRESTARTER_START_RESULT;
    float evolutionScale = FIRESTARTER_START_SCALE;
    for (int i = 1; i <= 10; i++) {
        code.Init(memberSeed);
        data.Init(memberSeed, evolutionScale);
        if (TestEvaluate(sharedData, data, code, target, theta, result))
            break;
        result = FIRESTARTER_START_RESULT;
    }
    FireStarterCode bestCode = code;
    FireStarterData bestData = data;
    FireStarterCode oldCode = code;
    FireStarterData oldData = data;
    float bestResult = result;
    float curResult = result;
    evolutionScale = FIRESTARTER_SCALE * result;

    // Perform all the passes on the GPU.
    for (unsigned int pass = 0; pass < evolutionPasses; pass++) {
        // Evolve the code and data.
        if ((evolveAge >= 16) || (curResult >= FIRESTARTER_START_RESULT)) {
            evolveAge = 0;
            curResult = FIRESTARTER_START_RESULT;
            evolutionScale = FIRESTARTER_START_SCALE;
            code.Init(memberSeed);
            data.Init(memberSeed, evolutionScale);
            result = curResult;
        } else {
            evolutionScale = FIRESTARTER_SCALE * curResult;
            result = curResult;
            if (evolveAge > 0)
                data.RandomData(memberSeed, evolutionScale);
        }

        // Iterate to evolve the data.
        for (unsigned int p = 0; p < FIRESTARTER_EVOLVE_GPU_ITERATIONS; p++) {
            unsigned int d = RANDOMMOD(memberSeed, FIRESTARTER_REGISTERS);
            float oldData = data[d];
            data[d] = oldData + evolutionScale * RANDOMFACTOR(memberSeed);
            float curResult = result;
            if (TestEvaluate(sharedData, data, code, target, theta, curResult))
                result = curResult;
            else
                data[d] = oldData;
        }

        // Did the results improve?
        if (!evolutionPass || (result < curResult)) {
            // If the result was better, save the results.
            if (result < bestResult) {
                bestCode = code;
                bestData = data;
                bestResult = result;
                bestAge = evolveAge;
            }
            oldCode = code;
            oldData = data;
            curResult = result;
            evolveAge = 0;
        } else {
            // Revert to the original code and data.
            code = oldCode;
            data = oldData;
            evolveAge++;
        }
    }
    newResults->InitMemberResult(bestData, member, variation, bestResult, bestAge);
    newResults->Code(member)->Copy(bestCode);
} // Evolver
#else
// This is the best current version. It relies on simplicity.
GPU_GLOBAL void Evolver(FireStarterPopulation* newResults, const FireStarterPopulation* oldResults, const unsigned int variation, const unsigned int registers, const unsigned long long evolutionSeed, const unsigned long long evolutionPass, const unsigned long long evolutionPasses, unsigned int population)
{
    // Determine the member to be optimized.
    unsigned int tid = threadIdx.x;
    unsigned int member = blockIdx.x;
    unsigned int dataIndex = blockIdx.x * blockDim.x + threadIdx.x;
    if (member >= population)
        return;

    // The shared data for the threads in the warp.
    GPU_SHARED FireStarterSharedData sharedData;

    // The evolution code and data.
    FireStarterCode code;
    FireStarterData data;

    // Precalculate the target theta values and target samples.
    float theta[FIRESTARTER_SAMPLES];
    float target[FIRESTARTER_SAMPLES];
    float sampleStep = (TARGET_MAX - TARGET_MIN) / (FIRESTARTER_SAMPLES - 1);
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++) {
        float t = theta[i] = TARGET_MIN + i * sampleStep;
        target[i] = Target(t, variation);
    }

    // Evolve the program registers for each variation.
    float result, memberResult;
    float evolutionScale;
    unsigned short evolveAge;

    // Evolve the program registers for each variation.
    unsigned long long memberBaseSeed = evolutionSeed + SEED10(variation) + SEED1(member);   // Unique seed for the generation/member
    unsigned long long dataBaseSeed = evolutionSeed + SEED10(variation) + SEED11(dataIndex); // Unique seed for the generation/dataIndex
    unsigned long long passSeed = SEED2(evolutionPass);
    unsigned long long memberSeed = memberBaseSeed + passSeed;  // Unique seed for the generation/member
    unsigned long long dataSeed = dataBaseSeed + passSeed;      // Unique seed for the generation/dataIndex

    // The first generation is initalized with random numbers.
    if (!evolutionPass) {
        memberResult = FIRESTARTER_START_RESULT;
        evolutionScale = FIRESTARTER_START_SCALE;
        for (int i = 0; i < 10; i++) {
            code.Init(memberSeed);
            data.Init(dataSeed, evolutionScale);
            result = memberResult;
            if (TestEvaluate(sharedData, data, code, target, theta, result))
                break;
        }
        memberResult = result;
        evolveAge = 0;
    } else {
        evolveAge = oldResults->EvolveAge1(member, variation);
        if ((evolveAge >= 16) || (memberResult >= FIRESTARTER_START_RESULT)) {
            evolveAge = 0;
            memberResult = FIRESTARTER_START_RESULT;
            evolutionScale = FIRESTARTER_START_SCALE;
            code.Init(memberSeed);
            data.Init(dataSeed, evolutionScale);
            result = memberResult;
        } else {
            code = oldResults->Code(member);
            data = oldResults->Data(member, variation);
            memberResult = oldResults->MinResult(member, variation);
            evolutionScale = FIRESTARTER_SCALE * memberResult;
            result = memberResult;
            if (evolveAge > 0)
                data.RandomData(dataSeed, evolutionScale);
        }
    }

    // Iterate to evolve the data.
    for (unsigned int p = 0; p < FIRESTARTER_EVOLVE_GPU_ITERATIONS; p++) {
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
    float minResult = result;
    results[tid] = minResult;
    minid[tid] = tid;
    if (tid < 16) {
        unsigned int otherid = tid + 16;
        float otherResults = results[otherid];
        if (minResult > otherResults) {
            results[tid] = minResult = otherResults;
            minid[tid] = minid[otherid];
        }
    }
    if (tid < 8) {
        unsigned int otherid = tid + 8;
        float otherResults = results[otherid];
        if (minResult > otherResults) {
            results[tid] = minResult = otherResults;
            minid[tid] = minid[otherid];
        }
    }
    if (tid < 4) {
        unsigned int otherid = tid + 4;
        float otherResults = results[otherid];
        if (minResult > otherResults) {
            results[tid] = minResult = otherResults;
            minid[tid] = minid[otherid];
        }
    }
    if (tid < 2) {
        unsigned int otherid = tid + 2;
        float otherResults = results[otherid];
        if (minResult > otherResults) {
            results[tid] = minResult = otherResults;
            minid[tid] = minid[otherid];
        }
    }
    if (tid < 1) {
        unsigned int otherid = tid + 1;
        float otherResults = results[otherid];
        if (minResult > otherResults) {
            results[tid] = minResult = otherResults;
            minid[tid] = minid[otherid];
        }
    }

    // If this thread ID has the best results...
    unsigned int id = minid[0];
    if (tid == id) {
        // Did the results improve?
        if (!evolutionPass || (result < memberResult)) {
            // If the result was better, save the results.
            evolveAge = 0;
        } else {
            // Revert to the original code and data.
            code = oldResults->Code(member);
            data = oldResults->Data(member, variation);
            evolveAge++;
        }
        newResults->InitMemberResult(data, member, variation, result, evolveAge);
        newResults->Code(member)->Copy(code);
    }
} // Evolver
#endif
#if 0
// This version selects candidates like Optimize.
GPU_GLOBAL void Evolver(FireStarterPopulation* newResults, const FireStarterPopulation* oldResults, const unsigned int variation, const unsigned int registers, const unsigned long long evolutionSeed, const unsigned long long evolutionPass, const unsigned long long evolutionPasses, unsigned int population)
{
    // Determine the member to be optimized.
    unsigned int tid = threadIdx.x;
    unsigned int member = blockIdx.x;
    unsigned int dataIndex = blockIdx.x * blockDim.x + threadIdx.x;
    if (member >= population)
        return;

    // The shared data for the threads in the warp.
    GPU_SHARED FireStarterSharedData sharedData;

    // The evolution code and data.
    FireStarterCode code;
    FireStarterData data;

    // Precalculate the target theta values and target samples.
    float theta[FIRESTARTER_SAMPLES];
    float target[FIRESTARTER_SAMPLES];
    float sampleStep = (TARGET_MAX - TARGET_MIN) / (FIRESTARTER_SAMPLES - 1);
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++) {
        float t = theta[i] = TARGET_MIN + i * sampleStep;
        target[i] = Target(t, variation);
    }

    // Evolve the program registers for each variation.
    unsigned long long memberBaseSeed = evolutionSeed + SEED10(variation) + SEED1(member);   // Unique seed for the generation/member
    unsigned long long dataBaseSeed = evolutionSeed + SEED10(variation) + SEED11(dataIndex); // Unique seed for the generation/dataIndex
    unsigned long long passSeed = SEED2(evolutionPass);
    unsigned long long memberSeed = memberBaseSeed + passSeed;  // Unique seed for the generation/member
    unsigned long long dataSeed = dataBaseSeed + passSeed;      // Unique seed for the generation/dataIndex

    float result, memberResult;
    float evolutionScale;
    unsigned short evolveAge1 = 0;
    unsigned short evolveAge2 = 0;
    if (evolutionPass) {
        evolveAge1 = oldResults->EvolveAge1(member, variation);
        evolveAge2 = oldResults->EvolveAge2(member, variation);
    }

    // The first generation is initalized with random numbers.
    if (!evolutionPass || (evolveAge1 >= MAX(evolveAge2, 1024))) {
        evolveAge1 = 0;
        evolveAge2 = 0;
        memberResult = FIRESTARTER_START_RESULT;
        evolutionScale = FIRESTARTER_START_SCALE;
        for (int i = 0; i < 10; i++) {
            code.Init(memberSeed);
            data.Init(dataSeed, evolutionScale);
            result = memberResult;
            if (TestEvaluate(sharedData, data, code, target, theta, result))
                break;
        }
        memberResult = result;
    } else {
        unsigned int bestCandidate = member;
        if (evolveAge1 >= MAX(evolveAge2, 512)) {
            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of candidates.
            for (int i = 0; i < FIRESTARTER_EVOLVE_GPU_CANDIDATES; i++) {
                // Select evolving members with results better than the current result.
                unsigned int candidate = RANDOMMOD(memberSeed, population);
                unsigned short candidateAge = oldResults->EvolveAge1(candidate);
                if (candidateAge <= evolveAge1) {
                    float candidateResult = oldResults->MinResult(candidate);
                    if (candidateResult <= result) {
                        bestCandidate = candidate;
                        result = candidateResult;
                    }
                }
            }
        }
        code = oldResults->Code(bestCandidate);
        data = oldResults->Data(bestCandidate, variation);
        memberResult = oldResults->MinResult(member, variation);
        evolutionScale = FIRESTARTER_SCALE * memberResult;
        result = memberResult;

        if (evolveAge1 > 128)
            code.RandomInstruction(memberSeed);
        if (evolveAge1 > 16)
            data.RandomData(dataSeed, evolutionScale);
        if (evolveAge1 > 0)
            data.RandomData(dataSeed, evolutionScale);
    }

    // Iterate to evolve the registers.
    for (unsigned int p = 0; p < FIRESTARTER_EVOLVE_GPU_ITERATIONS; p++) {
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
        // Did the results improve?
        if (!evolutionPass || (result < memberResult)) {
            // If the result was better, save the results.
            evolveAge2 += evolveAge1;
            evolveAge1 = 0;
        } else {
            // Revert to the original code and data.
            code = oldResults->Code(member);
            data = oldResults->Data(member, variation);
            evolveAge1++;
        }
        newResults->InitMemberResult(data, member, variation, result, evolveAge1, evolveAge2);
        newResults->Code(member)->Copy(code);
    }
} // Evolver
#endif
