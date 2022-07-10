// Run date: 07/10/22 12:31:34 Pacific Daylight Time
// Run duration = 1.793133 seconds
// Run count = 12
// Run mode = 4
// Run clients = 4
// Run process = 0
// Run units = 1
// Run states = 1
// Run population = 69632
// Run iterations = 512
// Run generations = 100
// Run samples = 15
// Run attempts = 32
// Run seed = 0
// Solution Generation = 1100

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

// Precision = 0.00000036

// Solution0 precision = 0.00000030
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.14159274f;
    r0 = n *= 1.35971260f;
    r1 = n *= 0.14601377f;
    r2 = n *= 1.16322422f;
    n = r0 *= n;
    r3 = n += -0.98630548f;
    n *= 0.00463927f;
    r4 = n += -0.21300766f;
    n *= -0.15136524f;
    n *= r0;
    r0 = n += -0.91478097f;
    r5 = n += -0.87740201f;
    n *= 1.20770836f;
    n += 1.25299871f;
    n *= 0.00000001f;
    n = r4 += n;
    n = r4 += n;
    n *= r3;
    n += 1.64741659f;
    n = r4 *= n;
    n = r2 *= n;
    r3 = n *= 1.18753040f;
    n += r2;
    n *= r5;
    n = r4 *= n;
    n *= -0.25127900f;
    n *= r0;
    n += 0.00000005f;
    n *= 1.24337411f;
    n += r4;
    n += r3;
    n += r1;
    return n;
} // Solution0

// Solution1 precision = 0.00000036
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.09065866f;
    r0 = n *= -0.92975271f;
    r1 = n *= 0.21202841f;
    r2 = n *= -0.78341383f;
    n = r0 *= n;
    r3 = n += 0.68090332f;
    n *= 0.03033940f;
    r4 = n += 0.57955712f;
    n *= -0.01947821f;
    n *= r0;
    r0 = n += -0.06650536f;
    r5 = n += -0.31217256f;
    n *= 0.51008213f;
    n += -0.32638597f;
    n *= -0.45889151f;
    n = r4 += n;
    n = r4 += n;
    n *= r3;
    n += 1.68637407f;
    n = r4 *= n;
    n = r2 *= n;
    r3 = n *= -0.70830619f;
    n += r2;
    n *= r5;
    n = r4 *= n;
    n *= -0.00345061f;
    n *= r0;
    n += -1.73282623f;
    n *= 0.06817287f;
    n += r4;
    n += r3;
    n += r1;
    return n;
} // Solution1

// Solution2 precision = 0.00000036
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.61799383f;
    r0 = n *= -0.72052777f;
    r1 = n *= -0.35841560f;
    r2 = n *= -1.06103659f;
    n = r0 *= n;
    r3 = n += -0.57430381f;
    n *= -0.03210359f;
    r4 = n += 0.81017447f;
    n *= -0.01286912f;
    n *= r0;
    r0 = n += 0.04196423f;
    r5 = n += 0.18820463f;
    n *= -0.75532949f;
    n += 0.13311405f;
    n *= -1.47166324f;
    n = r4 += n;
    n = r4 += n;
    n *= r3;
    n += -1.51776135f;
    n = r4 *= n;
    n = r2 *= n;
    r3 = n *= -0.53147566f;
    n += r2;
    n *= r5;
    n = r4 *= n;
    n *= 0.00066122f;
    n *= r0;
    n += -2.70163512f;
    n *= -0.19380812f;
    n += r4;
    n += r3;
    n += r1;
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
