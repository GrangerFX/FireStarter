// Run date: 11/10/23 19:42:22 Pacific Standard Time
// Run duration = 36202.737585 seconds
// Run generation = 115
// Run evolution = 11
// Run result = 0.00000626
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
// Run tests = 16
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run optimizations = 500
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

// Solution0 result = 0.00000367
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.14147615f;
    r1 = n += -1.26331902f;
    n += 0.97866279f;
    r2 = n *= 0.12858452f;
    r3 = n += 0.03654391f;
    n += 0.16283976f;
    r4 = n *= -0.02493537f;
    n = r1 *= n;
    r5 = n += 1.19041085f;
    n *= -1.34537911f;
    r6 = n += 0.40034544f;
    n = r5 *= n;
    n = r0 *= n;
    n *= r4;
    n *= r2;
    r2 = n *= -0.54959255f;
    n += r0;
    n *= r6;
    n = r2 += n;
    n *= 1.30428505f;
    n = r3 *= n;
    r6 = n += -5.20932436f;
    n += r3;
    n += r1;
    r1 = n *= 0.00999713f;
    n *= 0.55052143f;
    n += r6;
    n += -2.38872552f;
    n *= r2;
    n *= r1;
    n *= r5;
    n += 0.00011955f;
    return n;
} // Solution0

// Solution1 result = 0.00000626
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.09114456f;
    r1 = n += 1.82507908f;
    n += -0.06963616f;
    r2 = n *= 0.34592867f;
    r3 = n += -0.60661054f;
    n += -0.63363856f;
    r4 = n *= 0.00568078f;
    n = r1 *= n;
    r5 = n += -0.98659658f;
    n *= 1.95245206f;
    r6 = n += 0.74611884f;
    n = r5 *= n;
    n = r0 *= n;
    n *= r4;
    n *= r2;
    r2 = n *= 5.01397991f;
    n += r0;
    n *= r6;
    n = r2 += n;
    n *= 0.21012503f;
    n = r3 *= n;
    r6 = n += 4.11986494f;
    n += r3;
    n += r1;
    r1 = n *= 0.07035896f;
    n *= 0.46234521f;
    n += r6;
    n += -1.98008966f;
    n *= r2;
    n *= r1;
    n *= r5;
    n += -0.11866681f;
    return n;
} // Solution1

// Solution2 result = 0.00000465
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.61938620f;
    r1 = n += -0.36500579f;
    n += -0.26742801f;
    r2 = n *= -0.16952188f;
    r3 = n += -0.10805036f;
    n += -0.06034763f;
    r4 = n *= 0.02558852f;
    n = r1 *= n;
    r5 = n += 1.07713461f;
    n *= -1.36110377f;
    r6 = n += 0.36519685f;
    n = r5 *= n;
    n = r0 *= n;
    n *= r4;
    n *= r2;
    r2 = n *= 3.80266118f;
    n += r0;
    n *= r6;
    n = r2 += n;
    n *= 0.23714776f;
    n = r3 *= n;
    r6 = n += 0.50797689f;
    n += r3;
    n += r1;
    r1 = n *= 1.18919623f;
    n *= -0.00471514f;
    n += r6;
    n += 0.55970120f;
    n *= r2;
    n *= r1;
    n *= r5;
    n += 0.52220857f;
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
