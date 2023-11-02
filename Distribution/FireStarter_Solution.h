// Run date: 11/01/23 15:03:23 Pacific Daylight Time
// Run duration = 44325.689807 seconds
// Run generation = 39
// Run evolution = 7
// Run result = 0.00000048
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 16
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 64

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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.35714734f;
    r0 = n += 1.12201142f;
    r1 = n *= -0.18080595f;
    r2 = n *= 1.26076055f;
    r3 = n *= -1.53587306f;
    r4 = n *= 1.53035808f;
    n *= 1.05311680f;
    n *= r0;
    r0 = n += -1.50350964f;
    n = r2 *= n;
    n += r1;
    r1 = n *= -0.10158066f;
    r5 = n *= 0.40854785f;
    n += r3;
    n = r5 *= n;
    r3 = n += -0.95175958f;
    n += 0.61467022f;
    n *= r5;
    n *= 11.40163326f;
    n += -2.36036325f;
    n *= -0.19791181f;
    n *= r4;
    n *= r2;
    n += r0;
    n = r3 += n;
    r0 = n += -2.75793862f;
    n *= r3;
    n *= r1;
    n = r0 *= n;
    n *= 1.55106950f;
    n += 0.00000001f;
    n += r0;
    return n;
} // Solution0

// Solution1 result = 0.00000048
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.26868543f;
    r0 = n += -0.83041501f;
    r1 = n *= 0.33495358f;
    r2 = n *= -0.36712202f;
    r3 = n *= -1.93259346f;
    r4 = n *= 1.72836316f;
    n *= 1.69223034f;
    n *= r0;
    r0 = n += -1.47966647f;
    n = r2 *= n;
    n += r1;
    r1 = n *= 0.71300524f;
    r5 = n *= -0.93781883f;
    n += r3;
    n = r5 *= n;
    r3 = n += -1.76656449f;
    n += -4.30829525f;
    n *= r5;
    n *= 4.37535286f;
    n += 0.56253976f;
    n *= 0.02028763f;
    n *= r4;
    n *= r2;
    n += r0;
    n = r3 += n;
    r0 = n += 1.95852530f;
    n *= r3;
    n *= r1;
    n = r0 *= n;
    n *= 1.06363189f;
    n += -0.11813215f;
    n += r0;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.76682675f;
    r0 = n += 2.00754762f;
    r1 = n *= 0.24879707f;
    r2 = n *= -1.87373328f;
    r3 = n *= -0.01791264f;
    r4 = n *= 0.53555584f;
    n *= 2.14308500f;
    n *= r0;
    r0 = n += -0.51432681f;
    n = r2 *= n;
    n += r1;
    r1 = n *= 1.39150655f;
    r5 = n *= -0.48602095f;
    n += r3;
    n = r5 *= n;
    r3 = n += 0.19115317f;
    n += 0.00995496f;
    n *= r5;
    n *= 5.62197876f;
    n += -1.06646550f;
    n *= 0.05578240f;
    n *= r4;
    n *= r2;
    n += r0;
    n = r3 += n;
    r0 = n += -1.57914734f;
    n *= r3;
    n *= r1;
    n = r0 *= n;
    n *= -2.64017987f;
    n += 0.52359879f;
    n += r0;
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
