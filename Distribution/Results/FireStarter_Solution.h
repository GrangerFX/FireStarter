// Run date: 05/30/22 11:11:44 Pacific Daylight Time
// Run duration = 2.259319 seconds
// Run count = 8
// Run units = 1
// Run population = 34816
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// Solution Generation = 7

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

// Precision = 0.000062

// Solution0 precision = 0.000042
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.24237022f;
    r0 = n += 0.32977745f;
    n += 0.04236687f;
    n += -0.31558117f;
    n += -0.76193821f;
    r1 = n *= 0.18839215f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.05295835f;
    r3 = n += 0.37612534f;
    r4 = n += 0.41890103f;
    n *= -1.86342239f;
    n *= -0.24180350f;
    n *= r2;
    n *= 0.21680160f;
    r2 = n += -0.63288021f;
    n *= -0.33517623f;
    n *= r1;
    n *= r2;
    r2 = n *= 1.25227118f;
    n += r2;
    n *= r4;
    r4 = n *= -1.31014466f;
    r2 = n += 0.78740019f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 0.65545279f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.07663592f;
    return n;
} // Solution0

// Solution1 precision = 0.000062
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.02001210f;
    r0 = n += -0.45291996f;
    n += -0.93151104f;
    n += 0.02238821f;
    n += 0.38159794f;
    r1 = n *= -0.77638453f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.34639099f;
    r3 = n += 0.67281324f;
    r4 = n += 0.59156537f;
    n *= -1.37410104f;
    n *= 0.61110121f;
    n *= r2;
    n *= 0.01144363f;
    r2 = n += 0.23271325f;
    n *= -0.73475349f;
    n *= r1;
    n *= r2;
    r2 = n *= -1.34857631f;
    n += r2;
    n *= r4;
    r4 = n *= -0.97408456f;
    r2 = n += 0.99667931f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 1.33319521f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += -0.00147504f;
    return n;
} // Solution1

// Solution2 precision = 0.000034
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.07611113f;
    r0 = n += -0.14108157f;
    n += -0.54489517f;
    n += -0.02075866f;
    n += -0.27591768f;
    r1 = n *= 0.29737097f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.11726362f;
    r3 = n += 0.76949680f;
    r4 = n += 0.67456520f;
    n *= 0.42501885f;
    n *= 1.35045028f;
    n *= r2;
    n *= 0.03293221f;
    r2 = n += -0.42476702f;
    n *= -0.46471056f;
    n *= r1;
    n *= r2;
    r2 = n *= -1.52063000f;
    n += r2;
    n *= r4;
    r4 = n *= 0.41480139f;
    r2 = n += 0.53941596f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 0.65126294f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.35611975f;
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
