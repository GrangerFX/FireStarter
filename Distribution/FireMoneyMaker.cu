#pragma once
#include "FireStarterResults.h"
#include "MoneyMakerStocks.h"
#include "CUDADefines.h"

inline bool MoneyMakerEvaluate(FireStarterSharedData& sharedData, const FireStarterData& data, const FireStarterCode& code, const MoneyMakerStock &stockData, unsigned long long seed, unsigned int& trades, float& result)
{
    float minResult = result;
    float funds = MONEYMAKER_FUNDS;
    float oldPrice = stockData[0];
    unsigned int shares = 0;
    unsigned int numTrades = 0;
    unsigned int i = 1;

    sharedData = data;
    while (i < MONEYMAKER_HISTORY) {
        float newPrice = stockData[i];
        float priceChange = newPrice / oldPrice;
        oldPrice = newPrice;

        // Trading evaluation using the result to buy or sell shares.
#if MONEYMAKER_RANDOM
        float n = RANDOMFACTOR(seed);
        n *= 1.1f;
#else
        float n = fabsf(code.Evaluate(sharedData, priceChange));
        if (!isfinite(n) || (fabsf(n) > 2.0f)) {
            result = FIRESTARTER_START_RESULT;
            return false;
        }
#endif

        // Warmup evaluation ignoring the results.
        if (i > MONEYMAKER_WARMUP) {
            if (n > 1.0f) {
                if (!shares) {
                    shares = (unsigned int)(funds / newPrice);
                    funds -= shares * newPrice;
                    numTrades++;
                }
            } else if (n < -1.0f) {
                if (shares) {
                    funds += newPrice * shares;
                    shares = 0;
                    numTrades++;
                }
            }
        }
        i++;
    }

    // The result is the ratio between the starting funds and the final funds.
    // Note: This ratio is inverted to prefer smaller numbers for compatibility with FireStarter.
    trades = numTrades;
    result = funds + shares * stockData[MONEYMAKER_HISTORY - 1];
    result = result > 0.0f ? MONEYMAKER_FUNDS / result : FIRESTARTER_START_RESULT;
    return result < minResult;
} // MoneyMakerEvaluate

// Current best single variation version: Each thread has its own code. The goal is to maximize the number of candidates that can be tested in a given period of time.
GPU_GLOBAL void MoneyMaker(float* results, FireStarterResult* population, FireStarterCode* codes, MoneyMakerStocks* stocks, const unsigned long long seed, const unsigned int passes, const unsigned int populationSize)
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
    unsigned int memberTrades = 0;
    for (unsigned int i = 0; i < 10; i++) {
        code.InitCode(memberSeed);
        registers = code.Optimize();
        data.InitData(memberSeed, registers, 1.0f); // Scale matches HatTrick.
        if (MoneyMakerEvaluate(sharedData, data, code, stockData, memberSeed, memberTrades, memberResult))
            break;
    }

    FireStarterCode bestCode = code;
    FireStarterCode oldCode = code;
    FireStarterData bestData = data;
    FireStarterData oldData = data;
    float bestResult = memberResult;
    float oldResult = memberResult;
    unsigned int bestTrades = memberTrades;
    unsigned int oldTrades = memberTrades;

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
            memberTrades = 0;
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
            unsigned int curTrades = 0;
            if (MoneyMakerEvaluate(sharedData, data, code, stockData, memberSeed, curTrades, curResult)) {
                memberResult = curResult;
                memberTrades = curTrades;
            } else
                data[d] = old;
        }

        // Did the results improve?
        if (!pass || (memberResult < oldResult)) {
            // If the result was better, save the results.
            oldCode = code;
            oldData = data;
            oldResult = memberResult;
            oldTrades = memberTrades;
            evolveAge = 0;

            // Update the best result.
            if (!pass || (memberResult < bestResult)) {
                bestCode = code;
                bestData = data;
                bestResult = memberResult;
                bestTrades = memberTrades;
                bestAge = evolveAge;
            }
        } else {
            // Revert to the original code and data.
            code = oldCode;
            data = oldData;
            memberResult = oldResult;
            memberTrades = oldTrades;
            evolveAge++;
        }
    }

    // Return the optimized best code.
    codes[member].Copy(bestCode);

    // Return the array of results or the entire population data.
    results[member] = bestResult;

    // Return the variation data for debugging.
    if (population)
        FireStarterPopulation::PopulationResult(population, member)->InitResult(bestData, bestResult, bestAge, bestTrades);
} // MoneyMaker
