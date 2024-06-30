#pragma once

#include "FireStarterResults.h"
#include "CUDADefines.h"

// VARIATIONS //
// END //

#if FIRESTARTER_OPTIMIZE_SHARED

typedef struct FireStarterSharedData {
    float d[FIRESTARTER_REGISTERS * WARP_THREADS];

    inline float& operator[](unsigned int i)
    {
        return d[i * WARP_THREADS + threadIdx.x];
    } // operator[]

    inline void operator=(const FireStarterData& data)
    {
        for (unsigned int i = 0; i < FIRESTARTER_REGISTERS; i++)
            d[i * WARP_THREADS + threadIdx.x] = data[i];
    } // operator=

    inline void Copy(const FireStarterData& data)
    {
        for (unsigned int i = 0; i < FIRESTARTER_REGISTERS; i++)
            d[i * WARP_THREADS + threadIdx.x] = data[i];
    } // Copy
} FireStarterSharedData;

inline float Evaluate(FireStarterSharedData& data, const FireStarterData& testData, float n)
{
    data = testData;
    // EVALUATE //
    // END //
    return n;
} // Evaluate

inline bool TestEvaluate(FireStarterSharedData& data, const FireStarterData& testData, const float target[], const float theta[], float& result)
{
    float maxResult = result;
    result = 0.0f;
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++) {
        float n = fabsf(Evaluate(data, testData, theta[i]) - target[i]);
        if (!isfinite(n) || (n > maxResult)) {
            result = maxResult;
            return false;
        } else
            result = fmaxf(n, result);
    }
    return true;
} // TestEvaluate

GPU_GLOBAL void Optimizer(FireStarterPopulation* newResults, const FireStarterPopulation* oldResults, const unsigned int v, const unsigned int registers, const unsigned long long optimizationSeed, const unsigned long long optimizationPass)
{
    // Determine the member to be optimized.
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= FIRESTARTER_POPULATION)
        return;

    GPU_SHARED FireStarterSharedData sharedData;

    // Precalculate the target theta values and target samples.
    float theta[FIRESTARTER_SAMPLES];
    float target[FIRESTARTER_SAMPLES];
    float sampleStep = (TARGET_MAX - TARGET_MIN) / (FIRESTARTER_SAMPLES - 1);
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++) {
        float t = theta[i] = TARGET_MIN + i * sampleStep;
        target[i] = Target(t, v);
    }

    // Evolve the program registers for each variation.
    unsigned long long seed = optimizationSeed + SEED10(v) + SEED11(member); // Unique seed for the generation/variation/member
    FireStarterData data;
    unsigned int memberAge;
    float result, memberResult;
    float evolutionScale;

    // The first generation is initalized with random numbers.
    if (!optimizationPass) {
        evolutionScale = FIRESTARTER_START_SCALE;
        memberAge = 0;
        memberResult = FIRESTARTER_START_RESULT;
        for (int i = 0; i < 10; i++) {
            data.Init(seed, evolutionScale, registers);
            result = memberResult;
            if (TestEvaluate(sharedData, data, target, theta, result))
                break;
        }
    } else {
        // Later generations randomize a single register if they were copied.
        data.Copy(oldResults->Data(member, v));
        memberAge = oldResults->Age(member, v);
        if (memberAge > 1) {
            // Randomize a single register.
            evolutionScale = FIRESTARTER_START_SCALE;
            unsigned int d = RANDOMMOD(seed, registers);
            float oldData = data[d];
            data[d] = oldData + RANDOMFACTOR(seed) * evolutionScale * (memberAge - 1);
            memberResult = FIRESTARTER_START_RESULT;
            result = 1.0e+6f;
            if (!TestEvaluate(sharedData, data, target, theta, result)) {
                data[d] = oldData;
                result = memberResult = oldResults->MinResult(member, v);
            }
        } else {
            result = memberResult = oldResults->MinResult( member, v);
            evolutionScale = FIRESTARTER_SCALE * memberResult;
        }
    }

    // Iterate to evolve the registers.
    for (unsigned int p = 0; p < FIRESTARTER_ITERATIONS; p++) {
        unsigned int d = RANDOMMOD(seed, registers);
        float oldData = data[d];
        data[d] = oldData + evolutionScale * RANDOMFACTOR(seed);
        float curResult = result;
        if (TestEvaluate(sharedData, data, target, theta, curResult))
            result = curResult;
        else
            data[d] = oldData;
    }

    // If the result was better, save the results.
    if (!optimizationPass || (result < memberResult))
        newResults->InitMemberResult(member, v, 0, result, data);
    else {
        // If the result was worse, copy a result from among the previous generation's results.
        unsigned int bestCandidate = member;
        float bestResult = result;

        // The genetic part of genetic programming and a major optimization:
        // Copy the best data from among a random set of candidates.
        for (int i = 0; i < FIRESTARTER_CANDIDATES; i++) {
            // Select evolving members with results better than the current result.
            unsigned int candidate = RANDOMMOD(seed, FIRESTARTER_POPULATION);
            unsigned int candidateAge = oldResults->Age(candidate, v);
            if (candidateAge <= 1) {
                float candidateResult = oldResults->MinResult(candidate, v);
                if (candidateResult <= bestResult) {
                    bestCandidate = candidate;
                    bestResult = candidateResult;
                }
            }
        }

        // Switch to the selected member's data and results.
        if (bestCandidate == member)
            // Note: result will be larger than oldResult when oldAge > 1.
            newResults->InitMemberResult(member, v, 1, result, data);
        else {
            const FireStarterData* bestData = oldResults->Data(bestCandidate, v);
            newResults->InitMemberResult(member, v, MAX(memberAge, 1) + 1, bestResult, bestData);
        }
    }
} // Optimizer

#else

#if 1
// Old way to copy data.
inline float Evaluate(const FireStarterData& testData, float n)
{
    FireStarterData data(testData);
    // EVALUATE //
    // END //
    return n;
} // Evaluate

inline float Evaluate2(FireStarterData& test, const FireStarterData& testData, float n)
{
    FireStarterData data(testData);
    // EVALUATE //
    // END //
    test = data;
    return n;
} // Evaluate2
#else
// New way to copy data.
inline float Evaluate(const FireStarterData& testData, float n)
{
    FireStarterData data;
    data.Copy(testData);
    // EVALUATE //
    // END //
    return n;
} // Evaluate

inline float Evaluate2(FireStarterData& test, const FireStarterData& testData, float n)
{
    FireStarterData data;
    data.Copy(testData);
    // EVALUATE //
    // END //
    test.Copy(data);
    return n;
} // Evaluate2
#endif

inline bool TestEvaluate(const FireStarterData& data, const float target[], const float theta[], float& result)
{
    float maxResult = result;
    result = 0.0f;
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++) {
        float n = fabsf(Evaluate(data, theta[i]) - target[i]);
        if (!isfinite(n) || (n > maxResult)) {
            result = maxResult;
            return false;
        } else
            result = fmaxf(n, result);
    }
    return true;
} // TestEvaluate

inline bool TestEvaluate2(FireStarterData& test, const FireStarterData& data, const float target[], const float theta[], float& result)
{
#if 1
    result = Evaluate2(test, data, 0.0f);
//    result = fabsf(Evaluate2(test, data, theta[0]) - target[0]);
#else
    float maxResult = result;
    result = 0.0f;
    int i = 0;
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++) {
        float n = fabsf(Evaluate2(test, data, theta[i]) - target[i]);
        if (!isfinite(n) || (n > maxResult)) {
            result = maxResult;
            return false;
        } else
            result = fmaxf(n, result);
    }
#endif
    return true;
} // TestEvaluate2

GPU_GLOBAL void Optimizer(FireStarterPopulation* newResults, const FireStarterPopulation* oldResults, const unsigned int v, const unsigned int registers, const unsigned long long optimizationSeed, const unsigned long long optimizationPass, const unsigned long long optimizationIndex)
{
    // Determine the member to be optimized.
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= FIRESTARTER_POPULATION)
        return;

    // Precalculate the target theta values and target samples.
    float theta[FIRESTARTER_SAMPLES];
    float target[FIRESTARTER_SAMPLES];
    float sampleStep = (TARGET_MAX - TARGET_MIN) / (FIRESTARTER_SAMPLES - 1);
    for (int i = 0; i < FIRESTARTER_SAMPLES; i++) {
        float t = theta[i] = TARGET_MIN + i * sampleStep;
        target[i] = Target(t, v);
    }

    // Evolve the program registers for each variation.
    unsigned long long seed = optimizationSeed + SEED10(v) + SEED11(member); // Unique seed for the generation/variation/member
    FireStarterData data;
    unsigned int memberAge;
    float result, memberResult;
    float evolutionScale;

    // The first generation is initalized with random numbers.
    if (!optimizationPass) {
        evolutionScale = FIRESTARTER_START_SCALE;
        memberAge = 0;
        memberResult = FIRESTARTER_START_RESULT;
        for (int i = 0; i < 10; i++) {
            data.Init(seed, evolutionScale, registers);
            result = memberResult;
            if (TestEvaluate(data, target, theta, result))
                break;
        }
    } else {
        // Later generations randomize a single register if they were copied.
        data.Copy(oldResults->Data(member, v));
        memberAge = oldResults->Age(member, v);
        if (memberAge > 1) {
            // Randomize a single register.
            evolutionScale = FIRESTARTER_START_SCALE;
            unsigned int d = RANDOMMOD(seed, registers);
            float oldData = data[d];
            data[d] = oldData + RANDOMFACTOR(seed) * evolutionScale * (memberAge - 1);
            memberResult = FIRESTARTER_START_RESULT;
            result = 1.0e+6f;
            if (!TestEvaluate(data, target, theta, result)) {
                data[d] = oldData;
                result = memberResult = oldResults->MinResult(member, v);
            }
        } else {
            result = memberResult = oldResults->MinResult(member, v);
            evolutionScale = FIRESTARTER_SCALE * memberResult;
        }
    }

    // Iterate to evolve the registers.
    for (unsigned int p = 0; p < FIRESTARTER_ITERATIONS; p++) {
#if 1
        // Note: DEBUG!
        if ((optimizationIndex == 9) && (member == 464) && (v == 0)) {
            FireStarterData test;
            unsigned int d = RANDOMMOD(seed, registers);
            data[d] += evolutionScale * RANDOMFACTOR(seed);
            float curResult = 0.0f;
            TestEvaluate2(test, data, target, theta, curResult);
            ((FireStarterPopulation*)oldResults)->InitMemberResult(p, v, 0, curResult, data);
        } else
#endif
        {
            unsigned int d = RANDOMMOD(seed, registers);
            float oldData = data[d];
            data[d] = oldData + evolutionScale * RANDOMFACTOR(seed);
            float curResult = result;
            if (TestEvaluate(data, target, theta, curResult) && (curResult <= result))
                result = curResult;
            else
                data[d] = oldData;
        }
    }

    // If the result was better, save the results.
    if (!optimizationPass || (result < memberResult))
        newResults->InitMemberResult(member, v, 0, result, data);
    else {
        // If the result was worse, copy a result from among the previous generation's results.
        unsigned int bestCandidate = member;
        float bestResult = result;

        // The genetic part of genetic programming and a major optimization:
        // Copy the best data from among a random set of candidates.
        for (int i = 0; i < FIRESTARTER_CANDIDATES; i++) {
            // Select evolving members with results better than the current result.
            unsigned int candidate = RANDOMMOD(seed, FIRESTARTER_POPULATION);
            unsigned int candidateAge = oldResults->Age(candidate, v);
            if (candidateAge <= 1) {
                float candidateResult = oldResults->MinResult(candidate, v);
                if (candidateResult <= bestResult) {
                    bestCandidate = candidate;
                    bestResult = candidateResult;
                }
            }
        }

        // Switch to the selected member's data and results.
        if (bestCandidate == member)
            // Note: result will be larger than oldResult when oldAge > 1.
            newResults->InitMemberResult(member, v, 1, result, data);
        else {
            const FireStarterData* bestData = oldResults->Data(bestCandidate, v);
            newResults->InitMemberResult(member, v, MAX(memberAge, 1) + 1, bestResult, bestData);
        }
    }
} // Optimizer
#endif

#if 1
typedef struct TestData {
    float d[30];

    inline float& operator[](unsigned int i)
    {
        return d[i];
    } // operator[]

    inline float operator[](unsigned int i) const
    {
        return d[i];
    } // operator[]

    inline void Copy(const TestData& data)
    {
        for (unsigned int i = 0; i < 30; i++)
            d[i] = data[i];
    } // Copy

    inline void Copy(const TestData* data)
    {
        for (unsigned int i = 0; i < 30; i++)
            d[i] = (*data)[i];
    } // Copy
} TestData;

inline float TestMath(TestData& data, float n)
{
    n = data[0] += n;
    n *= data[1];
    n *= data[2];
    n = data[3] *= n;
    n = data[4] *= n;
    n += data[5];
    n = data[6] *= n;
    n += data[6];
    n = data[7] *= n;
    n = data[7] *= n;
    n = data[8] *= n;
    n *= data[7];
    n += data[9];
    n *= data[10];
    n *= data[11];
    n = data[3] *= n;
    n *= data[12];
    n *= data[8];
    n = data[13] += n;
    n = data[14] += n;
    n *= data[0];
    n = data[14] *= n;
    n += data[15];
    n *= data[16];
    n += data[14];
    n = data[3] *= n;
    n *= data[17];
    n *= data[3];
    n *= data[18];
    n *= data[4];
    n *= data[19];
    n *= data[13];
    return n;
} // TestMath

#if 0
inline float Test(const TestData& testData, float n)
{
    TestData data(testData);

    return TestMath(data, n);
} // Test
#else
inline float Test(const TestData& testData, float n)
{
    TestData data;
    data.Copy(testData);

    return TestMath(data, n);
} // Test
#endif

inline void TestEvaluate(const TestData& testData, float& result)
{
    result = Test(testData, 0.0f);
} // TestEvaluate

GPU_GLOBAL void BugTest(const TestData* data, float* result)
{
    if (!threadIdx.x) {
        TestData testData;
        testData.Copy(data);
        float test = 0;
        TestEvaluate(testData, test);
        *result = test;
    }
} // BugTest
#else
typedef struct TestData {
    float d[30];

    inline float& operator[](unsigned int i)
    {
        return d[i];
    } // operator[]

    inline float operator[](unsigned int i) const
    {
        return d[i];
    } // operator[]

    inline void Copy(const TestData& data)
    {
        for (unsigned int i = 0; i < 30; i++)
            d[i] = data[i];
    } // Copy

    inline void Copy(const TestData* data)
    {
        for (unsigned int i = 0; i < 30; i++)
            d[i] = (*data)[i];
    } // Copy
} TestData;

inline float Test1(const TestData &testData, float n)
{
    TestData data(testData);

    n = data[0] += n;
    n *= data[1];
    n *= data[2];
    n = data[3] *= n;
    n = data[4] *= n;
    n += data[5];
    n = data[6] *= n;
    n += data[6];
    n = data[7] *= n;
    n = data[7] *= n;
    n = data[8] *= n;
    n *= data[7];
    n += data[9];
    n *= data[10];
    n *= data[11];
    n = data[3] *= n;
    n *= data[12];
    n *= data[8];
    n = data[13] += n;
    n = data[14] += n;
    n *= data[0];
    n = data[14] *= n;
    n += data[15];
    n *= data[16];
    n += data[14];
    n = data[3] *= n;
    n *= data[17];
    n *= data[3];
    n *= data[18];
    n *= data[4];
    n *= data[19];
    n *= data[13];

    return n;
} // Test1

inline float Test2(const TestData& testData, float n)
{
    TestData data;
    data.Copy(testData);

    n = data[0] += n;
    n *= data[1];
    n *= data[2];
    n = data[3] *= n;
    n = data[4] *= n;
    n += data[5];
    n = data[6] *= n;
    n += data[6];
    n = data[7] *= n;
    n = data[7] *= n;
    n = data[8] *= n;
    n *= data[7];
    n += data[9];
    n *= data[10];
    n *= data[11];
    n = data[3] *= n;
    n *= data[12];
    n *= data[8];
    n = data[13] += n;
    n = data[14] += n;
    n *= data[0];
    n = data[14] *= n;
    n += data[15];
    n *= data[16];
    n += data[14];
    n = data[3] *= n;
    n *= data[17];
    n *= data[3];
    n *= data[18];
    n *= data[4];
    n *= data[19];
    n *= data[13];

    return n;
} // Test2

inline void TestEvaluate1(const TestData& testData, float& result)
{
    result = Test1(testData, 0.0f);
} // TestEvaluate1

inline void TestEvaluate2(const TestData& testData, float& result)
{
    result = Test2(testData, 0.0f);
} // TestEvaluate2

GPU_GLOBAL void BugTest(const TestData *data, float* result1, float* result2)
{
    if (!threadIdx.x) {
#if 1
        TestData testData;
        testData.Copy(data);
        float test1 = 0;
        float test2 = 0;
        TestEvaluate1(testData, test1);
        TestEvaluate2(testData, test2);
        *result1 = test1;
        *result2 = test2;
#else
        *result1 = 1;
        *result2 = 2;
#endif
    }
} // BugTest
#endif