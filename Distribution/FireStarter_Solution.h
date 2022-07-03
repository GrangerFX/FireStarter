// Run date: 07/02/22 18:13:00 Pacific Daylight Time
// Run duration = 1.334214 seconds
// Run count = 511
// Run mode = 3
// Run clients = 4
// Run process = 0
// Run units = 1
// Run states = 1
// Run population = 69632
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

// Precision = 0.000029

// Solution0 precision = 0.000024
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -1.09490788f;
    n += -3.02729630f;
    n *= 0.28016105f;
    r1 = n += 0.27472273f;
    n += -0.57337153f;
    n *= r0;
    r0 = n += 0.34280601f;
    n *= -0.68829167f;
    n *= 0.65567863f;
    r2 = n *= 0.16922548f;
    r3 = n *= -0.67785889f;
    r4 = n += -0.46237952f;
    n = r2 *= n;
    r5 = n += -0.87292117f;
    n += r5;
    n *= r4;
    n += r3;
    r3 = n += -0.52403247f;
    n = r3 += n;
    n *= -0.22208205f;
    n += -0.61497968f;
    n += 0.13491659f;
    n += 1.39703870f;
    n += r2;
    r2 = n *= -0.80440575f;
    n += -0.85430050f;
    n = r0 += n;
    n += r2;
    n += r0;
    n *= r1;
    n *= r3;
    n += -0.00004416f;
    return n;
} // Solution0

// Solution1 precision = 0.000008
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14087892f;
    n += 0.25746524f;
    n *= -0.05333813f;
    r1 = n += 0.01105565f;
    n += -0.00268191f;
    n *= r0;
    r0 = n += 1.08137357f;
    n *= 0.70014989f;
    n *= 0.66040140f;
    r2 = n *= 0.81107819f;
    r3 = n *= 1.10619330f;
    r4 = n += 1.06192040f;
    n = r2 *= n;
    r5 = n += 0.04011107f;
    n += r5;
    n *= r4;
    n += r3;
    r3 = n += 0.20280999f;
    n = r3 += n;
    n *= 1.54494572f;
    n += 0.42996246f;
    n += 0.26790389f;
    n += -0.80392021f;
    n += r2;
    r2 = n *= 0.04356417f;
    n += 0.32068717f;
    n = r0 += n;
    n += r2;
    n += r0;
    n *= r1;
    n *= r3;
    n += -0.11816379f;
    return n;
} // Solution1

// Solution2 precision = 0.000029
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.79965377f;
    n += 0.40717992f;
    n *= 0.12732838f;
    r1 = n += 0.09861699f;
    n += 0.15045008f;
    n *= r0;
    r0 = n += -0.19540682f;
    n *= -0.31837010f;
    n *= -0.40003532f;
    r2 = n *= -1.67714882f;
    r3 = n *= 0.68300009f;
    r4 = n += 0.82223028f;
    n = r2 *= n;
    r5 = n += 0.16217983f;
    n += r5;
    n *= r4;
    n += r3;
    r3 = n += 0.56921548f;
    n = r3 += n;
    n *= 0.86632442f;
    n += -1.78119791f;
    n += 0.40758362f;
    n += 0.19712131f;
    n += r2;
    r2 = n *= -1.28877163f;
    n += -0.21936305f;
    n = r0 += n;
    n += r2;
    n += r0;
    n *= r1;
    n *= r3;
    n += 0.52362645f;
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
