// Run date: 07/30/22 13:50:22 Pacific Daylight Time
// Run duration = 1.909520 seconds
// Run count = 185
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;
// Run variations = 3;
// Run samples = 15;

// Run sampleMin = 0.000000f;
// Run sampleMax = 6.283185f;
// Run evolveFactor = 0.100000f;
// Run evolveStartFactor = 4.000000f;
// Run evolveStartResult = 10.000000f;
// Run evolveCandidates = 16;

// Run mode = FIRESTARTER_OPTIMIZE;
// Run states = 1;
// Run units = 1;
// Run process = 0;
// Run population = 69632;
// Run iterations = 512;
// Run generations = 100;
// Run precision = 256;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Solution Generation = 18400

#ifndef __CUDACC__
#include <cmath>
#endif

#define TARGET_PI 3.14159265f

inline float SolutionTarget(float n, unsigned int variation)
{
    switch (variation) {
    default:
    case 0:
        return sinf(n);
    case 1:
        return sinf((n + 0.4f) * 0.9f) - n * 0.2f + 0.5f;
    case 2:
        return sinf(n * 1.2f) + n * 0.2f;
    case 3:
        return fabsf(fmodf(fabsf(n - TARGET_PI * 0.5f), TARGET_PI * 2.0f) - TARGET_PI) - TARGET_PI * 0.5f;
    }
} // SolutionTarget

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define SOLUTION_VARIATIONS 3

// Precision = 0.00018683

// Solution0 precision = 0.00018197
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -4.14638138f;
    r1 = n += 0.98606938f;
    n *= -0.73025429f;
    r2 = n *= 0.67550373f;
    r3 = n *= -0.00000154f;
    n *= -83.79436493f;
    n += r2;
    r2 = n *= -0.73827857f;
    r4 = n *= 0.02336550f;
    r5 = n += -0.39107636f;
    n = r1 *= n;
    n += 1.13247418f;
    n *= r1;
    r1 = n += -0.22620979f;
    n = r5 += n;
    n = r2 *= n;
    n = r1 += n;
    n += r5;
    n += 0.20130062f;
    n += -1.33922625f;
    n += r3;
    n *= 0.24988568f;
    n += -0.79349041f;
    n *= r0;
    n += r2;
    r2 = n *= -1.41274941f;
    n += -1.41041458f;
    n *= 1.00642538f;
    n *= 0.03582840f;
    n += r4;
    n *= r2;
    n += r1;
    return n;
} // Solution0

// Solution1 precision = 0.00003469
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -0.29040518f;
    r1 = n += -1.72585177f;
    n *= 3.32071257f;
    r2 = n *= -2.63791513f;
    r3 = n *= 0.23568350f;
    n *= 6.38697863f;
    n += r2;
    r2 = n *= 0.00883862f;
    r4 = n *= 0.23288569f;
    r5 = n += -0.23915873f;
    n = r1 *= n;
    n += 1.83595002f;
    n *= r1;
    r1 = n += 0.19787608f;
    n = r5 += n;
    n = r2 *= n;
    n = r1 += n;
    n += r5;
    n += 1.01204431f;
    n += 1.39907551f;
    n += r3;
    n *= 0.84787691f;
    n += 0.50103295f;
    n *= r0;
    n += r2;
    r2 = n *= -0.04004923f;
    n += -1.62696099f;
    n *= -1.88338447f;
    n *= -1.14287472f;
    n += r4;
    n *= r2;
    n += r1;
    return n;
} // Solution1

// Solution2 precision = 0.00018683
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += 0.25741133f;
    r1 = n += -0.57219321f;
    n *= 3.10300708f;
    r2 = n *= -0.36976960f;
    r3 = n *= 1.82753801f;
    n *= 0.29163662f;
    n += r2;
    r2 = n *= 0.12391868f;
    r4 = n *= 0.49560806f;
    r5 = n += 0.73902738f;
    n = r1 *= n;
    n += 2.21124792f;
    n *= r1;
    r1 = n += 0.40067971f;
    n = r5 += n;
    n = r2 *= n;
    n = r1 += n;
    n += r5;
    n += 0.60676408f;
    n += 1.35922861f;
    n += r3;
    n *= 9.94744301f;
    n += 19.85301018f;
    n *= r0;
    n += r2;
    r2 = n *= 0.02683233f;
    n += -2.15987420f;
    n *= 0.23887399f;
    n *= -0.11696225f;
    n += r4;
    n *= r2;
    n += r1;
    return n;
} // Solution2

inline float Solution(float n, unsigned int variation)
{
    switch (variation) {
    case 0:
        return Solution0(n);
    case 1:
        return Solution1(n);
    case 2:
        return Solution2(n);
    }
    return 0.0f;
} // Solution
