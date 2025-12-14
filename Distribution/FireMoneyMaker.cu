#pragma once
#include "FireStarterResults.h"
#include "MoneyMakerStocks.h"
#include "CUDADefines.h"

#if 1
inline void MoneyMakerEvaluateStocks(const FireStarterSettings* settings, const FireStarterData& data, const FireStarterCode& code, const MoneyMakerStocks& stocks, unsigned long long seed, float& result)
{
    const MoneyMakerStock& stock = stocks.Stock(0);
    GPU_SHARED FireStarterSharedData workData;
    workData = data;
    for (unsigned int session = 0; session < settings->m_sessions; session++)
        for (unsigned int i = 1; i < 64; i++)
            float n = code.Evaluate(workData, stock[i]);
} // MoneyMakerEvaluateStocks

// Current best single variation version: Each thread has its own code. The goal is to maximize the number of candidates that can be tested in a given period of time.
GPU_GLOBAL void MoneyMaker(const FireStarterSettings* settings, float* results, FireStarterResult* population, FireStarterCode* codes, MoneyMakerStocks* stocks, const unsigned long long evolveSeed)
{
    // Determine the member to be optimized.
    unsigned int member = blockIdx.x * blockDim.x + threadIdx.x;
    if (member >= settings->m_population)
        return;

    // The evolution code and data.
    FireStarterCode code;
    FireStarterData data;

    unsigned long long memberSeed = evolveSeed + SEED1(member);   // Unique seed for the member

    // The first pass is initalized with random numbers.
    float startResult = settings->m_startResult;
    float startScale = settings->m_startScale;
    float result = startResult;
    unsigned int registers = 0;

    // Keep track of the current and best code, data and results.
    FireStarterCode memberCode = code;
    FireStarterData memberData = data;
    float memberResult = result;
    unsigned short memberAge = 0;

    // Evolve the code and data for each pass.
    for (unsigned int pass = 0; pass < settings->m_passes; pass++) {
        // Evolve the code and data.
        float evolutionScale;
#if 1
        if (!(pass & 1)) {
            evolutionScale = startScale;
            code.InitCode(memberSeed);
            registers = code.Optimize();
            data.InitData(memberSeed, registers, 1.0f); // Scale matches HatTrick.
            memberResult = startResult;
            result = startResult;
            memberAge = 0;
        } else
            // Randomize a register each generation.
            evolutionScale = result * startScale;
#else
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
#endif

        // Iterate to evolve the data.
        for (unsigned int i = 0; i < settings->m_iterations; i++) {
            unsigned int d = RANDOMMOD(memberSeed, registers);
            float old = data[d];
            data[d] = old + evolutionScale * RANDOMFACTOR(memberSeed);
            float curResult = result * 0.99f;
            unsigned int curTrades = 0;
            MoneyMakerEvaluateStocks(settings, data, code, *stocks, evolveSeed, curResult);
            data[d] = old;
        }

        memberCode = code;
        memberData = data;
        memberResult = result;
        memberAge = 0;
    }
} // MoneyMaker
#else
inline bool MoneyMakerEvaluate(const FireStarterSettings* settings, const FireStarterData& data, const FireStarterCode& code, const MoneyMakerStock& stock, unsigned int startDay, float& result)
{
    float funds = settings->m_funds;
    unsigned int index = startDay;
    unsigned int shares = 0;

    GPU_SHARED FireStarterSharedData workData;
    workData = data;

    // Warmup evaluation ignoring the results.
    // Starts at 1 because the first day is used to set the oldPrice.
    float oldPrice = stock[index++];
    for (unsigned int i = 1; i < settings->m_warmup; i++) {
        float newPrice = stock[index++];
        float priceChange = newPrice / oldPrice;
        oldPrice = newPrice;

        // Trading evaluation using the result to buy or sell shares.
        float n = code.Evaluate(workData, priceChange);
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
        float n = code.Evaluate(workData, priceChange);
        if (!isfinite(n))
            return false;

        // If the evaluation >= 1.0f, buy or hold shares. If below 1.0f, sell shares.
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
} // MoneyMakerEvaluate

#if 1
inline bool MoneyMakerEvaluateStocks(const FireStarterSettings* settings, const FireStarterData& data, const FireStarterCode& code, const MoneyMakerStocks& stocks, unsigned long long seed, float& result)
{
    float sessionsResult = 0.0f;
    unsigned int sessions = settings->m_sessions * settings->m_stocks;
    unsigned int stock = 0;
    for (unsigned int session = 0; session < sessions; session++) {
        unsigned long long sessionSeed = SEED9(session) + seed;
//      unsigned long long sessionSeed = SEED9(session);  // Matches earlier versions
        unsigned int sessionStart = RANDOMMOD(sessionSeed, settings->m_variation + 1);
        float stockResult = settings->m_startResult;

        if (!MoneyMakerEvaluate(settings, data, code, stocks.Stock(stock), sessionStart, stockResult))
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
} // MoneyMakerEvaluateStocks
#else
inline bool MoneyMakerEvaluateStock(const FireStarterSettings* settings, const FireStarterData& data, const FireStarterCode& code, const MoneyMakerStock& stock, unsigned long long seed, float& result)
{
    float stockResult = 0.0f;
    for (unsigned int session = 0; session < settings->m_sessions; session++) {
        unsigned long long sessionSeed = seed + SEED9(session);
        unsigned int sessionStart = RANDOMMOD(sessionSeed, settings->m_variation + 1);
        float sessionResult = settings->m_startResult;

        if (!MoneyMakerEvaluate(settings, data, code, stock, sessionStart, sessionResult))
            return false;
        stockResult += sessionResult;
    }
    result = stockResult / settings->m_sessions;
    return true;
} // MoneyMakerEvaluateStock

inline bool MoneyMakerEvaluateStocks(const FireStarterSettings *settings, const FireStarterData& data, const FireStarterCode& code, const MoneyMakerStocks& stocks, unsigned long long seed, float& result)
{
    unsigned int stock = 0;
    float stocksResult = 0.0f;
    for (unsigned int stock = 0; stock < settings->m_stocks; stock++) {
        unsigned long long stockSeed = 0; //  seed + SEED8(stock);
        float stockResult = 0.0f;

        if (!MoneyMakerEvaluateStock(settings, data, code, stocks.Stock(stock), stockSeed, stockResult))
            return false;
        stocksResult += stockResult;
    }
    stocksResult /= settings->m_stocks;
    if (stocksResult < result) {
        result = stocksResult;
        return true;
    }
    return false;
} // MoneyMakerEvaluateStocks
#endif

// Current best single variation version: Each thread has its own code. The goal is to maximize the number of candidates that can be tested in a given period of time.
GPU_GLOBAL void MoneyMaker(const FireStarterSettings* settings, float* results, FireStarterResult* population, FireStarterCode* codes, MoneyMakerStocks* stocks, const unsigned long long evolveSeed)
{
    // Determine the member to be optimized.
    unsigned int member = blockIdx.x * blockDim.x + threadIdx.x;
    if (member >= settings->m_population)
        return;

    // The evolution code and data.
    FireStarterCode code;
    FireStarterData data;

    unsigned long long memberSeed = evolveSeed + SEED1(member);   // Unique seed for the member

    // The first pass is initalized with random numbers.
    float startResult = settings->m_startResult;
    float startScale = settings->m_startScale;
    float result = startResult;
    unsigned int registers = 0;
    for (unsigned int i = 0; i < 10; i++) {
        code.InitCode(memberSeed);
        registers = code.Optimize();
        data.InitData(memberSeed, registers, 1.0f); // Scale matches HatTrick.
        if (MoneyMakerEvaluateStocks(settings, data, code, *stocks, evolveSeed, result))
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
            if (MoneyMakerEvaluateStocks(settings, data, code, *stocks, evolveSeed, curResult))
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
    if (population)
        FireStarterPopulation::PopulationResult(population, member)->InitResult(bestData, bestResult, bestAge);
} // MoneyMaker
#endif