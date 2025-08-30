#pragma once

#include "FireStarterResults.h"
#include "MoneyMakerStocks.h"

inline float MoneyCompiledEvaluate(const FireStarterData& data, float n)
{
    // EVALUATE //
    // END //
    return n;
} // MoneyCompiledEvaluate

// Note: TODO: Implement a way to display the stock trades.
GPU_GLOBAL void MoneyShow(float* target, float* results, unsigned int size, float thetaStart, float thetaEnd, FireStarterCode* code, FireStarterData* data, unsigned int variation)
{
    // Determine the member to be optimized.
    unsigned int index = blockIdx.x * blockDim.x + threadIdx.x;
    if (index >= size)
        return;

    // Generate the displayed results.
    if (results)
        results[index] = 0.0f;
} // MoneyShow

inline bool MoneyOptimizeEvaluate(const FireStarterData& data, const MoneyMakerStock& stockData, float& result)
{
    float minResult = result;
    float funds = MONEYMAKER_FUNDS;
    float oldPrice = stockData[0];
    int shares = 0;
    unsigned int i = 1;

    FireStarterData workData = data;
    while (i < MONEYMAKER_HISTORY) {
        float newPrice = stockData[i];
        float priceChange = newPrice / oldPrice;
        oldPrice = newPrice;

        // Trading evaluation using the result to buy or sell shares.
        float n = fabsf(MoneyCompiledEvaluate(workData, priceChange));
        if (!isfinite(n)) {
            result = 0.0f;
            return false;
        }

        // Warmup evaluation ignoring the results.
        if (i > MONEYMAKER_WARMUP) {
            if (n >= 1.0f) {
                if (!shares) {
                    shares = (int)(funds / newPrice);
                    funds -= shares * newPrice;
                }
            }  else if (n <= -1.0f) {
                if (shares) {
                    funds += newPrice * shares;
                    shares = 0;
                }
            }
        }
        i++;
    }

    // The result is the ratio between the final funds and the starting funds.
    result = (funds + shares * stockData[MONEYMAKER_HISTORY - 1]) / MONEYMAKER_FUNDS;
    return result > minResult;
} // MoneyOptimizeEvaluate

GPU_GLOBAL void MoneyOptimizer(FireStarterResult* newPopulation, const FireStarterResult* oldPopulation, MoneyMakerStocks* stocks, const unsigned int registers, const unsigned long long optimizeSeed, const unsigned long long optimizePass, unsigned int population)
{
    // Determine the member to be optimized.
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;

    // Get the stock data.
    const MoneyMakerStock& stockData = stocks->StockData();

    // Evolve the program registers for each variation.
    FireStarterData data;
    unsigned short evolveAge, initAge;
    float result, memberResult;
    float evolutionScale;
    unsigned long long memberSeed = optimizeSeed + SEED11(member); // Unique seed for the generation/variation/member

    // The first generation is initalized with random numbers.
    if (!optimizePass) {
        for (initAge = 1; initAge <= 10; initAge++) {
            data.InitData(memberSeed, registers);
            result = FIRESTARTER_START_RESULT;
            if (MoneyOptimizeEvaluate(data, stockData, result))
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
        initAge = oldResult.EvolveAge2();
        if (evolveAge > 1) {
            // Randomize a single register.
            unsigned int d = RANDOMMOD(memberSeed, registers);
            float oldData = data[d];
            data[d] = oldData + RANDOMFACTOR(memberSeed) * FIRESTARTER_START_SCALE * (evolveAge - 1);
            result = MoneyOptimizeEvaluate(data, stockData, result);
            if (result <= 0.0f) {
                data[d] = oldData;
                memberResult = result = oldResult.MaxResult();
            }
            else
                memberResult = result;
            evolutionScale = (2.0f * FIRESTARTER_SCALE) * memberResult; // Validated as being faster than 0.6f * FIRESTARTER_START_RESULT  11/17/2024
        } else {
            memberResult = result = oldResult.MaxResult();
            evolutionScale = FIRESTARTER_SCALE * memberResult;
        }
    }

    // Iterate to evolve the registers.
    for (unsigned int i = 0; i < FIRESTARTER_OPTIMIZE_ITERATIONS; i++) {
        unsigned int d = RANDOMMOD(memberSeed, registers);
        float oldData = data[d];
        data[d] = oldData + evolutionScale * RANDOMFACTOR(memberSeed);
        float curResult = result * 0.99f; // Validated as being faster than * 1.0f or * 0.9f. About the same as * 0.999f.  11/17/2024
        if (MoneyOptimizeEvaluate(data, stockData, curResult))
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
            unsigned int candidate = RANDOMMOD(memberSeed, population);
            const FireStarterResult* candidateResult = FireStarterPopulation::PopulationResult(oldPopulation, candidate);
            unsigned short candidateAge = candidateResult->EvolveAge1();
            if (candidateAge <= 1) {
                float candidateMaxResult = candidateResult->MaxResult();
                if (candidateMaxResult <= result) {
                    bestCandidate = candidate;
                    result = candidateMaxResult;
                }
            }
        }

        // Switch to the selected member's data and results.
        if (bestCandidate != member) {
            const FireStarterResult* bestCandidateResult = FireStarterPopulation::PopulationResult(oldPopulation, bestCandidate);
            data = bestCandidateResult->Data();
            evolveAge = evolveAge ? evolveAge + 1 : 2;
            initAge = bestCandidateResult->EvolveAge2();
        } else
            evolveAge = 1;
    }

    if (newPopulation)
        FireStarterPopulation::PopulationResult(newPopulation, member)->InitResult(data, result, evolveAge, initAge);
} // MoneyOptimizer
