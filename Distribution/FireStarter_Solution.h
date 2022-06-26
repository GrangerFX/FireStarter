// Run date: 06/26/22 14:54:45 Pacific Daylight Time
// Run duration = 3.751809 seconds
// Run count = 8
// Run units = 1
// Run population = 69632
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// Solution Generation = 7

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

// Precision = 0.000053

// Solution0 precision = 0.000031
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.32565153f;
    r0 = n += 0.94736558f;
    n += -0.42176306f;
    n += -0.76324552f;
    n += 0.61810541f;
    r1 = n *= -0.36996543f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.09636400f;
    r3 = n += 0.37044489f;
    r4 = n += 0.40009493f;
    n *= -0.52722740f;
    n *= 0.42622921f;
    n *= r2;
    n *= 0.74743891f;
    r2 = n += 1.01680601f;
    n *= -0.32082301f;
    n *= r1;
    n *= r2;
    r2 = n *= 1.45099056f;
    n += r2;
    n *= r4;
    r4 = n *= 0.30596539f;
    r2 = n += 0.99471617f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 0.78610379f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.04540416f;
    return n;
} // Solution0

// Solution1 precision = 0.000041
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.44027308f;
    r0 = n += -0.21475616f;
    n += -0.64277977f;
    n += -0.23038130f;
    n += 0.26897305f;
    r1 = n *= -0.78971571f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= 0.28708985f;
    r3 = n += -0.56678015f;
    r4 = n += -0.42552891f;
    n *= 0.38387629f;
    n *= -0.13023889f;
    n *= r2;
    n *= 2.72971797f;
    r2 = n += 1.90860140f;
    n *= 0.48386717f;
    n *= r1;
    n *= r2;
    r2 = n *= -0.04293368f;
    n += r2;
    n *= r4;
    r4 = n *= -1.05577767f;
    r2 = n += 1.21381283f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -1.19295812f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += -0.10664373f;
    return n;
} // Solution1

// Solution2 precision = 0.000053
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.12495251f;
    r0 = n += -0.31656298f;
    n += -1.71429718f;
    n += 0.80710638f;
    n += 0.16308732f;
    r1 = n *= 0.26437518f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.15026826f;
    r3 = n += 0.88171780f;
    r4 = n += 0.88942307f;
    n *= 1.55331123f;
    n *= 0.02012169f;
    n *= r2;
    n *= 0.51703721f;
    r2 = n += -0.56640214f;
    n *= 1.30910981f;
    n *= r1;
    n *= r2;
    r2 = n *= 0.25466165f;
    n += r2;
    n *= r4;
    r4 = n *= 0.38755026f;
    r2 = n += 0.47223660f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 0.78493041f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.47408953f;
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
