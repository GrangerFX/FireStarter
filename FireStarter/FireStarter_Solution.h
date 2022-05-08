// Run date: 05/07/22 16:47:18 Pacific Daylight Time
// Run duration = 0.588037 seconds
// Run count = 1
// Run units = 1
// Run population = 34816
// Run iterations = 128
// Run generations = 50
// Run samples = 15
// State Generation = 0

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

// Precision = 0.001096

// Solution0 precision = 0.001046
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.02525890f;
    r0 = n += -1.05427408f;
    n += -3.84135890f;
    n += 0.77546263f;
    n += 0.15600757f;
    r1 = n *= -0.59588653f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= 0.29532120f;
    r3 = n += -0.96908993f;
    r4 = n += -0.31894028f;
    n *= -0.61702800f;
    n *= 0.09416116f;
    n *= r2;
    n *= 1.21595168f;
    r2 = n += 0.46311900f;
    n *= 0.79200095f;
    n *= r1;
    n *= r2;
    n *= 0.53830820f;
    n += -0.83807474f;
    n *= r4;
    r4 = n *= -0.39375287f;
    r2 = n += -0.72032928f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -0.23585564f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.96066529f;
    return n;
} // Solution0

// Solution1 precision = 0.000337
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.41234413f;
    r0 = n += 0.83938044f;
    n += -0.49920604f;
    n += 0.62365019f;
    n += 1.18418491f;
    r1 = n *= -0.90461457f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.60598952f;
    r3 = n += -0.93135178f;
    r4 = n += 0.28972334f;
    n *= 0.14280389f;
    n *= -0.12821248f;
    n *= r2;
    n *= 0.46809357f;
    r2 = n += 1.03524125f;
    n *= 0.67354971f;
    n *= r1;
    n *= r2;
    n *= 0.66146505f;
    n += 0.11796405f;
    n *= r4;
    r4 = n *= -0.42565969f;
    r2 = n += 1.03455150f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -1.31623793f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += -0.13139148f;
    return n;
} // Solution1

// Solution2 precision = 0.001096
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += 1.44345534f;
    r0 = n += -1.04653573f;
    n += -0.12103937f;
    n += -0.78251487f;
    n += 0.14095439f;
    r1 = n *= 0.55505729f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.06319143f;
    r3 = n += 0.82236379f;
    r4 = n += 0.14579871f;
    n *= 0.91733479f;
    n *= -0.42956442f;
    n *= r2;
    n *= -0.35279781f;
    r2 = n += -1.31503224f;
    n *= -0.59871155f;
    n *= r1;
    n *= r2;
    n *= 1.06577885f;
    n += 0.09342591f;
    n *= r4;
    r4 = n *= -0.09936357f;
    r2 = n += 0.64476782f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -0.15489677f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += -0.17441654f;
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
