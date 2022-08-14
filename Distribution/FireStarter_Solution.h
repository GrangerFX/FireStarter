// Run date: 08/13/22 17:49:55 Pacific Daylight Time
// Run duration = 2.348826 seconds
// Run count = 269
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_CODE;
// Run units = 1;
// Run process = 0;
// Run population = 4352;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 5;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 1;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 1345

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

#define SOLUTION_VARIATIONS 3

// Precision = 0.01028359

// Solution0 precision = 0.00168136
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -4.85139227f;
    r0 = n *= 0.04438967f;
    n += 0.76226825f;
    r1 = n += 0.73697400f;
    r2 = n += 0.61849999f;
    n *= -0.67264366f;
    r3 = n += 0.96960616f;
    n *= 0.34809884f;
    r4 = n *= -1.16783404f;
    n *= 0.47698617f;
    n = r2 += n;
    n += r2;
    n += 0.30847290f;
    n = r3 *= n;
    n *= 0.58312082f;
    r2 = n *= 0.06368951f;
    n += -0.29102951f;
    n = r0 += n;
    n += 0.00037527f;
    n *= r1;
    n += -0.24164969f;
    n += 1.00244677f;
    n = r2 += n;
    n += -0.53310776f;
    n = r4 += n;
    r1 = n *= 0.89483654f;
    n += r0;
    n = r4 += n;
    n *= r4;
    n *= r1;
    n += r2;
    n *= r3;
    return n;
} // Solution0

// Solution1 precision = 0.01018190
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.57440710f;
    r0 = n *= -0.40245894f;
    n += 0.74545813f;
    r1 = n += -1.10405219f;
    r2 = n += -0.35632145f;
    n *= -0.09107350f;
    r3 = n += 0.79696238f;
    n *= 0.47872132f;
    r4 = n *= 0.20699909f;
    n *= 0.33956954f;
    n = r2 += n;
    n += r2;
    n += -0.00591661f;
    n = r3 *= n;
    n *= -2.91219687f;
    r2 = n *= -0.07707485f;
    n += 0.55524784f;
    n = r0 += n;
    n += -0.16180092f;
    n *= r1;
    n += -4.06739426f;
    n += 0.33789241f;
    n = r2 += n;
    n += 0.60009670f;
    n = r4 += n;
    r1 = n *= -0.15157957f;
    n += r0;
    n = r4 += n;
    n *= r4;
    n *= r1;
    n += r2;
    n *= r3;
    return n;
} // Solution1

// Solution2 precision = 0.01028359
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 38.60939789f;
    r0 = n *= -0.01033486f;
    n += -0.82687360f;
    r1 = n += 0.53788644f;
    r2 = n += 0.20115344f;
    n *= 0.68373120f;
    r3 = n += 0.06200269f;
    n *= 0.83589619f;
    r4 = n *= -0.15126945f;
    n *= 0.44414672f;
    n = r2 += n;
    n += r2;
    n += 3.52893448f;
    n = r3 *= n;
    n *= -0.82092851f;
    r2 = n *= -0.65466237f;
    n += 0.60997075f;
    n = r0 += n;
    n += -0.09168709f;
    n *= r1;
    n += -0.70998776f;
    n += -0.71843201f;
    n = r2 += n;
    n += 1.34929323f;
    n = r4 += n;
    r1 = n *= -0.03752309f;
    n += r0;
    n = r4 += n;
    n *= r4;
    n *= r1;
    n += r2;
    n *= r3;
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
