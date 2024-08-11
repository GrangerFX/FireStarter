#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

// VARIATIONS //
// Run date: 08/11/24 10:28:09 Pacific Daylight Time
// Run duration = 150.254578 seconds
// Run generation = 0
// Run evolution = 0
// Run max result = 0.24318017
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
// Run population = 16384
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 0
// Run optimize = 8

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

// Variation: 0  result = 0.14785540
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 2.641110f;
    data->d[1] = -1.360399f;
    data->d[2] = -0.661853f;
    data->d[3] = 1.738986f;
    data->d[4] = -0.348033f;
    data->d[5] = 1.773423f;
    data->d[6] = -0.338501f;
    data->d[7] = -0.373869f;
    data->d[8] = 0.855091f;
    data->d[9] = -1.825978f;
    data->d[10] = -0.822882f;
    data->d[11] = -1.492682f;
    data->d[12] = 1.983810f;
    data->d[13] = 0.274063f;
    data->d[14] = -1.213085f;
    data->d[15] = -0.086177f;
    data->d[16] = 1.539054f;
    data->d[17] = -1.483582f;
    data->d[18] = 0.735353f;
    data->d[19] = 1.204066f;
    data->d[20] = -1.368418f;
    data->d[21] = -0.801156f;
    data->d[22] = -0.054450f;
    data->d[23] = -0.972517f;
    data->d[24] = -0.956964f;
    data->d[25] = -0.757890f;
    data->d[26] = -1.037327f;
    data->d[27] = 0.181400f;
    data->d[28] = 0.425125f;
    data->d[29] = 0.253239f;
    *(result->MinResult()) = 0.147855f;
} // LoadVariation0

// Variation: 1  result = 0.14815712
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 2.735440f;
    data->d[1] = -1.138525f;
    data->d[2] = -0.048754f;
    data->d[3] = 0.563692f;
    data->d[4] = -0.754037f;
    data->d[5] = 0.723852f;
    data->d[6] = 1.917680f;
    data->d[7] = -0.112226f;
    data->d[8] = -1.007463f;
    data->d[9] = -1.171614f;
    data->d[10] = -0.182746f;
    data->d[11] = 0.773907f;
    data->d[12] = -1.297545f;
    data->d[13] = 1.606172f;
    data->d[14] = 0.834791f;
    data->d[15] = -0.324055f;
    data->d[16] = 1.254877f;
    data->d[17] = -0.754737f;
    data->d[18] = -0.712177f;
    data->d[19] = 0.581592f;
    data->d[20] = 1.600564f;
    data->d[21] = 1.547092f;
    data->d[22] = -1.618552f;
    data->d[23] = -1.787415f;
    data->d[24] = 0.403332f;
    data->d[25] = -0.108056f;
    data->d[26] = 0.679493f;
    data->d[27] = -1.756080f;
    data->d[28] = 1.324141f;
    data->d[29] = 0.138309f;
    *(result->MinResult()) = 0.148157f;
} // LoadVariation1

// Variation: 2  result = 0.24318017
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -37.674225f;
    data->d[1] = -0.505415f;
    data->d[2] = -0.459101f;
    data->d[3] = 1.640050f;
    data->d[4] = 1.262812f;
    data->d[5] = -0.466084f;
    data->d[6] = 1.834392f;
    data->d[7] = 0.786966f;
    data->d[8] = -0.612718f;
    data->d[9] = 0.304970f;
    data->d[10] = 1.551679f;
    data->d[11] = -1.457222f;
    data->d[12] = 1.361544f;
    data->d[13] = -0.223149f;
    data->d[14] = 0.664545f;
    data->d[15] = 1.398096f;
    data->d[16] = -0.331683f;
    data->d[17] = -1.012392f;
    data->d[18] = -0.172760f;
    data->d[19] = 0.147157f;
    data->d[20] = -0.445746f;
    data->d[21] = 0.010869f;
    data->d[22] = 0.890467f;
    data->d[23] = -0.982786f;
    data->d[24] = -1.030703f;
    data->d[25] = 0.049376f;
    data->d[26] = 0.255652f;
    data->d[27] = 0.967214f;
    data->d[28] = -0.763957f;
    data->d[29] = 1.654230f;
    *(result->MinResult()) = 0.243180f;
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
    unsigned int member = blockIdx.x;
    unsigned int dataIndex = member * blockDim.x + tid;
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
    unsigned short dataAge = oldResults->DataAge(member, variation) & 0xFF;
    float result, memberResult;
    float evolutionScale;

    // The first generation is initalized with random numbers.
    if (!evolutionPass || (codeAge > 10)) {
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
        float oldResult = oldResults->MinResult(member, variation);

        if (dataAge > 10) {
            // Randomize a single instruction.
            evolutionScale = FIRESTARTER_START_SCALE;
            memberResult = FIRESTARTER_START_RESULT;
            unsigned int c = RANDOMMOD(codeSeed, FIRESTARTER_INSTRUCTIONS);
            FireStarterCodeInstruction oldCode = code[c];
            code.RandomInstruction(codeSeed, c);
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
            memberResult = FIRESTARTER_START_RESULT;
            unsigned int d = RANDOMMOD(dataSeed, registers);
            float oldData = data[d];
            data[d] = oldData + RANDOMFACTOR(dataSeed) * evolutionScale * (dataAge - 1);

            result = memberResult;
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
    if (tid == id)
        newResults->InitMemberResult(data, code, member, variation, result, dataAge | (id << 8), codeAge);
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