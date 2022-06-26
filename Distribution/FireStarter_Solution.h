// Run date: 06/25/22 18:02:14 Pacific Daylight Time
// Run duration = 3.593526 seconds
// Run count = 1
// Run units = 1
// Run population = 34816
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// Solution Generation = 0

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

// Precision = 0.006314

// Solution0 precision = 0.005796
inline float Solution0(float n)
{
    float r0;

    n += 0.00000000f;
    n = r0 += n;
    n = r0 *= n;
    n = r0 += n;
    n = r0 *= n;
    n = r0 += n;
    n = r0 += n;
    n = r0 *= n;
    n = r0 += n;
    n = r0 += n;
    n = r0 += n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 += n;
    n = r0 *= n;
    n = r0 += n;
    n = r0 += n;
    n = r0 *= n;
    n = r0 += n;
    n = r0 *= n;
    n = r0 += n;
    n = r0 += n;
    n = r0 += n;
    n = r0 *= n;
    n = r0 += n;
    n = r0 *= n;
    n = r0 += n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 += n;
    return n;
} // Solution0

// Solution1 precision = 0.003645
inline float Solution1(float n)
{
    float r0;

    n += 0.00000000f;
    n = r0 += n;
    n = r0 *= n;
    n = r0 += n;
    n = r0 *= n;
    n = r0 += n;
    n = r0 += n;
    n = r0 *= n;
    n = r0 += n;
    n = r0 += n;
    n = r0 += n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 += n;
    n = r0 *= n;
    n = r0 += n;
    n = r0 += n;
    n = r0 *= n;
    n = r0 += n;
    n = r0 *= n;
    n = r0 += n;
    n = r0 += n;
    n = r0 += n;
    n = r0 *= n;
    n = r0 += n;
    n = r0 *= n;
    n = r0 += n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 += n;
    return n;
} // Solution1

// Solution2 precision = 0.006314
inline float Solution2(float n)
{
    float r0;

    n += 0.00000000f;
    n = r0 += n;
    n = r0 *= n;
    n = r0 += n;
    n = r0 *= n;
    n = r0 += n;
    n = r0 += n;
    n = r0 *= n;
    n = r0 += n;
    n = r0 += n;
    n = r0 += n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 += n;
    n = r0 *= n;
    n = r0 += n;
    n = r0 += n;
    n = r0 *= n;
    n = r0 += n;
    n = r0 *= n;
    n = r0 += n;
    n = r0 += n;
    n = r0 += n;
    n = r0 *= n;
    n = r0 += n;
    n = r0 *= n;
    n = r0 += n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 += n;
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
