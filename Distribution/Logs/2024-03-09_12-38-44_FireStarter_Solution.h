// Run date: 03/09/24 12:38:44 Pacific Standard Time
// Run duration = 5180.686629 seconds
// Run generation = 164
// Run evolution = 11
// Run max result = 0.00000048
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
// Run streams = 4
// Run units = 4
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
    float r0, r1, r2, r3, r4, r5;

    n += -3.14159274f;
    r0 = n *= 0.90347695f;
    r1 = n *= 0.80221426f;
    n *= r0;
    r0 = n += -1.12299287f;
    n *= 0.99382222f;
    r2 = n += -0.87134057f;
    n *= -0.00007048f;
    n *= -5.37947130f;
    r3 = n += -1.20721138f;
    r4 = n += -0.27820593f;
    n += -1.21636379f;
    n *= -1.62875080f;
    r5 = n += -4.33759737f;
    n *= r2;
    r2 = n += -2.67344928f;
    n *= 0.10183430f;
    n = r3 *= n;
    n *= 3.95361185f;
    n *= r4;
    n = r5 += n;
    n += r5;
    n += -0.62788165f;
    n += 2.75870323f;
    n *= r1;
    n *= -0.65995961f;
    n *= r3;
    n = r2 *= n;
    n *= -0.18727081f;
    n *= r0;
    n += r2;
    n += -0.00000001f;
    return n;
} // Solution0

// Solution1 result = 0.00000048
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.09065914f;
    r0 = n *= -2.03712225f;
    r1 = n *= 0.38046786f;
    n *= r0;
    r0 = n += 1.96203613f;
    n *= -0.37822941f;
    r2 = n += 2.41104865f;
    n *= 1.71184838f;
    n *= 0.00559728f;
    r3 = n += 0.69343805f;
    r4 = n += -0.49606690f;
    n += 0.84576285f;
    n *= 0.48299959f;
    r5 = n += -0.25798038f;
    n *= r2;
    r2 = n += 2.49760270f;
    n *= 0.19728878f;
    n = r3 *= n;
    n *= 6.62762213f;
    n *= r4;
    n = r5 += n;
    n += r5;
    n += 0.84015453f;
    n += 8.21978855f;
    n *= r1;
    n *= 0.10884705f;
    n *= r3;
    n = r2 *= n;
    n *= 0.00935113f;
    n *= r0;
    n += r2;
    n += -0.11813193f;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.61799383f;
    r0 = n *= 0.83473152f;
    r1 = n *= 0.90132385f;
    n *= r0;
    r0 = n += 0.00893439f;
    n *= -0.34645548f;
    r2 = n += 0.51350856f;
    n *= 0.00272540f;
    n *= 3.54586625f;
    r3 = n += 0.26785040f;
    r4 = n += 0.34281123f;
    n += 1.83523357f;
    n *= -0.62686884f;
    r5 = n += 1.38911545f;
    n *= r2;
    r2 = n += -0.84172362f;
    n *= 1.19940925f;
    n = r3 *= n;
    n *= 0.84201229f;
    n *= r4;
    n = r5 += n;
    n += r5;
    n += -2.84009790f;
    n += 1.36813581f;
    n *= r1;
    n *= 2.33284402f;
    n *= r3;
    n = r2 *= n;
    n *= -0.31862131f;
    n *= r0;
    n += r2;
    n += 0.52359879f;
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
