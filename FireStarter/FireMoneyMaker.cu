#pragma once

#include "FireStarterModes.h"
#ifndef FIRESTARTER_MODE
#define FIRESTARTER_MODE FIRESTARTER_MONEYMAKER
#endif
#include "FireStarterSettings.h"
#include "FireStarterResults.h"
#include "MoneyMakerStocks.h"
#include "CUDADefines.h"

// MoneyMaker is an experiment to find out if code evolution can be used to predict the future rather than simulate a static function.
// This is probably too difficult of a task for the GPU code evolution algorithm and quite possibly also for the CPU code evolution.
// Like the EvolveSinSim experiment, the register data is initialized once at the start of time sequence and then continously modified.
// The evolved code simulates trading stocks. It uses is real end of day trading data for several tech stocks. It is currently unclear
// if it works better than flipping a coin. Even if this experiment does not succeed, there is much to be learned from the attempt.

// Evaluate the compiled CUDA code for each trading day starting at the startDay.
// The code will produce a signal (n >= 0.0f) to determine whether to buy/hold the stock or to sell it.
// Each signal is checked for infinite numbers which will end the trading simulation.
// Either the winning daily trade percent or the trading profit/loss will be returned.
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
    funds += shares * oldPrice;

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

// The stock can be traded in a series of sessions. Each session is a range of trading days with a random offset in days.
inline bool MoneyEvolveEvaluateStocks(const FireStarterSettings* settings, const FireStarterCode& code, const FireStarterData& data, const MoneyMakerStocks* stocks, unsigned long long seed, float& result)
{
    float sessionsResult = 0.0f;
    unsigned int sessions = settings->m_sessions * settings->m_stocks;
    unsigned int stock = 0;
    unsigned int variation = settings->m_variation + 1;

    for (unsigned int session = 0; session < sessions; session++) {
        // Check if the user is trying to abort and quit the application.
        if (CheckSharedKillSwitch())
            return false;

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

// Each member in the popluation has its code and register data randomly initialized.
// The code and register data is evolved over a number of passes.
// If the result did not improve compared to the previous pass, one register data is randomized.
// If no evolution occurs after six passes, the code and register data is re-randomized.
// The register data is evolved by iterating adding a random value to one register and testing the code.
// After each pass, if the result did not improve the code and data is restored to the last pass when the result did improve.
GPU_GLOBAL void MoneyEvolve(const FireStarterSettings* settings, float* results, FireStarterCode* codes, FireStarterResult* population, MoneyMakerStocks* stocks, const unsigned long long evolutionSeed)
{
    // Check if the user is trying to abort and quit the application.
    if (SetSharedKillSwitch())
        return;

    // Determine the member to be evolved.
    unsigned int member = blockIdx.x * blockDim.x + threadIdx.x;
    if (member >= settings->m_population)
        return;

    // Each member of the population has its own unique random number seed.
    unsigned long long memberSeed = evolutionSeed + SEED0(member);

    // The evolution code and data.
    FireStarterCode code;
    FireStarterData data;

    // The current evolution age, best evolution age and the number of optimized registers.
    unsigned int evolveAge = 0;
    unsigned int bestAge = 0;
    unsigned int registers = 0;

    // The first pass randomly initalizes the code and register data.
    float memberResult = FIRESTARTER_START_RESULT;
    for (unsigned int i = 0; i < FIRESTARTER_EVOLVE_INIT; i++) {
        registers = code.InitOptimizedCode(memberSeed);
        data.InitData(memberSeed, registers, MONEYMAKER_SCALE);
        if (MoneyEvolveEvaluateStocks(settings, code, data, stocks, evolutionSeed, memberResult))
            break;
    }

    // Initialize the best and member code, data and result.
    FireStarterCode bestCode = code;
    FireStarterData bestData = data;
    float bestResult = memberResult;
    float oldResult = memberResult;

    // Perform all the evolution passes on the GPU.
    unsigned int passes = settings->m_passes;
    for (unsigned int pass = 0; pass < passes; pass++) {
        // Check if the user is trying to abort and quit the application.
        if (SetSharedKillSwitch())
            return;

        // Evolve the code and data.
        float evolutionScale;
        if ((evolveAge == FIRESTARTER_EVOLVE_MAX_AGE) || (memberResult >= FIRESTARTER_START_RESULT)) {
            // If no evolution occurs after six passes, the code and register data is re-randomized.
            evolutionScale = FIRESTARTER_START_RESULT;
            code.InitCode(memberSeed);
            registers = code.Optimize();
            data.InitData(memberSeed, registers, MONEYMAKER_SCALE);
            memberResult = FIRESTARTER_START_RESULT;
            oldResult = FIRESTARTER_START_RESULT;
            evolveAge = 0;
        } else {
            // If the result did not improve compared to the previous pass, one register data is randomized.
            evolutionScale = memberResult * FIRESTARTER_START_SCALE;
            if (evolveAge > 0)
                data.RandomData(memberSeed, evolutionScale, registers);
        }

        // Iterate to evolve the register data.
        for (unsigned int i = 0; i < FIRESTARTER_ITERATIONS; i++) {
            // Check if the user is trying to abort and quit the application.
            if (CheckSharedKillSwitch())
                return;

            unsigned int d = RANDOMMOD(memberSeed, registers);
            float old = data[d];
            data[d] = old + evolutionScale * RANDOMFACTOR(memberSeed);
            float curResult = memberResult * 0.99f;
            if (MoneyEvolveEvaluateStocks(settings, code, data, stocks, evolutionSeed, curResult))
                memberResult = curResult;
            else
                data[d] = old;
        }

        // Did the result improve?
        if (!pass || (memberResult < oldResult)) {
            // The result improved. Update the best result.
            if (!pass || (memberResult < bestResult)) {
                bestCode = code;
                bestData = data;
                bestResult = memberResult;
                bestAge = evolveAge;
            }

            // Save result and reset the evolve age to 0.
            oldResult = memberResult;
            evolveAge = 0;
        } else
            // The result did not improve. Increment the evolve age.
            evolveAge++;
    }

    // Return the best evolved code.
    codes[member].Copy(bestCode);

    // Return the best result.
    results[member] = bestResult;

    // Optionally return the best register data and evolve age for debugging.
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
    data.InitData(memberSeed, registers, MONEYMAKER_SCALE);
    float result = 1.0e+10f; // FIRESTARTER_START_RESULT;
    float evolutionScale = FIRESTARTER_START_SCALE;

    // Initial result for optimization.
    MoneyEvolveEvaluateStocks(settings, code, data, stocks, evolutionSeed, result);

    // Iterate to optimize the data.
    for (unsigned int i = 0; i < FIRESTARTER_ITERATIONS; i++) {
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
