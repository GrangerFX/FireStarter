// Run date: 08/05/23 13:30:41 Pacific Daylight Time
// Run duration = 161.864404 seconds
// Run generation = 7
// Run evolution = 0
// Run result = 0.00000095
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
// Run tests = 0
// Run units = 8
// Run processes = 8
// Run population = 278528
// Run iterations = 64
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

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

    n += -3.14159274f;
    r0 = n *= -0.57979232f;
    r1 = n *= -0.39145163f;
    n *= r1;
    r1 = n *= 2.28413248f;
    r2 = n *= -2.71936703f;
    n += 0.78035235f;
    n *= -0.02608256f;
    n *= 2.18298435f;
    r3 = n += -0.91344357f;
    r4 = n *= -0.35887724f;
    n *= r3;
    n = r4 *= n;
    n *= 1.32558358f;
    n *= -0.40969911f;
    n *= -0.11260381f;
    n *= r1;
    n *= -0.67880523f;
    r1 = n += 2.72013211f;
    n *= 0.52139997f;
    n *= r0;
    r0 = n *= -0.56295007f;
    n *= r4;
    n = r1 *= n;
    n *= r0;
    n += r2;
    n += 2.20430756f;
    n += 1.30368006f;
    n = r1 *= n;
    n += r1;
    n += 0.15815175f;
    n += -0.15815173f;
    return n;
} // Solution0

// Solution1 result = 0.00000095
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -3.09065914f;
    r0 = n *= 0.43070745f;
    r1 = n *= -1.41880119f;
    n *= r1;
    r1 = n *= -1.06885540f;
    r2 = n *= 1.34811878f;
    n += 1.38605273f;
    n *= -3.24235320f;
    n *= -0.00168043f;
    r3 = n += 1.60030663f;
    r4 = n *= -0.05627431f;
    n *= r3;
    n = r4 *= n;
    n *= 1.43241537f;
    n *= -2.99462986f;
    n *= 3.86201787f;
    n *= r1;
    n *= 1.07869339f;
    r1 = n += -2.08247900f;
    n *= -0.55467647f;
    n *= r0;
    r0 = n *= 1.09420407f;
    n *= r4;
    n = r1 *= n;
    n *= r0;
    n += r2;
    n += 36.70034027f;
    n += 0.15649687f;
    n = r1 *= n;
    n += r1;
    n += -0.76255369f;
    n += 0.64442152f;
    return n;
} // Solution1

// Solution2 result = 0.00000073
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -2.61799359f;
    r0 = n *= 1.07771146f;
    r1 = n *= -0.19115789f;
    n *= r1;
    r1 = n *= 3.26036382f;
    r2 = n *= 0.10890053f;
    n += -0.19351111f;
    n *= 0.34091499f;
    n *= -2.30787730f;
    r3 = n += 0.72810161f;
    r4 = n *= -0.18261451f;
    n *= r3;
    n = r4 *= n;
    n *= -0.43927783f;
    n *= -0.04335161f;
    n *= -0.94641179f;
    n *= r1;
    n *= 8.39042950f;
    r1 = n += 1.51068032f;
    n *= 1.68931663f;
    n *= r0;
    r0 = n *= 1.70140493f;
    n *= r4;
    n = r1 *= n;
    n *= r0;
    n += r2;
    n += -2.68338275f;
    n += -0.42519706f;
    n = r1 *= n;
    n += r1;
    n += -0.25560558f;
    n += 0.77920431f;
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
