#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

// VARIATIONS //
// Run date: 07/08/24 16:49:11 Pacific Daylight Time
// Run duration = 6.897890 seconds
// Run generation = 1
// Run evolution = 0
// Run max result = 0.00813597
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

// Variation: 0  result = 0.00186903
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -13.625657f;
    data->d[1] = 0.867977f;
    data->d[2] = -1.146831f;
    data->d[3] = -1.453836f;
    data->d[4] = 1.750676f;
    data->d[5] = 0.771150f;
    data->d[6] = 0.361177f;
    data->d[7] = 0.336468f;
    data->d[8] = 0.933275f;
    data->d[9] = 0.871699f;
    data->d[10] = 0.513917f;
    data->d[11] = -1.964626f;
    data->d[12] = 0.053815f;
    data->d[13] = -0.690769f;
    data->d[14] = 0.890952f;
    data->d[15] = 0.938527f;
    data->d[16] = -0.459726f;
    data->d[17] = -1.074511f;
    data->d[18] = 1.194063f;
    data->d[19] = -0.152356f;
    data->d[20] = 0.440105f;
    data->d[21] = -0.802427f;
    data->d[22] = 1.743693f;
    data->d[23] = 1.775285f;
    data->d[24] = 0.516081f;
    data->d[25] = 0.579970f;
    data->d[26] = 1.497961f;
    data->d[27] = 1.146881f;
    data->d[28] = 0.054292f;
    data->d[29] = 1.175028f;
    *(result->MinResult()) = 0.001869f;
} // LoadVariation0

// Variation: 1  result = 0.00226533
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.602098f;
    data->d[1] = 0.976929f;
    data->d[2] = -0.939930f;
    data->d[3] = -1.690954f;
    data->d[4] = -0.942482f;
    data->d[5] = 0.290548f;
    data->d[6] = 0.327705f;
    data->d[7] = 1.267421f;
    data->d[8] = -0.011675f;
    data->d[9] = -1.300921f;
    data->d[10] = 0.642993f;
    data->d[11] = 0.643585f;
    data->d[12] = 1.456230f;
    data->d[13] = -1.506962f;
    data->d[14] = 0.199223f;
    data->d[15] = -1.136435f;
    data->d[16] = -1.207832f;
    data->d[17] = 1.950417f;
    data->d[18] = -0.092592f;
    data->d[19] = 1.332569f;
    data->d[20] = -1.039668f;
    data->d[21] = 0.945150f;
    data->d[22] = -0.472558f;
    data->d[23] = 0.009826f;
    data->d[24] = 0.121162f;
    data->d[25] = -1.992954f;
    data->d[26] = 1.661516f;
    data->d[27] = -0.540321f;
    data->d[28] = 0.147918f;
    data->d[29] = -0.900727f;
    *(result->MinResult()) = 0.002265f;
} // LoadVariation1

// Variation: 2  result = 0.00813597
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.326571f;
    data->d[1] = 0.424802f;
    data->d[2] = -1.310769f;
    data->d[3] = -0.155371f;
    data->d[4] = 1.191356f;
    data->d[5] = -0.134369f;
    data->d[6] = 0.580931f;
    data->d[7] = 1.303110f;
    data->d[8] = -0.434071f;
    data->d[9] = -1.149941f;
    data->d[10] = -0.254314f;
    data->d[11] = 1.387900f;
    data->d[12] = 0.550580f;
    data->d[13] = 0.153111f;
    data->d[14] = -0.179718f;
    data->d[15] = 1.652843f;
    data->d[16] = 0.958554f;
    data->d[17] = -1.399211f;
    data->d[18] = -1.568272f;
    data->d[19] = 1.240004f;
    data->d[20] = 1.033933f;
    data->d[21] = -1.030761f;
    data->d[22] = 0.006799f;
    data->d[23] = -1.780866f;
    data->d[24] = 0.533481f;
    data->d[25] = -0.316700f;
    data->d[26] = 1.784995f;
    data->d[27] = -1.268783f;
    data->d[28] = 0.080425f;
    data->d[29] = -1.948203f;
    *(result->MinResult()) = 0.008136f;
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

GPU_GLOBAL void Evolver(FireStarterPopulation* newResults, const FireStarterPopulation* oldResults, const unsigned int variation, const unsigned int registers, const unsigned long long evolutionSeed, const unsigned long long evolutionPass)
{
    // Determine the member to be optimized.
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
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
    unsigned long long seed = evolutionSeed + SEED10(variation) + SEED11(member / 32); // Unique seed for the generation/variation/member
    FireStarterData data;
    FireStarterCode code;
    unsigned int memberAge;
    float result, memberResult;
    float evolutionScale;

    // The first generation is initalized with random numbers.
    if (!evolutionPass) {
        evolutionScale = FIRESTARTER_START_SCALE;
        memberAge = 0;
        memberResult = FIRESTARTER_START_RESULT;
        for (int i = 0; i < 10; i++) {
            data.Init(seed, evolutionScale);
            code.Init(seed);
            result = memberResult;
            if (TestEvaluate(sharedData, data, code, target, theta, result))
                break;
        }
    } else {
        // Later generations randomize a single register if they were copied.
        data.Copy(oldResults->Data(member, variation));
        code.Copy(oldResults->Code(member, variation));
        memberAge = oldResults->Age(member, variation);
        if (memberAge > 1) {
            // Randomize a single register.
            evolutionScale = FIRESTARTER_START_SCALE;
            unsigned int d = RANDOMMOD(seed, registers);
            float oldData = data[d];
            data[d] = oldData + RANDOMFACTOR(seed) * evolutionScale * (memberAge - 1);

            unsigned int c = RANDOMMOD(seed, FIRESTARTER_INSTRUCTIONS);
            FireStarterCodeInstruction oldCode = code[c];
            code.RandomInstruction(seed, c);

            memberResult = FIRESTARTER_START_RESULT;
            result = 1.0e+6f;
            if (!TestEvaluate(sharedData, data, code, target, theta, result)) {
                data[d] = oldData;
                code[c] = oldCode;
                result = memberResult = oldResults->MinResult(member, variation);
            }
        } else {
            result = memberResult = oldResults->MinResult(member, variation);
            evolutionScale = FIRESTARTER_SCALE * memberResult;
        }
    }

    // Iterate to evolve the registers.
    for (unsigned int p = 0; p < FIRESTARTER_ITERATIONS; p++) {
        unsigned int d = RANDOMMOD(seed, registers);
        float oldData = data[d];
        data[d] = oldData + evolutionScale * RANDOMFACTOR(seed);

        unsigned int c = RANDOMMOD(seed, FIRESTARTER_INSTRUCTIONS);
        FireStarterCodeInstruction oldCode = code[c];
        code.RandomInstruction(seed, c);

        float curResult = result;
        if (TestEvaluate(sharedData, data, code, target, theta, curResult))
            result = curResult;
        else {
            data[d] = oldData;
            code[c] = oldCode;
        }
    }

    // Save the results if they improved or switch to another member's old results.
    unsigned int age;
    if (!evolutionPass || (result < memberResult)) {
        // If the result was better, save the results.
        age = 0;
    } else {
        // If the result was worse, copy a result from among the previous generation's results.
        unsigned int bestCandidate = member;

        // The genetic part of genetic programming and a major optimization:
        // Copy the best data from among a random set of candidates.
        for (int i = 0; i < FIRESTARTER_CANDIDATES; i++) {
            // Select evolving members with results better than the current result.
            unsigned int candidate = RANDOMMOD(seed, FIRESTARTER_POPULATION);
            unsigned int candidateAge = oldResults->Age(candidate, variation);
            if (candidateAge <= 1) {
                float candidateResult = oldResults->MinResult(candidate, variation);
                if (candidateResult <= result) {
                    bestCandidate = candidate;
                    result = candidateResult;
                }
            }
        }

        // Switch to the selected member's data and results.
        age = 1;
        if (bestCandidate != member) {
            age += MAX(memberAge, 1);
            data = *oldResults->Data(bestCandidate, variation);
            code = *oldResults->Code(bestCandidate, variation);
        }
    }
    newResults->InitMemberResult(member, variation, age, result, data, code);
} // Evolver
