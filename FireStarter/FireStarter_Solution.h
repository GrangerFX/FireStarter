// Run date: 05/01/22 18:05:44 Pacific Daylight Time
// Run duration = 2.185237 seconds
// Run count = 7
// Run units = 1
// Run population = 34816
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// State Generation = 6

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define SOLUTION_VARIATIONS 3

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

// Precision = -107374176.000000

// Solution0 precision = -107374176.000000
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n += -107374176.00000000f;
    r0 = n += -107374176.00000000f;
    n *= -107374176.00000000f;
    n += -107374176.00000000f;
    n += -107374176.00000000f;
    n += -107374176.00000000f;
    n *= -107374176.00000000f;
    n = r0 += n;
    r1 = n *= -107374176.00000000f;
    r2 = n += -107374176.00000000f;
    n += -107374176.00000000f;
    n *= -107374176.00000000f;
    n *= -107374176.00000000f;
    n *= r1;
    n *= -107374176.00000000f;
    r1 = n += -107374176.00000000f;
    n *= -107374176.00000000f;
    n *= -107374176.00000000f;
    n *= r1;
    n *= -107374176.00000000f;
    n += -107374176.00000000f;
    n = r2 += n;
    r1 = n *= -107374176.00000000f;
    r3 = n += -107374176.00000000f;
    n = r1 += n;
    n += r3;
    n = r2 *= n;
    n += -107374176.00000000f;
    n *= r1;
    n *= r0;
    n *= r2;
    n += -107374176.00000000f;
    return n;
} // Solution0

// Solution1 precision = -107374176.000000
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n += -107374176.00000000f;
    r0 = n += -107374176.00000000f;
    n *= -107374176.00000000f;
    n += -107374176.00000000f;
    n += -107374176.00000000f;
    n += -107374176.00000000f;
    n *= -107374176.00000000f;
    n = r0 += n;
    r1 = n *= -107374176.00000000f;
    r2 = n += -107374176.00000000f;
    n += -107374176.00000000f;
    n *= -107374176.00000000f;
    n *= -107374176.00000000f;
    n *= r1;
    n *= -107374176.00000000f;
    r1 = n += -107374176.00000000f;
    n *= -107374176.00000000f;
    n *= -107374176.00000000f;
    n *= r1;
    n *= -107374176.00000000f;
    n += -107374176.00000000f;
    n = r2 += n;
    r1 = n *= -107374176.00000000f;
    r3 = n += -107374176.00000000f;
    n = r1 += n;
    n += r3;
    n = r2 *= n;
    n += -107374176.00000000f;
    n *= r1;
    n *= r0;
    n *= r2;
    n += -107374176.00000000f;
    return n;
} // Solution1

// Solution2 precision = -107374176.000000
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n += -107374176.00000000f;
    r0 = n += -107374176.00000000f;
    n *= -107374176.00000000f;
    n += -107374176.00000000f;
    n += -107374176.00000000f;
    n += -107374176.00000000f;
    n *= -107374176.00000000f;
    n = r0 += n;
    r1 = n *= -107374176.00000000f;
    r2 = n += -107374176.00000000f;
    n += -107374176.00000000f;
    n *= -107374176.00000000f;
    n *= -107374176.00000000f;
    n *= r1;
    n *= -107374176.00000000f;
    r1 = n += -107374176.00000000f;
    n *= -107374176.00000000f;
    n *= -107374176.00000000f;
    n *= r1;
    n *= -107374176.00000000f;
    n += -107374176.00000000f;
    n = r2 += n;
    r1 = n *= -107374176.00000000f;
    r3 = n += -107374176.00000000f;
    n = r1 += n;
    n += r3;
    n = r2 *= n;
    n += -107374176.00000000f;
    n *= r1;
    n *= r0;
    n *= r2;
    n += -107374176.00000000f;
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
