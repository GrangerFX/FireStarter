// Run date: 07/16/22 21:18:18 Pacific Daylight Time
// Run duration = 1.674473 seconds
// Run count = 4
// Run mode = 6
// Run units = 1
// Run process = 0
// Run states = 1
// Run population = 69632
// Run iterations = 512
// Run generations = 100
// Run samples = 15
// Run attempts = 32
// Run seed = 0
// Solution Generation = 300

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

// Precision = 0.00000107

// Solution0 precision = 0.00000077
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.14159274f;
    r0 = n *= 0.60573590f;
    n *= 0.74762797f;
    r1 = n *= 0.92886508f;
    n = r0 *= n;
    r2 = n += -0.49271807f;
    n *= -0.12488090f;
    r3 = n += -0.42377675f;
    r4 = n *= 0.05249999f;
    n *= r0;
    n *= 0.60411251f;
    r0 = n += -0.41419339f;
    r5 = n += -1.08498085f;
    n += 0.09531984f;
    r6 = n *= -0.91316617f;
    n = r3 += n;
    n += 0.11316244f;
    n *= r2;
    n += r5;
    n = r3 *= n;
    n = r1 *= n;
    n = r6 *= n;
    n += r1;
    n *= 0.49999499f;
    n *= r3;
    n *= r0;
    n *= r4;
    n += -1.32649577f;
    n *= -0.78600049f;
    n *= 0.40221998f;
    n += r6;
    n += -0.41936514f;
    return n;
} // Solution0

// Solution1 precision = 0.00000107
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.09065843f;
    r0 = n *= -0.20677139f;
    n *= -1.78564215f;
    r1 = n *= 1.03271365f;
    n = r0 *= n;
    r2 = n += 0.19130097f;
    n *= -0.45901704f;
    r3 = n += 0.29410008f;
    r4 = n *= -0.37316942f;
    n *= r0;
    n *= -0.21447672f;
    r0 = n += -0.56782180f;
    r5 = n += -0.66840464f;
    n += -0.58853436f;
    r6 = n *= 0.81015640f;
    n = r3 += n;
    n += -0.28496179f;
    n *= r2;
    n += r5;
    n = r3 *= n;
    n = r1 *= n;
    n = r6 *= n;
    n += r1;
    n *= -0.00048854f;
    n *= r3;
    n *= r0;
    n *= r4;
    n += -1.94671488f;
    n *= -0.05928377f;
    n *= 0.55072677f;
    n += r6;
    n += -0.18169031f;
    return n;
} // Solution1

// Solution2 precision = 0.00000036
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -2.61799383f;
    r0 = n *= 0.97359288f;
    n *= 0.30940586f;
    r1 = n *= 0.68645084f;
    n = r0 *= n;
    r2 = n += -0.81888384f;
    n *= -0.01625856f;
    r3 = n += 1.24195445f;
    r4 = n *= -1.01516390f;
    n *= r0;
    n *= -0.02305352f;
    r0 = n += -0.41392496f;
    r5 = n += 0.01567246f;
    n += -0.05548573f;
    r6 = n *= -1.79111779f;
    n = r3 += n;
    n += 0.00288032f;
    n *= r2;
    n += r5;
    n = r3 *= n;
    n = r1 *= n;
    n = r6 *= n;
    n += r1;
    n *= -0.11704457f;
    n *= r3;
    n *= r0;
    n *= r4;
    n += 0.73947704f;
    n *= -0.70838457f;
    n *= -0.88569152f;
    n += r6;
    n += 0.05964338f;
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
