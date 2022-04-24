// Run date: 04/24/22 09:39:57 Pacific Daylight Time
// Run duration = 2.029152 seconds
// Run count = 1
// Run units = 1
// Run population = 34816
// Run iterations = 256
// Run generations = 100
// Run samples = 15

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

// Precision = 0.000074

// Solution0 precision = 0.000059
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.75108409f;
    r0 = n += 0.18256903f;
    n += -1.16826820f;
    n += 0.23682156f;
    n += 0.43483436f;
    r1 = n *= -0.34310490f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= 0.11313687f;
    r3 = n += -0.37507287f;
    r4 = n += -0.52804047f;
    n *= -0.38197765f;
    n *= 0.96640348f;
    n *= r2;
    n *= 0.39303395f;
    r2 = n += 1.30698204f;
    n *= 0.50999725f;
    n *= r1;
    n *= r2;
    n *= -0.41667363f;
    n += 0.00936135f;
    n *= r4;
    r4 = n *= -0.61571151f;
    r2 = n += 0.87158006f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -0.95208192f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.30417097f;
    return n;
} // Solution0

// Solution1 precision = 0.000074
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.65934658f;
    r0 = n += 0.43959805f;
    n += 0.84363633f;
    n += -0.62664968f;
    n += -1.81207728f;
    r1 = n *= -0.34353980f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.09347064f;
    r3 = n += 0.39191172f;
    r4 = n += 0.52203417f;
    n *= -0.06109933f;
    n *= -1.93072367f;
    n *= r2;
    n *= 1.32809424f;
    r2 = n += -1.60258949f;
    n *= 0.84932303f;
    n *= r1;
    n *= r2;
    n *= -1.32217133f;
    n += 0.99041182f;
    n *= r4;
    r4 = n *= 0.08234348f;
    r2 = n += 0.84211850f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 1.02694011f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.42906556f;
    return n;
} // Solution1

// Solution2 precision = 0.000058
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.12006710f;
    r0 = n += -0.61209017f;
    n += -0.46666083f;
    n += 0.16221961f;
    n += -0.34775329f;
    r1 = n *= 0.37534088f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.05845542f;
    r3 = n += 0.71190810f;
    r4 = n += -0.20666307f;
    n *= 1.33832657f;
    n *= -0.34117106f;
    n *= r2;
    n *= -0.50714636f;
    r2 = n += -1.40153182f;
    n *= 1.06659102f;
    n *= r1;
    n *= r2;
    n *= -0.48153913f;
    n += -0.25335044f;
    n *= r4;
    r4 = n *= -0.24078824f;
    r2 = n += 0.81348383f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -0.79403526f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.85415345f;
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
