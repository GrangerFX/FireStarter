// Run date: 07/16/22 23:04:49 Pacific Daylight Time
// Run duration = 1.944508 seconds
// Run count = 154
// Run mode = 6
// Run units = 1
// Run process = 0
// Run states = 1
// Run population = 69632
// Run iterations = 512
// Run generations = 100
// Run samples = 15
// Run attempts = 32
// Run seed = 0
// Solution Generation = 15300

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

// Precision = 0.00003022

// Solution0 precision = 0.00003022
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 1.18816280f;
    n += -1.74055302f;
    n *= 0.26790309f;
    r1 = n += -0.53370738f;
    n *= 4.12764740f;
    r2 = n *= 0.05556931f;
    r3 = n *= -0.42678186f;
    n *= 0.72212732f;
    r4 = n += 0.07069079f;
    n = r2 *= n;
    n = r3 += n;
    n += 0.94745296f;
    n += r4;
    r4 = n += 1.01983356f;
    n *= r3;
    n = r4 *= n;
    r3 = n += 0.70209724f;
    n = r3 += n;
    r5 = n += 0.11466095f;
    n += 2.33468008f;
    n += r0;
    r0 = n += 1.33487952f;
    n *= r0;
    n *= r5;
    r5 = n += -2.46542239f;
    n += r4;
    n = r2 *= n;
    n *= r1;
    n += r2;
    n *= r5;
    n *= -0.00983940f;
    n *= r3;
    return n;
} // Solution0

// Solution1 precision = 0.00003004
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.40409595f;
    n += 1.14916825f;
    n *= -0.57393599f;
    r1 = n += -0.03231123f;
    n *= 0.65987211f;
    r2 = n *= -0.12826315f;
    r3 = n *= -1.01756275f;
    n *= -2.79080749f;
    r4 = n += 0.48859617f;
    n = r2 *= n;
    n = r3 += n;
    n += 1.62889373f;
    n += r4;
    r4 = n += 0.63012475f;
    n *= r3;
    n = r4 *= n;
    r3 = n += -0.59715098f;
    n = r3 += n;
    r5 = n += -0.25578719f;
    n += 0.33860600f;
    n += r0;
    r0 = n += -1.49392450f;
    n *= r0;
    n *= r5;
    r5 = n += 4.05708981f;
    n += r4;
    n = r2 *= n;
    n *= r1;
    n += r2;
    n *= r5;
    n *= -0.33091664f;
    n *= r3;
    return n;
} // Solution1

// Solution2 precision = 0.00001603
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.67519808f;
    n += -1.22815561f;
    n *= 0.34008151f;
    r1 = n += -0.58232909f;
    n *= -3.96288824f;
    r2 = n *= 0.26578599f;
    r3 = n *= 0.28925040f;
    n *= -0.20295480f;
    r4 = n += -0.07066679f;
    n = r2 *= n;
    n = r3 += n;
    n += 0.89291698f;
    n += r4;
    r4 = n += 0.31073213f;
    n *= r3;
    n = r4 *= n;
    r3 = n += -0.07799156f;
    n = r3 += n;
    r5 = n += 0.78583038f;
    n += 0.93856925f;
    n += r0;
    r0 = n += 1.83102155f;
    n *= r0;
    n *= r5;
    r5 = n += -2.71768999f;
    n += r4;
    n = r2 *= n;
    n *= r1;
    n += r2;
    n *= r5;
    n *= -0.57994550f;
    n *= r3;
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
