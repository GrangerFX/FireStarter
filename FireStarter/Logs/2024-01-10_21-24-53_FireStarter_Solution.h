// Run date: 01/10/24 21:24:53 Pacific Standard Time
// Run duration = 8465.983244 seconds
// Run generation = 90
// Run evolution = 12
// Run max result = 0.00000051
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
// Run tests = 4
// Run states = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
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

// Solution0 result = 0.00000051
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.07985381f;
    r1 = n += -0.25086814f;
    r2 = n *= -1.19738948f;
    n = r2 *= n;
    r3 = n += -1.78443348f;
    r4 = n += -1.98441064f;
    r5 = n += 1.77584279f;
    n *= -0.26859429f;
    n *= r3;
    n *= -0.49505350f;
    r3 = n += 0.40118033f;
    n *= -2.30638790f;
    n += -1.83056259f;
    n *= r4;
    n += -3.30241656f;
    n *= r3;
    n += 0.67850059f;
    n *= r5;
    n *= r2;
    r2 = n += 2.78426147f;
    n *= r2;
    r2 = n += -3.65086341f;
    n += 0.48497912f;
    n += r2;
    n = r1 *= n;
    n += r0;
    n *= -1.32767081f;
    n = r1 += n;
    n += -1.93231153f;
    r0 = n += 2.43191695f;
    n += r1;
    n += r0;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.15469979f;
    r1 = n += -0.47812423f;
    r2 = n *= -0.43423116f;
    n = r2 *= n;
    r3 = n += -0.60734695f;
    r4 = n += -1.92461824f;
    r5 = n += 0.34816399f;
    n *= 0.09437716f;
    n *= r3;
    n *= -2.78787398f;
    r3 = n += -0.34003395f;
    n *= -18.84741020f;
    n += 0.32861310f;
    n *= r4;
    n += -2.38141918f;
    n *= r3;
    n += 0.34609783f;
    n *= r5;
    n *= r2;
    r2 = n += 4.48034763f;
    n *= r2;
    r2 = n += -3.04340935f;
    n += -11.75411797f;
    n += r2;
    n = r1 *= n;
    n += r0;
    n *= -1.05879080f;
    n = r1 += n;
    n += 1.09219849f;
    r0 = n += -0.39191416f;
    n += r1;
    n += r0;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.05698103f;
    r1 = n += 0.14917599f;
    r2 = n *= -1.35846364f;
    n = r2 *= n;
    r3 = n += -1.93006039f;
    r4 = n += 0.08013147f;
    r5 = n += 0.88230282f;
    n *= 0.83214813f;
    n *= r3;
    n *= -1.74566710f;
    r3 = n += -0.52108991f;
    n *= -1.91450810f;
    n += -1.76824450f;
    n *= r4;
    n += -2.61141014f;
    n *= r3;
    n += 4.24875975f;
    n *= r5;
    n *= r2;
    r2 = n += 2.30288243f;
    n *= r2;
    r2 = n += -0.85727835f;
    n += -1.38933468f;
    n += r2;
    n = r1 *= n;
    n += r0;
    n *= -0.19437903f;
    n = r1 += n;
    n += -1.41836572f;
    r0 = n += 1.63666999f;
    n += r1;
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
