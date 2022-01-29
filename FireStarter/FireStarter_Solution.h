#include <math.h>

// Run date: 01/29/22 12:14:06 Pacific Standard Time
// Run duration = 8.673105 seconds
// Run count = 7
// Run units = 32
// Run population = 69632
// Run iterations = 15
// Run generations = 50

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define TARGET_PI 3.14159265f

inline float Target(float n, unsigned int variation)
{
    switch (variation) {
    default:
    case 0:
        return sinf(n);
    case 1:
        return sinf(n * 1.2f) + n * 0.2f;
    case 2:
        return sinf((n + 0.4f) * 0.9f) - n * 0.2f + 0.5f;
    case 3:
        return fabsf(fmodf(fabsf(n - TARGET_PI * 0.5f), TARGET_PI * 2.0f) - TARGET_PI) - TARGET_PI * 0.5f;
    }
} // Target

// Solution0 precision = 0.001473
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n = fabsf(n);
    n += -0.13109893f;
    r0 = n;
    n += 0.28118417f;
    r1 = n;
    n = fabsf(n);
    n += -0.24341626f;
    n *= -0.29067162f;
    r2 = n;
    n *= -1.04590189f;
    r3 = n;
    n = fabsf(n);
    n += -1.26132619f;
    n *= 0.78784508f;
    n *= 0.68640119f;
    n += -0.83551133f;
    r0 = n;
    n += 0.51988167f;
    n *= r3;
    r3 = n;
    n += -1.26302779f;
    n *= 0.81718719f;
    r4 = n;
    n *= 1.19194913f;
    n += -0.80139393f;
    n *= r4;
    n *= r3;
    n += -0.16694564f;
    r3 = n;
    n += r3;
    n *= -0.75955063f;
    n *= -0.72762579f;
    r3 = n;
    n *= r0;
    n = fabsf(n);
    n += -0.17935984f;
    r0 = n;
    n *= r2;
    n += r3;
    n *= 0.15445375f;
    n *= r1;
    n += r0;
    return n;
} // Solution0

// Solution1 precision = 0.000002
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n = fabsf(n);
    n += -0.69967711f;
    r0 = n;
    n += -0.87111908f;
    r1 = n;
    n = fabsf(n);
    n += 0.15593430f;
    n *= -1.15533376f;
    r2 = n;
    n *= 0.78045440f;
    r3 = n;
    n = fabsf(n);
    n += -0.40506193f;
    n *= -0.40465218f;
    n *= 1.24122226f;
    n += 1.28994846f;
    r0 = n;
    n += -0.67534870f;
    n *= r3;
    r3 = n;
    n += 0.61240762f;
    n *= -0.00000006f;
    r4 = n;
    n *= 0.46956518f;
    n += -1.15623534f;
    n *= r4;
    n *= r3;
    n += 0.77386737f;
    r3 = n;
    n += r3;
    n *= -1.23163283f;
    n *= 1.15833938f;
    r3 = n;
    n *= r0;
    n = fabsf(n);
    n += -1.57079780f;
    r0 = n;
    n *= r2;
    n += r3;
    n *= 0.00000019f;
    n *= r1;
    n += r0;
    return n;
} // Solution1
