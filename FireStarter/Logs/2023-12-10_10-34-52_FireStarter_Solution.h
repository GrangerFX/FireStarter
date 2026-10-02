// Run date: 12/10/23 10:34:52 Pacific Standard Time
// Run duration = 5364.506059 seconds
// Run generation = 67
// Run evolution = 10
// Run max result = 0.00000465
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
// Run optimizeSeed = 2
// Run tests = 1
// Run seeds = 64
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

// Solution0 result = 0.00000423
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += 0.31208518f;
    n *= 1.02088737f;
    r0 = n *= 1.53516304f;
    r1 = n += -1.58518779f;
    r2 = n *= 0.22585207f;
    n += r1;
    r1 = n += -1.69466078f;
    n *= -0.12130876f;
    r3 = n += 1.44720113f;
    r4 = n += -1.12617707f;
    r5 = n *= 0.01029442f;
    n *= r1;
    n += 1.10815573f;
    n *= r4;
    r4 = n += -0.59781569f;
    n = r3 *= n;
    n *= r4;
    n = r2 += n;
    n += -2.17126989f;
    n = r3 += n;
    n = r3 += n;
    n *= 3.82545114f;
    n = r5 *= n;
    n *= r5;
    n += r2;
    n += -1.31921160f;
    r2 = n *= 0.31644484f;
    n += r0;
    n *= 0.30417931f;
    n *= r3;
    n *= r2;
    n += -0.00649770f;
    return n;
} // Solution0

// Solution1 result = 0.00000465
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.81324589f;
    n *= 12.53700638f;
    r0 = n *= 0.08858951f;
    r1 = n += -2.15640521f;
    r2 = n *= -0.27459395f;
    n += r1;
    r1 = n += 0.59433395f;
    n *= -0.00778736f;
    r3 = n += -0.40994868f;
    r4 = n += 0.99271685f;
    r5 = n *= 1.77350926f;
    n *= r1;
    n += 0.12314479f;
    n *= r4;
    r4 = n += -1.24588764f;
    n = r3 *= n;
    n *= r4;
    n = r2 += n;
    n += 2.82932496f;
    n = r3 += n;
    n = r3 += n;
    n *= 2.27970481f;
    n = r5 *= n;
    n *= r5;
    n += r2;
    n += -6.88878822f;
    r2 = n *= -0.00740255f;
    n += r0;
    n *= 0.11193053f;
    n *= r3;
    n *= r2;
    n += -0.09293452f;
    return n;
} // Solution1

// Solution2 result = 0.00000322
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += 0.79987234f;
    n *= -0.56522560f;
    r0 = n *= -0.54227304f;
    r1 = n += -0.31170952f;
    r2 = n *= 1.48780727f;
    n += r1;
    r1 = n += -3.36747909f;
    n *= -0.42211354f;
    r3 = n += 0.46295148f;
    r4 = n += -1.65528893f;
    r5 = n *= 0.01479717f;
    n *= r1;
    n += 0.77556235f;
    n *= r4;
    r4 = n += -0.16306849f;
    n = r3 *= n;
    n *= r4;
    n = r2 += n;
    n += -2.32110929f;
    n = r3 += n;
    n = r3 += n;
    n *= -1.28741777f;
    n = r5 *= n;
    n *= r5;
    n += r2;
    n += -1.19812286f;
    r2 = n *= 0.50197881f;
    n += r0;
    n *= 0.77514881f;
    n *= r3;
    n *= r2;
    n += 0.92074549f;
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
