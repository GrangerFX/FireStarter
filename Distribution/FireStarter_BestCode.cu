#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

// VARIATIONS //
// Run date: 08/10/24 16:03:30 Pacific Daylight Time
// Run duration = 54.073182 seconds
// Run generation = 0
// Run evolution = 0
// Run max result = 0.19172351
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

// Variation: 0  result = 0.14005488
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.408371f;
    data->d[1] = -1.583161f;
    data->d[2] = -0.849724f;
    data->d[3] = -1.655476f;
    data->d[4] = -1.479649f;
    data->d[5] = -0.720825f;
    data->d[6] = 1.308779f;
    data->d[7] = -1.742601f;
    data->d[8] = 0.287353f;
    data->d[9] = 0.558908f;
    data->d[10] = 0.335517f;
    data->d[11] = 0.944109f;
    data->d[12] = 0.412285f;
    data->d[13] = -1.884887f;
    data->d[14] = 0.666490f;
    data->d[15] = 0.329655f;
    data->d[16] = -1.667156f;
    data->d[17] = -1.128727f;
    data->d[18] = -0.317408f;
    data->d[19] = -1.666985f;
    data->d[20] = -1.759388f;
    data->d[21] = -1.180569f;
    data->d[22] = 1.668268f;
    data->d[23] = -1.498701f;
    data->d[24] = 1.195824f;
    data->d[25] = 1.623768f;
    data->d[26] = -1.083349f;
    data->d[27] = 0.310635f;
    data->d[28] = 1.939278f;
    data->d[29] = 1.947474f;
    *(result->MinResult()) = 0.140055f;
} // LoadVariation0

// Variation: 1  result = 0.11554945
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.081073f;
    data->d[1] = -1.604334f;
    data->d[2] = 1.368515f;
    data->d[3] = -1.737967f;
    data->d[4] = -1.797324f;
    data->d[5] = -1.218634f;
    data->d[6] = 1.405374f;
    data->d[7] = 0.224530f;
    data->d[8] = -0.109936f;
    data->d[9] = 0.989089f;
    data->d[10] = 1.858551f;
    data->d[11] = -1.986905f;
    data->d[12] = -1.052256f;
    data->d[13] = -0.616384f;
    data->d[14] = 0.177241f;
    data->d[15] = -0.522348f;
    data->d[16] = 1.335404f;
    data->d[17] = -1.987761f;
    data->d[18] = 0.730943f;
    data->d[19] = -1.376899f;
    data->d[20] = -1.739513f;
    data->d[21] = 0.701392f;
    data->d[22] = 0.198869f;
    data->d[23] = -0.029264f;
    data->d[24] = -1.110551f;
    data->d[25] = 0.619590f;
    data->d[26] = -0.174891f;
    data->d[27] = 1.894374f;
    data->d[28] = -0.309583f;
    data->d[29] = 1.916309f;
    *(result->MinResult()) = 0.115549f;
} // LoadVariation1

// Variation: 2  result = 0.19172351
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.281202f;
    data->d[1] = -0.928906f;
    data->d[2] = 0.409082f;
    data->d[3] = 1.330510f;
    data->d[4] = -1.286436f;
    data->d[5] = -1.410386f;
    data->d[6] = -0.325134f;
    data->d[7] = -0.304394f;
    data->d[8] = 0.632117f;
    data->d[9] = -1.914329f;
    data->d[10] = 0.680273f;
    data->d[11] = 1.004260f;
    data->d[12] = -0.501337f;
    data->d[13] = -0.236212f;
    data->d[14] = -1.108804f;
    data->d[15] = 1.922347f;
    data->d[16] = 0.548341f;
    data->d[17] = 1.431269f;
    data->d[18] = 1.162236f;
    data->d[19] = -1.509270f;
    data->d[20] = 0.871983f;
    data->d[21] = -1.742779f;
    data->d[22] = 1.095777f;
    data->d[23] = -0.146716f;
    data->d[24] = -0.762990f;
    data->d[25] = 0.673668f;
    data->d[26] = -0.458757f;
    data->d[27] = -0.478497f;
    data->d[28] = -1.418197f;
    data->d[29] = -1.093951f;
    *(result->MinResult()) = 0.191724f;
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
        float otherResults = results[otherid];
        if (result > otherResults) {
            result = results[tid] = otherResults;
            minid[tid] = minid[otherid];
        }
    }
    if (tid < 8) {
        unsigned int otherid = tid + 8;
        float otherResults = results[otherid];
        if (result > otherResults) {
            result = results[tid] = otherResults;
            minid[tid] = minid[otherid];
        }
    }
    if (tid < 4) {
        unsigned int otherid = tid + 4;
        float otherResults = results[otherid];
        if (result > otherResults) {
            result = results[tid] = otherResults;
            minid[tid] = minid[otherid];
        }
    }
    if (tid < 2) {
        unsigned int otherid = tid + 2;
        float otherResults = results[otherid];
        if (result > otherResults) {
            result = results[tid] = otherResults;
            minid[tid] = minid[otherid];
        }
    }
    if (tid < 1) {
        unsigned int otherid = tid + 1;
        float otherResults = results[otherid];
        if (result > otherResults) {
            result = results[tid] = otherResults;
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