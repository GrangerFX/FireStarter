#pragma once

#include "FireStarterModes.h"
#ifndef FIRESTARTER_MODE
#define FIRESTARTER_MODE FIRESTARTER_MONEYOPTIMIZE
#endif
#include "FireStarterSettings.h"
#include "FireStarterResults.h"
#include "MoneyMakerStocks.h"

// Pre-compiled code evaluation.
// Evaluate the code with the registers set to the testData.
// The CUDA code instructions being evaluated will be inserted into the EVALUATE/END block.
// This allows the code to execute at maximum speed because the registers do not need to be indexed.
inline float MoneyCompiledEvaluate(FireStarterData& data, float n)
{
// EVALUATE //
    n += data[0];
    data[1] = n;
    data[2] = n;
    n += data[3];
    n += data[4];
    n *= data[5];
    data[6] = n;
    n *= data[7];
    n *= data[8];
    n = data[6];
    n += data[9];
    n *= data[1];
    data[10] = n;
    data[2] = n;
    n *= data[11];
    data[12] = n;
    data[13] = n;
    data[14] = n;
    n = data[11];
    data[15] = n;
    n = data[2];
    n += data[0];
    data[11] = n;
    n += data[16];
    data[17] = n;
    n *= data[11];
    n *= data[18];
    n += data[19];
    n *= data[20];
    data[4] = n;
    n += data[5];
    n *= data[18];
// END //
    return n;
} // MoneyCompiledEvaluate

// Evaluate the compiled CUDA code for each trading day starting at the startDay.
// The code will produce a signal (n >= 0.0f) to determine whether to buy/hold the stock or to sell it.
// Each signal is checked for infinite numbers which will end the trading simulation.
// Either the winning daily trade percent or the trading profit/loss will be returned.
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
    float dailyWinsPercent = wins / float(tradingDays - 1);
    result = 1.0f - dailyWinsPercent;
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
} // MoneyOptimizeEvaluate
#endif

// The stock can be traded in a series of sessions. Each session is a range of trading days with a random offset in days.
inline bool MoneyOptimizeEvaluateStocks(const FireStarterSettings* settings, const FireStarterData& data, const MoneyMakerStocks* stocks, unsigned long long seed, float& result)
{
    float sessionsResult = 0.0f;
    unsigned int stock = 0;
    unsigned int sessions = settings->m_sessions * settings->m_stocks;
    unsigned int variation = settings->m_variation + 1;
    unsigned int trading = settings->m_trading;

    for (unsigned int session = 0; session < sessions; session++) {
        // Check if the user is trying to abort and quit the application.
        if (CheckSharedKillSwitch())
            return false;

        unsigned long long sessionSeed = SEED9(session) + seed;
        unsigned int sessionStart = RANDOMMOD(sessionSeed, variation);
        unsigned int sessionDays = trading;
        float stockResult = settings->m_startResult;

        if (!MoneyOptimizeEvaluate(settings, data, stocks->Stock(stock + settings->m_stock), sessionStart, sessionDays, stockResult))
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
} // MoneyOptimizeEvaluateStocks

// MoneyOptimizer: GPU based initial register data evolution algorithm for the MoneyMaker stock trading simulator.
// This function is executed on the GPU for each member of the population.
// The evolved code to be evaluated must have been inserted into the MoneyCompiledEvaluate function above.
// MoneyOptimizer is called repeatedly in a series of passes. Before each pass, the new and old populations are swapped.
GPU_GLOBAL void MoneyOptimizer(const FireStarterSettings* settings, FireStarterResult* newPopulation, const FireStarterResult* oldPopulation, MoneyMakerStocks* stocks, const unsigned int registers, const unsigned long long optimizeSeed, const unsigned long long optimizePass)
{
    // Check if the user is trying to abort and quit the application.
    if (SetSharedKillSwitch())
        return;

    // Determine the member to be optimized.
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= settings->m_population)
        return;

    // The initial register values are stored in the FireStarterData array. These are randomly initialized and then evolved for each member.
    FireStarterData data;
    unsigned int evolveAge;
    float result, memberResult;
    float evolutionScale;

    // Each member of the population has its own unique random number seed.
    unsigned long long memberSeed = optimizeSeed + SEED11(member); // Unique seed for the generation and member

    // The first generation is initalized with random numbers.
    if (!optimizePass) {
        for (unsigned int i = 0; i < 10; i++) {
            data.InitData(memberSeed, registers, MONEYMAKER_SCALE);
            result = settings->m_startResult;
            if (MoneyOptimizeEvaluateStocks(settings, data, stocks, optimizeSeed, result))
                break;
        }
        memberResult = settings->m_startResult;
        evolutionScale = settings->m_startScale;
        evolveAge = 0;
    } else {
        // Later generations randomize a single register if they were copied.
        const FireStarterResult& oldResult = *FireStarterPopulation::PopulationResult(oldPopulation, member);
        data.Copy(oldResult.Data());
        evolveAge = oldResult.EvolveAge();

        // The evolution age of the register data determines how it is initialized.
        if (evolveAge == 1) {
            // When the evolveAge is 1, a single register is set to a random value prior to evolution iteration.
            // This makes it less likely for the evolution to get stuck.
            unsigned int d = RANDOMMOD(memberSeed, registers);
            float oldData = data[d];
            data[d] = oldData + RANDOMFACTOR(memberSeed) * settings->m_startScale * (evolveAge - 1);
            if (!MoneyOptimizeEvaluateStocks(settings, data, stocks, optimizeSeed, result)) {
                // If the result did not improve, return to the previous data.
                data[d] = oldData;
                result = oldResult.MaxResult();
            }
            memberResult = result;
            evolutionScale = (2.0f * settings->m_scale) * memberResult;
        } else {
            // When the evolveAge is 0, this member was the source of an improved result.
            // Keep keep attempting to evolve the original register data.
            memberResult = result = oldResult.MaxResult();
            evolutionScale = settings->m_scale * memberResult;
        }
    }

    // Iterate to evolve the register data.
    for (unsigned int i = 0; i < settings->m_iterations; i++) {
        // Check if the user is trying to abort and quit the application.
        if (CheckSharedKillSwitch())
            return;

        unsigned int d = RANDOMMOD(memberSeed, registers);
        float oldData = data[d];
        data[d] = oldData + evolutionScale * RANDOMFACTOR(memberSeed);
        unsigned int curTrades = 0;
        float curResult = result * 0.99f;
        if (MoneyOptimizeEvaluateStocks(settings, data, stocks, optimizeSeed, curResult))
            result = curResult;
        else
            data[d] = oldData;
    }

    // Save the results if they improved or switch to another member's old results.
    if (optimizePass && (result >= memberResult)) {
        // This is the natural selection portion of the register data evolution algorithm.
        // Members that did not evolve have a chance to be replaced by copies (offspring) of members with a better result in the previous pass.
        // One register of the copied data will be randomized prior to evolution iteration during the next pass.
        unsigned int bestCandidate = member;

        // Search for a better result among a set of randomly selected candidates.
        for (unsigned int i = 0; i < settings->m_candidates; i++) {
            // Select evolving members with results better than the current result.
            unsigned int candidate = RANDOMMOD(memberSeed, settings->m_population);
            const FireStarterResult* candidateResult = FireStarterPopulation::PopulationResult(oldPopulation, candidate);
            unsigned int candidateAge = candidateResult->EvolveAge();
            if (candidateAge == 0) {
                float candidateMaxResult = candidateResult->MaxResult();
                if (candidateMaxResult <= result)
                    bestCandidate = candidate;
            }
        }

        // If the candate's result was better, copy its data and result.
        if (bestCandidate != member) {
            const FireStarterResult* bestCandidateResult = FireStarterPopulation::PopulationResult(oldPopulation, bestCandidate);
            data = bestCandidateResult->Data();
            result = bestCandidateResult->MaxResult();
            evolveAge = 1;  // The register data was copied from the best candidate.
        } else
            evolveAge = 0;  // The result did not improve but none of the candidates was better.
    } else
        evolveAge = 0;      // The result improved.

    // Return the best data, result and age.
    FireStarterPopulation::PopulationResult(newPopulation, member)->InitResult(data, result, evolveAge);
} // MoneyOptimizer

// Note: The tester combines the variation with the trading days for complete evaluation.
inline bool MoneyTesterEvaluate(const FireStarterSettings* settings, const FireStarterData& data, const MoneyMakerStock& stock, MoneyMakerStock& trades, unsigned int startDay, unsigned int tradingDays, unsigned int validationDays)
{
    FireStarterData workData(data);
    bool holding = false;
    unsigned int wins = 0;
    float startingFunds = settings->m_funds;
    float funds = startingFunds;
    unsigned int shares = 0;
    unsigned int index = startDay;
    float oldPrice = stock[index];

    // Initialize the trading and validation results to 0.
    trades.tradingResult = 0.0f;
    trades.tradingWins = 0.0f;
    trades.validationResult = 0.0f;
    trades.validationWins = 0.0f;

    // Use the evaluation to trade the stock.
    // Starts at 1 because the first day is used to set the oldPrice.
    if (tradingDays > 1) {
        trades[index] = 0.0f;
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
        unsigned int tradingWins = wins;

        // Caclulate the trading profit and daily profit.
        float tradingProfit = tradingFunds - startingFunds;
        float tradingPercent = tradingProfit / startingFunds;
        float tradingDailyPercent = tradingPercent / (tradingDays - 1);

        // Calculate the final results (not inverted).
        trades.tradingResult = tradingDailyPercent;

        // The winning trade percent is also calculated. This makes it easier to compare predictive power.
        trades.tradingWins = tradingWins / float(tradingDays - 1);  // Winning trade percent.
        
        // Validation of future days not used during evolution or optimization.
        // The validation uses the same work data as the trading.
        if (validationDays > 0) {
            trades[index] = 0.0f;
            for (unsigned int i = 0; i < validationDays; i++) {
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
            unsigned int validationWins = wins - tradingWins;

            // Min and max values are not used.
            trades.minValue = 0.0f;
            trades.maxValue = 0.0f;

            // Caclulate the trading profit and daily profit.
            float validationProfit = validationFunds - tradingFunds;
            float validationPercent = validationProfit / tradingFunds;
            float validationDailyPercent = validationPercent / (validationDays - 1);

            // Calculate the final results (not inverted).
            trades.validationResult = validationDailyPercent;

            // The winning trade percent is also calculated. This makes it easier to compare predictive power.
            trades.validationWins = validationWins / float(validationDays - 1); // Winning validation percent.
        }
    }
    return true;
} // MoneyTesterEvaluate

GPU_GLOBAL void MoneyTester(const FireStarterSettings* settings, const MoneyMakerStocks* stocks, MoneyMakerStocks* tradingResults, const FireStarterData* tradingData, unsigned int startDay, unsigned int tradingDays, unsigned int validationDays)
{
    unsigned int stockIndex = threadIdx.x;
    if (stockIndex < settings->m_stocks)
        MoneyTesterEvaluate(settings, *tradingData, stocks->Stock(stockIndex + settings->m_stock), tradingResults->Stock(stockIndex + settings->m_stock), startDay, tradingDays, validationDays);
} // MoneyTester
