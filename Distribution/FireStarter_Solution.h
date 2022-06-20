// Run date: 06/19/22 18:40:14 Pacific Daylight Time
// Run duration = 5.891232 seconds
// Run count = 4
// Run units = 4
// Run population = 34816
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// Solution Generation = 3

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

// Precision = 0.000103

// Solution0 precision = 0.000075
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.44400039f;
    r0 = n += 0.44887522f;
    n += 0.57334256f;
    r1 = n += -0.00739473f;
    n *= -0.37112203f;
    r2 = n += 0.17722751f;
    n += -0.11429123f;
    r3 = n *= -0.88713485f;
    n = r3 += n;
    r4 = n *= 0.18033153f;
    n *= r2;
    n += 1.35324776f;
    r2 = n *= -0.51293212f;
    r5 = n *= -0.87885046f;
    n *= r1;
    n *= 0.23572749f;
    n = r5 += n;
    n += r4;
    n = r0 *= n;
    n *= -0.56909311f;
    n += r5;
    n += r2;
    n *= -0.48407772f;
    r2 = n += -0.74417800f;
    r5 = n *= 3.89731216f;
    n += 1.00954056f;
    n += -0.26741222f;
    n *= r0;
    n *= r3;
    n += 0.39398873f;
    n *= r2;
    n *= r5;
    return n;
} // Solution0

// Solution1 precision = 0.000084
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.25744581f;
    r0 = n += -0.13027844f;
    n += -0.25572869f;
    r1 = n += -0.56036466f;
    n *= 0.54054236f;
    r2 = n += 0.20593980f;
    n += 0.03554028f;
    r3 = n *= -0.44752768f;
    n = r3 += n;
    r4 = n *= -0.51690310f;
    n *= r2;
    n += -1.12783885f;
    r2 = n *= -0.97965986f;
    r5 = n *= 0.63942379f;
    n *= r1;
    n *= 0.19497398f;
    n = r5 += n;
    n += r4;
    n = r0 *= n;
    n *= -1.23023880f;
    n += r5;
    n += r2;
    n *= 0.81261653f;
    r2 = n += 1.02933145f;
    r5 = n *= 1.14765084f;
    n += 0.10908670f;
    n += 0.40238816f;
    n *= r0;
    n *= r3;
    n += 0.17284870f;
    n *= r2;
    n *= r5;
    return n;
} // Solution1

// Solution2 precision = 0.000103
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.41441658f;
    r0 = n += -0.92186046f;
    n += -0.13691954f;
    r1 = n += -0.67359388f;
    n *= 0.36800456f;
    r2 = n += -0.32464489f;
    n += 0.86858803f;
    r3 = n *= -0.98684376f;
    n = r3 += n;
    r4 = n *= 0.33782491f;
    n *= r2;
    n += 0.60057449f;
    r2 = n *= 0.48146629f;
    r5 = n *= 1.59767306f;
    n *= r1;
    n *= -0.55264401f;
    n = r5 += n;
    n += r4;
    n = r0 *= n;
    n *= 0.25365734f;
    n += r5;
    n += r2;
    n *= 1.12529743f;
    r2 = n += 1.23923266f;
    r5 = n *= -0.74140435f;
    n += 0.28075078f;
    n += 0.06216854f;
    n *= r0;
    n *= r3;
    n += -0.19410242f;
    n *= r2;
    n *= r5;
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
