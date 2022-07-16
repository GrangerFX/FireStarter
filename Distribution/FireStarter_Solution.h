// Run date: 07/16/22 15:04:08 Pacific Daylight Time
// Run duration = 0.476539 seconds
// Run count = 2
// Run mode = 2
// Run units = 1
// Run process = 0
// Run states = 1
// Run population = 69632
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// Run attempts = 32
// Run seed = 8337
// Solution Generation = 1

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

// Precision = 0.00001132

// Solution0 precision = 0.00000678
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n += -3.14159417f;
    r0 = n *= -0.74580806f;
    n *= 0.80218804f;
    r1 = n *= -0.95530063f;
    n = r0 *= n;
    n *= 0.71260029f;
    n *= -0.40265352f;
    r2 = n += -0.75273043f;
    r3 = n *= 0.01718521f;
    n *= r0;
    n *= -0.60940558f;
    n *= 0.77827674f;
    n *= 0.30397341f;
    n += -0.46448249f;
    r0 = n *= 0.98833048f;
    n = r2 += n;
    n += -1.17577946f;
    n *= 0.54375249f;
    n += -0.91678256f;
    n = r2 *= n;
    n = r1 *= n;
    n = r0 *= n;
    n += r1;
    n *= -0.12836759f;
    n = r2 *= n;
    n *= 0.35557374f;
    n *= r3;
    n += -0.00000088f;
    n *= 0.59388763f;
    n += r2;
    n += r0;
    n *= 1.01072955f;
    return n;
} // Solution0

// Solution1 precision = 0.00001132
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n += -3.09065795f;
    r0 = n *= 0.65039665f;
    n *= 0.96011305f;
    r1 = n *= 0.74252212f;
    n = r0 *= n;
    n *= 0.44738424f;
    n *= 0.45285636f;
    r2 = n += -1.09533906f;
    r3 = n *= 0.18853265f;
    n *= r0;
    n *= -0.54627061f;
    n *= -0.76497054f;
    n *= -0.30199444f;
    n += 0.71436876f;
    r0 = n *= -0.52375960f;
    n = r2 += n;
    n += 0.70146984f;
    n *= 0.46504062f;
    n += -0.80863810f;
    n = r2 *= n;
    n = r1 *= n;
    n = r0 *= n;
    n += r1;
    n *= -1.29718447f;
    n = r2 *= n;
    n *= 0.78767121f;
    n *= r3;
    n += -0.59874874f;
    n *= 0.24359724f;
    n += r2;
    n += r0;
    n *= 0.80992752f;
    return n;
} // Solution1

// Solution2 precision = 0.00001025
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n += -2.61799908f;
    r0 = n *= -0.95512033f;
    n *= -2.18024373f;
    r1 = n *= 0.92317104f;
    n = r0 *= n;
    n *= -0.15504584f;
    n *= -0.37047133f;
    r2 = n += -0.41519049f;
    r3 = n *= 0.49888632f;
    n *= r0;
    n *= -0.11025164f;
    n *= -0.24054328f;
    n *= -0.32105809f;
    n += -0.91299152f;
    r0 = n *= -0.99073833f;
    n = r2 += n;
    n += -0.37874588f;
    n *= 0.16372997f;
    n += 0.76360893f;
    n = r2 *= n;
    n = r1 *= n;
    n = r0 *= n;
    n += r1;
    n *= 0.46307799f;
    n = r2 *= n;
    n *= -0.72141075f;
    n *= r3;
    n += -0.85009491f;
    n *= 0.57566017f;
    n += r2;
    n += r0;
    n *= -1.06995940f;
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
