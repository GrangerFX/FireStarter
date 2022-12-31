// Run date: 12/31/22 11:36:15 Pacific Standard Time
// Run duration = 15.339558 seconds
// Run count = 70
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_OPTIMIZE
// Run units = 1
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 400
// Run precision = 0
// Run attempts = 32
// Run seed = 10484
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 70

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

// Precision = 0.00000060

// Solution0 precision = 0.00000060
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14159274f;
    r1 = n *= 0.34323809f;
    n = r1 *= n;
    n *= -0.10809863f;
    n += 1.33239877f;
    n *= -1.41283715f;
    r2 = n *= 1.35302925f;
    n *= -2.24796367f;
    r3 = n *= -0.04767582f;
    r4 = n *= 1.50632048f;
    n = r2 *= n;
    r5 = n *= -1.81524348f;
    r6 = n *= 0.28695405f;
    n = r1 *= n;
    r7 = n *= 0.04173091f;
    n *= r3;
    n *= 1.42784286f;
    n += 0.59904695f;
    n += -2.14222503f;
    n *= 0.07164080f;
    n = r6 *= n;
    n += 4.84318590f;
    n = r6 *= n;
    n = r1 += n;
    n *= r7;
    n *= r6;
    n += r1;
    n *= r5;
    n *= r2;
    n += r4;
    n *= r0;
    n += -0.00000008f;
    return n;
} // Solution0

// Solution1 precision = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.09065866f;
    r1 = n *= -0.69795352f;
    n = r1 *= n;
    n *= 0.03269942f;
    n += -2.08385420f;
    n *= 1.87341571f;
    r2 = n *= -0.26179150f;
    n *= -0.39106652f;
    r3 = n *= -0.87649012f;
    r4 = n *= -1.98956847f;
    n = r2 *= n;
    r5 = n *= -1.36743891f;
    r6 = n *= -0.24857524f;
    n = r1 *= n;
    r7 = n *= 0.00392708f;
    n *= r3;
    n *= -3.52875233f;
    n += 1.89016771f;
    n += 3.76296520f;
    n *= 0.89424211f;
    n = r6 *= n;
    n += 0.74941862f;
    n = r6 *= n;
    n = r1 += n;
    n *= r7;
    n *= r6;
    n += r1;
    n *= r5;
    n *= r2;
    n += r4;
    n *= r0;
    n += -0.11813194f;
    return n;
} // Solution1

// Solution2 precision = 0.00000018
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.61799359f;
    r1 = n *= 1.08335233f;
    n = r1 *= n;
    n *= -0.01120270f;
    n += 2.67852330f;
    n *= -1.01717830f;
    r2 = n *= -1.37632430f;
    n *= 2.82691526f;
    r3 = n *= 0.24106212f;
    r4 = n *= 0.11398886f;
    n = r2 *= n;
    r5 = n *= 0.86294156f;
    r6 = n *= 0.14358939f;
    n = r1 *= n;
    r7 = n *= 0.33953169f;
    n *= r3;
    n *= -0.67716640f;
    n += 11.18429947f;
    n += 55.27886581f;
    n *= 0.03729900f;
    n = r6 *= n;
    n += -4.07374811f;
    n = r6 *= n;
    n = r1 += n;
    n *= r7;
    n *= r6;
    n += r1;
    n *= r5;
    n *= r2;
    n += r4;
    n *= r0;
    n += 0.52359867f;
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
