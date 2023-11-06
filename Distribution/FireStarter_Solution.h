// Run date: 11/05/23 19:31:27 Pacific Standard Time
// Run duration = 43321.937490 seconds
// Run generation = 79
// Run evolution = 13
// Run result = 0.00000259
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

// Solution0 result = 0.00000066
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.20673624f;
    n *= -1.94017017f;
    r1 = n += 1.26010334f;
    r2 = n *= 0.27215081f;
    r3 = n *= -1.56650448f;
    r4 = n *= -0.29821008f;
    r5 = n *= -1.68389308f;
    n *= -1.92983091f;
    n *= 0.51868904f;
    n *= r5;
    r5 = n += 0.26532945f;
    n += 0.08045062f;
    r6 = n += 1.27101445f;
    n *= r6;
    n = r1 *= n;
    n *= 1.39604831f;
    n += -0.43357295f;
    n += -0.21590517f;
    n += r0;
    n *= r5;
    n = r4 += n;
    r5 = n *= 2.31678128f;
    r0 = n *= -0.44321457f;
    n += r0;
    n *= 0.21364759f;
    n += r3;
    n *= r1;
    n *= r4;
    n += 1.72377694f;
    n += r5;
    n += r2;
    n += -1.72377765f;
    return n;
} // Solution0

// Solution1 result = 0.00000083
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 1.22603929f;
    n *= 0.42170957f;
    r1 = n += -1.59797192f;
    r2 = n *= -0.39125896f;
    r3 = n *= 0.72223055f;
    r4 = n *= 0.80532992f;
    r5 = n *= 1.12897682f;
    n *= 0.92478162f;
    n *= 0.41839948f;
    n *= r5;
    r5 = n += -0.28116852f;
    n += 1.08451927f;
    r6 = n += -1.83678961f;
    n *= r6;
    n = r1 *= n;
    n *= 1.82420981f;
    n += -2.03689790f;
    n += -1.75236523f;
    n += r0;
    n *= r5;
    n = r4 += n;
    r5 = n *= 1.20399177f;
    r0 = n *= -0.21001181f;
    n += r0;
    n *= -0.24787796f;
    n += r3;
    n *= r1;
    n *= r4;
    n += 0.67214495f;
    n += r5;
    n += r2;
    n += -0.79027569f;
    return n;
} // Solution1

// Solution2 result = 0.00000259
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.35947058f;
    n *= -2.01248813f;
    r1 = n += 1.89387596f;
    r2 = n *= -0.14207925f;
    r3 = n *= 1.40175724f;
    r4 = n *= -2.70321679f;
    r5 = n *= -1.18344700f;
    n *= 0.12425020f;
    n *= 0.83230340f;
    n *= r5;
    r5 = n += -0.17504172f;
    n += 0.09859143f;
    r6 = n += -1.67046678f;
    n *= r6;
    n = r1 *= n;
    n *= -0.46345875f;
    n += -3.32644057f;
    n += 2.38475299f;
    n += r0;
    n *= r5;
    n = r4 += n;
    r5 = n *= 1.74631178f;
    r0 = n *= 0.01762955f;
    n += r0;
    n *= -0.48381346f;
    n += r3;
    n *= r1;
    n *= r4;
    n += -1.19886696f;
    n += r5;
    n += r2;
    n += 1.72235632f;
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
