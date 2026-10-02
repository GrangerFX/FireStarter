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
    data[4] = n;
    n *= data[5];
    n *= data[6];
    n += data[2];
    data[7] = n;
    n += data[6];
    n += data[3];
    n *= data[7];
    data[8] = n;
    n *= data[6];
    data[9] = n;
    data[10] = n;
    data[11] = n;
    data[3] = n;
    n *= data[6];
    n += data[9];
    n += data[12];
    n *= data[13];
    n += data[14];
    n += data[15];
    n += data[8];
    n += data[12];
    n *= data[16];
    n += data[2];
    data[16] = n;
    n *= data[17];
    n += data[18];
    n *= data[16];
// END //
    return n;
} // MoneyCompiledEvaluate

#if MONEYMAKER_WINS
inline bool MoneyOptimizeEvaluate(const FireStarterSettings* settings, const FireStarterData& data, const MoneyMakerStock& stock, unsigned int startDay, float& result)
{
    FireStarterData workData(data);
    unsigned int wins = 0;
    unsigned int index = startDay;
    unsigned int shares = 0;

    // Warmup evaluation ignoring the results.
    // Starts at 1 because the first day is used to set the oldPrice.
    float oldPrice = stock[index++];
    for (unsigned int i = 1; i < settings->m_warmup; i++) {
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
    for (unsigned int i = 1; i < settings->m_trading; i++) {
        float newPrice = stock[index++];
        float priceChange = newPrice / oldPrice;
        oldPrice = newPrice;

        // Trading evaluation using the result to buy or sell shares.
        float n = MoneyCompiledEvaluate(workData, priceChange);
        if (!isfinite(n))
            return false;

        // If the evaluation >= 1.0f, check if the trade would be a winner.
        float nextPrice = stock[index];
        if (n >= 0.0f) {
            if (nextPrice > newPrice)
                wins++;
        } else {
            if (nextPrice <= newPrice)
                wins++;
        }
    }

    // The result is the ratio between the daily trade wins and losses.
    // Note: This ratio is inverted to prefer smaller numbers for compatibility with FireStarter.
    result = (settings->m_trading - 1) / float(MAX(wins, 1));
    return true;
} // MoneyOptimizeEvaluate
#else
inline bool MoneyOptimizeEvaluate(const FireStarterSettings* settings, const FireStarterData& data, const MoneyMakerStock& stock, unsigned int startDay, float& result)
{
    FireStarterData workData(data);
    float funds = settings->m_funds;
    unsigned int index = startDay;
    unsigned int shares = 0;

    // Warmup evaluation ignoring the results.
    // Starts at 1 because the first day is used to set the oldPrice.
    float oldPrice = stock[index++];
    for (unsigned int i = 1; i < settings->m_warmup; i++) {
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
    for (unsigned int i = 1; i < settings->m_trading; i++) {
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
    funds += shares * stock[index];

    // The result is the ratio between the starting funds and the final funds.
    // Note: This ratio is inverted to prefer smaller numbers for compatibility with FireStarter.
    result = settings->m_funds / funds; // Inverse alpha.
    return true;
} // MoneyOptimizeEvaluate
#endif

inline bool MoneyOptimizeEvaluateStocks(const FireStarterSettings* settings, const FireStarterData& data, const MoneyMakerStocks* stocks, unsigned long long seed, float& result)
{
    float sessionsResult = 0.0f;
    unsigned int sessions = settings->m_sessions * settings->m_stocks;
    unsigned int stock = 0;
    for (unsigned int session = 0; session < sessions; session++) {
        unsigned long long sessionSeed = SEED9(session) + seed;
        unsigned int sessionStart = RANDOMMOD(sessionSeed, settings->m_variation + 1);
        float stockResult = settings->m_startResult;

        if (!MoneyOptimizeEvaluate(settings, data, stocks->Stock(stock + settings->m_stock), sessionStart, stockResult))
            return false;
        sessionsResult += stockResult;
        if (++stock == settings->m_stocks)
            stock = 0;
    }
    sessionsResult /= sessions;
    if (sessionsResult < result) {
        result = sessionsResult;
        return true;
    }
    return false;
} // MoneyOptimizeEvaluateStocks

GPU_GLOBAL void MoneyOptimizer(const FireStarterSettings* settings, FireStarterResult* newPopulation, const FireStarterResult* oldPopulation, MoneyMakerStocks* stocks, const unsigned int registers, const unsigned long long optimizeSeed, const unsigned long long optimizePass)
{
    // Determine the member to be optimized.
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= settings->m_population)
        return;
    unsigned long long memberSeed = optimizeSeed + SEED11(member); // Unique seed for the generation and member

    // The optimized data.
    FireStarterData data;

    // Optimize the data for each generation.
    unsigned short evolveAge;
    float result, memberResult;
    float evolutionScale;

    // The first generation is initalized with random numbers.
    if (!optimizePass) {
        for (unsigned int i = 0; i < 10; i++) {
            data.InitData(memberSeed, registers, 1.0f); // Scale matches HatTrick.
            result = settings->m_startResult;
            if (MoneyOptimizeEvaluateStocks(settings, data, stocks, optimizeSeed, result))
                break;
        }
        memberResult = settings->m_startResult;
        evolutionScale = settings->m_startScale; // Validated as faster than 0.6f * memberResult  11/17/2024
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
            data[d] = oldData + RANDOMFACTOR(memberSeed) * settings->m_startScale * (evolveAge - 1);
            if (MoneyOptimizeEvaluateStocks(settings, data, stocks, optimizeSeed, result))
                memberResult = settings->m_startResult; // Validated as being faster than result  11/17/2024
            else
                data[d] = oldData;
            evolutionScale = (2.0f * settings->m_scale) * memberResult; // Validated as being faster than 0.6f * startResult  11/17/2024
        } else
            evolutionScale = settings->m_scale * memberResult;
    }

    // Iterate to optimize the data.
    for (unsigned int i = 0; i < settings->m_iterations; i++) {
        unsigned int d = RANDOMMOD(memberSeed, registers);
        float oldData = data[d];
        data[d] = oldData + evolutionScale * RANDOMFACTOR(memberSeed);
        unsigned int curTrades = 0;
        float curResult = result * 0.99f; // Validated as being faster than * 1.0f or * 0.9f. About the same as * 0.999f.  11/17/2024
        if (MoneyOptimizeEvaluateStocks(settings, data, stocks, optimizeSeed, curResult))
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
        for (unsigned int i = 0; i < settings->m_candidates; i++) {
            // Select evolving members with results better than the current result.
            unsigned int candidate = RANDOMMOD(memberSeed, settings->m_population);
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

inline bool MoneyTesterEvaluate(const FireStarterSettings* settings, const FireStarterData& data, const MoneyMakerStock& stock, MoneyMakerStock& trades)
{
    unsigned int warmup = settings->m_warmup;
    unsigned int tradingDays = settings->m_variation + settings->m_trading;
    unsigned int validationDays = settings->m_validation;
    float startingFunds = settings->m_funds;
    float oldPrice = stock[0];
    unsigned int index = 1;

    // Note: The tester combines the variation with the trading days for complete evaluation.
    FireStarterData workData;
    workData = data;

    // Warmup evaluation ignoring the results.
    // Starts at 1 because the first day is used to set the oldPrice.
    trades.minValue = 0.0f;
    trades.maxValue = 0.0f;
    trades[0] = 0.0f;
    for (unsigned int i = 1; i < warmup; i++) {
        float newPrice = stock[index];
        float priceChange = newPrice / oldPrice;
        oldPrice = newPrice;

        // Trading evaluation using the result to buy or sell shares.
        float n = MoneyCompiledEvaluate(workData, priceChange);
        trades[index++] = n;
        if (!isfinite(n))
            return false;
    }

    // Use the evaluation to trade the stock.
    // Starts at 1 to give an extra day to settle the final trade.
    unsigned int shares = 0;
    unsigned int wins = 0;
    float funds = startingFunds;
    for (unsigned int i = 1; i < tradingDays; i++) {
        float newPrice = stock[index];
        float priceChange = newPrice / oldPrice;
        oldPrice = newPrice;

        // Trading evaluation using the result to buy or sell shares.
        float n = MoneyCompiledEvaluate(workData, priceChange);
        trades[index++] = n;
        if (!isfinite(n))
            return false;

        // If the evaluation >= 1.0f, buy shares. If below 1.0f, sell shares.
        if (n >= 0.0f) {
            if (!shares) {
                shares = (unsigned int)(funds / newPrice);
                funds -= shares * newPrice;
            }
            if (stock[index] > newPrice)
                wins++;
        } else {
            if (shares) {
                funds += newPrice * shares;
                shares = 0;
            }
            if (stock[index] <= newPrice)
                wins++;
        }
    }

    // The final trading funds and wins after selling remaining shares.
    float tradingFunds = funds + shares * stock[index];
    unsigned int tradingWins = wins;

    // Validation of future days not used during evolution or optimization.
    wins = 0;
    for (unsigned int i = 1; i < validationDays; i++) {
        float newPrice = stock[index];
        float priceChange = newPrice / oldPrice;
        oldPrice = newPrice;

        // Trading evaluation using the result to buy or sell shares.
        float n = MoneyCompiledEvaluate(workData, priceChange);
        trades[index++] = n;
        if (!isfinite(n))
            return false;

        // If the evaluation >= 1.0f, buy shares. If below 1.0f, sell shares.
        if (n >= 0.0f) {
            if (!shares) {
                shares = (unsigned int)(funds / newPrice);
                funds -= shares * newPrice;
            }
            if (stock[index] > newPrice)
                wins++;
        } else {
            if (shares) {
                funds += newPrice * shares;
                shares = 0;
            }
            if (stock[index] <= newPrice)
                wins++;
        }
    }

    // The final validation funds and wins after selling remaining shares.
    float validationFunds = funds + shares * stock[index];
    unsigned int validationWins = wins;

    // The result is the ratio between the starting funds and the final funds.
    // Note: This ratio is inverted to prefer smaller numbers for compatibility with FireStarter.
    trades.tradingResult = startingFunds / tradingFunds;        // Inverse alpha.
    trades.validationResult = tradingFunds / validationFunds;   // Inverse alpha.

    // The winning trade percent is also calculated. This makes it easier to compare predictive power.
    trades.tradingWins = tradingWins / float(tradingDays - 1);          // Winning trade percent.
    trades.validationWins = validationWins / float(validationDays - 1);    // Winning validation percent.
    return true;
} // MoneyTesterEvaluate

GPU_GLOBAL void MoneyTester(const FireStarterSettings* settings, const MoneyMakerStocks* stocks, MoneyMakerStocks* tradingResults, const FireStarterData* tradingData)
{
    unsigned int stockIndex = threadIdx.x;
    if (stockIndex < settings->m_stocks)
        MoneyTesterEvaluate(settings, *tradingData, stocks->Stock(stockIndex + settings->m_stock), tradingResults->Stock(stockIndex + settings->m_stock));
} // MoneyTester
