#include <math.h>

// Run date: 02/19/22 12:28:45 Pacific Standard Time
// Run duration = 0.851249 seconds
// Run count = 1
// Run units = 1
// Run population = 8704
// Run iterations = 512
// Run generations = 100
// Run samples = 15

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define TARGET_VARIATIONS 4

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

// Precision = 0.000000
// Solution0 precision = 0.052866
inline float Solution0(float n)
{
    float r0;

    n *= 0.61155784f;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    return n;
} // Solution0

// Solution1 precision = 0.026861
inline float Solution1(float n)
{
    float r0;

    n *= -0.32174054f;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    return n;
} // Solution1

// Solution2 precision = 0.031595
inline float Solution2(float n)
{
    float r0;

    n *= 0.15299658f;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    return n;
} // Solution2

// Solution3 precision = 0.179329
inline float Solution3(float n)
{
    float r0;

    n *= -1.26496220f;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    r0 = n;
    n *= r0;
    return n;
} // Solution3

