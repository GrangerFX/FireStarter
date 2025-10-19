#pragma once

#include "FireStarterResults.h"
#include "MoneyMakerStocks.h"

inline float MoneyCompiledEvaluate(FireStarterData& data, float n)
{
// EVALUATE //
    data[0] = n;
    n += data[1];
    n *= data[2];
    n *= data[3];
    n += data[4];
    n += data[5];
    n += data[6];
    data[3] = n;
    n *= data[7];
    n += data[8];
    n *= data[3];
    data[4] = n;
    n += data[9];
    data[10] = n;
    data[11] = n;
    n += data[10];
    n *= data[7];
    n += data[12];
    n *= data[13];
    data[14] = n;
    data[11] = n;
    data[14] = n;
    n *= data[12];
    data[14] = n;
    n *= data[15];
    n += data[16];
    n *= data[2];
    n += data[3];
    n += data[17];
    n *= data[17];
    n *= data[2];
    n += data[11];
// END //
    return n;
} // MoneyCompiledEvaluate

inline bool MoneyOptimizeEvaluate(const FireStarterData& data, const MoneyMakerStock& stockData, const unsigned int stockStart, unsigned int& trades, float& result)
{
    float minResult = result;
    result = FIRESTARTER_START_RESULT;

    float startingFunds = MONEYMAKER_FUNDS;
    float funds = startingFunds;
    unsigned int index = stockStart;
    unsigned int shares = 0;
    unsigned int numTrades = 0;

    FireStarterData workData;
    workData = data;

    // Warmup evaluation ignoring the results.
    float oldPrice = stockData[index++];
    for (unsigned int i = 1; i < MONEYMAKER_WARMUP; i++) {
        float newPrice = stockData[index++];
        float priceChange = newPrice / oldPrice;
        oldPrice = newPrice;

        // Trading evaluation using the result to buy or sell shares.
        float n = MoneyCompiledEvaluate(workData, priceChange);
        if (!isfinite(n))
            return false;
    }

    // Use the evaluation to trade the stock.
    for (unsigned int i = 0; i < MONEYMAKER_TRADING; i++) {
        float newPrice = stockData[index++];
        float priceChange = newPrice / oldPrice;
        oldPrice = newPrice;

        // Trading evaluation using the result to buy or sell shares.
        float n = MoneyCompiledEvaluate(workData, priceChange);
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

GPU_GLOBAL void MoneyOptimizer(FireStarterResult* newPopulation, const FireStarterResult* oldPopulation, MoneyMakerStocks* stocks, const unsigned int registers, const unsigned long long optimizeSeed, const unsigned long long optimizePass, unsigned int populationSize, const unsigned int stock)
{
    // Determine the member to be optimized.
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= populationSize)
        return;

    // Get the stock data.
    const MoneyMakerStock& stockData = stocks->Stock(stock);

    // Evolve the program registers for each variation.
    FireStarterData data;
    unsigned int trades;
    unsigned int oldTrades;
    unsigned short evolveAge;
    float result, memberResult;
    float evolutionScale;
    unsigned long long memberSeed = optimizeSeed + SEED11(member); // Unique seed for the generation/variation/member
    unsigned long long stockSeed = optimizeSeed + SEED2(stock);    // Same seed for all members
    unsigned int stockStart = RANDOMMOD(stockSeed, MONEYMAKER_STOCKS);

    // The first generation is initalized with random numbers.
    if (!optimizePass) {
        for (unsigned int i = 0; i < 10; i++) {
            data.InitData(memberSeed, registers);
            result = FIRESTARTER_START_RESULT;
            if (MoneyOptimizeEvaluate(data, stockData, stockStart, trades, result))
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
            if (!MoneyOptimizeEvaluate(data, stockData, stockStart, trades, result)) {
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
        if (MoneyOptimizeEvaluate(data, stockData, stockStart, curTrades, curResult)) {
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
            unsigned int candidate = RANDOMMOD(memberSeed, populationSize);
            const FireStarterResult* candidateResult = FireStarterPopulation::PopulationResult(oldPopulation, candidate);
            unsigned short candidateAge = candidateResult->EvolveAge1();
            if (candidateAge <= 1) {
                float candidateMaxResult = candidateResult->MaxResult();
                if (candidateMaxResult <= result)
                    bestCandidate = candidate;
            }
        }

        // Switch to the selected member's data and results.
        if (bestCandidate != member) {
            const FireStarterResult* bestCandidateResult = FireStarterPopulation::PopulationResult(oldPopulation, bestCandidate);
            data = bestCandidateResult->Data();
            trades = bestCandidateResult->EvolveAge2();
            result = bestCandidateResult->MaxResult();
            evolveAge = evolveAge ? evolveAge + 1 : 2;
        } else
            evolveAge = 1;
    }

    if (newPopulation)
        FireStarterPopulation::PopulationResult(newPopulation, member)->InitResult(data, result, evolveAge, trades);
} // MoneyOptimizer

inline bool MoneyTesterEvaluate(const FireStarterData& data, const MoneyMakerStock& stockData, MoneyMakerStock& resultData, unsigned int& trades, float& result)
{
    float startingFunds = MONEYMAKER_FUNDS;
    float funds = startingFunds;
    float oldPrice = stockData[0];
    unsigned int index = 1;
    unsigned int shares = 0;

    FireStarterData workData;
    workData = data;

    // Warmup evaluation ignoring the results.
    resultData[0] = 0.0f;
    for (unsigned int i = 1; i < MONEYMAKER_WARMUP; i++) {
        float newPrice = stockData[index];
        float priceChange = newPrice / oldPrice;
        oldPrice = newPrice;

        // Trading evaluation using the result to buy or sell shares.
        float n = MoneyCompiledEvaluate(workData, priceChange);
        resultData[index++] = n;
        if (!isfinite(n))
            return false;
    }

    // Use the evaluation to trade the stock.
    for (unsigned int i = 0; i < MONEYMAKER_TRADING; i++) {
        float newPrice = stockData[index];
        float priceChange = newPrice / oldPrice;
        oldPrice = newPrice;

        // Trading evaluation using the result to buy or sell shares.
        float n = MoneyCompiledEvaluate(workData, priceChange);
        resultData[index++] = n;
        if (!isfinite(n))
            return false;

        // If the evaluation > 1.0f, buy shares. If below -1.0f, sell shares.
        if (n > 1.0f) {
            if (!shares) {
                shares = (unsigned int)(funds / newPrice);
                funds -= shares * newPrice;
                trades++;
            }
        } else if (n < -1.0f) {
            if (shares) {
                funds += newPrice * shares;
                shares = 0;
                trades++;
            }
        }
    }

    // The final funds after selling remaining shares.
    float tradingFunds = funds + shares * stockData[index - 1];

    // The result is the ratio between the starting funds and the final funds.
    // Note: This ratio is inverted to prefer smaller numbers for compatibility with FireStarter.
    resultData[0] = startingFunds / tradingFunds; // Inverse alpha.
    return true;
} // MoneyTesterEvaluate

GPU_GLOBAL void MoneyTester(const MoneyMakerStocks* stocks, MoneyMakerStocks* tradingResults, const FireStarterData* tradingData)
{
    unsigned int stockIndex = threadIdx.x;
    if (stockIndex < stocks->numStocks) {
        const MoneyMakerStock& stockData = stocks->Stock(stockIndex);
        MoneyMakerStock& resultData = tradingResults->Stock(stockIndex);

        // The shared data for the threads in the warp.
        unsigned int testTrades = 0;
        float testResult = 0.0f;
        MoneyTesterEvaluate(*tradingData, stockData, resultData, testTrades, testResult);
        int foo = 1;
    }
} // MoneyTester
