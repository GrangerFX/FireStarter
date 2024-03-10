// Run date: 03/10/24 11:03:18 Pacific Daylight Time
// Run duration = 3010.584787 seconds
// Run generation = 262
// Run evolution = 11
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
// Run optimizeSeed = 2
// Run tests = 1
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.14159298f;
    r1 = n *= -0.57889730f;
    n *= r1;
    n += -2.93495321f;
    r1 = n *= 0.01567805f;
    r2 = n += -1.70379388f;
    r3 = n += -0.42257354f;
    r4 = n *= 0.10153581f;
    n += 0.21775150f;
    n = r3 *= n;
    n *= 5.01638746f;
    n *= r3;
    n *= r1;
    r1 = n += 1.05299652f;
    n = r2 += n;
    r3 = n *= 0.97588253f;
    n *= r2;
    n = r0 *= n;
    r2 = n += 0.00000023f;
    n += r0;
    n *= -0.94545656f;
    n = r1 *= n;
    n *= 2.89148641f;
    n = r4 *= n;
    n *= r2;
    n *= -0.49063703f;
    n *= r1;
    n *= r3;
    n += 0.21880426f;
    n += r4;
    n += -0.21880421f;
    n *= -1.66184056f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.09065747f;
    r1 = n *= 0.43218547f;
    n *= r1;
    n += -1.58728933f;
    r1 = n *= -0.01340738f;
    r2 = n += -1.57120717f;
    r3 = n += -0.17578110f;
    r4 = n *= 0.58444238f;
    n += 1.02423871f;
    n = r3 *= n;
    n *= 1.66630459f;
    n *= r3;
    n *= r1;
    r1 = n += 1.92795300f;
    n = r2 += n;
    r3 = n *= 1.56944239f;
    n *= r2;
    n = r0 *= n;
    r2 = n += -0.00000027f;
    n += r0;
    n *= 0.72378075f;
    n = r1 *= n;
    n *= -4.18658876f;
    n = r4 *= n;
    n *= r2;
    n *= -1.18356919f;
    n *= r1;
    n *= r3;
    n += -0.44870582f;
    n += r4;
    n += 0.73258388f;
    n *= -0.41613418f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -2.61799383f;
    r1 = n *= 0.37966484f;
    n *= r1;
    n += -0.75382167f;
    r1 = n *= -0.14229771f;
    r2 = n += 0.57051831f;
    r3 = n += 0.31197754f;
    r4 = n *= 0.15540488f;
    n += -0.11412202f;
    n = r3 *= n;
    n *= 0.50403535f;
    n *= r3;
    n *= r1;
    r1 = n += 1.70167565f;
    n = r2 += n;
    r3 = n *= 0.18430039f;
    n *= r2;
    n = r0 *= n;
    r2 = n += 0.00000022f;
    n += r0;
    n *= -0.35271397f;
    n = r1 *= n;
    n *= -5.26101780f;
    n = r4 *= n;
    n *= r2;
    n *= 0.43604106f;
    n *= r1;
    n *= r3;
    n += -0.21433285f;
    n += r4;
    n += -0.31646410f;
    n *= -0.98643875f;
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
