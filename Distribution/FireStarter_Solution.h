// Run date: 07/04/22 11:42:09 Pacific Daylight Time
// Run duration = 5.556349 seconds
// Run count = 1
// Run mode = 3
// Run clients = 4
// Run process = 1
// Run units = 4
// Run states = 4
// Run population = 8704
// Run iterations = 128
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

// Precision = 0.000051

// Solution0 precision = 0.000051
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n += -3.14159250f;
    r0 = n *= -0.66481316f;
    n *= -1.27974510f;
    r1 = n *= -1.09309351f;
    n = r0 *= n;
    n *= 0.19895540f;
    n *= 0.47701198f;
    r2 = n += 0.07587139f;
    r3 = n *= -0.66142607f;
    n *= r0;
    n *= -0.17568441f;
    n *= 0.05485541f;
    n *= -0.28332162f;
    n += 1.20527887f;
    r0 = n *= -1.44198585f;
    n = r2 += n;
    n += 0.44545290f;
    n *= 1.03782272f;
    n += 0.65087521f;
    n = r2 *= n;
    n = r1 *= n;
    n = r0 *= n;
    n += r1;
    n *= 0.70051110f;
    n = r2 *= n;
    n *= -0.14599495f;
    n *= r3;
    n += 0.42920280f;
    n *= 0.00000081f;
    n += r2;
    n += r0;
    n *= -0.46712175f;
    return n;
} // Solution0

// Solution1 precision = 0.000028
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n += -3.09065771f;
    r0 = n *= -0.82152230f;
    n *= -0.68519264f;
    r1 = n *= -0.51538026f;
    n = r0 *= n;
    n *= 0.57850081f;
    n *= -0.38621688f;
    r2 = n += 0.66276228f;
    r3 = n *= 0.06348116f;
    n *= r0;
    n *= -0.80777270f;
    n *= -0.68262494f;
    n *= 0.22810851f;
    n += -0.72625774f;
    r0 = n *= -0.74983883f;
    n = r2 += n;
    n += 0.09617335f;
    n *= -0.28528386f;
    n += -0.65315443f;
    n = r2 *= n;
    n = r1 *= n;
    n = r0 *= n;
    n += r1;
    n *= -1.57458305f;
    n = r2 *= n;
    n *= 0.67516625f;
    n *= r3;
    n += -0.27191415f;
    n *= -0.49795306f;
    n += r2;
    n += r0;
    n *= -0.87247366f;
    return n;
} // Solution1

// Solution2 precision = 0.000029
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n += -2.61799431f;
    r0 = n *= 0.88934302f;
    n *= -0.92279595f;
    r1 = n *= 1.16976798f;
    n = r0 *= n;
    n *= -0.21497530f;
    n *= -0.79530126f;
    r2 = n += -0.10693339f;
    r3 = n *= -0.90842503f;
    n *= r0;
    n *= -0.51578331f;
    n *= -0.19144998f;
    n *= -0.07843795f;
    n += 0.72277087f;
    r0 = n *= 1.11581898f;
    n = r2 += n;
    n += 0.15963320f;
    n *= -0.20307755f;
    n += -1.19296551f;
    n = r2 *= n;
    n = r1 *= n;
    n = r0 *= n;
    n += r1;
    n *= -0.18581599f;
    n = r2 *= n;
    n *= 0.24602279f;
    n *= r3;
    n += -0.76600331f;
    n *= 0.71129131f;
    n += r2;
    n += r0;
    n *= -0.96099192f;
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
