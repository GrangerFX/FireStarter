// Run date: 07/08/23 15:03:20 Pacific Daylight Time
// Run duration = 568.905731 seconds
// Run generation = 62
// Run evolution = 0
// Run result = 0.00000155
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 1
// Run optimizeSeed = 1
// Run seeds = 1
// Run tests = 64
// Run units = 8
// Run processes = 8
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

// Solution0 result = 0.00000057
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.16051266f;
    r0 = n += 0.50426537f;
    r1 = n *= -0.77999532f;
    n = r1 += n;
    n = r1 *= n;
    r2 = n *= 1.24886906f;
    n *= -1.32223856f;
    n += -1.28075373f;
    r3 = n += 2.30260777f;
    n += -0.88767719f;
    r4 = n *= 0.06284235f;
    n += -0.51018131f;
    n += r2;
    n *= r1;
    n *= -0.00082545f;
    n += -0.89486194f;
    r1 = n *= -1.19088960f;
    n = r4 += n;
    n *= r1;
    n = r4 *= n;
    n = r3 *= n;
    n *= 0.28941873f;
    n += 0.64467227f;
    n *= r4;
    n *= r3;
    n *= r0;
    n += -0.79490221f;
    r0 = n += -1.24464393f;
    n += 2.71438837f;
    n = r0 += n;
    n += r0;
    n += 2.72940779f;
    return n;
} // Solution0

// Solution1 result = 0.00000155
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.66329622f;
    r0 = n += -2.05002284f;
    r1 = n *= 0.15510893f;
    n = r1 += n;
    n = r1 *= n;
    r2 = n *= -0.63446617f;
    n *= 1.11941338f;
    n += 2.14375949f;
    r3 = n += -0.45564517f;
    n += -1.55465996f;
    r4 = n *= -0.89389437f;
    n += 0.52652216f;
    n += r2;
    n *= r1;
    n *= -1.42914474f;
    n += 0.63221711f;
    r1 = n *= 1.14648926f;
    n = r4 += n;
    n *= r1;
    n = r4 *= n;
    n = r3 *= n;
    n *= -0.71166331f;
    n += -3.15758038f;
    n *= r4;
    n *= r3;
    n *= r0;
    n += -2.02473378f;
    r0 = n += 1.85621345f;
    n += 0.66014159f;
    n = r0 += n;
    n += r0;
    n += -0.76433426f;
    return n;
} // Solution1

// Solution2 result = 0.00000083
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.25290716f;
    r0 = n += -0.66210932f;
    r1 = n *= -1.51797342f;
    n = r1 += n;
    n = r1 *= n;
    r2 = n *= 0.22136922f;
    n *= 3.27888584f;
    n += -1.81340444f;
    r3 = n += -0.31898445f;
    n += 0.19285156f;
    r4 = n *= -0.04287263f;
    n += -1.23659480f;
    n += r2;
    n *= r1;
    n *= 0.00119846f;
    n += 1.19449806f;
    r1 = n *= 0.65884751f;
    n = r4 += n;
    n *= r1;
    n = r4 *= n;
    n = r3 *= n;
    n *= 0.00354241f;
    n += 1.31008136f;
    n *= r4;
    n *= r3;
    n *= r0;
    n += 0.65704548f;
    r0 = n += -1.47619367f;
    n += 0.85518026f;
    n = r0 += n;
    n += r0;
    n += 2.08983111f;
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
