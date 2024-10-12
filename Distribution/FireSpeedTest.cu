#pragma once

#include "FireStarterResults.h"

#if 1
inline float Evaluate(FireStarterSharedData& data, const FireStarterCode& code, float n)
{
#if 0
    // Generated program code 0.8f
    // EVALUATE //
    // END //
#endif
#if 0
    // Optimized program code: 0.7f
    n = data.d[0] += n;
    n *= data.d[1];
    n = data.d[2] *= n;
    n = data.d[3] *= n;
    n = data.d[4] *= n;
    n *= data.d[4];
    n = data.d[5] += n;
    n = data.d[6] += n;
    n = data.d[7] *= n;
    n = data.d[7] += n;
    n = data.d[8] += n;
    n *= data.d[8];
    n += data.d[9];
    n *= data.d[5];
    n *= data.d[10];
    n += data.d[6];
    n = data.d[11] *= n;
    n *= data.d[12];
    n = data.d[13] += n;
    n = data.d[11] += n;
    n *= data.d[7];
    n *= data.d[11];
    n *= data.d[0];
    n *= data.d[14];
    n *= data.d[15];
    n += data.d[2];
    n += data.d[3];
    n *= data.d[16];
    n *= data.d[13];
    n *= data.d[17];
    n += data.d[18];
    n *= data.d[19];
#endif
#if 0
    // Multiply-add unrolled constant indices: 0.6f
    n = data[0] += n;
    n = data[1] *= n;
    n = data[2] += n;
    n = data[3] *= n;
    n = data[4] += n;
    n = data[5] *= n;
    n = data[6] += n;
    n = data[7] *= n;
    n = data[8] += n;
    n = data[9] *= n;
    n = data[10] += n;
    n = data[11] *= n;
    n = data[12] += n;
    n = data[13] *= n;
    n = data[14] += n;
    n = data[15] *= n;
    n = data[16] += n;
    n = data[17] *= n;
    n = data[18] += n;
    n = data[19] *= n;
    n = data[20] += n;
    n = data[21] *= n;
    n = data[22] += n;
    n = data[23] *= n;
    n = data[24] += n;
    n = data[25] *= n;
    n = data[26] += n;
    n = data[27] *= n;
    n = data[28] += n;
    n = data[29] *= n;
    n = data[30] += n;
    n = data[31] *= n;
#endif
#if 0
    // Multiply-add unrolled: 2.5s
    n = data[code.c[0].reg] += n;
    n = data[code.c[1].reg] *= n;
    n = data[code.c[2].reg] += n;
    n = data[code.c[3].reg] *= n;
    n = data[code.c[4].reg] += n;
    n = data[code.c[5].reg] *= n;
    n = data[code.c[6].reg] += n;
    n = data[code.c[7].reg] *= n;
    n = data[code.c[8].reg] += n;
    n = data[code.c[9].reg] *= n;
    n = data[code.c[10].reg] += n;
    n = data[code.c[11].reg] *= n;
    n = data[code.c[12].reg] += n;
    n = data[code.c[13].reg] *= n;
    n = data[code.c[14].reg] += n;
    n = data[code.c[15].reg] *= n;
    n = data[code.c[16].reg] += n;
    n = data[code.c[17].reg] *= n;
    n = data[code.c[18].reg] += n;
    n = data[code.c[19].reg] *= n;
    n = data[code.c[20].reg] += n;
    n = data[code.c[21].reg] *= n;
    n = data[code.c[22].reg] += n;
    n = data[code.c[23].reg] *= n;
    n = data[code.c[24].reg] += n;
    n = data[code.c[25].reg] *= n;
    n = data[code.c[26].reg] += n;
    n = data[code.c[27].reg] *= n;
    n = data[code.c[28].reg] += n;
    n = data[code.c[29].reg] *= n;
    n = data[code.c[30].reg] += n;
    n = data[code.c[31].reg] *= n;
#endif
#if 0
    // Multiply-add loop: 2.5s
    for (unsigned int i = 0; i < FIRESTARTER_INSTRUCTIONS; i += 2) {
        n = data[code.c[i].reg] += n;
        n = data[code.c[i + 1].reg] *= n;
    }
#endif
#if 1
    // Regular code loop: 2.5s
    for (unsigned int i = 0; i < FIRESTARTER_INSTRUCTIONS; i++)
        n = code.c[i].op ? data[code.c[i].reg] += n : data[code.c[i].reg] *= n;
#endif
    return n;
} // Evaluate

inline bool TestEvaluate(FireStarterSharedData& sharedData, const FireStarterData& data, const FireStarterCode& code, const float target[], const float theta[], float& result)
{
    float maxResult = result;
    result = 0.0f;
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++) {
        sharedData = data;
#if 0
        // Various speed tests.
        float n = fabsf(Evaluate(sharedData, code, theta[i]) - target[i]);
#else
        // Regular code loop: 2.5s
        float n = fabsf(code.Evaluate(sharedData, theta[i]) - target[i]);
#endif
        if (!isfinite(n) || (n > maxResult)) {
            result = maxResult;
            return false;
        } else
            result = fmaxf(n, result);
    }
    return true;
} // TestEvaluate

GPU_GLOBAL void SpeedTest(const FireStarterResults* initResults, FireStarterPopulation* newResults, const FireStarterPopulation* oldResults, const unsigned int variation, const unsigned int registers, const unsigned long long optimizeSeed, const unsigned long long optimizePass, unsigned int population)
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
        target[i] = Target(t, variation);
    }

    // The shared data for the threads in the warp.
#if 1
    GPU_SHARED FireStarterSharedData sharedData;
#else
    FireStarterSharedData sharedData;
#endif

    // For the GPU evolve optimize pass, the code is copied from the initial result.
    FireStarterCode code;
    code = initResults->Code();

    // Evolve the program registers for each variation.
    FireStarterData data;
    unsigned short evolveAge1;
    float result, memberResult;
    float evolutionScale;
    unsigned long long memberSeed = optimizeSeed + SEED10(variation) + SEED11(member); // Unique seed for the generation/variation/member

    // The first generation is initalized with random numbers.
    if (!optimizePass) {
        evolutionScale = FIRESTARTER_START_SCALE;
        memberResult = FIRESTARTER_START_RESULT;
        result = memberResult;
        for (int i = 0; i < 10; i++) {
            data.Init(memberSeed, evolutionScale);
            result = memberResult;
            if (TestEvaluate(sharedData, data, code, target, theta, result))
                break;
        }
        evolveAge1 = 0;
    } else {
        // Later generations randomize a single register if they were copied.
        data = oldResults->Data(member, variation);
        evolveAge1 = oldResults->EvolveAge1(member, variation);
        if (evolveAge1 > 1) {
            // Randomize a single register.
            evolutionScale = FIRESTARTER_START_SCALE;
            unsigned int d = RANDOMMOD(memberSeed, registers);
            float oldData = data[d];
            data[d] = oldData + RANDOMFACTOR(memberSeed) * evolutionScale * (evolveAge1 - 1);
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
    for (unsigned int p = 0; p < FIRESTARTER_SPEED_TEST_ITERATIONS; p++) {
        unsigned int d = RANDOMMOD(memberSeed, registers);
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
        for (int i = 0; i < FIRESTARTER_SPEED_TEST_CANDIDATES; i++) {
            // Select evolving members with results better than the current result.
            unsigned int candidate = RANDOMMOD(memberSeed, population);
            unsigned short candidateAge = oldResults->EvolveAge1(candidate, variation);
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
            age += MAX(evolveAge1, 1);
            data = *oldResults->Data(bestCandidate, variation);
        }
    }
    newResults->InitMemberResult(data, member, variation, result, age);
} // SpeedTest
#endif

#if 0
inline float Evaluate2(FireStarterSharedData& data, const FireStarterRegisters& registers, float n)
{
    // Multiply-add unrolled
    n = data[registers[0]] += n;
    n = data[registers[1]] *= n;
    n = data[registers[2]] += n;
    n = data[registers[3]] *= n;
    n = data[registers[4]] += n;
    n = data[registers[5]] *= n;
    n = data[registers[6]] += n;
    n = data[registers[7]] *= n;
    n = data[registers[8]] += n;
    n = data[registers[9]] *= n;
    n = data[registers[10]] += n;
    n = data[registers[11]] *= n;
    n = data[registers[12]] += n;
    n = data[registers[13]] *= n;
    n = data[registers[14]] += n;
    n = data[registers[15]] *= n;
    n = data[registers[16]] += n;
    n = data[registers[17]] *= n;
    n = data[registers[18]] += n;
    n = data[registers[19]] *= n;
    n = data[registers[20]] += n;
    n = data[registers[21]] *= n;
    n = data[registers[22]] += n;
    n = data[registers[23]] *= n;
    n = data[registers[24]] += n;
    n = data[registers[25]] *= n;
    n = data[registers[26]] += n;
    n = data[registers[27]] *= n;
    n = data[registers[28]] += n;
    n = data[registers[29]] *= n;
    n = data[registers[30]] += n;
    n = data[registers[31]] *= n;
    return n;
} // Evaluate2

inline bool TestEvaluate2(FireStarterSharedData& sharedData, const FireStarterData& data, const FireStarterRegisters& registers, const float target[], const float theta[], float& result)
{
    float maxResult = result;
    result = 0.0f;
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++) {
        sharedData = data;
        float n = fabsf(Evaluate2(sharedData, registers, theta[i]) - target[i]);
        if (!isfinite(n) || (n > maxResult)) {
            result = maxResult;
            return false;
        } else
            result = fmaxf(n, result);
    }
    return true;
} // TestEvaluate2

GPU_GLOBAL void SpeedTest(const FireStarterResults* initResults, FireStarterPopulation* newResults, const FireStarterPopulation* oldResults, const unsigned int variation, const unsigned int numRegisters, const unsigned long long optimizeSeed, const unsigned long long optimizePass, unsigned int population)
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
        target[i] = Target(t, variation);
    }

    // The shared data for the threads in the warp.
    GPU_SHARED FireStarterSharedData sharedData;

    // For the GPU evolve optimize pass, the code is copied from the initial result.
    FireStarterCode code;
    code = initResults->Code();

    // Initialize the registers array.
    FireStarterRegisters registers(code);

    // Evolve the program registers for each variation.
    FireStarterData data;
    unsigned short evolveAge1;
    float result, memberResult;
    float evolutionScale;
    unsigned long long memberSeed = optimizeSeed + SEED10(variation) + SEED11(member); // Unique seed for the generation/variation/member

    // The first generation is initalized with random numbers.
    if (!optimizePass) {
        evolutionScale = FIRESTARTER_START_SCALE;
        memberResult = FIRESTARTER_TART_RESULT;
        result = memberResult;
        for (int i = 0; i < 10; i++) {
            data.Init(memberSeed, evolutionScale);
            result = memberResult;
            if (TestEvaluate2(sharedData, data, registers, target, theta, result))
                break;
        }
        evolveAge1 = 0;
    } else {
        // Later generations randomize a single register if they were copied.
        data = oldResults->Data(member, variation);
        evolveAge1 = oldResults->EvolveAge1(member, variation);
        if (evolveAge1 > 1) {
            // Randomize a single register.
            evolutionScale = FIRESTARTER_START_SCALE;
            unsigned int d = RANDOMMOD(memberSeed, numRegisters);
            float oldData = data[d];
            data[d] = oldData + RANDOMFACTOR(memberSeed) * evolutionScale * (evolveAge1 - 1);
            memberResult = FIRESTARTER_START_RESULT;
            result = 1.0e+6f;
            if (!TestEvaluate2(sharedData, data, registers, target, theta, result)) {
                data[d] = oldData;
                result = memberResult = oldResults->MinResult(member, variation);
            }
        } else {
            result = memberResult = oldResults->MinResult(member, variation);
            evolutionScale = FIRESTARTER_SCALE * memberResult;
        }
    }

    // Iterate to evolve the registers.
    for (unsigned int p = 0; p < FIRESTARTER_SPEED_TEST_ITERATIONS; p++) {
        unsigned int d = RANDOMMOD(memberSeed, numRegisters);
        float oldData = data[d];
        data[d] = oldData + evolutionScale * RANDOMFACTOR(memberSeed);
        float curResult = result * 0.99f;
        if (!TestEvaluate2(sharedData, data, registers, target, theta, curResult))
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
        for (int i = 0; i < FIRESTARTER_SPEED_TEST_CANDIDATES; i++) {
            // Select evolving members with results better than the current result.
            unsigned int candidate = RANDOMMOD(memberSeed, population);
            unsigned short candidateAge = oldResults->EvolveAge1(candidate, variation);
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
            age += MAX(evolveAge1, 1);
            data = *oldResults->Data(bestCandidate, variation);
        }
    }
    newResults->InitMemberResult(data, member, variation, result, age);
} // SpeedTest
#endif