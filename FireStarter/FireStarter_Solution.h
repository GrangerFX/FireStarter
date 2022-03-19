#include <math.h>

// Run date: 03/19/22 13:53:21 Pacific Daylight Time
// Run duration = 5.196561 seconds
// Run count = 2
// Run units = 1
// Run population = 17408
// Run iterations = 4096
// Run generations = 100
// Run samples = 15

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define PROGRAM_VARIATIONS 3

#ifndef __CUDACC__
#include <cmath>
#endif

#define TARGET_PI 3.14159265f

inline float Target(float n, unsigned int variation)
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
} // Target

// Precision = 0.000207

// Solution0 precision = 0.000105
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.19505066f;
    r1 = n += -0.68845457f;
    r2 = n *= -0.83381563f;
    r3 = n += -1.11417830f;
    n = r3 *= n;
    r4 = n += -0.10052464f;
    r5 = n *= -1.33915162f;
    n += r5;
    n *= -1.85461044f;
    r5 = n += -0.98023796f;
    r6 = n *= 0.35171393f;
    n += r0;
    n = r2 *= n;
    n += r4;
    n *= r2;
    n += r5;
    r5 = n *= 0.61255735f;
    r2 = n += -0.35390446f;
    n *= -0.96447772f;
    n += r3;
    r3 = n *= 1.11710370f;
    n += r1;
    n *= -0.45914620f;
    n += -1.24112391f;
    n *= -0.01371517f;
    n += 0.56752044f;
    n *= r5;
    n += r6;
    n *= r3;
    n += r2;
    n *= -0.96134913f;
    n += -0.37411675f;
    return n;
} // Solution0

// Solution1 precision = 0.000152
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.24008629f;
    r1 = n += 0.91027033f;
    r2 = n *= -0.63007295f;
    r3 = n += -0.64631718f;
    n = r3 *= n;
    r4 = n += -0.66760713f;
    r5 = n *= -0.48081765f;
    n += r5;
    n *= -1.05777538f;
    r5 = n += -3.36386776f;
    r6 = n *= -1.54455829f;
    n += r0;
    n = r2 *= n;
    n += r4;
    n *= r2;
    n += r5;
    r5 = n *= -0.17059658f;
    r2 = n += -0.09184860f;
    n *= -0.85973424f;
    n += r3;
    r3 = n *= -0.91029072f;
    n += r1;
    n *= 0.33836952f;
    n += 2.18510199f;
    n *= 2.79994535f;
    n += 4.64922523f;
    n *= r5;
    n += r6;
    n *= r3;
    n += r2;
    n *= -0.32069814f;
    n += -0.55811596f;
    return n;
} // Solution1

// Solution2 precision = 0.000207
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.49240422f;
    r1 = n += 0.73580599f;
    r2 = n *= 0.34154001f;
    r3 = n += -0.52648896f;
    n = r3 *= n;
    r4 = n += -0.66209120f;
    r5 = n *= -0.39455435f;
    n += r5;
    n *= 0.93604988f;
    r5 = n += 0.85066366f;
    r6 = n *= -5.36766911f;
    n += r0;
    n = r2 *= n;
    n += r4;
    n *= r2;
    n += r5;
    r5 = n *= -0.24583010f;
    r2 = n += 1.26543570f;
    n *= -1.08024037f;
    n += r3;
    r3 = n *= 0.75526750f;
    n += r1;
    n *= -0.07669763f;
    n += 1.83598554f;
    n *= -0.58544993f;
    n += -0.62500048f;
    n *= r5;
    n += r6;
    n *= r3;
    n += r2;
    n *= 0.26675293f;
    n += 0.11985745f;
    return n;
} // Solution2
