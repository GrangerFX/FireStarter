#pragma once
#include "FireStarterResults.h"
#include "MoneyMakerStocks.h"
#include "CUDADefines.h"

#if MONEYMAKER_WINS
inline bool MoneyEvolveEvaluate(const FireStarterSettings* settings, const FireStarterCode& code, const FireStarterData& data, const MoneyMakerStock& stock, unsigned int startDay, unsigned int tradingDays, float& result)
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
        float n = code.Evaluate(workData, priceChange);
        if (!isfinite(n))
            return false;

        // If the evaluation >= 0.0f, buy shares. If below 0.0f, sell shares.
        holding = n >= 0.0f;
    }

    // The result is the ratio between the daily trade wins and losses.
    // Note: This ratio is inverted to prefer smaller numbers for compatibility with FireStarter.
    float dailyWinsPercent = wins / float(tradingDays - 1);
    result = 1.0f - dailyWinsPercent;
    return true;
} // MoneyEvolveEvaluate
#else
inline bool MoneyEvolveEvaluate(const FireStarterSettings* settings, const FireStarterCode& code, const FireStarterData& data, const MoneyMakerStock& stock, unsigned int startDay, unsigned int tradingDays, float& result)
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
        float n = code.Evaluate(workData, priceChange);
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

    // The final funds after selling remaining shares.
    // Note: The final day of trading is undone by this line of code.
    funds += shares * stock[index];

    // Caclulate the trading profit and daily profit.
    float tradingProfit = funds - settings->m_funds;

#if MONEYMAKER_ADDEDVALUE
    // Calculate the stock performance during the trading days.
    float stockStartPrice = stock[startDay];
    float stockEndPrice = stock[startDay + tradingDays - 1];
    float stockPerformance = stockEndPrice / stockStartPrice;
    float stockFunds = settings->m_funds * stockPerformance;
    float stockProfit = stockFunds - settings->m_funds;

    // The result profit is the trading profit minus the stock profit to measure added value.
    float resultProfit = tradingProfit - stockProfit;
    float resultPercent = resultProfit / settings->m_funds;
    float resultDailyPercent = resultPercent / (tradingDays - 1);
#else
    // Caclulate the trading profit and daily profit.
    float tradingPercent = tradingProfit / settings->m_funds;
    float resultDailyPercent = tradingPercent / (tradingDays - 1);
#endif

    // The result is inverted to prefer smaller numbers for compatibility with FireStarter.
    result = 1.0f - resultDailyPercent;
    return true;
} // MoneyEvolveEvaluate
#endif

inline bool MoneyEvolveEvaluateStocks(const FireStarterSettings* settings, const FireStarterCode& code, const FireStarterData& data, const MoneyMakerStocks* stocks, unsigned long long seed, float& result)
{
    float sessionsResult = 0.0f;
    unsigned int sessions = settings->m_sessions * settings->m_stocks;
    unsigned int stock = 0;
    unsigned int variation = settings->m_variation + 1;

    for (unsigned int session = 0; session < sessions; session++) {
        unsigned long long sessionSeed = SEED9(session) + seed;
        unsigned int sessionStart = RANDOMMOD(sessionSeed, variation);
        unsigned int sessionDays = settings->m_trading;
        float stockResult = settings->m_startResult;
        if (!MoneyEvolveEvaluate(settings, code, data, stocks->Stock(stock + settings->m_stock), sessionStart, sessionDays, stockResult))
            return false;
        sessionsResult += stockResult / sessions;
        if (++stock == settings->m_stocks)
            stock = 0;
    }
    if (sessionsResult < result) {
        result = sessionsResult;
        return true;
    }
    return false;
} // MoneyEvolveEvaluateStocks

// Current best single variation version: Each thread has its own code. The goal is to maximize the number of candidates that can be tested in a given period of time.
GPU_GLOBAL void MoneyEvolve(const FireStarterSettings* settings, float* results, FireStarterCode* codes, FireStarterResult* population, MoneyMakerStocks* stocks, const unsigned long long evolutionSeed)
{
    // Determine the member to be optimized.
    unsigned int member = blockIdx.x * blockDim.x + threadIdx.x;
    if (member >= settings->m_population)
        return;
    unsigned long long memberSeed = evolutionSeed + SEED0(member);   // Unique seed for the member

    // The evolution code and data.
    FireStarterCode code;
    FireStarterData data;


    // The first pass is initalized with random numbers.
    float startResult = settings->m_startResult;
    float startScale = settings->m_startScale;
    float result = startResult;
    unsigned int registers = 0;
    for (unsigned int i = 0; i < 10; i++) {
        code.InitCode(memberSeed);
        registers = code.Optimize();
        data.InitData(memberSeed, registers, 1.0f); // Scale matches HatTrick.
        if (MoneyEvolveEvaluateStocks(settings, code, data, stocks, evolutionSeed, result))
            break;
    }

    // Keep track of the current and best code, data and results.
    FireStarterCode bestCode = code;
    FireStarterCode memberCode = code;
    FireStarterData bestData = data;
    FireStarterData memberData = data;
    float bestResult = result;
    float memberResult = result;
    unsigned short bestAge = 0;
    unsigned short memberAge = 0;

    // Evolve the code and data for each pass.
    for (unsigned int pass = 0; pass < settings->m_passes; pass++) {
        // Evolve the code and data.
        float evolutionScale;
        if ((memberAge >= 6) || (result >= startResult)) {
            evolutionScale = startScale;
            code.InitCode(memberSeed);
            registers = code.Optimize();
            data.InitData(memberSeed, registers, 1.0f); // Scale matches HatTrick.
            memberResult = startResult;
            result = startResult;
            memberAge = 0;
        } else {
            // Randomize a register each generation.
            evolutionScale = result * startScale;
            if (memberAge > 0)
                data.RandomData(memberSeed, evolutionScale, registers);
        }

        // Iterate to evolve the data.
        for (unsigned int i = 0; i < settings->m_iterations; i++) {
            unsigned int d = RANDOMMOD(memberSeed, registers);
            float old = data[d];
            data[d] = old + evolutionScale * RANDOMFACTOR(memberSeed);
            float curResult = result * 0.99f;
            unsigned int curTrades = 0;
            if (MoneyEvolveEvaluateStocks(settings, code, data, stocks, evolutionSeed, curResult))
                result = curResult;
            else
                data[d] = old;
        }

        // Did the results improve?
        if (!pass || (result < memberResult)) {
            // If the result was better, save the results.
            memberCode = code;
            memberData = data;
            memberResult = result;
            memberAge = 0;

            // Update the best result.
            if (!pass || (result < bestResult)) {
                bestCode = code;
                bestData = data;
                bestResult = result;
                bestAge = memberAge;
            }
        } else {
            // Revert to the original code and data.
            code = memberCode;
            data = memberData;
            result = memberResult;
            memberAge++;
        }
    }

    // Return the optimized best code.
    codes[member].Copy(bestCode);

    // Return the array of results or the entire population data.
    results[member] = bestResult;

    // Return the best data, result and age for debugging.
    if (population && FIRESTARTER_EVOLVE_RESULTS)
        FireStarterPopulation::PopulationResult(population, member)->InitResult(bestData, bestResult, bestAge);
} // MoneyEvolve

GPU_GLOBAL void MoneyEvolveTest(const FireStarterSettings* settings, FireStarterCode* newCodes, FireStarterCode* oldCodes, FireStarterResult* newPopulation, const FireStarterResult* oldPopulation, MoneyMakerStocks* stocks, const unsigned long long evolutionSeed, const unsigned long long evolutionPass)
{
    // Determine the member to be optimized.
    unsigned int member = blockIdx.x * blockDim.x + threadIdx.x;
    if (member >= settings->m_population)
        return;
    unsigned long long memberSeed = evolutionSeed + SEED0(member);   // Unique seed for the member

    // The evolution code and data.
    FireStarterCode code;
    FireStarterData data;
    unsigned int registers = code.InitOptimizedCode(memberSeed);
    data.InitData(memberSeed, registers, 1.0f); // Scale matches HatTrick.
    float result = 1.0e+10f; // settings->m_startResult;
    float evolutionScale = settings->m_startScale;

    // Initial result for optimization.
    MoneyEvolveEvaluateStocks(settings, code, data, stocks, evolutionSeed, result);

    // Iterate to optimize the data.
    for (unsigned int i = 0; i < settings->m_iterations; i++) {
        unsigned int d = RANDOMMOD(memberSeed, registers);
        float oldData = data[d];
        data[d] = oldData + evolutionScale * RANDOMFACTOR(memberSeed);
        unsigned int curTrades = 0;
        float curResult = result * 0.99f; // Validated as being faster than * 1.0f or * 0.9f. About the same as * 0.999f.  11/17/2024
        if (MoneyEvolveEvaluateStocks(settings, code, data, stocks, evolutionSeed, result))
            result = curResult;
        else
            data[d] = oldData;
    }

    // Return the best code.
    newCodes[member].Copy(code);

    // Return the best data, result and age.
    FireStarterPopulation::PopulationResult(newPopulation, member)->InitResult(data, result);
} // MoneyEvolveTest
