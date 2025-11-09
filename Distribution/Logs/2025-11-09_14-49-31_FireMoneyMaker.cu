#pragma once
#include "FireStarterResults.h"
#include "MoneyMakerStocks.h"
#include "CUDADefines.h"

inline bool MoneyMakerEvaluate(const FireStarterData& data, const FireStarterCode& code, const MoneyMakerStock& stock, unsigned int startDay, float& result)
{
    float startingFunds = MONEYMAKER_FUNDS;
    float funds = startingFunds;
    unsigned int index = startDay;
    unsigned int shares = 0;

    GPU_SHARED FireStarterSharedData workData;
    workData = data;

    // Warmup evaluation ignoring the results.
    float oldPrice = stock[index++];
    for (unsigned int i = 1; i < MONEYMAKER_WARMUP; i++) {
        float newPrice = stock[index++];
        float priceChange = newPrice / oldPrice;
        oldPrice = newPrice;

        // Trading evaluation using the result to buy or sell shares.
        float n = code.Evaluate(workData, priceChange);
        if (!isfinite(n))
            return false;
    }

    // Use the evaluation to trade the stock.
    for (unsigned int i = 0; i < MONEYMAKER_TRADING; i++) {
        float newPrice = stock[index++];
        float priceChange = newPrice / oldPrice;
        oldPrice = newPrice;

        // Trading evaluation using the result to buy or sell shares.
        float n = code.Evaluate(workData, priceChange);
        if (!isfinite(n))
            return false;

        // If the evaluation > 1.0f, buy shares. If below -1.0f, sell shares.
        if (n > 1.0f) {
            if (!shares) {
                shares = (unsigned int)(funds / newPrice);
                funds -= shares * newPrice;
            }
        } else if (n < -1.0f) {
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
} // MoneyMakerEvaluate

inline bool MoneyMakerEvaluateStocks(const FireStarterData& data, const FireStarterCode& code, const MoneyMakerStocks& stocks, float& maxResult, float& averageResult)
{
    float sessionsMaxResult = 0.0f;
    float sessionsAverageResult = 0.0f;
    unsigned int stock = 0;
    for (unsigned int session = 0; session < MONEYMAKER_SESSIONS; session++) {
        unsigned long long sessionSeed = SEED9(session);
        unsigned int sessionStart = RANDOMMOD(sessionSeed, MONEYMAKER_VARIATION + 1);
        float stockResult = FIRESTARTER_START_RESULT;

        if (!MoneyMakerEvaluate(data, code, stocks.Stock(stock), sessionStart, stockResult)) {
            sessionsMaxResult = FIRESTARTER_START_RESULT;
            sessionsAverageResult = FIRESTARTER_START_RESULT;
            break;
        }
        sessionsMaxResult = MAX(sessionsMaxResult, stockResult);
        sessionsAverageResult += stockResult / MONEYMAKER_SESSIONS;
        if (++stock == MONEYMAKER_STOCKS)
            stock = 0;
    }
    
#if MONEYMAKER_WORST
    if (sessionsMaxResult < maxResult) {
        maxResult = sessionsMaxResult;
        averageResult = sessionsAverageResult;
        return true;
    }
    if ((sessionsMaxResult == maxResult) && (sessionsAverageResult < averageResult)) {
        averageResult = sessionsAverageResult;
        return true;
    }
#else
    if (sessionsAverageResult < averageResult) {
        averageResult = sessionsAverageResult;
        return true;
    }
#endif
    return false;
} // MoneyMakerEvaluateStocks

// Current best single variation version: Each thread has its own code. The goal is to maximize the number of candidates that can be tested in a given period of time.
GPU_GLOBAL void MoneyMaker(float* results, FireStarterResult* population, FireStarterCode* codes, MoneyMakerStocks* stocks, const unsigned long long evolveSeed, const unsigned int passes, const unsigned int populationSize)
{
    // Determine the member to be optimized.
    unsigned int member = blockIdx.x * blockDim.x + threadIdx.x;
    if (member >= populationSize)
        return;

    // The evolution code and data.
    FireStarterCode code;
    FireStarterData data;

    unsigned long long memberSeed = evolveSeed + SEED1(member);   // Unique seed for the member

    // The first pass is initalized with random numbers.
    float maxResult = FIRESTARTER_START_RESULT;
    float averageResult = FIRESTARTER_START_RESULT;
    unsigned int registers = 0;
    for (unsigned int i = 0; i < 10; i++) {
        code.InitCode(memberSeed);
        registers = code.Optimize();
        data.InitData(memberSeed, registers, 1.0f); // Scale matches HatTrick.
        if (MoneyMakerEvaluateStocks(data, code, *stocks, maxResult, averageResult))
            break;
    }

    // Keep track of the current and best code, data and results.
    FireStarterCode bestCode = code;
    FireStarterCode memberCode = code;
    FireStarterData bestData = data;
    FireStarterData memberData = data;
    float bestResult = maxResult;
    float memberResult = maxResult;
    float bestAverage = averageResult;
    float memberAverage = averageResult;
    unsigned int bestAge = 0;
    unsigned int memberAge = 0;

    // Evolve the code and data for each pass.
    for (unsigned int pass = 0; pass < passes; pass++) {
        // Evolve the code and data.
        float evolutionScale;
        if ((memberAge >= 6) || (maxResult >= FIRESTARTER_START_RESULT)) {
            evolutionScale = FIRESTARTER_START_SCALE;
            code.InitCode(memberSeed);
            registers = code.Optimize();
            data.InitData(memberSeed, registers, 1.0f); // Scale matches HatTrick.
            memberResult = FIRESTARTER_START_RESULT;
            maxResult = FIRESTARTER_START_RESULT;
            averageResult = FIRESTARTER_START_RESULT;
            memberAge = 0;
        } else {
            // Randomize a register each generation.
            evolutionScale = maxResult * FIRESTARTER_SCALE;
            if (memberAge > 0)
                data.RandomData(memberSeed, evolutionScale, registers);
        }

        // Iterate to evolve the data.
        for (unsigned int i = 0; i < FIRESTARTER_EVOLVE_GPU_ITERATIONS; i++) {
            unsigned int d = RANDOMMOD(memberSeed, registers);
            float old = data[d];
            data[d] = old + evolutionScale * RANDOMFACTOR(memberSeed);
            float curMaxResult = maxResult * 0.99f;
            float curAverageResult = averageResult * 0.99f;
            unsigned int curTrades = 0;
            if (MoneyMakerEvaluateStocks(data, code, *stocks, curMaxResult, curAverageResult)) {
                maxResult = curMaxResult;
                averageResult = curAverageResult;
            } else
                data[d] = old;
        }

        // Did the results improve?
        if (!pass || ((maxResult < memberResult) || ((maxResult == memberResult) && (averageResult < memberAverage)))) {
            // If the result was better, save the results.
            memberCode = code;
            memberData = data;
            memberResult = maxResult;
            memberAverage = averageResult;
            memberAge = 0;

            // Update the best result.
            if (!pass || (maxResult < bestResult)) {
                bestCode = code;
                bestData = data;
                bestResult = maxResult;
                bestAverage = averageResult;
                bestAge = memberAge;
            }
        } else {
            // Revert to the original code and data.
            code = memberCode;
            data = memberData;
            maxResult = memberResult;
            averageResult = memberAverage;
            memberAge++;
        }
    }

    // Return the optimized best code.
    codes[member].Copy(bestCode);

    // Return the array of results or the entire population data.
    results[member] = bestResult;

    // Return the best data, result and age for debugging.
    if (population)
        FireStarterPopulation::PopulationResult(population, member)->InitResult(bestData, bestResult, bestAverage);
} // MoneyMaker
