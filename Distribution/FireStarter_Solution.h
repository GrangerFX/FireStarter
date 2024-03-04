// Run date: 03/03/24 20:41:34 Pacific Standard Time
// Run duration = 3680.266285 seconds
// Run generation = 358
// Run evolution = 21
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
// Run evolveSeed = 2
// Run optimizeSeed = 0
// Run tests = 0
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += 1.51334345f;
    n *= -0.11322029f;
    r0 = n *= -0.93833637f;
    r1 = n *= -1.64249456f;
    n += r1;
    r1 = n += 1.62454021f;
    r2 = n *= 0.13909847f;
    r3 = n *= -2.28721142f;
    r4 = n *= 0.73213869f;
    n *= r1;
    n *= 6.34098673f;
    n += 1.59251583f;
    n *= 0.00057992f;
    n *= 61.40247726f;
    r1 = n += 1.44734406f;
    n = r2 *= n;
    n = r4 *= n;
    n += r1;
    r1 = n += 0.58042014f;
    n *= r4;
    r4 = n *= -1.58304501f;
    n *= r1;
    n += -0.91075909f;
    n = r4 += n;
    n += r4;
    r4 = n *= -1.14981353f;
    n *= 3.80069637f;
    n *= r2;
    n *= r4;
    n += r3;
    n += -0.49453446f;
    n += r0;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.95627034f;
    n *= -1.09071767f;
    r0 = n *= 0.17102520f;
    r1 = n *= 1.82219994f;
    n += r1;
    r1 = n += 1.45101500f;
    r2 = n *= -0.55801082f;
    r3 = n *= 0.48001257f;
    r4 = n *= 1.14121139f;
    n *= r1;
    n *= 28.99838257f;
    n += 9.47362900f;
    n *= -0.00065436f;
    n *= -0.12835191f;
    r1 = n += 0.18925764f;
    n = r2 *= n;
    n = r4 *= n;
    n += r1;
    r1 = n += -3.62378216f;
    n *= r4;
    r4 = n *= -0.72509152f;
    n *= r1;
    n += 1.66434216f;
    n = r4 += n;
    n += r4;
    r4 = n *= -1.10992444f;
    n *= -1.11322975f;
    n *= r2;
    n *= r4;
    n += r3;
    n += 0.28001747f;
    n += r0;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.88823140f;
    n *= 1.36397314f;
    r0 = n *= 0.80040181f;
    r1 = n *= -0.28711236f;
    n += r1;
    r1 = n += 0.45748538f;
    r2 = n *= 0.14756411f;
    r3 = n *= 6.82157183f;
    r4 = n *= -0.35270396f;
    n *= r1;
    n *= 9.13198662f;
    n += 7.74191570f;
    n *= -0.00143541f;
    n *= -3.36347342f;
    r1 = n += 1.64162815f;
    n = r2 *= n;
    n = r4 *= n;
    n += r1;
    r1 = n += 2.48666739f;
    n *= r4;
    r4 = n *= 0.91069919f;
    n *= r1;
    n += 7.00207043f;
    n = r4 += n;
    n += r4;
    r4 = n *= 0.23350978f;
    n *= 0.87943441f;
    n *= r2;
    n *= r4;
    n += r3;
    n += -0.27310231f;
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
