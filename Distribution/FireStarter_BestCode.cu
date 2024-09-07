#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

// VARIATIONS //
// Run date: 09/07/24 10:26:23 Pacific Daylight Time
// Run duration = 132.747872 seconds
// Run generation = 0
// Run evolution = 0
// Run max result = 0.00000069
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE_GPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 0
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 100
// Run candidates = 16
// Run attempts = 0
// Run optimize = 4

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

// Variation: 0  result = 0.00000069
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 3.023452f;
    data->d[1] = -0.370466f;
    data->d[2] = -2.631179f;
    data->d[3] = 0.712483f;
    data->d[4] = 0.930548f;
    data->d[5] = -0.702344f;
    data->d[6] = -0.429049f;
    data->d[7] = 0.073830f;
    data->d[8] = 1.217962f;
    data->d[9] = 1.137425f;
    data->d[10] = -1.100151f;
    data->d[11] = 2.753265f;
    data->d[12] = -0.953695f;
    data->d[13] = 1.898502f;
    data->d[14] = 2.063286f;
    data->d[15] = -2.205838f;
    data->d[16] = -2.870685f;
    data->d[17] = -1.268497f;
    data->d[18] = -1.723115f;
    data->d[19] = 0.112860f;
    data->d[20] = 0.089483f;
    data->d[21] = -1.101207f;
    data->d[22] = 0.496185f;
    data->d[23] = 1.977145f;
    data->d[24] = 1.444148f;
    data->d[25] = 1.748192f;
    data->d[26] = -0.457299f;
    data->d[27] = 1.797716f;
    data->d[28] = -2.828236f;
    data->d[29] = 0.017998f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation0

// END //

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

#if 1
GPU_GLOBAL void Optimizer(FireStarterPopulation* newResults, const FireStarterPopulation* oldResults, const FireStarterCode* initCode, const unsigned long long optimizeSeed, const unsigned long long optimizePass, unsigned int population)
{
    // Determine the member to be optimized.
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population) // Note: HACK!
        return;

    // Precalculate the target theta values and target samples.
    float theta[FIRESTARTER_SAMPLES];
    float target[FIRESTARTER_SAMPLES];
    float sampleStep = (TARGET_MAX - TARGET_MIN) / (FIRESTARTER_SAMPLES - 1);
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++) {
        float t = theta[i] = TARGET_MIN + i * sampleStep;
        target[i] = Target(t);
    }

    // Evolve the program registers for each variation.
    unsigned long long memberSeed = optimizeSeed + SEED12(member); // Unique seed for the generation/variation/member
    FireStarterCode code;
    FireStarterData data;
    unsigned short evolveAge1;
    float result, memberResult;
    float evolutionScale;

    // For the GPU evolve optimize pass, the code is copied from the initial result.
    code = initCode;

    // The shared data for the threads in the warp.
    GPU_SHARED FireStarterSharedData sharedData;

    // The first generation is initalized with random numbers.
    if (!optimizePass) {
        memberResult = FIRESTARTER_START_RESULT;
        result = memberResult;
        evolutionScale = FIRESTARTER_START_SCALE;
        for (int i = 0; i < 10; i++) {
            data.Init(memberSeed, evolutionScale);
            if (TestEvaluate(sharedData, data, code, target, theta, result))
                break;
        }
        evolveAge1 = 0;
    } else {
        // Later generations randomize a single register if they were copied.
        data.Copy(oldResults->Data(member));
        evolveAge1 = oldResults->EvolveAge1(member);
        if (evolveAge1 > 1) {
            // Randomize a single register.
            evolutionScale = FIRESTARTER_START_SCALE;
            unsigned int d = RANDOMMOD(memberSeed, FIRESTARTER_REGISTERS);
            float oldData = data[d];
            data[d] = oldData + RANDOMFACTOR(memberSeed) * evolutionScale * (evolveAge1 - 1);
            memberResult = FIRESTARTER_START_RESULT;
            result = 1.0e+6f;
            if (!TestEvaluate(sharedData, data, code, target, theta, result)) {
                data[d] = oldData;
                result = memberResult = oldResults->MinResult(member);
            }
        } else {
            result = memberResult = oldResults->MinResult(member);
            evolutionScale = FIRESTARTER_SCALE * memberResult;
        }
    }

    // Iterate to evolve the registers.
    for (unsigned int p = 0; p < FIRESTARTER_ITERATIONS; p++) {
        unsigned int d = RANDOMMOD(memberSeed, FIRESTARTER_REGISTERS);
        float oldData = data[d];
        data[d] = oldData + evolutionScale * RANDOMFACTOR(memberSeed);
        float curResult = result * 0.99f;
        if (!TestEvaluate(sharedData, data, code, target, theta, curResult))
            data[d] = oldData;
        else
            result = curResult;
    }

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
            unsigned int candidate = RANDOMMOD(memberSeed, population);
            unsigned short candidateAge = oldResults->EvolveAge1(candidate);
            if (candidateAge <= 1) {
                float candidateResult = oldResults->MinResult(candidate);
                if (candidateResult <= result) {
                    bestCandidate = candidate;
                    result = candidateResult;
                }
            }
        }

        // Switch to the selected member's data and results.
        age = 1;
        if (bestCandidate != member) {
            age += MAX(evolveAge1, 1);
            data = *oldResults->Data(bestCandidate);
        }
    }
    newResults->InitMemberResult(data, member, result, age);
} // Optimizer
#else
GPU_GLOBAL void Optimizer(FireStarterPopulation* newResults, const FireStarterPopulation* oldResults, const FireStarterCode* initCode, const unsigned long long optimizeSeed, const unsigned long long optimizePass, unsigned int population)
{
    // Determine the member to be optimized.
    unsigned int member = blockIdx.x;
    if (member >= population)
        return;

    unsigned int tid = threadIdx.x;
    unsigned int dataIndex = blockIdx.x * blockDim.x + threadIdx.x;

    // Precalculate the target theta values and target samples.
    float theta[FIRESTARTER_SAMPLES];
    float target[FIRESTARTER_SAMPLES];
    float sampleStep = (TARGET_MAX - TARGET_MIN) / (FIRESTARTER_SAMPLES - 1);
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++) {
        float t = theta[i] = TARGET_MIN + i * sampleStep;
        target[i] = Target(t);
    }

    // Evolve the program registers for each variation.
    unsigned long long memberSeed = optimizeSeed + SEED1(member);    // Unique seed for the generation/variation/member
    unsigned long long dataSeed = optimizeSeed + SEED11(dataIndex); // Unique seed for the generation/variation/dataIndex
    FireStarterCode code;
    FireStarterData data;
    unsigned short evolveAge1, evolveAge2;
    float result, memberResult;
    float evolutionScale;

    // For the GPU evolve optimize pass, the code is copied from the initial result.
    code = initCode;

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
        evolveAge1 = 0;
    } else {
        // Later generations randomize a single register if they were copied.
        data = oldResults->Data(member);
        evolveAge1 = oldResults->EvolveAge1(member);
        if (evolveAge1 > 1) {
            // Randomize a single register.
            evolutionScale = FIRESTARTER_START_SCALE;
            unsigned int d = RANDOMMOD(dataSeed, FIRESTARTER_REGISTERS);
            float oldData = data[d];
            data[d] = oldData + RANDOMFACTOR(dataSeed) * evolutionScale * (evolveAge1 - 1);
            memberResult = FIRESTARTER_START_RESULT;
            result = 1.0e+6f;
            if (!TestEvaluate(sharedData, data, code, target, theta, result)) {
                data[d] = oldData;
                result = memberResult = oldResults->MinResult(member);
            }
        } else {
            result = memberResult = oldResults->MinResult(member);
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
                unsigned int candidate = RANDOMMOD(memberSeed, population);
                unsigned short candidateAge = oldResults->EvolveAge1(candidate);
                if (candidateAge <= 1) {
                    float candidateResult = oldResults->MinResult(candidate);
                    if (candidateResult < result) {
                        bestCandidate = candidate;
                        result = candidateResult;
                    }
                }
            }

            // Switch to the selected member's data and results.
            age = 1;
            if (bestCandidate != member) {
                age += MAX(evolveAge1, 1);
                data = *oldResults->Data(bestCandidate);
            }
        }
        newResults->InitMemberResult(data, member, result, age);
        newResults->Code(member)->Copy(code);
    }
} // Optimizer
#endif

GPU_GLOBAL void Evolver(FireStarterPopulation* newResults, const FireStarterPopulation* oldResults, const FireStarterCode* initCode, const unsigned long long evolutionSeed, const unsigned long long evolutionPass, unsigned int population)
{
    // Determine the member to be optimized.
    unsigned int tid = threadIdx.x;
    unsigned int member = blockIdx.x;
    unsigned int dataIndex = blockIdx.x * blockDim.x + threadIdx.x;
    if (member >= population)
        return;

    // The shared data for the threads in the warp.
    GPU_SHARED FireStarterSharedData sharedData;

    // Precalculate the target theta values and target samples.
    float theta[FIRESTARTER_SAMPLES];
    float target[FIRESTARTER_SAMPLES];
    float sampleStep = (TARGET_MAX - TARGET_MIN) / (FIRESTARTER_SAMPLES - 1);
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++) {
        float t = theta[i] = TARGET_MIN + i * sampleStep;
        target[i] = Target(t);
    }

    // Evolve the program registers for each variation.
    unsigned long long codeSeed = evolutionSeed + SEED1(member);     // Unique seed for the generation/member
    unsigned long long dataSeed = evolutionSeed + SEED11(dataIndex); // Unique seed for the generation/dataIndex
    FireStarterCode code;
    FireStarterData data;
    unsigned int evolveAge1 = evolutionPass ? oldResults->EvolveAge1(member) : 0;
    unsigned int evolveAge2 = evolutionPass ? oldResults->EvolveAge2(member) : 0;
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
        evolveAge2 = 0;
        evolveAge1 = 0;
    } else if (evolveAge1 >= MAX(evolveAge2, 1000)) {
        memberResult = FIRESTARTER_START_RESULT;
        evolutionScale = FIRESTARTER_START_SCALE;
        code = *initCode;
        code.RandomInstruction(codeSeed);
        data.Init(dataSeed, evolutionScale);
        result = memberResult;
        evolveAge2 = 0;
        evolveAge1 = 0;
    } else {
        code = oldResults->Code(member);
        data = oldResults->Data(member);
        memberResult = oldResults->MinResult(member);
        evolutionScale = FIRESTARTER_SCALE * memberResult;
        result = memberResult;
        
        if (evolveAge1 > 100) {
            code.RandomInstruction(codeSeed);
            data.RandomData(dataSeed, evolutionScale);
        }
        if (evolveAge1 > 8)
            code.RandomInstruction(codeSeed);
        if (evolveAge1 > 0)
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
        // Did the results improve?
        if (!evolutionPass || (result < memberResult)) {
            // If the result was better, save the results.
            evolveAge2 += evolveAge1;
            evolveAge1 = 0;
        } else {
            // Revert to the original code and data.
            code = oldResults->Code(member);
            data = oldResults->Data(member);
            evolveAge1++;
        }
        newResults->InitMemberResult(data, member, result, evolveAge1, evolveAge2);
        newResults->Code(member)->Copy(code);
    }
} // Evolver

