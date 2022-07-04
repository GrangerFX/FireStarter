// Run date: 07/04/22 11:24:59 Pacific Daylight Time
// Run duration = 3.159459 seconds
// Run count = 1
// Run mode = 2
// Run clients = 4
// Run process = 0
// Run units = 1
// Run states = 4
// Run population = 69632
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// Run seed = 8337
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

// Precision = 0.000011

// Solution0 precision = 0.000011
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n += -3.14159250f;
    r0 = n *= -0.91134095f;
    n *= 0.43271402f;
    r1 = n *= 1.34864450f;
    n = r0 *= n;
    n *= 0.35612008f;
    n *= 0.57414269f;
    r2 = n += 0.48685005f;
    r3 = n *= 0.03657765f;
    n *= r0;
    n *= -0.70730609f;
    n *= 0.12330004f;
    n *= -0.61026365f;
    n += 1.42791796f;
    r0 = n *= -1.01621234f;
    n = r2 += n;
    n += -0.25124681f;
    n *= 0.23296289f;
    n += -0.98654443f;
    n = r2 *= n;
    n = r1 *= n;
    n = r0 *= n;
    n += r1;
    n *= 1.68950927f;
    n = r2 *= n;
    n *= 0.35711652f;
    n *= r3;
    n += 0.00000020f;
    n *= 0.65518081f;
    n += r2;
    n += r0;
    n *= -0.64316952f;
    return n;
} // Solution0

// Solution1 precision = 0.000005
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n += -3.09065890f;
    r0 = n *= -0.91286379f;
    n *= -1.08612788f;
    r1 = n *= 0.20509958f;
    n = r0 *= n;
    n *= 0.64550227f;
    n *= -0.71373767f;
    r2 = n += -1.91153979f;
    r3 = n *= 0.06371105f;
    n *= r0;
    n *= -1.40531874f;
    n *= -1.27860272f;
    n *= -0.05508173f;
    n += -0.10834246f;
    r0 = n *= 1.75352728f;
    n = r2 += n;
    n += 0.66296947f;
    n *= 0.18558964f;
    n += -0.60190529f;
    n = r2 *= n;
    n = r1 *= n;
    n = r0 *= n;
    n += r1;
    n *= -1.43497133f;
    n = r2 *= n;
    n *= -0.03202804f;
    n *= r3;
    n += 0.09514017f;
    n *= -0.96585816f;
    n += r2;
    n += r0;
    n *= 1.28554583f;
    return n;
} // Solution1

// Solution2 precision = 0.000009
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n += -2.61799073f;
    r0 = n *= 1.12471259f;
    n *= 1.54607534f;
    r1 = n *= -1.78876007f;
    n = r0 *= n;
    n *= -0.06380580f;
    n *= -0.30245411f;
    r2 = n += -0.76828599f;
    r3 = n *= -0.34000635f;
    n *= r0;
    n *= -0.01148552f;
    n *= 0.34350914f;
    n *= -1.11787724f;
    n += -0.71668857f;
    r0 = n *= -1.48171246f;
    n = r2 += n;
    n += 0.37173074f;
    n *= 0.45695478f;
    n += 1.07230568f;
    n = r2 *= n;
    n = r1 *= n;
    n = r0 *= n;
    n += r1;
    n *= 0.44097608f;
    n = r2 *= n;
    n *= 0.69608063f;
    n *= r3;
    n += 0.98769808f;
    n *= 0.99695897f;
    n += r2;
    n += r0;
    n *= 0.53173453f;
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
