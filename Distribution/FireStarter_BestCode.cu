#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

// VARIATIONS //
// Run date: 09/01/24 18:00:20 Pacific Daylight Time
// Run duration = 145.055445 seconds
// Run generation = 95
// Run evolution = 0
// Run max result = 0.00000022
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 0
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 8704
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 0
// Run optimize = 8

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

// Variation: 0  result = 0.00000022
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.448238f;
    data->d[1] = -0.039317f;
    data->d[2] = -0.267062f;
    data->d[3] = -0.386975f;
    data->d[4] = -0.703761f;
    data->d[5] = 2.864948f;
    data->d[6] = -0.005663f;
    data->d[7] = 4.347142f;
    data->d[8] = 0.016209f;
    data->d[9] = 1.061489f;
    data->d[10] = 1.682504f;
    data->d[11] = -0.432676f;
    data->d[12] = 0.537216f;
    data->d[13] = 0.542719f;
    data->d[14] = 0.935964f;
    data->d[15] = -0.533195f;
    data->d[16] = -5.156593f;
    data->d[17] = 0.011651f;
    data->d[18] = -2.865165f;
    data->d[19] = 0.737746f;
    data->d[20] = -0.000000f;
    data->d[21] = -0.160125f;
    data->d[22] = -0.019148f;
    data->d[23] = -1.273672f;
    data->d[24] = 0.721263f;
    data->d[25] = -0.660213f;
    data->d[26] = 1.748682f;
    data->d[27] = -0.581401f;
    data->d[28] = 1.710107f;
    data->d[29] = -0.280579f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

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
#if 0
        memberResult = initResult->MinResult();
        evolutionScale = FIRESTARTER_SCALE * memberResult;
        data.Copy(initResult->Data());
        result = memberResult;
#else
        memberResult = FIRESTARTER_START_RESULT;
        evolutionScale = FIRESTARTER_START_SCALE;
        for (int i = 0; i < 10; i++) {
            data.Init(dataSeed, evolutionScale);
            result = memberResult;
            if (TestEvaluate(sharedData, data, code, target, theta, result))
                break;
        }
#endif
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
GPU_GLOBAL void Evolver(FireStarterPopulation* newResults, const FireStarterPopulation* oldResults, const FireStarterResult* initResult, const unsigned int variation, const unsigned long long evolutionSeed, const unsigned long long evolutionPass)
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
    } else if (dataAge >= MAX(codeAge, 1000)) {
        memberResult = FIRESTARTER_START_RESULT;
        evolutionScale = FIRESTARTER_START_SCALE;
        code.Copy(initResult->Code());
        code.RandomInstruction(codeSeed);
//        if ((member & 1) == 1)
//            code.RandomInstruction(codeSeed);
        data.Init(dataSeed, evolutionScale);
        result = memberResult;
        codeAge = 0;
        dataAge = 0;
    } else {
        code.Copy(oldResults->Code(member, variation));
        data.Copy(oldResults->Data(member, variation));
        memberResult = oldResults->MinResult(member, variation);
        evolutionScale = FIRESTARTER_SCALE * memberResult;
        result = memberResult;
        
        if (dataAge > 100) {
            code.RandomInstruction(codeSeed);
            data.RandomData(dataSeed, evolutionScale);
        }
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
        // Did the results improve?
        if (!evolutionPass || (result < memberResult)) {
            // If the result was better, save the results.
            codeAge += dataAge;
            dataAge = 0;
        } else {
            // Revert to the original code and data.
            code = *oldResults->Code(member, variation);
            data = *oldResults->Data(member, variation);
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
