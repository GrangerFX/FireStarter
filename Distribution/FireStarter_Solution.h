// Run date: 06/19/22 10:49:34 Pacific Daylight Time
// Run duration = 6.862660 seconds
// Run count = 7
// Run units = 4
// Run population = 34816
// Run iterations = 128
// Run generations = 100
// Run samples = 15
// Solution Generation = 6

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

// Precision = 0.000099

// Solution0 precision = 0.000068
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.01993775f;
    r1 = n += 0.09797844f;
    n += r0;
    r0 = n += -0.42631897f;
    n *= 1.24357533f;
    r2 = n += -0.37403205f;
    n += 0.47754133f;
    r3 = n *= 0.40380728f;
    n = r3 += n;
    r4 = n *= -0.01169382f;
    n *= r2;
    r2 = n += 1.06684041f;
    n *= 0.00623513f;
    r5 = n *= 1.24463058f;
    n *= r0;
    n *= 0.56210893f;
    n *= -0.35929340f;
    n += r4;
    n = r1 *= n;
    n += r2;
    n += r5;
    n = r1 += n;
    n *= -0.21334878f;
    r5 = n += -0.87147570f;
    r2 = n *= 0.53856385f;
    n += 0.52412122f;
    n += -0.64055175f;
    n *= r1;
    n *= r3;
    n += -0.00135155f;
    n *= r5;
    n *= r2;
    return n;
} // Solution0

// Solution1 precision = 0.000099
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.96118689f;
    r1 = n += 0.24212563f;
    n += r0;
    r0 = n += -0.96940517f;
    n *= -0.21198928f;
    r2 = n += 0.57778186f;
    n += -0.41031978f;
    r3 = n *= -0.13035950f;
    n = r3 += n;
    r4 = n *= 0.40379557f;
    n *= r2;
    r2 = n += -1.39388168f;
    n *= 0.07339660f;
    r5 = n *= 0.11099201f;
    n *= r0;
    n *= 1.21564829f;
    n *= 0.09211216f;
    n += r4;
    n = r1 *= n;
    n += r2;
    n += r5;
    n = r1 += n;
    n *= -0.76908666f;
    r5 = n += 0.86190784f;
    r2 = n *= -0.71838075f;
    n += 0.14407721f;
    n += -1.16627932f;
    n *= r1;
    n *= r3;
    n += 0.28736469f;
    n *= r5;
    n *= r2;
    return n;
} // Solution1

// Solution2 precision = 0.000088
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.53212428f;
    r1 = n += -1.09685314f;
    n += r0;
    r0 = n += 0.79252791f;
    n *= 0.48819938f;
    r2 = n += 1.08349657f;
    n += -0.73746204f;
    r3 = n *= -0.33874607f;
    n = r3 += n;
    r4 = n *= 0.13856807f;
    n *= r2;
    r2 = n += 1.44132102f;
    n *= 0.00814695f;
    r5 = n *= 1.11318564f;
    n *= r0;
    n *= -0.28694314f;
    n *= 2.12002444f;
    n += r4;
    n = r1 *= n;
    n += r2;
    n += r5;
    n = r1 += n;
    n *= 0.10035621f;
    r5 = n += 1.11535847f;
    r2 = n *= 0.81274050f;
    n += 0.12977080f;
    n += -0.37422422f;
    n *= r1;
    n *= r3;
    n += 0.62392449f;
    n *= r5;
    n *= r2;
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
