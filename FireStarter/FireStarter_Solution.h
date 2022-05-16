// Run date: 05/15/22 17:10:58 Pacific Daylight Time
// Run duration = 1.841507 seconds
// Run count = 3
// Run units = 1
// Run population = 4352
// Run iterations = 512
// Run generations = 10
// Run samples = 15
// State Generation = 20

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

// Precision = 0.015309

// Solution0 precision = 0.015309
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.53426796f;
    r1 = n += -0.12787274f;
    r2 = n += -1.89507818f;
    r3 = n += 0.04417562f;
    r4 = n += -0.98633432f;
    r5 = n *= 0.06709240f;
    r6 = n += -0.45766735f;
    n = r2 += n;
    n += 1.07423663f;
    n += r5;
    n *= -0.57304949f;
    n += r3;
    r3 = n += -1.11296272f;
    n *= -0.79829925f;
    n += r6;
    n *= 0.42293385f;
    n *= r3;
    n *= r0;
    r0 = n += -1.05080569f;
    n *= 0.29713139f;
    n *= r2;
    n += 0.01011652f;
    n *= r0;
    n += -0.69204229f;
    n += 0.35872057f;
    n *= r1;
    n += -0.49600738f;
    r1 = n += -0.12347021f;
    n *= 0.87593734f;
    n += 0.24428871f;
    n *= r4;
    n += r1;
    return n;
} // Solution0

// Solution1 precision = 0.008765
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.24687961f;
    r1 = n += -0.77525854f;
    r2 = n += 0.21246701f;
    r3 = n += -0.54822665f;
    r4 = n += -0.01062512f;
    r5 = n *= -0.42125294f;
    r6 = n += -1.14522326f;
    n = r2 += n;
    n += 0.71417528f;
    n += r5;
    n *= -2.87260914f;
    n += r3;
    r3 = n += 0.25501928f;
    n *= 0.34040639f;
    n += r6;
    n *= 1.19133222f;
    n *= r3;
    n *= r0;
    r0 = n += 0.83597475f;
    n *= 4.79328251f;
    n *= r2;
    n += -0.79225290f;
    n *= r0;
    n += -0.58488011f;
    n += -0.04256875f;
    n *= r1;
    n += -1.36501634f;
    r1 = n += 1.44654334f;
    n *= 0.55899549f;
    n += 0.67462784f;
    n *= r4;
    n += r1;
    return n;
} // Solution1

// Solution2 precision = 0.013501
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.44920799f;
    r1 = n += 0.87599975f;
    r2 = n += 0.26173884f;
    r3 = n += 0.80927467f;
    r4 = n += -0.32105350f;
    r5 = n *= -0.53946567f;
    r6 = n += -0.38316500f;
    n = r2 += n;
    n += 0.14721437f;
    n += r5;
    n *= 0.25217131f;
    n += r3;
    r3 = n += 1.27126169f;
    n *= 0.86502612f;
    n += r6;
    n *= 0.96159786f;
    n *= r3;
    n *= r0;
    r0 = n += 0.37849241f;
    n *= -0.85864776f;
    n *= r2;
    n += -0.61777586f;
    n *= r0;
    n += -0.34396097f;
    n += -1.09526837f;
    n *= r1;
    n += -0.60970193f;
    r1 = n += 1.20063138f;
    n *= 0.12265670f;
    n += 0.62717658f;
    n *= r4;
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
