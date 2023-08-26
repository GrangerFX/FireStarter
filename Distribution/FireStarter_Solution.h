// Run date: 08/26/23 09:51:23 Pacific Daylight Time
// Run duration = 109.792885 seconds
// Run generation = 104
// Run evolution = 31
// Run result = 0.00001943
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_TEST
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 0
// Run units = 1
// Run processes = 0
// Run population = 278528
// Run iterations = 64
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

#define SOLUTION_VARIATIONS 3

#ifndef __CUDACC__
#include <cmath>
#endif

#define SOLUTION_PI 3.14159265f
#define SOLUTION_MIN 0.0f
#define SOLUTION_MAX (2.0f * 3.14159265f)

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
        return fabsf(fmodf(fabsf(n - SOLUTION_PI * 0.5f), SOLUTION_PI * 2.0f) - SOLUTION_PI) - SOLUTION_PI * 0.5f;
    }
} // SolutionTarget

// Solution0 result = 0.00000334
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.42228475f;
    r1 = n *= 0.61032915f;
    n *= 1.03531814f;
    r2 = n *= -0.28441277f;
    n *= 0.91164494f;
    n *= 2.95677161f;
    r3 = n += -1.07196832f;
    n = r2 *= n;
    r4 = n *= -0.99989903f;
    n = r2 += n;
    n += -0.38638911f;
    r5 = n *= -23.07925987f;
    n *= r2;
    n *= r1;
    n = r5 *= n;
    r1 = n += 1.59142292f;
    n += r0;
    n = r5 *= n;
    n += r1;
    n = r4 += n;
    n *= r3;
    n += 0.72748321f;
    n = r4 *= n;
    r3 = n *= 0.56323332f;
    r1 = n *= -9.59300995f;
    n *= r3;
    n += r5;
    n *= r4;
    n *= -0.73221266f;
    n += r1;
    n *= 0.30879313f;
    n += -0.00004289f;
    return n;
} // Solution0

// Solution1 result = 0.00000292
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.38676929f;
    r1 = n *= 0.36924049f;
    n *= 0.23417424f;
    r2 = n *= 2.47425008f;
    n *= -1.40487707f;
    n *= -1.18657482f;
    r3 = n += 0.71137369f;
    n = r2 *= n;
    r4 = n *= -1.06207049f;
    n = r2 += n;
    n += -0.02301029f;
    r5 = n *= 11.63704300f;
    n *= r2;
    n *= r1;
    n = r5 *= n;
    r1 = n += 1.48057270f;
    n += r0;
    n = r5 *= n;
    n += r1;
    n = r4 += n;
    n *= r3;
    n += -0.44409129f;
    n = r4 *= n;
    r3 = n *= 1.36360729f;
    r1 = n *= -3.14722800f;
    n *= r3;
    n += r5;
    n *= r4;
    n *= -0.60149336f;
    n += r1;
    n *= -0.75324816f;
    n += -0.11812847f;
    return n;
} // Solution1

// Solution2 result = 0.00001943
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.46883887f;
    r1 = n *= -0.59175992f;
    n *= 0.46987638f;
    r2 = n *= 0.50484639f;
    n *= 2.51256275f;
    n *= -1.69456804f;
    r3 = n += 1.22623527f;
    n = r2 *= n;
    r4 = n *= 0.90591097f;
    n = r2 += n;
    n += -4.21076059f;
    r5 = n *= -0.02337302f;
    n *= r2;
    n *= r1;
    n = r5 *= n;
    r1 = n += 1.23637521f;
    n += r0;
    n = r5 *= n;
    n += r1;
    n = r4 += n;
    n *= r3;
    n += -0.64717555f;
    n = r4 *= n;
    r3 = n *= -0.98680449f;
    r1 = n *= -0.53422654f;
    n *= r3;
    n += r5;
    n *= r4;
    n *= 1.08893824f;
    n += r1;
    n *= 3.84311604f;
    n += 0.52276081f;
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
