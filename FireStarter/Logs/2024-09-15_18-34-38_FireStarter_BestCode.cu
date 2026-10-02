#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

// VARIATIONS //
// Run date: 09/15/24 18:34:38 Pacific Daylight Time
// Run duration = 4623.570123 seconds
// Run generation = 1864
// Run evolution = 0
// Run max result = 0.00000179
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
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 262144
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

// Variation: 0  result = 0.00000179
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.204069f;
    data->d[1] = 0.250530f;
    data->d[2] = -0.257146f;
    data->d[3] = 5.480186f;
    data->d[4] = -7.365488f;
    data->d[5] = 2.852005f;
    data->d[6] = 3.004067f;
    data->d[7] = -1.305299f;
    data->d[8] = -0.591637f;
    data->d[9] = 0.533361f;
    data->d[10] = 0.669727f;
    data->d[11] = -0.037116f;
    data->d[12] = -2.559303f;
    data->d[13] = -6.584836f;
    data->d[14] = -3.907324f;
    data->d[15] = -0.260643f;
    data->d[16] = -0.540842f;
    data->d[17] = 2.416487f;
    data->d[18] = 4.373842f;
    data->d[19] = -1.680580f;
    data->d[20] = -5.848895f;
    data->d[21] = -0.200034f;
    data->d[22] = 0.479285f;
    data->d[23] = 2.011564f;
    data->d[24] = -1.570797f;
    data->d[25] = -2.280365f;
    data->d[26] = 8.119713f;
    data->d[27] = -2.200186f;
    data->d[28] = 1.130169f;
    data->d[29] = 0.039018f;
    *(result->MinResult()) = 0.000002f;
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

GPU_GLOBAL void Evolver(FireStarterPopulation* newResults, const FireStarterPopulation* oldResults, const FireStarterResults* initResults, const unsigned long long evolutionSeed, const unsigned long long evolutionPass, unsigned int population)
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
    float result, memberResult;
    float evolutionScale;
    unsigned short evolveAge1, evolveAge2;

    // The first generation is initalized with random numbers.
    if (!evolutionPass) {
        evolveAge1 = 0;
        evolveAge2 = 0;
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
    } else {
        evolveAge1 = oldResults->EvolveAge1(member);
        evolveAge2 = oldResults->EvolveAge2(member) ;
        if (evolveAge1 >= MAX(evolveAge2, 1024) / 2) {
            evolveAge1 = 0;
            evolveAge2 = 0;
            memberResult = FIRESTARTER_START_RESULT;
            evolutionScale = FIRESTARTER_START_SCALE;
            if (!RANDOMMOD(codeSeed, 2)) {
                code = initResults->Code();
                code.RandomInstruction(codeSeed);
                data.Init(dataSeed, evolutionScale);
            } else {
                code.Init(codeSeed);
                data.Init(dataSeed, evolutionScale);
            }
            result = memberResult;
        } else {
            code = oldResults->Code(member);
            data = oldResults->Data(member);
            memberResult = oldResults->MinResult(member);
            evolutionScale = FIRESTARTER_SCALE * memberResult;
            result = memberResult;

            if (evolveAge1 > 128)
                code.RandomInstruction(codeSeed);
            if (evolveAge1 > 16)
                data.RandomData(dataSeed, evolutionScale);
            if (evolveAge1 > 0)
                data.RandomData(dataSeed, evolutionScale);
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

GPU_GLOBAL void Optimizer(FireStarterPopulation* newResults, const FireStarterPopulation* oldResults, const FireStarterResults* initResults, const unsigned long long optimizeSeed, const unsigned long long optimizePass, unsigned int population)
{
    // Determine the member to be optimized.
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
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
    unsigned short evolveAge;
    float result, memberResult;
    float evolutionScale;

    // For the GPU evolve optimize pass, the code is copied from the initial result.
    code = initResults->Code();

    // The shared data for the threads in the warp.
    GPU_SHARED FireStarterSharedData sharedData;

    // The first generation is initalized with random numbers.
    if (!optimizePass) {
        evolutionScale = FIRESTARTER_START_SCALE;
        memberResult = FIRESTARTER_START_RESULT;
        result = memberResult;
        for (int i = 0; i < 10; i++) {
            data.Init(memberSeed, evolutionScale);
            if (TestEvaluate(sharedData, data, code, target, theta, result))
                break;
        }
        evolveAge = 0;
    } else {
        // Later generations randomize a single register if they were copied.
        data = oldResults->Data(member);
        evolveAge = oldResults->EvolveAge1(member);
        if (evolveAge > 1) {
            // Randomize a single register.
            evolutionScale = FIRESTARTER_START_SCALE;
            unsigned int d = RANDOMMOD(memberSeed, FIRESTARTER_REGISTERS);
            float oldData = data[d];
            data[d] = oldData + RANDOMFACTOR(memberSeed) * evolutionScale * (evolveAge - 1);
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
        if (bestCandidate != member) {
            age = MAX(evolveAge, 1) + 1;
            data = *oldResults->Data(bestCandidate);
        } else
            age = 1;
    }
    newResults->InitMemberResult(data, member, result, age);
} // Optimizer
