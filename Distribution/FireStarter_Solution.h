// Run date: 02/26/23 00:00:06 Pacific Standard Time
// Run duration = 2740.396032 seconds
// Run count = 5
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run units = 1
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 32
// Run seed = 99
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 5

#define SOLUTION_VARIATIONS 3

#ifndef __CUDACC__
#include <cmath>
#endif

#define SOLUTION_PI 3.14159265f
#define SOLUTION_MIN 0.0f
#define SOLUTION_MAX (2.0f * 3.14159265f)

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
        return fabsf(fmodf(fabsf(n - SOLUTION_PI * 0.5f), SOLUTION_PI * 2.0f) - SOLUTION_PI) - SOLUTION_PI * 0.5f;
    }
} // SolutionTarget

// Precision = 0.00046909

// Solution0 precision = 0.00020260
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -2.57178068f;
    r1 = n *= -1.02256846f;
    n *= -1.63586390f;
    n += 1.37829685f;
    r2 = n *= 0.15465131f;
    n *= 1.66909862f;
    r3 = n += -0.55229241f;
    r4 = n += -0.67594510f;
    n *= r2;
    n += 0.15833585f;
    n += -5.44219303f;
    n += 1.75060904f;
    r2 = n *= 0.23678578f;
    n = r2 *= n;
    n *= -12.23758507f;
    n *= r3;
    n += r0;
    n *= r2;
    n += r4;
    r4 = n += 0.19241545f;
    r2 = n += 0.36341295f;
    n *= -0.08098270f;
    n += 0.04707163f;
    n *= -0.74402356f;
    n *= r4;
    r4 = n *= -0.22474609f;
    n *= r1;
    n *= -1.04159749f;
    n *= r4;
    n *= 0.20888135f;
    n += r2;
    n *= 0.47750875f;
    return n;
} // Solution0

// Solution1 precision = 0.00020850
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -2.49723530f;
    r1 = n *= 1.12264669f;
    n *= -1.15192664f;
    n += 0.42581019f;
    r2 = n *= -0.71565861f;
    n *= -0.25521681f;
    r3 = n += 0.23040351f;
    r4 = n += -0.16979340f;
    n *= r2;
    n += -0.07964843f;
    n += 0.27618438f;
    n += 5.81174898f;
    r2 = n *= 0.34826049f;
    n = r2 *= n;
    n *= -0.94326776f;
    n *= r3;
    n += r0;
    n *= r2;
    n += r4;
    r4 = n += 2.73398685f;
    r2 = n += -1.38220692f;
    n *= 0.29580611f;
    n += -1.21461666f;
    n *= -0.03840842f;
    n *= r4;
    r4 = n *= -0.12801906f;
    n *= r1;
    n *= 0.62732160f;
    n *= r4;
    n *= 1.06738150f;
    n += r2;
    n *= -0.12980966f;
    return n;
} // Solution1

// Solution2 precision = 0.00046909
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -4.18589878f;
    r1 = n *= 0.35954094f;
    n *= 1.51558030f;
    n += 0.96180248f;
    r2 = n *= 0.76533914f;
    n *= 2.29773092f;
    r3 = n += -0.64263684f;
    r4 = n += 0.47415936f;
    n *= r2;
    n += 1.22367811f;
    n += -11.79962349f;
    n += 0.58480984f;
    r2 = n *= 0.14802372f;
    n = r2 *= n;
    n *= -1.24759853f;
    n *= r3;
    n += r0;
    n *= r2;
    n += r4;
    r4 = n += 2.44978976f;
    r2 = n += -0.38545194f;
    n *= -0.04151413f;
    n += 0.15968062f;
    n *= 0.96077019f;
    n *= r4;
    r4 = n *= 0.39649814f;
    n *= r1;
    n *= -1.26474237f;
    n *= r4;
    n *= 1.58524084f;
    n += r2;
    n *= 0.38311392f;
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
