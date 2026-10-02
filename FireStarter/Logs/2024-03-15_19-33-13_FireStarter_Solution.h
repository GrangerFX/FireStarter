// Run date: 03/15/24 19:33:13 Pacific Daylight Time
// Run duration = 6259.585116 seconds
// Run generation = 324
// Run evolution = 10
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

// Solution0 result = 0.00000008
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= 0.23293065f;
    r0 = n += -0.73177320f;
    r1 = n *= -1.45082045f;
    n *= -0.80744177f;
    r2 = n *= 0.67457801f;
    r3 = n *= 1.40523660f;
    n = r2 += n;
    n *= 0.00137632f;
    r4 = n *= 21.97812080f;
    n = r1 *= n;
    r5 = n += 0.31489182f;
    n *= 0.15493844f;
    r6 = n *= 1.41728151f;
    r7 = n += 1.01183093f;
    n *= r7;
    n *= 1.46896183f;
    n += r5;
    n *= r1;
    r1 = n += 1.60964286f;
    n += -0.19737935f;
    n = r0 *= n;
    n *= r2;
    r2 = n += -2.58998919f;
    n *= r6;
    n *= r2;
    n = r0 *= n;
    n *= r1;
    n += r4;
    n += r0;
    n *= -3.05806875f;
    n += r3;
    n += 0.00000001f;
    return n;
} // Solution0

// Solution1 result = 0.00000000
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= 0.21699382f;
    r0 = n += -0.67065382f;
    r1 = n *= 2.38053036f;
    n *= -0.59066254f;
    r2 = n *= 1.01648438f;
    r3 = n *= -0.03472589f;
    n = r2 += n;
    n *= 15.42833710f;
    r4 = n *= -0.00183834f;
    n = r1 *= n;
    r5 = n += -2.16818833f;
    n *= -0.22666891f;
    r6 = n *= 0.72493029f;
    r7 = n += -0.35199106f;
    n *= r7;
    n *= 4.05927277f;
    n += r5;
    n *= r1;
    r1 = n += 0.76632696f;
    n += 0.57831925f;
    n = r0 *= n;
    n *= r2;
    r2 = n += 1.81139410f;
    n *= r6;
    n *= r2;
    n = r0 *= n;
    n *= r1;
    n += r4;
    n += r0;
    n *= -1.81806111f;
    n += r3;
    n += -0.11813179f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= 0.43482557f;
    r0 = n += -1.13837063f;
    r1 = n *= 1.61044347f;
    n *= -1.24718869f;
    r2 = n *= 0.70234662f;
    r3 = n *= -0.78766400f;
    n = r2 += n;
    n *= -0.85037613f;
    r4 = n *= -0.11151730f;
    n = r1 *= n;
    r5 = n += 2.51390791f;
    n *= -0.36872354f;
    r6 = n *= 0.41091383f;
    r7 = n += 0.38105148f;
    n *= r7;
    n *= 7.74231100f;
    n += r5;
    n *= r1;
    r1 = n += 0.81508040f;
    n += 1.00204098f;
    n = r0 *= n;
    n *= r2;
    r2 = n += 1.21228600f;
    n *= r6;
    n *= r2;
    n = r0 *= n;
    n *= r1;
    n += r4;
    n += r0;
    n *= 1.81948733f;
    n += r3;
    n += 0.52359873f;
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
