// Run date: 03/24/24 16:30:11 Pacific Daylight Time
// Run duration = 1555.319967 seconds
// Run generation = 750
// Run evolution = 13
// Run max result = 0.00000012
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

// Solution0 result = 0.00000010
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.14159274f;
    r1 = n *= -1.82097793f;
    n = r0 += n;
    n *= -1.61712337f;
    n = r0 += n;
    n = r0 *= n;
    n += -0.47081068f;
    n *= -0.00607499f;
    r2 = n += 0.07105525f;
    n *= -2.48079944f;
    n *= 0.03589652f;
    n = r2 *= n;
    r3 = n += -0.01671944f;
    n += -5.29775238f;
    n = r3 *= n;
    n += -2.62389803f;
    n = r0 += n;
    n *= 0.07952711f;
    r4 = n += -2.67191553f;
    n += -2.52707767f;
    n = r4 *= n;
    n = r3 *= n;
    n *= r3;
    n += 1.74592996f;
    n *= r2;
    n *= r1;
    n = r0 *= n;
    n *= r4;
    n += r0;
    n += 0.00233353f;
    n += -0.00233353f;
    n *= 7.17752504f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.09065866f;
    r1 = n *= 1.09018505f;
    n = r0 += n;
    n *= -1.39963722f;
    n = r0 += n;
    n = r0 *= n;
    n += -3.40603423f;
    n *= -0.09065817f;
    r2 = n += 1.32568252f;
    n *= -0.05621339f;
    n *= -0.14027695f;
    n = r2 *= n;
    r3 = n += -0.01934792f;
    n += -2.67262340f;
    n = r3 *= n;
    n += -29.84181976f;
    n = r0 += n;
    n *= -0.01740598f;
    r4 = n += 0.34116364f;
    n += -1.10707951f;
    n = r4 *= n;
    n = r3 *= n;
    n *= r3;
    n += 2.14371705f;
    n *= r2;
    n *= r1;
    n = r0 *= n;
    n *= r4;
    n += r0;
    n += 0.35461682f;
    n += -0.47895268f;
    n *= 0.95010340f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -2.61799383f;
    r1 = n *= -0.73141545f;
    n = r0 += n;
    n *= 0.34989101f;
    n = r0 += n;
    n = r0 *= n;
    n += -0.34273964f;
    n *= 0.27645811f;
    r2 = n += -1.88806820f;
    n *= -1.29326880f;
    n *= 0.02912121f;
    n = r2 *= n;
    r3 = n += -0.43034646f;
    n += 0.09371819f;
    n = r3 *= n;
    n += -0.90862906f;
    n = r0 += n;
    n *= -0.02526351f;
    r4 = n += -2.48160648f;
    n += 0.76898497f;
    n = r4 *= n;
    n = r3 *= n;
    n *= r3;
    n += -0.48568437f;
    n *= r2;
    n *= r1;
    n = r0 *= n;
    n *= r4;
    n += r0;
    n += 0.15912898f;
    n += 0.00525371f;
    n *= 3.18524241f;
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
