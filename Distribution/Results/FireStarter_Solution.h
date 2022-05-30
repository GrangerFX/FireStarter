// Run date: 05/28/22 13:28:33 Pacific Daylight Time
// Run duration = 5.300953 seconds
// Run count = 3
// Run units = 1
// Run population = 34816
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// Solution Generation = 2

#ifndef __CUDACC__
#include <cmath>
#endif

// TARGET //
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
// END //
#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define SOLUTION_VARIATIONS 3

// Precision = 0.000082

// Solution0 precision = 0.000082
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.01827671f;
    r0 = n += -0.69863951f;
    n += -0.11335667f;
    n += -0.39061972f;
    n += 0.03892213f;
    r1 = n *= -0.38123229f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= 0.09732363f;
    r3 = n += -0.27470502f;
    r4 = n += -0.42974371f;
    n *= -0.35466716f;
    n *= 1.41711891f;
    n *= r2;
    n *= 0.22105056f;
    r2 = n += 0.64637005f;
    n *= 0.64160049f;
    n *= r1;
    n *= r2;
    n *= -1.00165105f;
    n += 0.00691607f;
    n *= r4;
    r4 = n *= -1.08809197f;
    r2 = n += 1.04228151f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -0.95811987f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.41714984f;
    return n;
} // Solution0

// Solution1 precision = 0.000061
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.68705928f;
    r0 = n += -2.36704898f;
    n += 0.15558442f;
    n += 1.08677065f;
    n += 0.06979672f;
    r1 = n *= -0.59412533f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= 0.22245419f;
    r3 = n += 0.31145933f;
    r4 = n += 0.74530280f;
    n *= 1.45763159f;
    n *= 0.25967321f;
    n *= r2;
    n *= 0.09959588f;
    r2 = n += -0.79312509f;
    n *= 1.17465937f;
    n *= r1;
    n *= r2;
    n *= -0.19345513f;
    n += -0.15487739f;
    n *= r4;
    r4 = n *= -0.59672469f;
    r2 = n += 0.85575950f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 1.68882084f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += -1.21409965f;
    return n;
} // Solution1

// Solution2 precision = 0.000051
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.41475791f;
    r0 = n += 0.59107488f;
    n += -0.40167132f;
    n += 0.68081254f;
    n += -0.58343953f;
    r1 = n *= -1.38230681f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= 0.43977085f;
    r3 = n += 0.98693049f;
    r4 = n += 0.91218781f;
    n *= -0.04065194f;
    n *= -0.32896620f;
    n *= r2;
    n *= -0.59320426f;
    r2 = n += 0.20875092f;
    n *= 0.67608172f;
    n *= r1;
    n *= r2;
    n *= -1.37026608f;
    n += -0.04627655f;
    n *= r4;
    r4 = n *= -0.67088544f;
    r2 = n += -0.66930491f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -0.77128953f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.13193144f;
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
