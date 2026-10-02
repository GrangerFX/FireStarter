// Run date: 03/16/24 09:51:49 Pacific Daylight Time
// Run duration = 22057.376114 seconds
// Run generation = 671
// Run evolution = 18
// Run max result = 0.00000083
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14159226f;
    n += -1.50784194f;
    r1 = n *= 0.25878888f;
    n += r1;
    r1 = n += 0.78042507f;
    n = r1 *= n;
    r2 = n += -1.28544378f;
    r3 = n *= 0.00730519f;
    n *= 3.38919854f;
    n *= r2;
    r2 = n += -0.52604944f;
    r4 = n *= 0.68414861f;
    r5 = n += 0.29256988f;
    n *= -0.99311411f;
    n = r5 += n;
    r6 = n *= -3.55889869f;
    r7 = n += -2.67182422f;
    n += r1;
    n = r7 *= n;
    n *= -5.87408829f;
    n *= r5;
    n *= r2;
    n *= r6;
    r6 = n += 0.50646764f;
    n *= r6;
    n = r4 += n;
    n = r7 += n;
    n *= r3;
    n += r4;
    n *= r7;
    n *= r0;
    n += 0.00000045f;
    return n;
} // Solution0

// Solution1 result = 0.00000030
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.09066749f;
    n += 0.08991339f;
    r1 = n *= 0.08875204f;
    n += r1;
    r1 = n += -0.01595734f;
    n = r1 *= n;
    r2 = n += -2.31190300f;
    r3 = n *= 1.67672145f;
    n *= -0.47459525f;
    n *= r2;
    r2 = n += 3.24040818f;
    r4 = n *= -0.20876637f;
    r5 = n += 1.58361828f;
    n *= -2.05739284f;
    n = r5 += n;
    r6 = n *= -0.00011168f;
    r7 = n += -0.10381844f;
    n += r1;
    n = r7 *= n;
    n *= -194.95603943f;
    n *= r5;
    n *= r2;
    n *= r6;
    r6 = n += -0.62712151f;
    n *= r6;
    n = r4 += n;
    n = r7 += n;
    n *= r3;
    n += r4;
    n *= r7;
    n *= r0;
    n += -0.11814177f;
    return n;
} // Solution1

// Solution2 result = 0.00000083
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.61799264f;
    n += 0.18127459f;
    r1 = n *= -0.20121601f;
    n += r1;
    r1 = n += 0.07295134f;
    n = r1 *= n;
    r2 = n += -2.34794617f;
    r3 = n *= 0.74205554f;
    n *= 1.49240887f;
    n *= r2;
    r2 = n += -0.49364570f;
    r4 = n *= 0.02415460f;
    r5 = n += 3.78213143f;
    n *= -0.99862951f;
    n = r5 += n;
    r6 = n *= -0.00114211f;
    r7 = n += -0.21036485f;
    n += r1;
    n = r7 *= n;
    n *= -73685.99218750f;
    n *= r5;
    n *= r2;
    n *= r6;
    r6 = n += 0.97481716f;
    n *= r6;
    n = r4 += n;
    n = r7 += n;
    n *= r3;
    n += r4;
    n *= r7;
    n *= r0;
    n += 0.52359968f;
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
