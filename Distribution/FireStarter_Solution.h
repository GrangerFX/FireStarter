// Run date: 11/07/23 02:55:14 Pacific Standard Time
// Run duration = 39730.718131 seconds
// Run generation = 10
// Run evolution = 7
// Run result = 0.00000024
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.24248993f;
    r0 = n += -1.89910281f;
    r1 = n *= 0.24964185f;
    r2 = n *= -3.77806306f;
    r3 = n *= -1.03531110f;
    n += r3;
    r3 = n *= -0.18833953f;
    r4 = n *= -0.80202466f;
    n += r3;
    n *= r4;
    r4 = n += 2.54609203f;
    n *= 0.65631479f;
    n *= r1;
    r1 = n *= 2.68923903f;
    n *= r2;
    r2 = n += 1.95102060f;
    r3 = n += 0.25055954f;
    n *= 0.06457552f;
    r5 = n += 0.54774922f;
    n += r2;
    n *= -0.00207413f;
    n += -1.35207582f;
    n *= r1;
    n = r0 += n;
    r1 = n *= 0.02200893f;
    n = r3 *= n;
    n += r0;
    n *= r4;
    n *= r5;
    n += -0.00000002f;
    n += r3;
    n += r1;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.90978009f;
    r0 = n += -2.18087840f;
    r1 = n *= 0.55391502f;
    r2 = n *= -2.29107547f;
    r3 = n *= -0.02901087f;
    n += r3;
    r3 = n *= 3.52991676f;
    r4 = n *= 0.10274132f;
    n += r3;
    n *= r4;
    r4 = n += -1.45008075f;
    n *= -0.13838059f;
    n *= r1;
    r1 = n *= 2.04382205f;
    n *= r2;
    r2 = n += 0.13931137f;
    r3 = n += 1.03452110f;
    n *= 0.00584549f;
    r5 = n += 0.93091083f;
    n += r2;
    n *= 0.36138314f;
    n += 0.18010646f;
    n *= r1;
    n = r0 += n;
    r1 = n *= 0.66797864f;
    n = r3 *= n;
    n += r0;
    n *= r4;
    n *= r5;
    n += -0.11813163f;
    n += r3;
    n += r1;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.09163195f;
    r0 = n += -2.52636170f;
    r1 = n *= -0.44200587f;
    r2 = n *= -0.57161200f;
    r3 = n *= 0.70301646f;
    n += r3;
    r3 = n *= -0.71891248f;
    r4 = n *= -0.50490767f;
    n += r3;
    n *= r4;
    r4 = n += 0.65871555f;
    n *= 3.23579240f;
    n *= r1;
    r1 = n *= -0.82507348f;
    n *= r2;
    r2 = n += -1.78093910f;
    r3 = n += 4.60328913f;
    n *= -0.05200250f;
    r5 = n += 2.30655479f;
    n += r2;
    n *= 1.09385705f;
    n += -2.77156973f;
    n *= r1;
    n = r0 += n;
    r1 = n *= -0.02821637f;
    n = r3 *= n;
    n += r0;
    n *= r4;
    n *= r5;
    n += 0.52359879f;
    n += r3;
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
