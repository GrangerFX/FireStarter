// Run date: 12/26/23 12:30:27 Pacific Standard Time
// Run duration = 3597.465697 seconds
// Run generation = 62
// Run evolution = 7
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
// Run tests = 1
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
// Run startResult = 9.999999f

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

// Solution0 result = 0.00000010
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.76315522f;
    r1 = n += -1.37843728f;
    n += -1.37843776f;
    n *= 0.95987493f;
    n *= r0;
    n *= -0.12125763f;
    r0 = n += 0.92758888f;
    r2 = n += -0.91512346f;
    r3 = n *= -0.00039923f;
    r4 = n += -0.57452941f;
    n *= r2;
    n *= 1.03595757f;
    r2 = n *= 1.43580401f;
    r5 = n *= 0.15704833f;
    n *= -0.15800928f;
    n += -2.14230418f;
    r6 = n *= -5.86295128f;
    n = r6 *= n;
    n += r6;
    n += r2;
    n *= r3;
    r3 = n += -1.15968585f;
    n *= r5;
    r5 = n += 0.35539383f;
    n *= r3;
    n += -1.21991801f;
    n *= -2.28714538f;
    n *= r5;
    n *= r0;
    n *= r4;
    n *= r1;
    n += 0.00000017f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.57243562f;
    r1 = n += -1.51822746f;
    n += -1.51821196f;
    n *= -0.04426924f;
    n *= r0;
    n *= 1.43262160f;
    r0 = n += 1.41151142f;
    r2 = n += -1.33116615f;
    r3 = n *= 0.05972479f;
    r4 = n += 0.95349634f;
    n *= r2;
    n *= 0.88055420f;
    r2 = n *= -0.55424869f;
    r5 = n *= -0.36112779f;
    n *= 7.17715549f;
    n += -0.01637468f;
    r6 = n *= -0.20257641f;
    n = r6 *= n;
    n += r6;
    n += r2;
    n *= r3;
    r3 = n += -2.15350676f;
    n *= r5;
    r5 = n += -0.52759063f;
    n *= r3;
    n += 0.58054149f;
    n *= 0.63034672f;
    n *= r5;
    n *= r0;
    n *= r4;
    n *= r1;
    n += -0.11813682f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.86006594f;
    r1 = n += -0.75792748f;
    n += -0.75792891f;
    n *= 0.78408033f;
    n *= r0;
    n *= 0.74748600f;
    r0 = n += -2.58394599f;
    r2 = n += 1.32833707f;
    r3 = n *= -0.00470247f;
    r4 = n += 0.19746615f;
    n *= r2;
    n *= -0.42957276f;
    r2 = n *= -0.45579687f;
    r5 = n *= -1.03417361f;
    n *= -8.89324093f;
    n += -2.25115633f;
    r6 = n *= 0.04864153f;
    n = r6 *= n;
    n += r6;
    n += r2;
    n *= r3;
    r3 = n += -1.59004056f;
    n *= r5;
    r5 = n += -0.71774846f;
    n *= r3;
    n += 1.23541093f;
    n *= -0.79809463f;
    n *= r5;
    n *= r0;
    n *= r4;
    n *= r1;
    n += 0.52359915f;
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
