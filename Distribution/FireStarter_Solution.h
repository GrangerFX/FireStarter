// Run date: 07/23/22 10:50:33 Pacific Daylight Time
// Run duration = 4.948751 seconds
// Run count = 25
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;
// Run variations = 3;
// Run samples = 15;

// Run sampleMin = 0.000000f;
// Run sampleMax = 6.283185f;
// Run evolveFactor = 0.100000f;
// Run evolveStartFactor = 4.000000f;
// Run evolveStartResult = 10.000000f;
// Run evolveCandidates = 16;

// Run mode = FIRESTARTER_UNIT;
// Run states = 4;
// Run units = 1;
// Run process = 0;
// Run population = 69632;
// Run iterations = 256;
// Run generations = 100;
// Run precision = 256;
// Run evolve = 0;
// Run attempts = 32;
// Run seed = 3;
// Solution Generation = 24

#ifndef __CUDACC__
#include <cmath>
#endif

#define TARGET_PI 3.14159265f

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
        return fabsf(fmodf(fabsf(n - TARGET_PI * 0.5f), TARGET_PI * 2.0f) - TARGET_PI) - TARGET_PI * 0.5f;
    }
} // SolutionTarget

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define SOLUTION_VARIATIONS 3

// Precision = 0.00020379

// Solution0 precision = 0.00020379
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.38517603f;
    n += -0.27750102f;
    r0 = n += -0.86712253f;
    r1 = n *= 0.44845462f;
    r2 = n += 3.05129194f;
    n *= -0.63791591f;
    r3 = n *= 0.36384913f;
    r4 = n *= 0.06910928f;
    n *= -0.08365320f;
    n = r0 += n;
    r5 = n *= 0.90313214f;
    n += 0.98226559f;
    n += 1.20696259f;
    n *= r2;
    r2 = n *= -0.82081819f;
    n *= r1;
    n *= r5;
    r5 = n *= 0.40071642f;
    n = r0 += n;
    n += -1.12063384f;
    n += r5;
    n += 0.37933618f;
    n = r3 *= n;
    n += r0;
    n += 0.04875570f;
    n += r4;
    n *= 1.18772662f;
    n *= r3;
    n *= 0.93624532f;
    n += -0.20434700f;
    n *= r2;
    n += -0.18585819f;
    return n;
} // Solution0

// Solution1 precision = 0.00009600
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.37549704f;
    n += 1.40840590f;
    r0 = n += -0.18137325f;
    r1 = n *= 0.43895444f;
    r2 = n += -0.99555910f;
    n *= 1.10321569f;
    r3 = n *= -0.67573702f;
    r4 = n *= 1.02383924f;
    n *= 1.63963127f;
    n = r0 += n;
    r5 = n *= 1.71038604f;
    n += -0.40919170f;
    n += 2.23890781f;
    n *= r2;
    r2 = n *= -0.68099481f;
    n *= r1;
    n *= r5;
    r5 = n *= 0.37934184f;
    n = r0 += n;
    n += -0.91373092f;
    n += r5;
    n += -0.09313797f;
    n = r3 *= n;
    n += r0;
    n += 1.16786790f;
    n += r4;
    n *= -0.18281201f;
    n *= r3;
    n *= -0.96443778f;
    n += -0.13231876f;
    n *= r2;
    n += -0.23846520f;
    return n;
} // Solution1

// Solution2 precision = 0.00016946
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.57116741f;
    n += 0.57741839f;
    r0 = n += 0.57701486f;
    r1 = n *= 0.40443251f;
    r2 = n += 2.31351399f;
    n *= 0.45597994f;
    r3 = n *= -0.44091296f;
    r4 = n *= -0.02568512f;
    n *= 0.08822682f;
    n = r0 += n;
    r5 = n *= -0.64526975f;
    n += 1.48849738f;
    n += 0.33902901f;
    n *= r2;
    r2 = n *= -0.50040394f;
    n *= r1;
    n *= r5;
    r5 = n *= 0.78044331f;
    n = r0 += n;
    n += -0.41397452f;
    n += r5;
    n += -0.94209272f;
    n = r3 *= n;
    n += r0;
    n += -0.56594068f;
    n += r4;
    n *= 1.19784224f;
    n *= r3;
    n *= -1.48334241f;
    n += -0.42800716f;
    n *= r2;
    n += -0.02758880f;
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
