// Run date: 05/16/22 13:57:59 Pacific Daylight Time
// Run duration = 5.613620 seconds
// Run count = 3
// Run units = 4
// Run population = 34816
// Run iterations = 128
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

// Precision = 0.000078

// Solution0 precision = 0.000020
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.34110692f;
    r0 = n += 1.07171988f;
    r1 = n *= -0.74412549f;
    r2 = n += 0.00010139f;
    n *= r1;
    n += -1.09400094f;
    r1 = n += 0.45812419f;
    r3 = n += -1.08245015f;
    r4 = n += -2.14015245f;
    n += r3;
    n += -0.76854581f;
    r3 = n *= 0.97311908f;
    n *= -0.73681265f;
    n = r2 *= n;
    r5 = n *= -0.00139604f;
    n *= -0.54414994f;
    n = r0 *= n;
    n *= -0.52460712f;
    n *= -1.23617709f;
    n += r0;
    r0 = n += 0.06128675f;
    n *= 1.04264224f;
    r6 = n *= 0.89450455f;
    n += -0.12744677f;
    n *= r5;
    n *= r0;
    n += r2;
    n *= r3;
    n *= r6;
    n *= r4;
    n *= r1;
    n += 0.00011326f;
    return n;
} // Solution0

// Solution1 precision = 0.000078
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.39591590f;
    r0 = n += 1.22295833f;
    r1 = n *= -0.53096616f;
    r2 = n += -0.00049962f;
    n *= r1;
    n += -0.65797257f;
    r1 = n += -0.33098644f;
    r3 = n += -1.04288101f;
    r4 = n += -0.22499253f;
    n += r3;
    n += 0.31944636f;
    r3 = n *= -0.27674878f;
    n *= -0.66037387f;
    n = r2 *= n;
    r5 = n *= 0.70884138f;
    n *= -0.01871570f;
    n = r0 *= n;
    n *= 2.21157932f;
    n *= 0.03346670f;
    n += r0;
    r0 = n += 1.17136145f;
    n *= 1.24745667f;
    r6 = n *= 1.00431502f;
    n += -0.25763184f;
    n *= r5;
    n *= r0;
    n += r2;
    n *= r3;
    n *= r6;
    n *= r4;
    n *= r1;
    n += -0.11887592f;
    return n;
} // Solution1

// Solution2 precision = 0.000025
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.47599936f;
    r0 = n += 1.24618948f;
    r1 = n *= -0.48399457f;
    r2 = n += 0.00001527f;
    n *= r1;
    n += -3.67120028f;
    r1 = n += 0.62392873f;
    r3 = n += -0.37884480f;
    r4 = n += 0.12783431f;
    n += r3;
    n += 0.15590258f;
    r3 = n *= -0.88929027f;
    n *= 0.40474296f;
    n = r2 *= n;
    r5 = n *= -0.64024973f;
    n *= -0.12989432f;
    n = r0 *= n;
    n *= 0.94481277f;
    n *= -0.51303113f;
    n += r0;
    r0 = n += 0.05090708f;
    n *= -0.69500023f;
    r6 = n *= 0.86880970f;
    n += -0.50049305f;
    n *= r5;
    n *= r0;
    n += r2;
    n *= r3;
    n *= r6;
    n *= r4;
    n *= r1;
    n += 0.52361727f;
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
