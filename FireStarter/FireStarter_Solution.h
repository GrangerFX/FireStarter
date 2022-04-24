// Run date: 04/24/22 13:42:17 Pacific Daylight Time
// Run duration = 2.171270 seconds
// Run count = 3
// Run units = 1
// Run population = 34816
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// State Generation = 2

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

// Precision = 0.000166

// Solution0 precision = 0.000048
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n += -1.00109935f;
    r0 = n += 0.94700843f;
    n += 0.54517925f;
    n += 0.58731300f;
    n += -1.70851147f;
    r1 = n *= 0.17142490f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= 0.01451135f;
    r3 = n += -0.21361177f;
    n += 0.04222400f;
    n *= 1.44783711f;
    n *= -0.44393465f;
    n *= r2;
    n *= 2.25229073f;
    r2 = n += 0.68188161f;
    n *= -3.14402652f;
    n *= r1;
    n *= r2;
    n *= -2.21060586f;
    n += 0.34510136f;
    n = r3 += n;
    r2 = n *= -1.34691429f;
    r1 = n += 1.78727686f;
    n = r2 += n;
    n += 0.47449365f;
    n = r3 *= n;
    n += 0.13799073f;
    n *= r2;
    n *= r0;
    n *= r3;
    n += r1;
    return n;
} // Solution0

// Solution1 precision = 0.000063
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n += -0.52478701f;
    r0 = n += -0.02477661f;
    n += -0.14549869f;
    n += -0.29358831f;
    n += 0.61218482f;
    r1 = n *= -0.93663090f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.17164446f;
    r3 = n += 1.25129724f;
    n += -1.19396102f;
    n *= 0.95795453f;
    n *= 3.06738114f;
    n *= r2;
    n *= -0.86743361f;
    r2 = n += 0.54197925f;
    n *= 1.81467891f;
    n *= r1;
    n *= r2;
    n *= -1.17988086f;
    n += -0.24144012f;
    n = r3 += n;
    r2 = n *= -1.81416130f;
    r1 = n += -1.11090839f;
    n = r2 += n;
    n += 1.43789923f;
    n = r3 *= n;
    n += -0.13726643f;
    n *= r2;
    n *= r0;
    n *= r3;
    n += r1;
    return n;
} // Solution1

// Solution2 precision = 0.000166
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n += -1.09562564f;
    r0 = n += 0.11373087f;
    n += 0.67438656f;
    n += -0.38282138f;
    n += -0.36425358f;
    r1 = n *= -1.12627804f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= 0.26208726f;
    r3 = n += -0.17307398f;
    n += 0.13534591f;
    n *= -0.93502808f;
    n *= 0.82898629f;
    n *= r2;
    n *= -0.64216113f;
    r2 = n += -0.44479704f;
    n *= 2.09431458f;
    n *= r1;
    n *= r2;
    n *= 0.45484906f;
    n += 1.33187497f;
    n = r3 += n;
    r2 = n *= -0.87635118f;
    r1 = n += 2.16116142f;
    n = r2 += n;
    n += 1.77286804f;
    n = r3 *= n;
    n += 0.39893198f;
    n *= r2;
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
