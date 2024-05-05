// Run date: 05/04/24 17:22:01 Pacific Daylight Time
// Run duration = 220.761552 seconds
// Run generation = 34
// Run evolution = 2
// Run max result = 0.00118578
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 0
// Run optimize = 8

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

// Solution0 result = 0.00108710
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.85762173f;
    r0 = n *= -0.16397184f;
    n += 1.30207467f;
    n += -0.29755527f;
    n *= -1.60872757f;
    r1 = n += 1.61708498f;
    n *= -0.38041261f;
    n += -0.47663215f;
    r2 = n *= 1.93326497f;
    r3 = n *= 2.11453104f;
    r4 = n *= 1.37058890f;
    n *= 0.09077939f;
    n += 0.20830549f;
    n *= -0.85903102f;
    n = r3 *= n;
    n += -0.65610558f;
    n = r3 += n;
    r5 = n *= -0.31385008f;
    n += r3;
    r3 = n += 1.26104116f;
    n = r5 += n;
    n = r4 *= n;
    n *= 1.21454322f;
    n += r5;
    n += r4;
    n = r3 *= n;
    n *= 0.75664598f;
    n *= r3;
    n += r2;
    n += 0.22741018f;
    n *= r0;
    n += r1;
    return n;
} // Solution0

// Solution1 result = 0.00058097
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 2.47817349f;
    r0 = n *= 0.16103914f;
    n += -0.21545921f;
    n += 0.72485250f;
    n *= -0.78423208f;
    r1 = n += 1.25117576f;
    n *= -2.27192664f;
    n += 0.12342270f;
    r2 = n *= 0.05574277f;
    r3 = n *= -1.87723136f;
    r4 = n *= 3.33300710f;
    n *= -0.39441085f;
    n += -0.10673968f;
    n *= 0.63953614f;
    n = r3 *= n;
    n += 1.60407925f;
    n = r3 += n;
    r5 = n *= 0.25685096f;
    n += r3;
    r3 = n += -1.07699299f;
    n = r5 += n;
    n = r4 *= n;
    n *= 0.99713165f;
    n += r5;
    n += r4;
    n = r3 *= n;
    n *= 0.57198447f;
    n *= r3;
    n += r2;
    n += -0.52258927f;
    n *= r0;
    n += r1;
    return n;
} // Solution1

// Solution2 result = 0.00118578
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.50147825f;
    r0 = n *= -1.07463455f;
    n += -3.38124323f;
    n += -1.32094383f;
    n *= 0.13071229f;
    r1 = n += 0.61581939f;
    n *= -1.96210957f;
    n += -0.66678631f;
    r2 = n *= -0.70429200f;
    r3 = n *= -2.79034185f;
    r4 = n *= -1.79462945f;
    n *= -0.57570481f;
    n += 1.27400136f;
    n *= 0.29735729f;
    n = r3 *= n;
    n += -1.94121706f;
    n = r3 += n;
    r5 = n *= -0.74677432f;
    n += r3;
    r3 = n += 0.04311991f;
    n = r5 += n;
    n = r4 *= n;
    n *= -3.16177821f;
    n += r5;
    n += r4;
    n = r3 *= n;
    n *= -1.03542674f;
    n *= r3;
    n += r2;
    n += -0.11749207f;
    n *= r0;
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
