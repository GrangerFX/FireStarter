#pragma once

#include "FireStarterResults.h"
#include "MoneyMakerStocks.h"

inline float MoneyCompiledEvaluate(FireStarterData& data, float n)
{
// EVALUATE //
    data[0] = n;
    data[1] = n;
    data[2] = n;
    data[3] = n;
    data[4] = n;
    data[5] = n;
    data[6] = n;
    n += data[7];
    data[8] = n;
    n *= data[9];
    n += data[10];
    data[10] = n;
    n *= data[7];
    data[11] = n;
    n *= data[12];
    n *= data[13];
    n += data[14];
    n += data[15];
    n *= data[6];
    data[1] = n;
    n += data[16];
    n += data[10];
    n *= data[13];
    data[17] = n;
    n *= data[8];
    n *= data[6];
    n += data[4];
    data[5] = n;
    n += data[18];
    data[19] = n;
    data[9] = n;
    n += data[1];
// END //
    return n;
} // MoneyCompiledEvaluate

#if MONEYMAKER_WINS
inline bool MoneyOptimizeEvaluate(const FireStarterSettings* settings, const FireStarterData& data, const MoneyMakerStock& stock, unsigned int startDay, unsigned int tradingDays, float& result)
{
    FireStarterData workData(data);
    bool holding = false;
    unsigned int wins = 0;
    unsigned int index = startDay;
    float oldPrice = stock[index];

    // Use the evaluation to trade the stock.
    // Starts at 1 because the first day is used to set the oldPrice.
    for (unsigned int i = 1; i < tradingDays; i++) {
        float newPrice = stock[++index];
        float priceChange = newPrice / oldPrice;
        if ((newPrice >= oldPrice) == holding)
            wins++;
        oldPrice = newPrice;

        // Trading evaluation using the result to buy or sell shares.
        float n = MoneyCompiledEvaluate(workData, priceChange);
        if (!isfinite(n))
            return false;

        // If the evaluation >= 0.0f, buy shares. If below 0.0f, sell shares.
        holding = n >= 0.0f;
    }

    // The result is the ratio between the daily trade wins and losses.
    // Note: This ratio is inverted to prefer smaller numbers for compatibility with FireStarter.
    result = (tradingDays - 1) / float(MAX(wins, 1));
    return true;
} // MoneyOptimizeEvaluate
#else
inline bool MoneyOptimizeEvaluate(const FireStarterSettings* settings, const FireStarterData& data, const MoneyMakerStock& stock, unsigned int startDay, unsigned int tradingDays, float& result)
{
    FireStarterData workData(data);
    float funds = settings->m_funds;
    unsigned int shares = 0;
    unsigned int index = startDay;
    float oldPrice = stock[index];

    // Use the evaluation to trade the stock.
    // Starts at 1 because the first day is used to set the oldPrice.
    for (unsigned int i = 1; i < tradingDays; i++) {
        float newPrice = stock[++index];
        float priceChange = newPrice / oldPrice;
        oldPrice = newPrice;

        // Trading evaluation using the result to buy or sell shares.
        float n = MoneyCompiledEvaluate(workData, priceChange);
        if (!isfinite(n))
            return false;

        // If the evaluation >= 0.0f, buy shares. If below 0.0f, sell shares.
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

    // The final funds after selling remaining shares and converting to daily returns.
    funds += shares * stock[index];

    // Caclulate the trading profit and daily profit.
    float tradingProfit = funds - settings->m_funds;
    float tradingPercent = tradingProfit / settings->m_funds;
    float tradingDailyPercent = tradingPercent / (tradingDays - 1);

    // The result is inverted to prefer smaller numbers for compatibility with FireStarter.
    result = 1.0f - tradingDailyPercent;
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
        unsigned int sessionDays = RANDOMRANGE(sessionSeed, settings->m_tradingMin, settings->m_tradingMax);
        float stockResult = settings->m_startResult;

        if (!MoneyOptimizeEvaluate(settings, data, stocks->Stock(stock + settings->m_stock), sessionStart, sessionDays, stockResult))
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

// Note: The tester combines the variation with the trading days for complete evaluation.
inline bool MoneyTesterEvaluate(const FireStarterSettings* settings, const FireStarterData& data, const MoneyMakerStock& stock, MoneyMakerStock& trades)
{
    FireStarterData workData(data);
    unsigned int tradingDays = settings->m_variation + settings->m_tradingMax;
    unsigned int validationDays = settings->m_validation;
    bool holding = false;
    unsigned int wins = 0;
    float funds = settings->m_funds;
    unsigned int shares = 0;
    unsigned int index = 0;
    float oldPrice = stock[index];

    // Use the evaluation to trade the stock.
    // Starts at 1 because the first day is used to set the oldPrice.
    trades[0] = 0.0f;
    for (unsigned int i = 1; i < tradingDays; i++) {
        float newPrice = stock[++index];
        float priceChange = newPrice / oldPrice;
        if ((newPrice >= oldPrice) == holding)
            wins++;
        oldPrice = newPrice;

        // Trading evaluation using the result to buy or sell shares.
        float n = MoneyCompiledEvaluate(workData, priceChange);
        trades[index] = n;
        if (!isfinite(n))
            return false;

        // If the evaluation >= 1.0f, buy shares. If below 1.0f, sell shares.
        if (n >= 0.0f) {
            holding = true;
            if (!shares) {
                shares = (unsigned int)(funds / newPrice);
                funds -= shares * newPrice;
            }
        } else {
            holding = false;
            if (shares) {
                funds += newPrice * shares;
                shares = 0;
            }
        }
    }

    // The final funds after selling remaining shares.
    // Note: The final day of trading is undone by this line of code.
    float tradingFunds = funds + shares * stock[index];
    float tradingWins = wins / float(tradingDays - 1);

#if !MONEYMAKER_OPTIMIZE_EACH
    workData = data;
#endif

    // Validation of future days not used during evolution or optimization.
    holding = false;
    wins = 0;
    shares = 0;
    funds = settings->m_funds;
    for (unsigned int i = 1; i < validationDays; i++) {
        float newPrice = stock[++index];
        float priceChange = newPrice / oldPrice;
        if ((newPrice >= oldPrice) == holding)
            wins++;
        oldPrice = newPrice;

        // Trading evaluation using the result to buy or sell shares.
        float n = MoneyCompiledEvaluate(workData, priceChange);
        trades[index] = n;
        if (!isfinite(n))
            return false;

        // If the evaluation >= 1.0f, buy shares. If below 1.0f, sell shares.
        if (n >= 0.0f) {
            holding = true;
            if (!shares) {
                shares = (unsigned int)(funds / newPrice);
                funds -= shares * newPrice;
            }
        } else {
            holding = false;
            if (shares) {
                funds += newPrice * shares;
                shares = 0;
            }
        }
    }

    // The final validation funds and wins after selling remaining shares.
    // Note: The final day of validation is undone by this line of code.
    float validationFunds = funds + shares * stock[index];
    float validationWins = wins / float(validationDays - 1);

    // Min and max values are not used.
    trades.minValue = 0.0f;
    trades.maxValue = 0.0f;

    // Caclulate the trading profit and daily profit.
    float tradingProfit = tradingFunds - settings->m_funds;
    float tradingPercent = tradingProfit / settings->m_funds;
    float tradingDailyPercent = tradingPercent / (tradingDays - 1);
    float validationProfit = validationFunds - settings->m_funds;
    float validationPercent = validationProfit / settings->m_funds;
    float validationDailyPercent = validationPercent / (validationDays - 1);

    // The result is inverted to prefer smaller numbers for compatibility with FireStarter.
    trades.tradingResult = tradingDailyPercent;
    trades.validationResult = validationDailyPercent;

    // The winning trade percent is also calculated. This makes it easier to compare predictive power.
    trades.tradingWins = tradingWins;       // Winning trade percent.
    trades.validationWins = validationWins; // Winning validation percent.
    return true;
} // MoneyTesterEvaluate

GPU_GLOBAL void MoneyTester(const FireStarterSettings* settings, const MoneyMakerStocks* stocks, MoneyMakerStocks* tradingResults, const FireStarterData* tradingData)
{
    unsigned int stockIndex = threadIdx.x;
    if (stockIndex < settings->m_stocks)
        MoneyTesterEvaluate(settings, *tradingData, stocks->Stock(stockIndex + settings->m_stock), tradingResults->Stock(stockIndex + settings->m_stock));
} // MoneyTester
