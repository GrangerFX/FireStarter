#pragma once

#include "FireStarterResults.h"
#include "MoneyMakerStocks.h"

inline float MoneyCompiledEvaluate(FireStarterData& data, float n)
{
// EVALUATE //
    n *= data[0];
    data[1] = n;
    data[2] = n;
    n *= data[3];
    n *= data[4];
    data[5] = n;
    n += data[6];
    n *= data[3];
    data[7] = n;
    data[2] = n;
    n *= data[8];
    n += data[9];
    data[10] = n;
    n *= data[11];
    n += data[3];
    n += data[12];
    data[3] = n;
    data[13] = n;
    n += data[3];
    n *= data[12];
    n *= data[14];
    data[15] = n;
    n += data[3];
    n += data[15];
    n *= data[9];
    n += data[8];
    n += data[7];
    data[12] = n;
    n *= data[16];
    n *= data[15];
    n *= data[9];
    data[17] = n;
// END //
    return n;
} // MoneyCompiledEvaluate

inline bool MoneyOptimizeEvaluate(const FireStarterSettings* settings, const FireStarterData& data, const MoneyMakerStock& stock, unsigned int startDay, float& result)
{
    unsigned int warmup = settings->m_warmup;
    unsigned int trading = settings->m_trading;
    float startingFunds = settings->m_funds;
    float funds = startingFunds;
    unsigned int index = startDay;
    unsigned int shares = 0;

    FireStarterData workData;
    workData = data;

    // Warmup evaluation ignoring the results.
    // Starts at 1 because the first day is used to set the oldPrice.
    float oldPrice = stock[index++];
    for (unsigned int i = 1; i < warmup; i++) {
        float newPrice = stock[index++];
        float priceChange = newPrice / oldPrice;
        oldPrice = newPrice;

        // Trading evaluation using the result to buy or sell shares.
        float n = MoneyCompiledEvaluate(workData, priceChange);
        if (!isfinite(n))
            return false;
    }

    // Use the evaluation to trade the stock.
    // Starts at 1 to give an extra day to settle the final trade.
    for (unsigned int i = 1; i < trading; i++) {
        float newPrice = stock[index++];
        float priceChange = newPrice / oldPrice;
        oldPrice = newPrice;

        // Trading evaluation using the result to buy or sell shares.
        float n = MoneyCompiledEvaluate(workData, priceChange);
        if (!isfinite(n))
            return false;

        // If the evaluation >= 1.0f, buy shares. If below 1.0f, sell shares.
        if (n >= 0.0f) {
            if (!shares) {
                shares = (unsigned int)(funds / newPrice);
                funds -= shares * newPrice;
            }
        } else {
            if (shares) {
                funds += newPrice * shares;
                shares = 0;
            }
        }
    }

    // The final funds after selling remaining shares.
    float tradingFunds = funds + shares * stock[index];

    // The result is the ratio between the starting funds and the final funds.
    // Note: This ratio is inverted to prefer smaller numbers for compatibility with FireStarter.
    result = startingFunds / tradingFunds; // Inverse alpha.
    return true;
} // MoneyOptimizeEvaluate

inline bool MoneyOptimizeEvaluateStocks(const FireStarterSettings* settings, const FireStarterData& data, const MoneyMakerStocks& stocks, float& result)
{
    unsigned int sessions = settings->m_sessions;
    unsigned int variation = settings->m_variation;
    unsigned int numStocks = settings->m_stocks;
    float sessionsResult = 0.0f;
    unsigned int stock = 0;
    for (unsigned int session = 0; session < sessions; session++) {
        unsigned long long sessionSeed = SEED9(session);
        unsigned int sessionStart = RANDOMMOD(sessionSeed, variation + 1);
        float stockResult = FIRESTARTER_START_RESULT;

        if (!MoneyOptimizeEvaluate(settings, data, stocks.Stock(stock), sessionStart, stockResult)) {
            sessionsResult = FIRESTARTER_START_RESULT;
            break;
        }
        sessionsResult += stockResult / sessions;
        if (++stock == numStocks)
            stock = 0;
    }
    if (sessionsResult < result) {
        result = sessionsResult;
        return true;
    }
    return false;
} // MoneyOptimizeEvaluateStocks

GPU_GLOBAL void MoneyOptimizer(const FireStarterSettings* settings, FireStarterResult* newPopulation, const FireStarterResult* oldPopulation, MoneyMakerStocks* stocks, const unsigned int registers, const unsigned long long optimizeSeed, const unsigned long long optimizePass, unsigned int populationSize)
{
    // Determine the member to be optimized.
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= populationSize)
        return;

    // The optimized data.
    FireStarterData data;

    // Choose a random starting offset for each stock.
    unsigned long long memberSeed = optimizeSeed + SEED11(member); // Unique seed for the generation and member

    // Optimize the data for each generation.
    unsigned short evolveAge;
    float result, memberResult;
    float evolutionScale;

    // The first generation is initalized with random numbers.
    if (!optimizePass) {
        for (unsigned int i = 0; i < 10; i++) {
            data.InitData(memberSeed, registers);
            result = FIRESTARTER_START_RESULT;
            if (MoneyOptimizeEvaluateStocks(settings, data, *stocks, result))
                break;
        }
        memberResult = FIRESTARTER_START_RESULT;
        evolutionScale = FIRESTARTER_START_SCALE; // Validated as faster than 0.6f * memberResult  11/17/2024
        evolveAge = 0;
    } else {
        // Later generations randomize a single register if they were copied.
        const FireStarterResult& oldResult = *FireStarterPopulation::PopulationResult(oldPopulation, member);
        data.Copy(oldResult.Data());
        evolveAge = oldResult.EvolveAge1();
        memberResult = result = oldResult.MaxResult();
        if (evolveAge > 1) {
            // Randomize a single register.
            unsigned int d = RANDOMMOD(memberSeed, registers);
            float oldData = data[d];
            data[d] = oldData + RANDOMFACTOR(memberSeed) * FIRESTARTER_START_SCALE * (evolveAge - 1);
            if (MoneyOptimizeEvaluateStocks(settings, data, *stocks, result))
                memberResult = FIRESTARTER_START_RESULT; // Validated as being faster than result  11/17/2024
            else
                data[d] = oldData;
            evolutionScale = (2.0f * FIRESTARTER_SCALE) * memberResult; // Validated as being faster than 0.6f * FIRESTARTER_START_RESULT  11/17/2024
        } else
            evolutionScale = FIRESTARTER_SCALE * memberResult;
    }

    // Iterate to optimize the data.
    for (unsigned int i = 0; i < FIRESTARTER_OPTIMIZE_ITERATIONS; i++) {
        unsigned int d = RANDOMMOD(memberSeed, registers);
        float oldData = data[d];
        data[d] = oldData + evolutionScale * RANDOMFACTOR(memberSeed);
        unsigned int curTrades = 0;
        float curResult = result * 0.99f; // Validated as being faster than * 1.0f or * 0.9f. About the same as * 0.999f.  11/17/2024
        if (MoneyOptimizeEvaluateStocks(settings, data, *stocks, curResult))
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
            result = bestCandidateResult->MaxResult();
            evolveAge = evolveAge ? evolveAge + 1 : 2;
        } else
            evolveAge = 1;
    }

    // Return the best data, result and age.
    if (newPopulation)
        FireStarterPopulation::PopulationResult(newPopulation, member)->InitResult(data, result, evolveAge);
} // MoneyOptimizer

inline bool MoneyTesterEvaluate(const FireStarterSettings* settings, const FireStarterData& data, const MoneyMakerStock& stockData, MoneyMakerStock& resultData, float& result)
{
    unsigned int warmup = settings->m_warmup;
    unsigned int trading = settings->m_variation + settings->m_trading;
    float startingFunds = settings->m_funds;
    float funds = startingFunds;
    float oldPrice = stockData[0];
    unsigned int index = 1;
    unsigned int shares = 0;

    // Note: The tester combines the variation with the trading days for complete evaluation.
    FireStarterData workData;
    workData = data;

    // Warmup evaluation ignoring the results.
    // Starts at 1 because the first day is used to set the oldPrice.
    resultData[0] = 0.0f;
    for (unsigned int i = 1; i < warmup; i++) {
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
    // Starts at 1 to give an extra day to settle the final trade.
    for (unsigned int i = 1; i < trading; i++) {
        float newPrice = stockData[index];
        float priceChange = newPrice / oldPrice;
        oldPrice = newPrice;

        // Trading evaluation using the result to buy or sell shares.
        float n = MoneyCompiledEvaluate(workData, priceChange);
        resultData[index++] = n;
        if (!isfinite(n))
            return false;

        // If the evaluation >= 1.0f, buy shares. If below 1.0f, sell shares.
        if (n >= 0.0f) {
            if (!shares) {
                shares = (unsigned int)(funds / newPrice);
                funds -= shares * newPrice;
            }
        } else {
            if (shares) {
                funds += newPrice * shares;
                shares = 0;
            }
        }
    }

    // The final funds after selling remaining shares.
    float tradingFunds = funds + shares * stockData[index];

    // The result is the ratio between the starting funds and the final funds.
    // Note: This ratio is inverted to prefer smaller numbers for compatibility with FireStarter.
    resultData[0] = startingFunds / tradingFunds; // Inverse alpha.
    return true;
} // MoneyTesterEvaluate

GPU_GLOBAL void MoneyTester(const FireStarterSettings* settings, const MoneyMakerStocks* stocks, MoneyMakerStocks* tradingResults, const FireStarterData* tradingData)
{
    unsigned int stockIndex = threadIdx.x;
    if (stockIndex < stocks->numStocks) {
        const MoneyMakerStock& stockData = stocks->Stock(stockIndex);
        MoneyMakerStock& resultData = tradingResults->Stock(stockIndex);

        // The shared data for the threads in the warp.
        float testResult = 0.0f;
        MoneyTesterEvaluate(settings, *tradingData, stockData, resultData, testResult);
        int foo = 1;
    }
} // MoneyTester
