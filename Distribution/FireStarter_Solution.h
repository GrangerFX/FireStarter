// Run date: 10/14/23 15:40:25 Pacific Daylight Time
// Run duration = 13795.566298 seconds
// Run generation = 75
// Run evolution = 10
// Run result = 0.00000051
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
// Run seeds = 64
// Run tests = 16
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
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -1.50209117f;
    r0 = n += -1.91599476f;
    n *= 0.54540843f;
    r1 = n += 0.43598670f;
    n += r0;
    r0 = n *= 0.00673320f;
    r2 = n *= -0.41804123f;
    n *= 39.87971878f;
    n = r2 *= n;
    r3 = n *= 1.98389971f;
    r4 = n += -0.40966928f;
    r5 = n *= 3.21131587f;
    r6 = n += -1.99964583f;
    n *= r1;
    n *= -0.50043643f;
    n = r2 += n;
    n *= -0.75272650f;
    r1 = n += 0.35640681f;
    n = r4 *= n;
    n = r0 += n;
    r7 = n *= 0.73687118f;
    n *= -3.74289680f;
    n *= r3;
    n += r0;
    n *= r4;
    n = r5 += n;
    n *= r7;
    n *= r6;
    n *= r5;
    n += r1;
    n += r2;
    n += -0.47360942f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -1.95616245f;
    r0 = n += -0.87500823f;
    n *= -0.99259973f;
    r1 = n += -0.00191148f;
    n += r0;
    r0 = n *= 1.41509461f;
    r2 = n *= 0.39413390f;
    n *= -19.60841370f;
    n = r2 *= n;
    r3 = n *= 4.05620003f;
    r4 = n += 0.99813265f;
    r5 = n *= -3.22146988f;
    r6 = n += 1.81683171f;
    n *= r1;
    n *= -0.29011637f;
    n = r2 += n;
    n *= -0.98807651f;
    r1 = n += -0.10405455f;
    n = r4 *= n;
    n = r0 += n;
    r7 = n *= 0.18577193f;
    n *= 5.33886623f;
    n *= r3;
    n += r0;
    n *= r4;
    n = r5 += n;
    n *= r7;
    n *= r6;
    n *= r5;
    n += r1;
    n += r2;
    n += -0.01284964f;
    return n;
} // Solution1

// Solution2 result = 0.00000051
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -0.75402188f;
    r0 = n += -1.80941677f;
    n *= -1.05795598f;
    r1 = n += 0.00320881f;
    n += r0;
    r0 = n *= -0.03694673f;
    r2 = n *= -15.35656929f;
    n *= 0.13454384f;
    n = r2 *= n;
    r3 = n *= 29.56863213f;
    r4 = n += -1.85544682f;
    r5 = n *= 1.40340745f;
    r6 = n += 1.11687040f;
    n *= r1;
    n *= 0.47604477f;
    n = r2 += n;
    n *= -0.34733638f;
    r1 = n += 0.01339646f;
    n = r4 *= n;
    n = r0 += n;
    r7 = n *= 0.30455789f;
    n *= -5.04227495f;
    n *= r3;
    n += r0;
    n *= r4;
    n = r5 += n;
    n *= r7;
    n *= r6;
    n *= r5;
    n += r1;
    n += r2;
    n += 0.48504838f;
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
