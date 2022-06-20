// Run date: 06/19/22 23:20:36 Pacific Daylight Time
// Run duration = 4.821938 seconds
// Run count = 6
// Run units = 4
// Run population = 34816
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// Solution Generation = 5

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

// Precision = 0.000077

// Solution0 precision = 0.000046
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.25060394f;
    r0 = n += 0.18814531f;
    n += -1.20737445f;
    n += -0.65125757f;
    n += -0.81955183f;
    r1 = n *= -2.60005784f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= 0.01321122f;
    r3 = n += 0.27508357f;
    r4 = n += -0.25176549f;
    n *= -0.90917850f;
    n *= 1.19880354f;
    n *= r2;
    n *= -1.14183712f;
    r2 = n += -0.57008642f;
    n *= 0.55875331f;
    n *= r1;
    n *= r2;
    n *= -1.15882850f;
    r2 = n += -0.31961820f;
    n *= r4;
    r4 = n *= -0.67750150f;
    r1 = n += -0.94652218f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 1.06404924f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += r1;
    return n;
} // Solution0

// Solution1 precision = 0.000077
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.53447646f;
    r0 = n += -0.13393678f;
    n += -0.90901947f;
    n += -1.37378049f;
    n += -0.90712309f;
    r1 = n *= -1.42031169f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.15392780f;
    r3 = n += 0.91014332f;
    r4 = n += 0.58717185f;
    n *= -0.02165735f;
    n *= -0.18563943f;
    n *= r2;
    n *= -0.34011757f;
    r2 = n += 0.46656945f;
    n *= -0.53940099f;
    n *= r1;
    n *= r2;
    n *= 1.02133167f;
    r2 = n += -0.90528154f;
    n *= r4;
    r4 = n *= 0.74340701f;
    r1 = n += -0.04213548f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -1.19942653f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += r1;
    return n;
} // Solution1

// Solution2 precision = 0.000046
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += 1.08334672f;
    r0 = n += -1.24084556f;
    n += -0.25223207f;
    n += 0.68736148f;
    n += -1.88973486f;
    r1 = n *= 0.44400802f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.10743903f;
    r3 = n += 0.53075945f;
    r4 = n += 0.42890051f;
    n *= 0.41911039f;
    n *= 0.07356708f;
    n *= r2;
    n *= 0.72171199f;
    r2 = n += -0.51913983f;
    n *= -1.38985980f;
    n *= r1;
    n *= r2;
    n *= -0.36834642f;
    r2 = n += 0.04823347f;
    n *= r4;
    r4 = n *= 0.64115244f;
    r1 = n += 0.79296041f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 0.76066536f;
    n *= r4;
    n *= r0;
    n *= r3;
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
