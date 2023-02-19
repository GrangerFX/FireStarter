// Run date: 02/19/23 13:54:07 Pacific Standard Time
// Run duration = 33.122389 seconds
// Run count = 66
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
// Run seed = 638
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 66

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

// Precision = 0.00000286

// Solution0 precision = 0.00000010
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159274f;
    n = r0 += n;
    r1 = n *= -0.24946456f;
    n *= 0.23191305f;
    n = r0 *= n;
    r2 = n += 0.80701250f;
    n *= 1.03386867f;
    r3 = n *= -0.00623674f;
    n += -1.51042163f;
    n *= -1.87965119f;
    n = r3 *= n;
    n *= 2.79854369f;
    r4 = n += -0.56139761f;
    r5 = n += 0.08273744f;
    n += r3;
    n += r5;
    n = r4 *= n;
    n = r0 *= n;
    n *= 0.00131586f;
    r5 = n *= 0.51682705f;
    n += r2;
    n += -0.77288765f;
    n += 3.11671925f;
    n = r0 += n;
    n = r5 *= n;
    n *= 3.78688121f;
    n *= r5;
    n *= 4.99916267f;
    n += r4;
    n *= r1;
    n *= r0;
    n += 0.00000001f;
    return n;
} // Solution0

// Solution1 precision = 0.00000286
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09066057f;
    n = r0 += n;
    r1 = n *= -0.26427034f;
    n *= 0.11145990f;
    n = r0 *= n;
    r2 = n += 5.72109985f;
    n *= 0.96982670f;
    r3 = n *= -0.12008476f;
    n += -0.98174387f;
    n *= -0.49969134f;
    n = r3 *= n;
    n *= -0.61767590f;
    r4 = n += -0.11263400f;
    r5 = n += 1.56109571f;
    n += r3;
    n += r5;
    n = r4 *= n;
    n = r0 *= n;
    n *= 1.94508922f;
    r5 = n *= 0.01193038f;
    n += r2;
    n += -1.85927403f;
    n += -0.82238543f;
    n = r0 += n;
    n = r5 *= n;
    n *= 4.10156012f;
    n *= r5;
    n *= 0.12293565f;
    n += r4;
    n *= r1;
    n *= r0;
    n += -0.11813276f;
    return n;
} // Solution1

// Solution2 precision = 0.00000179
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799383f;
    n = r0 += n;
    r1 = n *= -0.52533537f;
    n *= 0.01320782f;
    n = r0 *= n;
    r2 = n += 0.25705796f;
    n *= 4.94293356f;
    r3 = n *= 0.06600416f;
    n += 2.40242577f;
    n *= 3.37689257f;
    n = r3 *= n;
    n *= 0.16128594f;
    r4 = n += 0.60565305f;
    r5 = n += 0.58807349f;
    n += r3;
    n += r5;
    n = r4 *= n;
    n = r0 *= n;
    n *= 0.01486541f;
    r5 = n *= 1.33073092f;
    n += r2;
    n += 0.50086194f;
    n += -0.35917410f;
    n = r0 += n;
    n = r5 *= n;
    n *= -7.10771608f;
    n *= r5;
    n *= 14.76347446f;
    n += r4;
    n *= r1;
    n *= r0;
    n += 0.52359897f;
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
