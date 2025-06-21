#pragma once
#include "FireStarterResults.h"
#include "CUDADefines.h"

// Not used in Evolver. For code checkins in only.
inline float OptimizeEvaluate(const FireStarterData& testData, float n)
{
    FireStarterData data = testData;
// EVALUATE //
    n += data[0];
    n = data[1] *= n;
    n = data[2] *= n;
    n *= data[3];
    n *= data[4];
    n = data[2] *= n;
    n *= data[5];
    n += data[6];
    n *= data[7];
    n += data[8];
    n = data[9] *= n;
    n += data[10];
    n += data[11];
    n += data[12];
    n = data[13] *= n;
    n *= data[14];
    n *= data[13];
    n = data[15] += n;
    n *= data[16];
    n *= data[2];
    n = data[17] *= n;
    n *= data[15];
    n += data[9];
    n = data[18] *= n;
    n *= data[18];
    n *= data[19];
    n *= data[20];
    n += data[17];
    n += data[21];
    n *= data[1];
    n += data[22];
    n *= data[23];
// END //
    return n;
} // OptimizeEvaluate

GPU_GLOBAL void ShowEvaluate(float* target, float* results, unsigned int size, float thetaStart, float thetaEnd, FireStarterCode* code, FireStarterData* data, unsigned int variation)
{
    // Determine the member to be optimized.
    unsigned int index = blockIdx.x * blockDim.x + threadIdx.x;
    if (index >= size)
        return;

    // Generate the target data.
    float theta = thetaStart + index * (thetaEnd - thetaStart) / size;
    if (target)
        target[index] = Target(theta, variation + FIRESTARTER_VARIATION);

    // Generate the test data.
    if (results && data && code) {
        FireStarterCode localCode(code);
        FireStarterData localData(data);
        results[index] = localCode.Evaluate(localData, theta);
    }
} // ShowEvaluate

inline bool TestEvaluate(FireStarterSharedData& sharedData, const FireStarterData& data, const FireStarterCode& code, const float target[], const float theta[], float& result)
{
    float maxResult = result;
    result = 0.0f;
    for (int i = 0; i < FIRESTARTER_EVOLVE_GPU_SAMPLES; i++) {
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

#if FIRESTARTER_VARIATIONS == 1
// Current best single variation version: Each thread has its own code. The goal is to maximize the number of candidates that can be tested in a given period of time.
GPU_GLOBAL void Evolver(float* results, FireStarterResult* population, FireStarterCode* codes, const unsigned long long seed, const unsigned int passes, const unsigned int populationSize)
{
    // Determine the member to be optimized.
    unsigned int member = blockIdx.x * blockDim.x + threadIdx.x;
    if (member >= populationSize)
        return;

    // The shared data for the threads in the warp.
    GPU_SHARED FireStarterSharedData sharedData;

    // The evolution code and data.
    FireStarterCode code;
    FireStarterData data;

    // Precalculate the target theta values and target samples.
    float theta[FIRESTARTER_EVOLVE_GPU_SAMPLES];
    float target[FIRESTARTER_EVOLVE_GPU_SAMPLES];
    float sampleStep = (TARGET_MAX - TARGET_MIN) / (FIRESTARTER_EVOLVE_GPU_SAMPLES - 1);
    for (unsigned int i = 0; i < FIRESTARTER_EVOLVE_GPU_SAMPLES; i++) {
        float t = theta[i] = TARGET_MIN + i * sampleStep;
        target[i] = Target(t, FIRESTARTER_VARIATION);
    }

    // Evolve the program registers for each variation.
    unsigned long long memberSeed = seed + SEED1(member);   // Unique seed for the member
    unsigned short evolveAge = 0;
    unsigned short bestAge = 0;
    unsigned int registers = 0;

    // The first generation is initalized with random numbers.
    float memberResult = FIRESTARTER_START_RESULT;
    for (unsigned int i = 0; i < 10; i++) {
        code.InitCode(memberSeed);
        registers = code.Optimize();
        data.InitData(memberSeed, registers);
        if (TestEvaluate(sharedData, data, code, target, theta, memberResult))
            break;
    }

    FireStarterCode bestCode = code;
    FireStarterCode oldCode = code;
    FireStarterData bestData = data;
    FireStarterData oldData = data;
    float bestResult = memberResult;
    float oldResult = memberResult;

    // Perform all the passes on the GPU.
    for (unsigned int pass = 0; pass < passes; pass++) {
        // Evolve the code and data.
        float evolutionScale;
        if ((evolveAge >= 6) || (memberResult >= FIRESTARTER_START_RESULT)) {
            evolutionScale = FIRESTARTER_START_SCALE;
            code.InitCode(memberSeed);
            registers = code.Optimize();
            data.InitData(memberSeed, registers);
            oldResult = FIRESTARTER_START_RESULT;
            memberResult = FIRESTARTER_START_RESULT;
            evolveAge = 0;
        } else {
            // Randomize a register each generation.
            evolutionScale = memberResult * FIRESTARTER_SCALE;
            if (evolveAge > 0)
                data.RandomData(memberSeed, evolutionScale, registers);
        }

        // Iterate to evolve the data.
        for (unsigned int i = 0; i < FIRESTARTER_EVOLVE_GPU_ITERATIONS; i++) {
            unsigned int d = RANDOMMOD(memberSeed, registers);
            float old = data[d];
            data[d] = old + evolutionScale * RANDOMFACTOR(memberSeed);
            float curResult = memberResult * 0.99f;
            if (TestEvaluate(sharedData, data, code, target, theta, curResult))
                memberResult = curResult;
            else
                data[d] = old;
        }

        // Did the results improve?
        if (!pass || (memberResult < oldResult)) {
            // If the result was better, save the results.
            oldCode = code;
            oldData = data;
            oldResult = memberResult;
            evolveAge = 0;

            // Update the best result.
            if (!pass || (memberResult < bestResult)) {
                bestCode = code;
                bestData = data;
                bestResult = memberResult;
                bestAge = evolveAge;
            }
        } else {
            // Revert to the original code and data.
            code = oldCode;
            data = oldData;
            memberResult = oldResult;
            evolveAge++;
        }
    }

    // Return the optimized best code.
    codes[member].Copy(bestCode);

    // Return the array of results or the entire population data.
    results[member] = bestResult;

    // Return the variation data for debugging.
    if (population)
        FireStarterPopulation::PopulationResult(population, member)->InitResult(bestData, bestResult, bestAge);
} // Evolver
#else
// Multi-variation version.
GPU_GLOBAL void Evolver(float* results, FireStarterResult* population, FireStarterCode* codes, const unsigned long long seed, const unsigned int passes, const unsigned int populationSize)
{
    // Determine the member to be optimized.
    unsigned int member = blockIdx.x * blockDim.x + threadIdx.x;
    if (member >= populationSize)
        return;

    // The shared data for the threads in the warp.
    GPU_SHARED FireStarterSharedData sharedData;

    // The evolution code and data.
    FireStarterCode code;
    FireStarterData data[FIRESTARTER_VARIATIONS];
    FireStarterData bestData[FIRESTARTER_VARIATIONS];
    FireStarterData oldData[FIRESTARTER_VARIATIONS];

    // Precalculate the target theta values and target samples.
    float theta[FIRESTARTER_EVOLVE_GPU_SAMPLES];
    float target[FIRESTARTER_VARIATIONS][FIRESTARTER_EVOLVE_GPU_SAMPLES];
    float sampleStep = (TARGET_MAX - TARGET_MIN) / (FIRESTARTER_EVOLVE_GPU_SAMPLES - 1);
    for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++) {
        for (unsigned int i = 0; i < FIRESTARTER_EVOLVE_GPU_SAMPLES; i++) {
            float t = theta[i] = TARGET_MIN + i * sampleStep;
            target[v][i] = Target(t, v + FIRESTARTER_VARIATION);
        }
    }

    // Evolve the program registers for each variation.
    unsigned long long memberSeed = seed + SEED1(member);   // Unique seed for the member
    unsigned short evolveAge = 0xFFF;
    unsigned short bestAge = 0;
    unsigned int registers = 0;

    // The first generation is initalized with random numbers.
    float memberResult = FIRESTARTER_START_RESULT;
    float memberVariationResults[FIRESTARTER_VARIATIONS];
    for (unsigned int v = 0; (v < FIRESTARTER_VARIATIONS); v++)
        memberVariationResults[v] = FIRESTARTER_START_RESULT;

    // The first generation is initalized with random numbers.
    FireStarterCode bestCode = code;
    FireStarterCode oldCode = code;
    float bestVariationResults[FIRESTARTER_VARIATIONS];
    float oldVariationResults[FIRESTARTER_VARIATIONS];
    for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++) {
        bestData[v] = data[v];
        oldData[v] = data[v];
        bestVariationResults[v] = memberVariationResults[v];
        oldVariationResults[v] = memberVariationResults[v];
    }
    float bestResult = memberResult;
    float oldResult = memberResult;

    for (unsigned int v = 0; (v < FIRESTARTER_VARIATIONS); v++) {
        memberVariationResults[v] = FIRESTARTER_START_RESULT;
        bestVariationResults[v] = FIRESTARTER_START_RESULT;
        oldVariationResults[v] = FIRESTARTER_START_RESULT;
    }
    unsigned int memberVariation = 0;
    unsigned int bestVariation = 0;
    unsigned int oldVariation = 0;

    // Perform all the passes on the GPU.
    for (unsigned int pass = 0; pass < passes; pass++) {
        // Evolve the code and data.
        float evolutionScale;
        if ((evolveAge >= 6) || (memberResult >= FIRESTARTER_START_RESULT)) {
            evolutionScale = FIRESTARTER_START_SCALE;
            code.InitCode(memberSeed);
            registers = code.Optimize();
            for (unsigned int v = 0; (v < FIRESTARTER_VARIATIONS); v++) {
                data[v].InitData(memberSeed, registers);
                memberVariationResults[v] = FIRESTARTER_START_RESULT;
                oldVariationResults[v] = FIRESTARTER_START_RESULT;
            }
            oldResult = FIRESTARTER_START_RESULT;
            memberResult = FIRESTARTER_START_RESULT;
//          memberVariation = 0; // Note: Use the previous max variation for optimization.
            evolveAge = 0;
        } else {
            // Randomize a register each generation.
            evolutionScale = memberResult * FIRESTARTER_SCALE;
            if (evolveAge > 0)
                data[memberVariation].RandomData(memberSeed, evolutionScale, registers);
        }

        // Iterate to evolve the highest variation.
        for (unsigned int i = 0; i < FIRESTARTER_EVOLVE_GPU_ITERATIONS; i++) {
            unsigned int d = RANDOMMOD(memberSeed, registers);
            float old = data[memberVariation][d];
            data[memberVariation][d] = old + evolutionScale * RANDOMFACTOR(memberSeed);
            float curResult = memberResult * 0.99f;
            if (TestEvaluate(sharedData, data, code, target[memberVariation], theta, curResult)) {
                memberVariationResults[memberVariation] = curResult;
                memberResult = memberVariationResults[0];
                memberVariation = 0;
                for (unsigned int v = 1; v < FIRESTARTER_VARIATIONS; v++) {
                    if (memberVariationResults[v] > memberResult) {
                        memberResult = memberVariationResults[v];
                        memberVariation = v;
                    }
                }
            } else
                data[memberVariation][d] = old;
        }

        // Did the results improve?
        if (!pass || (memberResult < oldResult)) {
            // If the results were better, update the old results.
            oldCode = code;
            for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++) {
                oldData[v] = data[v];
                oldVariationResults[v] = memberVariationResults[v];
            }
            oldResult = memberResult;
            oldVariation = memberVariation;
            evolveAge = 1;

            // Update the best results.
            if (!pass || (memberResult < bestResult)) {
                bestCode = code;
                for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++) {
                    bestData[v] = data[v];
                    bestVariationResults[v] = memberVariationResults[v];
                }
                bestResult = memberResult;
                bestVariation = memberVariation;
                bestAge = evolveAge;
            }
        } else {
            // Revert to the original code and data.
            code = oldCode;
            for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++) {
                data[v] = oldData[v];
                memberVariationResults[v] = oldVariationResults[v];
            }
            memberResult = oldResult;
            memberVariation = oldVariation;
            evolveAge++;
        }
    }

    // Return the optimized best code.
    codes[member].Copy(bestCode);

    // Return the array of results or the entire population data.
    results[member] = bestResult;

    // Return the variation data for debugging.
    if (population)
        for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++)
            FireStarterPopulation::PopulationResult(population, member, v)->InitResult(bestData[v], bestVariationResults[v], bestAge);
} // Evolver
#endif

// Selecter finds the most promising child code of a parent code.
GPU_GLOBAL void Selecter(float* results, FireStarterResult* population, FireStarterCode* codes, FireStarterCode* parentCode, const unsigned long long seed, const unsigned int passes, const unsigned int populationSize)
{
    // Determine the member to be optimized.
    unsigned int member = blockIdx.x * blockDim.x + threadIdx.x;
    if (member >= populationSize)
        return;

    // The shared data for the threads in the warp.
    GPU_SHARED FireStarterSharedData sharedData;

    // The evolution code and data.
    FireStarterCode code;
    FireStarterData data[FIRESTARTER_VARIATIONS];
    FireStarterData bestData[FIRESTARTER_VARIATIONS];
    FireStarterData oldData[FIRESTARTER_VARIATIONS];

    // Precalculate the target theta values and target samples.
    float theta[FIRESTARTER_EVOLVE_GPU_SAMPLES];
    float target[FIRESTARTER_VARIATIONS][FIRESTARTER_EVOLVE_GPU_SAMPLES];
    float sampleStep = (TARGET_MAX - TARGET_MIN) / (FIRESTARTER_EVOLVE_GPU_SAMPLES - 1);
    for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++) {
        for (unsigned int i = 0; i < FIRESTARTER_EVOLVE_GPU_SAMPLES; i++) {
            float t = theta[i] = TARGET_MIN + i * sampleStep;
            target[v][i] = Target(t, v + FIRESTARTER_VARIATION);
        }
    }

    // Evolve the program registers for each variation.
    unsigned long long memberSeed = seed + SEED1(member);   // Unique seed for the member
    unsigned short evolveAge = 0xFFF;
    unsigned short bestAge = 0;
    unsigned int registers = 0;

    // The first generation is initalized with random numbers.
    float memberResult = FIRESTARTER_START_RESULT;
    float memberVariationResults[FIRESTARTER_VARIATIONS];
    for (unsigned int v = 0; (v < FIRESTARTER_VARIATIONS); v++)
        memberVariationResults[v] = FIRESTARTER_START_RESULT;

    // The first generation is initalized with random numbers.
    FireStarterCode bestCode = code;
    FireStarterCode oldCode = code;
    float bestVariationResults[FIRESTARTER_VARIATIONS];
    float oldVariationResults[FIRESTARTER_VARIATIONS];
    for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++) {
        bestData[v] = data[v];
        oldData[v] = data[v];
        bestVariationResults[v] = memberVariationResults[v];
        oldVariationResults[v] = memberVariationResults[v];
    }
    float bestResult = memberResult;
    float oldResult = memberResult;

    for (unsigned int v = 0; (v < FIRESTARTER_VARIATIONS); v++) {
        memberVariationResults[v] = FIRESTARTER_START_RESULT;
        bestVariationResults[v] = FIRESTARTER_START_RESULT;
        oldVariationResults[v] = FIRESTARTER_START_RESULT;
    }
    unsigned int memberVariation = 0;
    unsigned int bestVariation = 0;
    unsigned int oldVariation = 0;

    // Perform all the passes on the GPU.
    for (unsigned int pass = 0; pass < passes; pass++) {
        // Evolve the code and data.
        float evolutionScale;
        if ((evolveAge >= 6) || (memberResult >= FIRESTARTER_START_RESULT)) {
            evolutionScale = FIRESTARTER_START_SCALE;

            // Create a child code from the parent code or initialize a new code.
            if (parentCode) {
                // Randomize 2 and 3 instructions alternately.
                code = parentCode;
                code.RandomInstruction(memberSeed);
                code.RandomInstruction(memberSeed);
                if (pass & 1)
                    code.RandomInstruction(memberSeed);
            } else
                code.InitCode();
            registers = code.Optimize();
            for (unsigned int v = 0; (v < FIRESTARTER_VARIATIONS); v++) {
                data[v].InitData(memberSeed, registers);
                memberVariationResults[v] = FIRESTARTER_START_RESULT;
                oldVariationResults[v] = FIRESTARTER_START_RESULT;
            }
            oldResult = FIRESTARTER_START_RESULT;
            memberResult = FIRESTARTER_START_RESULT;
//          memberVariation = 0; // Note: Use the previous max variation for optimization.
            evolveAge = 0;
        } else {
            // Randomize a register each generation.
            evolutionScale = memberResult * FIRESTARTER_SCALE;
            if (evolveAge > 0)
                data[memberVariation].RandomData(memberSeed, evolutionScale, registers);
        }

        // Iterate to evolve the highest variation.
        for (unsigned int i = 0; i < FIRESTARTER_EVOLVE_GPU_ITERATIONS; i++) {
            unsigned int d = RANDOMMOD(memberSeed, registers);
            float old = data[memberVariation][d];
            data[memberVariation][d] = old + evolutionScale * RANDOMFACTOR(memberSeed);
            float curResult = memberResult * 0.99f;
            if (TestEvaluate(sharedData, data, code, target[memberVariation], theta, curResult)) {
                memberVariationResults[memberVariation] = curResult;
                memberResult = memberVariationResults[0];
                memberVariation = 0;
                for (unsigned int v = 1; v < FIRESTARTER_VARIATIONS; v++) {
                    if (memberVariationResults[v] > memberResult) {
                        memberResult = memberVariationResults[v];
                        memberVariation = v;
                    }
                }
            } else
                data[memberVariation][d] = old;
        }

        // Did the results improve?
        if (!pass || (memberResult < oldResult)) {
            // If the results were better, update the old results.
            oldCode = code;
            for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++) {
                oldData[v] = data[v];
                oldVariationResults[v] = memberVariationResults[v];
            }
            oldResult = memberResult;
            oldVariation = memberVariation;
            evolveAge = 1;

            // Update the best results.
            if (!pass || (memberResult < bestResult)) {
                bestCode = code;
                for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++) {
                    bestData[v] = data[v];
                    bestVariationResults[v] = memberVariationResults[v];
                }
                bestResult = memberResult;
                bestVariation = memberVariation;
                bestAge = evolveAge;
            }
        } else {
            // Revert to the original code and data.
            code = oldCode;
            for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++) {
                data[v] = oldData[v];
                memberVariationResults[v] = oldVariationResults[v];
            }
            memberResult = oldResult;
            memberVariation = oldVariation;
            evolveAge++;
        }
    }

    // Return the optimized best code.
    codes[member].Copy(bestCode);

    // Return the array of results or the entire population data.
    results[member] = bestResult;

    // Return the variation data for debugging.
    if (population)
        for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++)
            FireStarterPopulation::PopulationResult(population, member, v)->InitResult(bestData[v], bestVariationResults[v], bestAge);
} // Selecter
