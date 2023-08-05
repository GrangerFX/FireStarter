// Run date: 08/05/23 13:38:27 Pacific Daylight Time
// Run duration = 505.034220 seconds
// Run generation = 36
// Run evolution = 0
// Run result = 0.00000036
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
// Run tests = 0
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

// Solution0 result = 0.00000018
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n += -3.14159274f;
    r1 = n *= 0.71481234f;
    r2 = n *= 0.09566400f;
    n *= r2;
    r2 = n *= 2.62716317f;
    n *= -13.51368809f;
    r3 = n += 0.79558975f;
    r4 = n *= 0.01288005f;
    r5 = n *= 3.13104153f;
    r6 = n += 0.24164948f;
    r7 = n *= -1.54450464f;
    n = r4 += n;
    r8 = n *= -6.61635876f;
    n *= -0.50342429f;
    n += 1.66690218f;
    n += r6;
    n *= r2;
    n *= 0.09809598f;
    r2 = n += 0.82399738f;
    n *= -2.52876472f;
    n *= r1;
    n *= r4;
    n *= r7;
    n = r2 *= n;
    n *= r0;
    n += r8;
    n += r3;
    n += r5;
    n *= r2;
    n *= 1.31330180f;
    n += 0.20738439f;
    n += -0.20738439f;
    return n;
} // Solution0

// Solution1 result = 0.00000036
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n += -3.09065866f;
    r1 = n *= -0.13777253f;
    r2 = n *= 0.11491294f;
    n *= r2;
    r2 = n *= -1.47484195f;
    n *= 61.19260025f;
    r3 = n += 0.44440499f;
    r4 = n *= 2.42149663f;
    r5 = n *= -0.32370746f;
    r6 = n += -0.37172565f;
    r7 = n *= -1.33009768f;
    n = r4 += n;
    r8 = n *= 6.18105650f;
    n *= 1.98341680f;
    n += -0.20733422f;
    n += r6;
    n *= r2;
    n *= 0.03165511f;
    r2 = n += -1.74667394f;
    n *= 0.13930406f;
    n *= r1;
    n *= r4;
    n *= r7;
    n = r2 *= n;
    n *= r0;
    n += r8;
    n += r3;
    n += r5;
    n *= r2;
    n *= 0.76129943f;
    n += 0.07924634f;
    n += -0.19737808f;
    return n;
} // Solution1

// Solution2 result = 0.00000029
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n += -2.61799383f;
    r1 = n *= -0.42353821f;
    r2 = n *= -0.31309828f;
    n *= r2;
    r2 = n *= 3.23089027f;
    n *= -1.17719126f;
    r3 = n += 0.39579043f;
    r4 = n *= -0.15042144f;
    r5 = n *= -3.34586239f;
    r6 = n += 1.55528939f;
    r7 = n *= -0.79745221f;
    n = r4 += n;
    r8 = n *= -1.13321209f;
    n *= 3.65307260f;
    n += 1.92459011f;
    n += r6;
    n *= r2;
    n *= 0.00640154f;
    r2 = n += -1.97508144f;
    n *= 0.11773963f;
    n *= r1;
    n *= r4;
    n *= r7;
    n = r2 *= n;
    n *= r0;
    n += r8;
    n += r3;
    n += r5;
    n *= r2;
    n *= 1.12052250f;
    n += 1.14744389f;
    n += -0.62384504f;
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
