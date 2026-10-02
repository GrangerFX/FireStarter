// Run date: 03/14/24 16:39:10 Pacific Daylight Time
// Run duration = 17099.198657 seconds
// Run generation = 795
// Run evolution = 13
// Run max result = 0.00000143
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 1
// Run optimizeSeed = 1
// Run tests = 16
// Run streams = 4
// Run units = 4
// Run states = 16
// Run generations = 200
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -0.61584401f;
    n += 24133.65820312f;
    n *= -0.00000003f;
    r1 = n += -1.30656564f;
    r2 = n *= 0.64298970f;
    r3 = n += 0.24848172f;
    n += 0.71006358f;
    n += -0.95865738f;
    n += -1.68507004f;
    n = r0 += n;
    n *= 0.08612055f;
    n = r3 *= n;
    n *= 1.17282510f;
    n *= r1;
    n = r0 *= n;
    r1 = n *= 0.14437859f;
    n += -2.42456770f;
    n = r1 += n;
    n *= -1.30233312f;
    r4 = n += 2.24304795f;
    n *= r0;
    n += -2.29112911f;
    n += -1.65210950f;
    r0 = n *= -0.05454303f;
    n = r4 += n;
    n *= r0;
    n = r2 *= n;
    n += r1;
    n *= r4;
    n *= r3;
    n *= r2;
    n += -0.00000009f;
    return n;
} // Solution0

// Solution1 result = 0.00000036
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -1.06367290f;
    n += 731.44500732f;
    n *= 0.00000001f;
    r1 = n += 0.26519084f;
    r2 = n *= -1.62792182f;
    r3 = n += -2.34341383f;
    n += -0.59862429f;
    n += -1.13723683f;
    n += 2.48401666f;
    n = r0 += n;
    n *= -0.40966398f;
    n = r3 *= n;
    n *= 1.09353781f;
    n *= r1;
    n = r0 *= n;
    r1 = n *= -0.00970272f;
    n += -2.13493228f;
    n = r1 += n;
    n *= 0.04748498f;
    r4 = n += 0.67080075f;
    n *= r0;
    n += -1.31596291f;
    n += -6.80717564f;
    r0 = n *= 0.16791053f;
    n = r4 += n;
    n *= r0;
    n = r2 *= n;
    n += r1;
    n *= r4;
    n *= r3;
    n *= r2;
    n += -0.11813162f;
    return n;
} // Solution1

// Solution2 result = 0.00000143
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += 2.21992087f;
    n += -7.08384418f;
    n *= -0.00000165f;
    r1 = n += 0.66892678f;
    r2 = n *= 3.87907553f;
    r3 = n += -5.05506372f;
    n += -0.78059196f;
    n += -0.93361855f;
    n += -0.66347384f;
    n = r0 += n;
    n *= -0.32735232f;
    n = r3 *= n;
    n *= 0.11462703f;
    n *= r1;
    n = r0 *= n;
    r1 = n *= -1.65011239f;
    n += 0.43985766f;
    n = r1 += n;
    n *= -0.05645777f;
    r4 = n += -0.96338093f;
    n *= r0;
    n += 1.87374616f;
    n += -0.53842896f;
    r0 = n *= -0.18759000f;
    n = r4 += n;
    n *= r0;
    n = r2 *= n;
    n += r1;
    n *= r4;
    n *= r3;
    n *= r2;
    n += 0.52359694f;
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
