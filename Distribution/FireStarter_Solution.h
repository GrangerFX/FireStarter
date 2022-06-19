// Run date: 06/19/22 13:30:35 Pacific Daylight Time
// Run duration = 6.427751 seconds
// Run count = 10
// Run units = 4
// Run population = 34816
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// Solution Generation = 9

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

// Precision = 0.000093

// Solution0 precision = 0.000073
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.66326123f;
    r0 = n += -0.36558199f;
    n += -0.90607095f;
    r1 = n += -0.61067855f;
    n *= 0.92655367f;
    r2 = n += -0.49663895f;
    n += 0.74118727f;
    r3 = n *= 0.26265875f;
    n = r3 += n;
    r4 = n *= 0.23194239f;
    n *= r2;
    n += -2.04206133f;
    r2 = n *= 0.75901061f;
    r5 = n *= 0.50019014f;
    n *= r1;
    n *= -0.17951643f;
    n = r5 += n;
    n += r4;
    n = r0 *= n;
    n *= 0.19066939f;
    n += r5;
    n += r2;
    n *= 0.51690894f;
    r2 = n += -0.52121854f;
    r5 = n *= -0.59556204f;
    n *= -0.44787911f;
    n += -0.68105882f;
    n *= r0;
    n *= r3;
    n += -0.31924272f;
    n *= r2;
    n *= r5;
    return n;
} // Solution0

// Solution1 precision = 0.000093
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.88257527f;
    r0 = n += 0.72245854f;
    n += -0.01764614f;
    r1 = n += 1.21528995f;
    n *= -0.21191557f;
    r2 = n += 0.30327272f;
    n += -0.20719247f;
    r3 = n *= -0.82626992f;
    n = r3 += n;
    r4 = n *= -0.11666499f;
    n *= r2;
    n += -0.97327173f;
    r2 = n *= -0.74109966f;
    r5 = n *= 0.48539644f;
    n *= r1;
    n *= -0.07865337f;
    n = r5 += n;
    n += r4;
    n = r0 *= n;
    n *= 0.40396526f;
    n += r5;
    n += r2;
    n *= -0.35968265f;
    r2 = n += -0.34890521f;
    r5 = n *= 2.92175627f;
    n *= 1.55029595f;
    n += 0.28904292f;
    n *= r0;
    n *= r3;
    n += 0.80279541f;
    n *= r2;
    n *= r5;
    return n;
} // Solution1

// Solution2 precision = 0.000087
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.59748906f;
    r0 = n += -0.77976292f;
    n += -0.53201658f;
    r1 = n += -0.96361530f;
    n *= 1.06678474f;
    r2 = n += 0.82001346f;
    n += 0.64913243f;
    r3 = n *= -0.14932738f;
    n = r3 += n;
    r4 = n *= 0.48170531f;
    n *= r2;
    n += 1.18853009f;
    r2 = n *= 0.46037406f;
    r5 = n *= 1.33622992f;
    n *= r1;
    n *= -0.22141790f;
    n = r5 += n;
    n += r4;
    n = r0 *= n;
    n *= 0.22947861f;
    n += r5;
    n += r2;
    n *= 0.44337711f;
    r2 = n += 1.54467964f;
    r5 = n *= -0.79848903f;
    n *= 1.08378899f;
    n += 0.37739640f;
    n *= r0;
    n *= r3;
    n += -0.32311985f;
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
