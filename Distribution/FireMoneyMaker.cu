#pragma once
#include "FireStarterResults.h"
#include "MoneyMakerStocks.h"
#include "CUDADefines.h"

// Note: TODO: Implement a way to display the stock trades.
GPU_GLOBAL void ShowEvaluate(float* target, float* results, unsigned int size, float thetaStart, float thetaEnd, FireStarterCode* code, FireStarterData* data, unsigned int variation)
{
    // Determine the member to be optimized.
    unsigned int index = blockIdx.x * blockDim.x + threadIdx.x;
    if (index >= size)
        return;

    // Generate the displayed results.
    if (results)
        results[index] = 0.0f;
} // ShowEvaluate

inline float EvolveEvaluate(FireStarterSharedData& sharedData, const FireStarterCode& code, const MoneyMakerStock &stockData)
{
    float funds = MONEYMAKER_FUNDS;
    float oldPrice = stockData[0];
    int shares = 0;
    unsigned int i = 1;

    while (i < MONEYMAKER_WARMUP) {
        float newPrice = stockData[i];
        float priceChange = newPrice / oldPrice;
        oldPrice = newPrice;

        float n = fabsf(code.Evaluate(sharedData, priceChange));
        if (!isfinite(n))
            return -1.0f;
        i++;
    }
    while (i < MONEYMAKER_HISTORY) {
        float newPrice = stockData[i];
        float priceChange = newPrice / oldPrice;
        oldPrice = newPrice;

        float n = fabsf(code.Evaluate(sharedData, priceChange));
        if (!isfinite(n))
            return -1.0f;

        if (n >= 1.0f) {
            if (shares == 0) {
                shares = (int)(funds / newPrice);
                funds -= shares * newPrice;
            }
        } else if (n <= -1.0f) {
            if (shares > 0) {
                funds += newPrice * shares;
                shares = 0;
            }
        }
        i++;
    }
    return funds / MONEYMAKER_FUNDS;
} // EvolveEvaluate

// Not used in Evolver. For code checkins in only.
inline float CompiledEvaluate(FireStarterData& data, float n)
{
    // EVALUATE //
    // END //
    return n;
} // CompiledEvaluate

inline float OptimizeEvaluate(const FireStarterData& startData, const MoneyMakerStock& stockData)
{
    FireStarterData data(startData);
    float funds = MONEYMAKER_FUNDS;
    float oldPrice = stockData[0];
    int shares = 0;
    unsigned int i = 1;

    while (i < MONEYMAKER_WARMUP) {
        float newPrice = stockData[i];
        float priceChange = newPrice / oldPrice;
        oldPrice = newPrice;

        float n = fabsf(CompiledEvaluate(data, priceChange));
        if (!isfinite(n))
            return -1.0f;
        i++;
    }
    while (i < MONEYMAKER_HISTORY) {
        float newPrice = stockData[i];
        float priceChange = newPrice / oldPrice;
        oldPrice = newPrice;

        float n = fabsf(CompiledEvaluate(data, priceChange));
        if (!isfinite(n))
            return -1.0f;

        if (n >= 1.0f) {
            if (shares == 0) {
                shares = (int)(funds / newPrice);
                funds -= shares * newPrice;
            }
        } else if (n <= -1.0f) {
            if (shares > 0) {
                funds += newPrice * shares;
                shares = 0;
            }
        }
        i++;
    }
    return funds / MONEYMAKER_FUNDS;
} // OptimizeEvaluate

// Current best single variation version: Each thread has its own code. The goal is to maximize the number of candidates that can be tested in a given period of time.
GPU_GLOBAL void MoneyMakerEvolver(float* results, FireStarterResult* population, FireStarterCode* codes, MoneyMakerStocks* stocks, const unsigned int variation, const unsigned long long seed, const unsigned int passes, const unsigned int populationSize)
{
    // Determine the member to be optimized.
    unsigned int member = blockIdx.x * blockDim.x + threadIdx.x;
    if (member >= populationSize)
        return;

    // Get the stock data.
    const MoneyMakerStock& stockData = stocks->StockData();

    // The shared data for the threads in the warp.
    GPU_SHARED FireStarterSharedData sharedData;

    // The evolution code and data.
    FireStarterCode code;
    FireStarterData data;

    // Evolve the program registers for each variation.
    unsigned long long memberSeed = seed + SEED1(member);   // Unique seed for the member
    unsigned short evolveAge = 0;
    unsigned short bestAge = 0;
    unsigned int registers = 0;

    // The first generation is initalized with random numbers.
    float memberResult = 0.0f;
    for (unsigned int i = 0; i < 10; i++) {
        code.InitCode(memberSeed);
        registers = code.Optimize();
        data.InitData(memberSeed, registers);
        sharedData = data;
        float result = EvolveEvaluate(sharedData, code, stockData);
        if (result > 0.0f)
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
            sharedData = data;
            float result = EvolveEvaluate(sharedData, code, stockData);
            if (result > memberResult)
                memberResult = result;
            else
                data[d] = old;
        }

        // Did the results improve?
        if (!pass || (memberResult > oldResult)) {
            // If the result was better, save the results.
            oldCode = code;
            oldData = data;
            oldResult = memberResult;
            evolveAge = 0;

            // Update the best result.
            if (!pass || (memberResult > bestResult)) {
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
} // MoneyMakerEvolver

GPU_GLOBAL void MoneyMakerOptimizer(FireStarterResult* newPopulation, const FireStarterResult* oldPopulation, MoneyMakerStocks* stocks, const unsigned int variation, const unsigned int registers, const unsigned long long optimizeSeed, const unsigned long long optimizePass, unsigned int population)
{
    // Determine the member to be optimized.
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;

    // Get the stock data.
    const MoneyMakerStock& stockData = stocks->StockData();

    // Precalculate the target theta values and target samples.
    float theta[FIRESTARTER_OPTIMIZE_SAMPLES];
    float target[FIRESTARTER_OPTIMIZE_SAMPLES];
    float sampleStep = (TARGET_MAX - TARGET_MIN) / (FIRESTARTER_OPTIMIZE_SAMPLES - 1);
    unsigned int targetVariation = variation % FIRESTARTER_VARIATIONS;
    for (unsigned int i = 0; i < FIRESTARTER_OPTIMIZE_SAMPLES; i++) {
        float t = theta[i] = TARGET_MIN + i * sampleStep;
        target[i] = Target(t, targetVariation);
    }

    // Evolve the program registers for each variation.
    FireStarterData data;
    unsigned short evolveAge, initAge;
    float result, memberResult;
    float evolutionScale;
    unsigned long long memberSeed = optimizeSeed + SEED11(member); // Unique seed for the generation/variation/member

    // The first generation is initalized with random numbers.
    if (!optimizePass) {
        for (initAge = 1; initAge <= 10; initAge++) {
            data.InitData(memberSeed, registers);
            result = OptimizeEvaluate(data, stockData);
            if (result > 0.0f)
                break;
        }
        memberResult = FIRESTARTER_START_RESULT;
        evolutionScale = FIRESTARTER_START_SCALE; // Validated as faster than 0.6f * memberResult  11/17/2024
        evolveAge = 0;
    } else {
        // Later generations randomize a single register if they were copied.
        const FireStarterResult& oldResult = *FireStarterPopulation::PopulationResult(oldPopulation, member, variation);
        data.Copy(oldResult.Data());
        evolveAge = oldResult.EvolveAge1();
        initAge = oldResult.EvolveAge2();
        if (evolveAge > 1) {
            // Randomize a single register.
            unsigned int d = RANDOMMOD(memberSeed, registers);
            float oldData = data[d];
            data[d] = oldData + RANDOMFACTOR(memberSeed) * FIRESTARTER_START_SCALE * (evolveAge - 1);
            result = OptimizeEvaluate(data, stockData);
            if (result <= 0.0f) {
                data[d] = oldData;
                memberResult = result = oldResult.MaxResult();
            } else
                memberResult = result;
            evolutionScale = (2.0f * FIRESTARTER_SCALE) * memberResult; // Validated as being faster than 0.6f * FIRESTARTER_START_RESULT  11/17/2024
        } else {
            memberResult = result = oldResult.MaxResult();
            evolutionScale = FIRESTARTER_SCALE * memberResult;
        }
    }

    // Iterate to evolve the registers.
    for (unsigned int i = 0; i < FIRESTARTER_OPTIMIZE_ITERATIONS; i++) {
        unsigned int d = RANDOMMOD(memberSeed, registers);
        float oldData = data[d];
        data[d] = oldData + evolutionScale * RANDOMFACTOR(memberSeed);
        float curResult = OptimizeEvaluate(data, stockData);
        if (curResult >= result)
            result = curResult;
        else
            data[d] = oldData;
    }

    // Save the results if they improved or switch to another member's old results.
    if (!optimizePass || (result < memberResult))
        // If the result was better, save the results.
        evolveAge = 0;
    else {
        // If the result was worse, copy a result from among the previous generation's results.
        unsigned int bestCandidate = member;

        // The genetic part of genetic programming and a major optimization:
        // Copy the best data from among a random set of candidates.
        for (int i = 0; i < FIRESTARTER_CANDIDATES; i++) {
            // Select evolving members with results better than the current result.
            unsigned int candidate = RANDOMMOD(memberSeed, population);
            const FireStarterResult* candidateResult = FireStarterPopulation::PopulationResult(oldPopulation, candidate, variation);
            unsigned short candidateAge = candidateResult->EvolveAge1();
            if (candidateAge <= 1) {
                float candidateMaxResult = candidateResult->MaxResult();
                if (candidateMaxResult <= result) {
                    bestCandidate = candidate;
                    result = candidateMaxResult;
                }
            }
        }

        // Switch to the selected member's data and results.
        if (bestCandidate != member) {
            const FireStarterResult* bestCandidateResult = FireStarterPopulation::PopulationResult(oldPopulation, bestCandidate, variation);
            data = bestCandidateResult->Data();
            evolveAge = evolveAge ? evolveAge + 1 : 2;
            initAge = bestCandidateResult->EvolveAge2();
        } else
            evolveAge = 1;
    }

    if (newPopulation)
        FireStarterPopulation::PopulationResult(newPopulation, member, variation)->InitResult(data, result, evolveAge, initAge);
} // MoneyMakerOptimizer
