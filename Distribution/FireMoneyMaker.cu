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

inline bool EvolveEvaluate(FireStarterSharedData& sharedData, const FireStarterCode& code, const MoneyMakerStock &stockData, float& result)
{
    float maxResult = result;
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
            return false;
        i++;
    }
    while (i < MONEYMAKER_HISTORY) {
        float newPrice = stockData[i];
        float priceChange = newPrice / oldPrice;
        oldPrice = newPrice;

        float n = fabsf(code.Evaluate(sharedData, priceChange));
        if (!isfinite(n))
            return false;

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
    result = MONEYMAKER_FUNDS / funds;    // Inverted so that the smallest value can be selected to match other modes.
    return result < maxResult;
} // EvolveEvaluate

// Current best single variation version: Each thread has its own code. The goal is to maximize the number of candidates that can be tested in a given period of time.
GPU_GLOBAL void Evolver(float* results, FireStarterResult* population, FireStarterCode* codes, MoneyMakerStocks* stocks, const unsigned int variation, const unsigned long long seed, const unsigned int passes, const unsigned int populationSize)
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
    float memberResult = FIRESTARTER_START_RESULT;
    for (unsigned int i = 0; i < 10; i++) {
        code.InitCode(memberSeed);
        registers = code.Optimize();
        data.InitData(memberSeed, registers);
        sharedData = data;
        if (EvolveEvaluate(sharedData, code, stockData, memberResult))
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
            float curResult = memberResult * 0.99f;
            if (EvolveEvaluate(sharedData, code, stockData, curResult))
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
