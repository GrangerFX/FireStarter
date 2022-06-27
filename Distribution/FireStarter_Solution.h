// Run date: 06/26/22 21:13:35 Pacific Daylight Time
// Run duration = 1.876934 seconds
// Run count = 18
// Run units = 1
// Run population = 69632
// Run iterations = 512
// Run generations = 100
// Run samples = 15
// Solution Generation = 1700

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

// Precision = 0.000347

// Solution0 precision = 0.000162
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.72143310f;
    n *= -0.44441840f;
    r1 = n += -1.81607664f;
    r2 = n += 0.87518156f;
    n += -0.74588543f;
    n += r2;
    r2 = n += -0.67547852f;
    r3 = n *= -0.99319792f;
    r4 = n += -0.45174181f;
    r5 = n *= -0.99538922f;
    n *= -1.17305899f;
    n = r2 += n;
    r6 = n += 0.34272861f;
    n += -1.72662294f;
    n *= -0.28597969f;
    n = r0 *= n;
    n = r1 *= n;
    n += r6;
    n *= -0.14362302f;
    n += 0.49239516f;
    r6 = n += -1.14984167f;
    n *= r0;
    n *= 0.22029290f;
    n = r3 *= n;
    n += r5;
    n *= -1.88874507f;
    n *= r3;
    n *= 1.19325483f;
    n += r4;
    n += r6;
    n *= r1;
    n += r2;
    return n;
} // Solution0

// Solution1 precision = 0.000086
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.33196938f;
    n *= 0.48872316f;
    r1 = n += 1.31320620f;
    r2 = n += -0.83637834f;
    n += -0.78383446f;
    n += r2;
    r2 = n += 1.40155542f;
    r3 = n *= 1.89053118f;
    r4 = n += -0.80028546f;
    r5 = n *= -1.32345414f;
    n *= 0.25036985f;
    n = r2 += n;
    r6 = n += 3.53832674f;
    n += -0.81619054f;
    n *= -0.38443586f;
    n = r0 *= n;
    n = r1 *= n;
    n += r6;
    n *= -0.22464620f;
    n += -0.78195202f;
    r6 = n += 0.87541652f;
    n *= r0;
    n *= 0.21746956f;
    n = r3 *= n;
    n += r5;
    n *= 0.61683494f;
    n *= r3;
    n *= 1.44406974f;
    n += r4;
    n += r6;
    n *= r1;
    n += r2;
    return n;
} // Solution1

// Solution2 precision = 0.000347
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.92846906f;
    n *= -0.33938935f;
    r1 = n += 1.50643992f;
    r2 = n += 0.09866089f;
    n += -0.37164626f;
    n += r2;
    r2 = n += 0.11824777f;
    r3 = n *= 0.91702789f;
    r4 = n += -0.34288487f;
    r5 = n *= -0.90036047f;
    n *= 1.38662422f;
    n = r2 += n;
    r6 = n += -1.07302725f;
    n += -1.02660060f;
    n *= -0.33088756f;
    n = r0 *= n;
    n = r1 *= n;
    n += r6;
    n *= -0.18304440f;
    n += -0.15154070f;
    r6 = n += -1.05894983f;
    n *= r0;
    n *= 0.12369916f;
    n = r3 *= n;
    n += r5;
    n *= 3.79421043f;
    n *= r3;
    n *= 0.60920864f;
    n += r4;
    n += r6;
    n *= r1;
    n += r2;
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
