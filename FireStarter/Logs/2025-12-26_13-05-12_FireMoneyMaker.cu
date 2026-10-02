#pragma once
#include "FireStarterResults.h"
#include "MoneyMakerStocks.h"
#include "CUDADefines.h"

inline bool MoneyMakerEvaluate(const FireStarterSettings* settings, const FireStarterCode& code, const FireStarterData& data, const MoneyMakerStock& stock, unsigned int startDay, float& result)
{
    FireStarterData workData = data;
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

inline bool MoneyMakerEvaluateStocks(const FireStarterSettings* settings, const FireStarterCode& code, const FireStarterData& data, const MoneyMakerStocks& stocks, unsigned long long seed, float& result)
{
    float sessionsResult = 0.0f;
    unsigned int sessions = settings->m_sessions * settings->m_stocks;
    unsigned int stock = 0;
    for (unsigned int session = 0; session < sessions; session++) {
        unsigned long long sessionSeed = SEED9(session) + seed;
        unsigned int sessionStart = RANDOMMOD(sessionSeed, settings->m_variation + 1);
        float stockResult = settings->m_startResult;

        if (!MoneyMakerEvaluate(settings, code, data, stocks.Stock(stock), sessionStart, stockResult))
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

#if 1
// Current best single variation version: Each thread has its own code. The goal is to maximize the number of candidates that can be tested in a given period of time.
GPU_GLOBAL void MoneyEvolve(const FireStarterSettings* settings, float* results, FireStarterCode* codes, FireStarterResult* population, MoneyMakerStocks* stocks, const unsigned long long evolutionSeed)
{
    const MoneyMakerStocks& stockData = *stocks;

    // Determine the member to be optimized.
    unsigned int member = blockIdx.x * blockDim.x + threadIdx.x;
    if (member >= settings->m_population)
        return;

    // The evolution code and data.
    FireStarterCode code;
    FireStarterData data;

    unsigned long long memberSeed = evolutionSeed + SEED0(member);   // Unique seed for the member

    // The first pass is initalized with random numbers.
    float startResult = settings->m_startResult;
    float startScale = settings->m_startScale;
    float result = startResult;
    unsigned int registers = 0;
    for (unsigned int i = 0; i < 10; i++) {
        code.InitCode(memberSeed);
        registers = code.Optimize();
        data.InitData(memberSeed, registers, 1.0f); // Scale matches HatTrick.
        if (MoneyMakerEvaluateStocks(settings, code, data, stockData, evolutionSeed, result))
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
            if (MoneyMakerEvaluateStocks(settings, code, data, stockData, evolutionSeed, curResult))
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
#else
// Simplified algorithm for use with more members but fewer passes.
GPU_GLOBAL void MoneyEvolve(const FireStarterSettings* settings, float* results, FireStarterCode* codes, FireStarterResult* population, MoneyMakerStocks* stocks, const unsigned long long evolutionSeed)
{
    const MoneyMakerStocks& stockData = *stocks;

    // Determine the member to be optimized.
    unsigned int member = blockIdx.x * blockDim.x + threadIdx.x;
    if (member >= settings->m_population)
        return;

    // The evolution code and data.
    FireStarterCode code;
    FireStarterData data;

    unsigned long long memberSeed = evolutionSeed + SEED0(member);   // Unique seed for the member

    // The first pass is initalized with random numbers.
    float startResult = settings->m_startResult;
    float startScale = settings->m_startScale;
    float result = startResult;
    unsigned int registers = 0;
    for (unsigned int i = 0; i < 10; i++) {
        code.InitCode(memberSeed);
        registers = code.Optimize();
        data.InitData(memberSeed, registers, 1.0f); // Scale matches HatTrick.
        if (MoneyMakerEvaluateStocks(settings, code, data, stockData, evolutionSeed, result))
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
        // Randomize a register each generation.
        float evolutionScale = result * startScale;
        if (memberAge > 0)
            data.RandomData(memberSeed, evolutionScale, registers);

        // Iterate to evolve the data.
        for (unsigned int i = 0; i < settings->m_iterations; i++) {
            unsigned int d = RANDOMMOD(memberSeed, registers);
            float old = data[d];
            data[d] = old + evolutionScale * RANDOMFACTOR(memberSeed);
            float curResult = result * 0.99f;
            unsigned int curTrades = 0;
            if (MoneyMakerEvaluateStocks(settings, code, data, stockData, evolutionSeed, curResult))
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
#endif

GPU_GLOBAL void MoneyEvolveNew(const FireStarterSettings* settings, FireStarterCode* oldCodes, FireStarterCode* newCodes, FireStarterResult* newPopulation, const FireStarterResult* oldPopulation, MoneyMakerStocks* stocks, const unsigned long long evolutionSeed, const unsigned long long evolutionPass)
{
    // Determine the member to be optimized.
    unsigned int member = blockIdx.x * blockDim.x + threadIdx.x;
    if (member >= settings->m_population)
        return;
    unsigned long long memberSeed = evolutionSeed + SEED0(member);   // Unique seed for the member

    // The stock data.
    const MoneyMakerStocks& stockData = *stocks;

    // The first generation is initalized with random numbers.
    if (!evolutionPass) {
        // The evolution code and data.
        FireStarterCode code;
        FireStarterData data;
        float result = settings->m_startResult;
        for (unsigned int i = 0; i < settings->m_iterations; i++) {
            code.InitCode(memberSeed);
            unsigned int registers = code.Optimize();
            data.InitData(memberSeed, registers, 1.0f); // Scale matches HatTrick.
            if (MoneyMakerEvaluateStocks(settings, code, data, stockData, evolutionSeed, result))
                break;
        }
        newCodes[member].Copy(code);
        FireStarterPopulation::PopulationResult(newPopulation, member)->InitResult(data, result, 0);
        return;
    } else {
        // Start with the best code and data from the last pass.
        FireStarterCode code(oldCodes[member]);
        unsigned int registers = code.Optimize();
        const FireStarterResult& oldResult = *FireStarterPopulation::PopulationResult(oldPopulation, member);
        FireStarterData data(oldResult.Data());
        float memberResult = oldResult.MaxResult();
        float result;
        float evolutionScale;

        // Randomize a data element or instruction register after the second generation.
        // Note: This is only done for recently copied members.
        unsigned short evolveAge = oldResult.EvolveAge1();
        if (evolveAge >= 2) {
            result = settings->m_startResult;
            evolutionScale = result * settings->m_startScale;
            if (evolveAge > 6)
                code.RandomRegister(memberSeed);
            else
                data.RandomData(memberSeed, evolutionScale, registers);
        } else {
            result = memberResult;
            evolutionScale = memberResult * settings->m_scale;
        }

        // Iterate to optimize the data.
        for (unsigned int i = 0; i < settings->m_iterations; i++) {
            unsigned int d = RANDOMMOD(memberSeed, registers);
            float oldData = data[d];
            data[d] = oldData + evolutionScale * RANDOMFACTOR(memberSeed);
            unsigned int curTrades = 0;
            float curResult = result * 0.99f; // Validated as being faster than * 1.0f or * 0.9f. About the same as * 0.999f.  11/17/2024
            if (MoneyMakerEvaluateStocks(settings, code, data, stockData, evolutionSeed, result))
                result = curResult;
            else
                data[d] = oldData;
        }

        // Save the results if they improved or switch to another member's old results.
        if (result < memberResult)
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
                code.Copy(oldCodes[bestCandidate]);
                const FireStarterResult* bestCandidateResult = FireStarterPopulation::PopulationResult(oldPopulation, bestCandidate);
                data = bestCandidateResult->Data();
                result = bestCandidateResult->MaxResult();
                evolveAge = evolveAge ? evolveAge + 1 : 2;
            } else
                // No better result was found so this one may be pretty good.
                // Keep attempting to improve it for now.
                evolveAge = 1;
        }

        // Return the best code.
        newCodes[member].Copy(code);

        // Return the best data, result and age.
        FireStarterPopulation::PopulationResult(newPopulation, member)->InitResult(data, result, evolveAge);
    }
} // MoneyEvolveNew

GPU_GLOBAL void MoneyEvolveTest(const FireStarterSettings* settings, FireStarterCode* newCodes, FireStarterCode* oldCodes, FireStarterResult* newPopulation, const FireStarterResult* oldPopulation, MoneyMakerStocks* stocks, const unsigned long long evolutionSeed, const unsigned long long evolutionPass)
{
    // Determine the member to be optimized.
    unsigned int member = blockIdx.x * blockDim.x + threadIdx.x;
    if (member >= settings->m_population)
        return;
    unsigned long long memberSeed = evolutionSeed + SEED0(member);   // Unique seed for the member

    // The stock data.
    const MoneyMakerStocks& stockData = *stocks;

    // The evolution code and data.
    FireStarterCode code;
    FireStarterData data;
    unsigned int registers = code.InitOptimizedCode(memberSeed);
    data.InitData(memberSeed, registers, 1.0f); // Scale matches HatTrick.
    float result = 1.0e+10f; // settings->m_startResult;
    float evolutionScale = settings->m_startScale;

    // Initial result for optimization.
    MoneyMakerEvaluateStocks(settings, code, data, stockData, evolutionSeed, result);

    // Iterate to optimize the data.
    for (unsigned int i = 0; i < settings->m_iterations; i++) {
        unsigned int d = RANDOMMOD(memberSeed, registers);
        float oldData = data[d];
        data[d] = oldData + evolutionScale * RANDOMFACTOR(memberSeed);
        unsigned int curTrades = 0;
        float curResult = result * 0.99f; // Validated as being faster than * 1.0f or * 0.9f. About the same as * 0.999f.  11/17/2024
        if (MoneyMakerEvaluateStocks(settings, code, data, stockData, evolutionSeed, result))
            result = curResult;
        else
            data[d] = oldData;
    }

    // Return the best code.
    newCodes[member].Copy(code);

    // Return the best data, result and age.
    FireStarterPopulation::PopulationResult(newPopulation, member)->InitResult(data, result);
} // MoneyEvolveTest
