// Run date: 03/05/23 14:32:28 Pacific Standard Time
// Run duration = 3843.565221 seconds
// Run count = 32
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run units = 2
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 32
// Run seed = 1
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 32

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

// Precision = 0.00020512

// Solution0 precision = 0.00010958
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -1.57140505f;
    n *= 0.94805384f;
    r0 = n *= 0.37902626f;
    r1 = n *= 0.05538714f;
    n = r0 *= n;
    r2 = n *= -1.45655119f;
    r3 = n += 1.30126381f;
    n += -1.07555115f;
    r4 = n *= -1.16405797f;
    r5 = n *= 1.27916849f;
    n += -3.23584747f;
    n = r3 *= n;
    n += r2;
    n *= -1.06886160f;
    n *= -1.71046460f;
    r2 = n *= 0.43819028f;
    n *= r3;
    r3 = n += -1.57111061f;
    n += r3;
    r3 = n += 0.99632090f;
    r6 = n *= 2.47850275f;
    n *= r3;
    n += r5;
    n += r6;
    n *= r0;
    n += -0.67731112f;
    n += r1;
    n *= 0.08721033f;
    n += r2;
    n += -0.23958719f;
    n *= r4;
    n += -0.05680197f;
    return n;
} // Solution0

// Solution1 precision = 0.00008714
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -1.36116362f;
    n *= -0.85998571f;
    r0 = n *= -0.11848582f;
    r1 = n *= -1.78049123f;
    n = r0 *= n;
    r2 = n *= -1.16724718f;
    r3 = n += -2.10310173f;
    n += -0.81121463f;
    r4 = n *= 0.24953499f;
    r5 = n *= 0.96807766f;
    n += -0.77604342f;
    n = r3 *= n;
    n += r2;
    n *= 2.04547524f;
    n *= -0.25386381f;
    r2 = n *= 1.64566028f;
    n *= r3;
    r3 = n += 3.17749429f;
    n += r3;
    r3 = n += -1.44508314f;
    r6 = n *= 0.14766136f;
    n *= r3;
    n += r5;
    n += r6;
    n *= r0;
    n += -2.26663446f;
    n += r1;
    n *= -1.61216867f;
    n += r2;
    n += -2.79935288f;
    n *= r4;
    n += -0.08513036f;
    return n;
} // Solution1

// Solution2 precision = 0.00020512
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -1.30340552f;
    n *= 0.23960325f;
    r0 = n *= 1.50163877f;
    r1 = n *= -0.76841873f;
    n = r0 *= n;
    r2 = n *= -0.21549565f;
    r3 = n += -1.79535353f;
    n += -0.72327173f;
    r4 = n *= 0.43376508f;
    r5 = n *= -1.43400788f;
    n += 0.16694242f;
    n = r3 *= n;
    n += r2;
    n *= -0.70509648f;
    n *= -0.87847167f;
    r2 = n *= 0.96986842f;
    n *= r3;
    r3 = n += -1.24574387f;
    n += r3;
    r3 = n += 0.41833508f;
    r6 = n *= -0.10038877f;
    n *= r3;
    n += r5;
    n += r6;
    n *= r0;
    n += 1.45421779f;
    n += r1;
    n *= 0.68912941f;
    n += r2;
    n += -1.65141165f;
    n *= r4;
    n += -1.49120188f;
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
