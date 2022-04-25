// Run date: 04/24/22 18:03:42 Pacific Daylight Time
// Run duration = 1.076175 seconds
// Run count = 7
// Run units = 1
// Run population = 69632
// Run iterations = 512
// Run generations = 100
// Run samples = 15
// State Generation = 600

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

// Precision = 0.000029

// Solution0 precision = 0.000017
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.76212591f;
    r0 = n += 0.52949953f;
    n += -0.56985670f;
    n += -0.28943193f;
    n += -0.13760892f;
    r1 = n *= -0.16281824f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= 0.11884075f;
    r3 = n += -0.60969973f;
    r4 = n += -0.62541848f;
    n *= -1.18465483f;
    n *= -1.70450723f;
    n *= r2;
    n *= -0.02181686f;
    r2 = n += 0.72009844f;
    n *= 0.92634279f;
    n *= r1;
    n *= r2;
    n *= -1.14742351f;
    n += 0.01338792f;
    n *= r4;
    r4 = n *= -0.48831710f;
    r2 = n += 0.66170949f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -0.84104466f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.03875201f;
    return n;
} // Solution0

// Solution1 precision = 0.000029
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.19066471f;
    r0 = n += 0.99724507f;
    n += -0.58633226f;
    n += -0.13558365f;
    n += -0.68718421f;
    r1 = n *= -0.74998522f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= 0.21440792f;
    r3 = n += -0.87903935f;
    r4 = n += -0.60899693f;
    n *= 0.10886975f;
    n *= -0.68735772f;
    n *= r2;
    n *= -1.08941317f;
    r2 = n += -0.88027078f;
    n *= -1.14805031f;
    n *= r1;
    n *= r2;
    n *= -1.28985178f;
    n += -0.34098667f;
    n *= r4;
    r4 = n *= 0.15344460f;
    r2 = n += 0.73260653f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -0.89091986f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += -0.20058854f;
    return n;
} // Solution1

// Solution2 precision = 0.000007
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += 1.20343626f;
    r0 = n += -1.00123763f;
    n += -0.89864993f;
    n += 0.25665346f;
    n += -1.02598989f;
    r1 = n *= 1.45424068f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= 0.03014921f;
    r3 = n += -0.65000963f;
    r4 = n += 0.24033089f;
    n *= -1.59780085f;
    n *= -0.88418645f;
    n *= r2;
    n *= 0.09443976f;
    r2 = n += -0.69240081f;
    n *= 2.76924968f;
    n *= r1;
    n *= r2;
    n *= 0.28657544f;
    n += 0.45909381f;
    n *= r4;
    r4 = n *= -0.15710247f;
    r2 = n += 0.72321051f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 0.68648970f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.96677440f;
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
