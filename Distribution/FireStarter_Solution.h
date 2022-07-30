// Run date: 07/30/22 11:51:19 Pacific Daylight Time
// Run duration = 1.309517 seconds
// Run count = 9
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

// Run mode = FIRESTARTER_CODE;
// Run states = 1;
// Run units = 1;
// Run process = 0;
// Run population = 4352;
// Run iterations = 256;
// Run generations = 5;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Solution Generation = 40

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

// Precision = 0.01874733

// Solution0 precision = 0.01823890
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += 0.28637901f;
    r1 = n += 0.15523641f;
    n *= -0.53230524f;
    r2 = n *= -0.56506598f;
    n *= 0.61253178f;
    n *= 0.25533071f;
    n += r2;
    r2 = n *= -0.95716482f;
    r3 = n *= -0.35863811f;
    r4 = n += -0.89358681f;
    n = r1 *= n;
    n += -0.28215423f;
    n *= r1;
    r1 = n += -0.40800026f;
    n = r4 += n;
    n = r2 *= n;
    n = r1 += n;
    n += r4;
    r4 = n += -0.31632891f;
    n += 0.05914497f;
    r5 = n += -1.01694095f;
    n *= 0.63022673f;
    n += -0.58320779f;
    n *= r0;
    n += r2;
    n = r3 *= n;
    n *= r4;
    n *= 0.78058147f;
    n *= r5;
    n += r3;
    n *= 0.00193889f;
    n += r1;
    return n;
} // Solution0

// Solution1 precision = 0.01815724
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -1.06048334f;
    r1 = n += 1.55023062f;
    n *= -0.96101695f;
    r2 = n *= 0.52787691f;
    n *= -0.19384322f;
    n *= -0.13591915f;
    n += r2;
    r2 = n *= 0.64290899f;
    r3 = n *= -0.29956287f;
    r4 = n += -0.75039405f;
    n = r1 *= n;
    n += -0.51936728f;
    n *= r1;
    r1 = n += 0.61278045f;
    n = r4 += n;
    n = r2 *= n;
    n = r1 += n;
    n += r4;
    r4 = n += 0.23594940f;
    n += -0.82364213f;
    r5 = n += 1.10073495f;
    n *= 0.73043573f;
    n += 3.88928390f;
    n *= r0;
    n += r2;
    n = r3 *= n;
    n *= r4;
    n *= 0.06298837f;
    n *= r5;
    n += r3;
    n *= 0.01543207f;
    n += r1;
    return n;
} // Solution1

// Solution2 precision = 0.01874733
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += 0.52445692f;
    r1 = n += 0.07523708f;
    n *= 0.95215261f;
    r2 = n *= -0.35910988f;
    n *= 0.44454131f;
    n *= 0.21242957f;
    n += r2;
    r2 = n *= 0.57246441f;
    r3 = n *= 0.77765912f;
    r4 = n += 1.09888172f;
    n = r1 *= n;
    n += 1.02297926f;
    n *= r1;
    r1 = n += -0.85584342f;
    n = r4 += n;
    n = r2 *= n;
    n = r1 += n;
    n += r4;
    r4 = n += -1.21758187f;
    n += -1.03270447f;
    r5 = n += 0.54908019f;
    n *= 0.38275880f;
    n += 0.15952411f;
    n *= r0;
    n += r2;
    n = r3 *= n;
    n *= r4;
    n *= -0.01356416f;
    n *= r5;
    n += r3;
    n *= 0.48047519f;
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
