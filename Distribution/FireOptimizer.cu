#pragma once

#include "FireStarterResults.h"
#include "MoneyMakerStocks.h"

#if FIRESTARTER_MODE == FIRESTARTER_MONEYMAKER

// Note: TODO: Implement a way to display the stock trades.
GPU_GLOBAL void ShowEvaluate(float* target, float* results, unsigned int size, float thetaStart, float thetaEnd, FireStarterCode* code, FireStarterData* data, unsigned int variation)
{
    // Determine the member to be optimized.
    unsigned int index = blockIdx.x * blockDim.x + threadIdx.x;
    if (index >= size)
        return;

    // Generate the displayed results.
    if (results)
        results[index] = 0.0f;
} // ShowEvaluate

// Not used in Evolver. For code checkins in only.
inline float CompiledEvaluate(FireStarterData& data, float n)
{
    // EVALUATE //
    // END //
    return n;
} // CompiledEvaluate

inline bool OptimizeEvaluate(const FireStarterData& startData, const MoneyMakerStock& stockData, float& result)
{
    float maxResult = result;
    FireStarterData data(startData);
    float funds = MONEYMAKER_FUNDS;
    float oldPrice = stockData[0];
    int shares = 0;
    unsigned int i = 1;

    while (i < MONEYMAKER_WARMUP) {
        float newPrice = stockData[i];
        float priceChange = newPrice / oldPrice;
        oldPrice = newPrice;

        float n = fabsf(CompiledEvaluate(data, priceChange));
        if (!isfinite(n))
            return false;
        i++;
    }
    while (i < MONEYMAKER_HISTORY) {
        float newPrice = stockData[i];
        float priceChange = newPrice / oldPrice;
        oldPrice = newPrice;

        float n = fabsf(CompiledEvaluate(data, priceChange));
        if (!isfinite(n))
            return false;

        if (n >= 1.0f) {
            if (shares == 0) {
                shares = (int)(funds / newPrice);
                funds -= shares * newPrice;
            }
        } else if (n <= -1.0f) {
            if (shares > 0) {
                funds += newPrice * shares;
                shares = 0;
            }
        }
        i++;
    }
    result = MONEYMAKER_FUNDS / funds;    // Inverted so that the smallest value can be selected to match other modes.
    return result < maxResult;
} // OptimizeEvaluate

GPU_GLOBAL void MoneyMakerOptimizer(FireStarterResult* newPopulation, const FireStarterResult* oldPopulation, MoneyMakerStocks* stocks, const unsigned int variation, const unsigned int registers, const unsigned long long optimizeSeed, const unsigned long long optimizePass, unsigned int population)
{
    // Determine the member to be optimized.
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;

    // Get the stock data.
    const MoneyMakerStock& stockData = stocks->StockData();

    // Precalculate the target theta values and target samples.
    float theta[FIRESTARTER_OPTIMIZE_SAMPLES];
    float target[FIRESTARTER_OPTIMIZE_SAMPLES];
    float sampleStep = (TARGET_MAX - TARGET_MIN) / (FIRESTARTER_OPTIMIZE_SAMPLES - 1);
    unsigned int targetVariation = variation % FIRESTARTER_VARIATIONS;
    for (unsigned int i = 0; i < FIRESTARTER_OPTIMIZE_SAMPLES; i++) {
        float t = theta[i] = TARGET_MIN + i * sampleStep;
        target[i] = Target(t, targetVariation);
    }

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
            if (OptimizeEvaluate(data, target, theta, result))
                break;
        }
        memberResult = FIRESTARTER_START_RESULT;
        evolutionScale = FIRESTARTER_START_SCALE; // Validated as faster than 0.6f * memberResult  11/17/2024
        evolveAge = 0;
    } else {
        // Later generations randomize a single register if they were copied.
        const FireStarterResult& oldResult = *FireStarterPopulation::PopulationResult(oldPopulation, member, variation);
        data.Copy(oldResult.Data());
        evolveAge = oldResult.EvolveAge1();
        initAge = oldResult.EvolveAge2();
        if (evolveAge > 1) {
            // Randomize a single register.
            unsigned int d = RANDOMMOD(memberSeed, registers);
            float oldData = data[d];
            data[d] = oldData + RANDOMFACTOR(memberSeed) * FIRESTARTER_START_SCALE * (evolveAge - 1);
            result = OptimizeEvaluate(data, stockData, result);
            if (result <= 0.0f) {
                data[d] = oldData;
                memberResult = result = oldResult.MaxResult();
            } else
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
        if (OptimizeEvaluate(data, stockData, curResult))
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
            const FireStarterResult* candidateResult = FireStarterPopulation::PopulationResult(oldPopulation, candidate, variation);
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
            const FireStarterResult* bestCandidateResult = FireStarterPopulation::PopulationResult(oldPopulation, bestCandidate, variation);
            data = bestCandidateResult->Data();
            evolveAge = evolveAge ? evolveAge + 1 : 2;
            initAge = bestCandidateResult->EvolveAge2();
        } else
            evolveAge = 1;
    }

    if (newPopulation)
        FireStarterPopulation::PopulationResult(newPopulation, member, variation)->InitResult(data, result, evolveAge, initAge);
} // MoneyMakerOptimizer

#else

GPU_GLOBAL void ShowEvaluate(float* target, float* results, unsigned int size, float thetaStart, float thetaEnd, FireStarterCode* code, FireStarterData* data, unsigned int variation)
{
    // Determine the member to be optimized.
    unsigned int index = blockIdx.x * blockDim.x + threadIdx.x;
    if (index >= size)
        return;

    // Generate the target data.
    float theta = thetaStart + index * (thetaEnd - thetaStart) / size;
    if (target)
        target[index] = Target(theta, variation + FIRESTARTER_VARIATION);

    // Generate the test data.
    if (results && data) {
        if (code) {
            FireStarterCode localCode(code);
            FireStarterData localData(data);
            results[index] = localCode.Evaluate(localData, theta);
        } else
            results[index] = CompiledEvaluate(data, theta);
    }
} // ShowEvaluate

inline float CompiledEvaluate(const FireStarterData& testData, float n)
{
    FireStarterData data = testData;
    // EVALUATE //
    // END //
    return n;
} // CompiledEvaluate

inline bool OptimizeEvaluate(const FireStarterData& data, const float target[], const float theta[], float& result)
{
    float maxResult = result;
    result = 0.0f;
    for (int i = 0; i < FIRESTARTER_OPTIMIZE_SAMPLES; i++) {
        float n = fabsf(CompiledEvaluate(data, theta[i]) - target[i]);
        if (!isfinite(n) || (n > maxResult)) {
            result = maxResult;
            return false;
        } else
            result = fmaxf(n, result);
    }
    return true;
} // OptimizeEvaluate

GPU_GLOBAL void Optimizer(FireStarterResult* newPopulation, const FireStarterResult* oldPopulation, MoneyMakerStocks* stocks, const unsigned int variation, const unsigned int registers, const unsigned long long optimizeSeed, const unsigned long long optimizePass, unsigned int population)
{
    // Determine the member to be optimized.
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;

    // Precalculate the target theta values and target samples.
    float theta[FIRESTARTER_OPTIMIZE_SAMPLES];
    float target[FIRESTARTER_OPTIMIZE_SAMPLES];
    float sampleStep = (TARGET_MAX - TARGET_MIN) / (FIRESTARTER_OPTIMIZE_SAMPLES - 1);
    unsigned int targetVariation = variation % FIRESTARTER_VARIATIONS;
    for (unsigned int i = 0; i < FIRESTARTER_OPTIMIZE_SAMPLES; i++) {
        float t = theta[i] = TARGET_MIN + i * sampleStep;
        target[i] = Target(t, targetVariation);
    }

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
            if (OptimizeEvaluate(data, target, theta, result))
                break;
        }
        memberResult = FIRESTARTER_START_RESULT;
        evolutionScale = FIRESTARTER_START_SCALE; // Validated as faster than 0.6f * memberResult  11/17/2024
        evolveAge = 0;
    } else {
        // Later generations randomize a single register if they were copied.
        const FireStarterResult& oldResult = *FireStarterPopulation::PopulationResult(oldPopulation, member, variation);
        data.Copy(oldResult.Data());
        evolveAge = oldResult.EvolveAge1();
        initAge = oldResult.EvolveAge2();
        if (evolveAge > 1) {
            // Randomize a single register.
            unsigned int d = RANDOMMOD(memberSeed, registers);
            float oldData = data[d];
            data[d] = oldData + RANDOMFACTOR(memberSeed) * FIRESTARTER_START_SCALE * (evolveAge - 1);
            result = 1.0e+6f; // Validated as being faster than FIRESTARTER_START_RESULT  11/17/2024
            if (!OptimizeEvaluate(data, target, theta, result)) {
                data[d] = oldData;
                memberResult = result = oldResult.MaxResult();
            } else
                memberResult = FIRESTARTER_START_RESULT; // Validated as being faster than result  11/17/2024
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
        if (OptimizeEvaluate(data, target, theta, curResult))
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
            const FireStarterResult* candidateResult = FireStarterPopulation::PopulationResult(oldPopulation, candidate, variation);
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
            const FireStarterResult* bestCandidateResult = FireStarterPopulation::PopulationResult(oldPopulation, bestCandidate, variation);
            data = bestCandidateResult->Data();
            evolveAge = evolveAge ? evolveAge + 1 : 2;
            initAge = bestCandidateResult->EvolveAge2();
        } else
            evolveAge = 1;
    }

    if (newPopulation)
        FireStarterPopulation::PopulationResult(newPopulation, member, variation)->InitResult(data, result, evolveAge, initAge);
} // Optimizer

#endif
