#pragma once

#include "FireStarterResults.h"
#include "MoneyMakerStocks.h"

inline float MoneyCompiledEvaluate(FireStarterData& data, float n)
{
    // EVALUATE //
    n += data[0];
    n *= data[1];
    data[2] = n;
    n *= data[1];
    n += data[3];
    n += data[4];
    n *= data[2];
    n *= data[5];
    n += data[2];
    n *= data[6];
    data[7] = n;
    data[6] = n;
    n *= data[8];
    n *= data[9];
    n += data[9];
    data[1] = n;
    n *= data[10];
    data[11] = n;
    n += data[4];
    n += data[10];
    data[4] = n;
    data[12] = n;
    data[4] = n;
    n *= data[3];
    data[13] = n;
    n += data[9];
    data[14] = n;
    n += data[15];
    n *= data[16];
    n += data[17];
    n += data[3];
    n *= data[18];
// END //
    return n;
} // MoneyCompiledEvaluate

inline bool MoneyOptimizeEvaluate(const FireStarterData& data, const MoneyMakerStock& stockData, unsigned long long seed, unsigned int& trades, float& result)
{
    float minResult = result;
    result = FIRESTARTER_START_RESULT;

    float startingFunds = MONEYMAKER_FUNDS;
    float funds = startingFunds;
    float oldPrice = stockData[0];
    unsigned int index = 1;
    unsigned int shares = 0;
    unsigned int numTrades = 0;

    FireStarterData workData = data;

    // Warmup evaluation ignoring the results.
    for (unsigned int i = 0; i < MONEYMAKER_WARMUP; i++) {
        float newPrice = stockData[index++];
        float priceChange = newPrice / oldPrice;
        oldPrice = newPrice;

        // Trading evaluation using the result to buy or sell shares.
#if MONEYMAKER_RANDOM
        float n = 1.1f * RANDOMFACTOR(seed);
#else
        float n = MoneyCompiledEvaluate(workData, priceChange);
#endif
        if (!isfinite(n))
            return false;
    }

    // Use the evaluation to trade the stock.
    for (unsigned int i = 0; i < MONEYMAKER_TRADING; i++) {
        float newPrice = stockData[index++];
        float priceChange = newPrice / oldPrice;
        oldPrice = newPrice;

        // Trading evaluation using the result to buy or sell shares.
#if MONEYMAKER_RANDOM
        float n = 1.1f * RANDOMFACTOR(seed);
#else
        float n = MoneyCompiledEvaluate(workData, priceChange);
#endif
        if (!isfinite(n))
            return false;

        // If the evaluation > 1.0f, buy shares. If below -1.0f, sell shares.
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

    // The final funds after selling remaining shares.
    float tradingFunds = funds + shares * stockData[index - 1];

    // The result is the ratio between the starting funds and the final funds.
    // Note: This ratio is inverted to prefer smaller numbers for compatibility with FireStarter.
    trades = numTrades;
    result = startingFunds / tradingFunds; // Inverse alpha.
    return result < minResult;
} // MoneyOptimizeEvaluate

GPU_GLOBAL void MoneyOptimizer(FireStarterResult* newPopulation, const FireStarterResult* oldPopulation, MoneyMakerStocks* stocks, const unsigned int registers, const unsigned long long optimizeSeed, const unsigned long long optimizePass, unsigned int population)
{
    // Determine the member to be optimized.
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;

    // Get the stock data.
    const MoneyMakerStock& stockData = stocks->StockData();

    // Evolve the program registers for each variation.
    FireStarterData data;
    unsigned int trades;
    unsigned int oldTrades;
    unsigned short evolveAge;
    float result, memberResult;
    float evolutionScale;
    unsigned long long memberSeed = optimizeSeed + SEED11(member); // Unique seed for the generation/variation/member

    // The first generation is initalized with random numbers.
    if (!optimizePass) {
        for (unsigned int i = 0; i < 10; i++) {
            data.InitData(memberSeed, registers);
            result = FIRESTARTER_START_RESULT;
            if (MoneyOptimizeEvaluate(data, stockData, memberSeed, trades, result))
                break;
        }
        oldTrades = 0;
        trades = 0;
        memberResult = FIRESTARTER_START_RESULT;
        evolutionScale = FIRESTARTER_START_SCALE; // Validated as faster than 0.6f * memberResult  11/17/2024
        evolveAge = 0;
    } else {
        // Later generations randomize a single register if they were copied.
        const FireStarterResult& oldResult = *FireStarterPopulation::PopulationResult(oldPopulation, member);
        data.Copy(oldResult.Data());
        evolveAge = oldResult.EvolveAge1();
        oldTrades = oldResult.EvolveAge2();
        if (evolveAge > 1) {
            // Randomize a single register.
            unsigned int d = RANDOMMOD(memberSeed, registers);
            float oldData = data[d];
            data[d] = oldData + RANDOMFACTOR(memberSeed) * FIRESTARTER_START_SCALE * (evolveAge - 1);
            if (!MoneyOptimizeEvaluate(data, stockData, memberSeed, trades, result)) {
                data[d] = oldData;
                trades = oldTrades;
                memberResult = result = oldResult.MaxResult();
            } else {
                trades = 0;
                memberResult = FIRESTARTER_START_RESULT; // Validated as being faster than result  11/17/2024
            }
            evolutionScale = (2.0f * FIRESTARTER_SCALE) * memberResult; // Validated as being faster than 0.6f * FIRESTARTER_START_RESULT  11/17/2024
        } else {
            trades = oldResult.EvolveAge2();
            memberResult = result = oldResult.MaxResult();
            evolutionScale = FIRESTARTER_SCALE * memberResult;
        }
    }

    // Iterate to evolve the registers.
    for (unsigned int i = 0; i < FIRESTARTER_OPTIMIZE_ITERATIONS; i++) {
        unsigned int d = RANDOMMOD(memberSeed, registers);
        float oldData = data[d];
        data[d] = oldData + evolutionScale * RANDOMFACTOR(memberSeed);
        unsigned int curTrades = 0;
        float curResult = result * 0.99f; // Validated as being faster than * 1.0f or * 0.9f. About the same as * 0.999f.  11/17/2024
        if (MoneyOptimizeEvaluate(data, stockData, memberSeed, curTrades, curResult)) {
            trades = curTrades;
            result = curResult;
        } else
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
            const FireStarterResult* candidateResult = FireStarterPopulation::PopulationResult(oldPopulation, candidate);
            unsigned short candidateAge = candidateResult->EvolveAge1();
            if (candidateAge <= 1) {
                float candidateMaxResult = candidateResult->MaxResult();
                if (candidateMaxResult <= result) {
                    bestCandidate = candidate;
                    trades = candidateResult->EvolveAge2();
                    result = candidateMaxResult;
                }
            }
        }

        // Switch to the selected member's data and results.
        if (bestCandidate != member) {
            const FireStarterResult* bestCandidateResult = FireStarterPopulation::PopulationResult(oldPopulation, bestCandidate);
            data = bestCandidateResult->Data();
            evolveAge = evolveAge ? evolveAge + 1 : 2;
        } else
            evolveAge = 1;
    }

    if (newPopulation)
        FireStarterPopulation::PopulationResult(newPopulation, member)->InitResult(data, result, evolveAge, trades);
} // MoneyOptimizer
