// Run date: 12/16/23 10:39:28 Pacific Standard Time
// Run duration = 2083.044671 seconds
// Run generation = 55
// Run evolution = 13
// Run max result = 0.00000036
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.11902547f;
    n += -0.02256714f;
    r0 = n *= -1.93114555f;
    n *= 0.76847887f;
    r1 = n *= -0.32579252f;
    n = r1 *= n;
    r2 = n += -0.74234337f;
    n *= 0.11814696f;
    r3 = n += -0.19066313f;
    r4 = n += -7.23220396f;
    r5 = n *= 0.00257348f;
    n = r2 *= n;
    n += 0.43667719f;
    n = r4 *= n;
    n *= r4;
    n *= -3.78725719f;
    n = r1 += n;
    n = r1 += n;
    r4 = n *= -0.00124109f;
    n *= r4;
    n = r3 += n;
    n *= 3.79239988f;
    n *= r2;
    n *= r5;
    n += r1;
    n *= -0.08978846f;
    r1 = n *= -0.36356971f;
    n *= -0.24115133f;
    n *= r0;
    n *= r3;
    n *= r1;
    n += -0.00000000f;
    return n;
} // Solution0

// Solution1 result = 0.00000036
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.82517838f;
    n += -1.26548064f;
    r0 = n *= -0.14287323f;
    n *= 0.69006246f;
    r1 = n *= 0.93649262f;
    n = r1 *= n;
    r2 = n += 0.69979590f;
    n *= -2.20173812f;
    r3 = n += 2.51001477f;
    r4 = n += 0.59365284f;
    r5 = n *= -0.03471044f;
    n = r2 *= n;
    n += 0.30392894f;
    n = r4 *= n;
    n *= r4;
    n *= -2.57314301f;
    n = r1 += n;
    n = r1 += n;
    r4 = n *= 0.30266297f;
    n *= r4;
    n = r3 += n;
    n *= -1.65159380f;
    n *= r2;
    n *= r5;
    n += r1;
    n *= -1.53598857f;
    r1 = n *= 1.78262460f;
    n *= 1.23692155f;
    n *= r0;
    n *= r3;
    n *= r1;
    n += -0.11813217f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.16739678f;
    n += -0.45059684f;
    r0 = n *= -0.30437347f;
    n *= 0.87295395f;
    r1 = n *= 0.81202662f;
    n = r1 *= n;
    r2 = n += -0.57042146f;
    n *= -0.68960500f;
    r3 = n += -0.39102346f;
    r4 = n += -1.59714472f;
    r5 = n *= -0.00068528f;
    n = r2 *= n;
    n += -0.39452314f;
    n = r4 *= n;
    n *= r4;
    n *= -1.49298739f;
    n = r1 += n;
    n = r1 += n;
    r4 = n *= -0.40926135f;
    n *= r4;
    n = r3 += n;
    n *= -23.89977074f;
    n *= r2;
    n *= r5;
    n += r1;
    n *= -1.30027378f;
    r1 = n *= 2.26494431f;
    n *= 1.13252318f;
    n *= r0;
    n *= r3;
    n *= r1;
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
