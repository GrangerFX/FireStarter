// Run date: 07/08/22 10:52:08 Pacific Daylight Time
// Run duration = 1.204947 seconds
// Run count = 31
// Run mode = 4
// Run clients = 4
// Run process = 0
// Run units = 1
// Run states = 1
// Run population = 69632
// Run iterations = 512
// Run generations = 100
// Run samples = 15
// Run seed = 8337
// Solution Generation = 3000

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

// Precision = 0.000002

// Solution0 precision = 0.000000
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n += -3.14159274f;
    r0 = n *= -0.92807484f;
    n *= 0.84481251f;
    r1 = n *= -1.45782900f;
    n = r0 *= n;
    n *= -0.45234701f;
    n *= 0.14027600f;
    r2 = n += -0.65685201f;
    r3 = n *= -0.60230100f;
    n = r0 *= n;
    n *= -0.66759998f;
    n *= -0.87090600f;
    n += 0.54388654f;
    n += r0;
    n *= -0.01210001f;
    n = r2 += n;
    n += 0.63798428f;
    n *= -0.17228502f;
    n += 1.55100513f;
    n = r2 *= n;
    n = r1 *= n;
    r0 = n *= 1.20974100f;
    n += r1;
    n *= -0.35336024f;
    n = r2 *= n;
    n *= 0.40253699f;
    n *= r3;
    n += -0.00000059f;
    n *= -0.34793299f;
    n += r2;
    n += r0;
    n *= 0.43019298f;
    return n;
} // Solution0

// Solution1 precision = 0.000002
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n += -3.09065843f;
    r0 = n *= 0.55249739f;
    n *= -0.65941858f;
    r1 = n *= 0.65948290f;
    n = r0 *= n;
    n *= 0.55065674f;
    n *= -0.21435209f;
    r2 = n += -1.26658142f;
    r3 = n *= -0.32457328f;
    n = r0 *= n;
    n *= -0.59393293f;
    n *= -1.29836559f;
    n += 1.16480732f;
    n += r0;
    n *= -1.32511342f;
    n = r2 += n;
    n += 0.36783117f;
    n *= 1.01164722f;
    n += -0.09949259f;
    n = r2 *= n;
    n = r1 *= n;
    r0 = n *= -1.01573539f;
    n += r1;
    n *= 0.23234664f;
    n = r2 *= n;
    n *= -0.00006234f;
    n *= r3;
    n += -0.12567392f;
    n *= -1.54537010f;
    n += r2;
    n += r0;
    n *= -0.60825896f;
    return n;
} // Solution1

// Solution2 precision = 0.000001
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n += -2.61799383f;
    r0 = n *= 0.80497706f;
    n *= -0.46308631f;
    r1 = n *= 1.00579333f;
    n = r0 *= n;
    n *= 0.70108658f;
    n *= 0.96888727f;
    r2 = n += 1.13557100f;
    r3 = n *= -0.03160046f;
    n = r0 *= n;
    n *= 0.00003413f;
    n *= 4.82085276f;
    n += 0.13213183f;
    n += r0;
    n *= -0.82834828f;
    n = r2 += n;
    n += 0.58274561f;
    n *= -0.16293497f;
    n += -2.73401380f;
    n = r2 *= n;
    n = r1 *= n;
    r0 = n *= 0.47461212f;
    n += r1;
    n *= -0.04259890f;
    n = r2 *= n;
    n *= -1.13689423f;
    n *= r3;
    n += -0.38703641f;
    n *= 1.05423748f;
    n += r2;
    n += r0;
    n *= -1.28324139f;
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
