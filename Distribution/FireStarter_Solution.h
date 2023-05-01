// Run date: 04/30/23 18:31:51 Pacific Daylight Time
// Run duration = 2876.567342 seconds
// Run generation = 260
// Run result = 0.00000006
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 28
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 0
// Run seeds = 1
// Run mode = FIRESTARTER_REVOLVE
// Run tests = 100
// Run units = 4
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 64
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.18066168f;
    r0 = n += -0.96093094f;
    r1 = n *= 0.18532044f;
    r2 = n *= 0.54933304f;
    n *= 2.46864390f;
    n *= 0.00915801f;
    r3 = n *= 1.18115187f;
    r4 = n *= -1.62550068f;
    n *= r0;
    r0 = n += 0.85310090f;
    r5 = n += 0.05094969f;
    n = r0 += n;
    n = r2 *= n;
    n *= r0;
    n = r1 *= n;
    r0 = n += -1.48674560f;
    n *= -0.01329154f;
    n *= r1;
    n += r0;
    n = r5 *= n;
    n *= 2.45055485f;
    n += 2.05465937f;
    n *= 0.82594633f;
    n *= r2;
    n *= -1.99912512f;
    n += r3;
    n *= r5;
    n += -0.67624921f;
    n += 0.86232054f;
    n += -0.18607134f;
    n = r4 += n;
    n += r4;
    return n;
} // Solution0

// Solution1 result = 0.00000006
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.51287997f;
    r0 = n += -1.57777858f;
    r1 = n *= -0.04392441f;
    r2 = n *= -1.56720471f;
    n *= 0.00193237f;
    n *= 3.99376035f;
    r3 = n *= -1.16805613f;
    r4 = n *= 3.64716697f;
    n *= r0;
    r0 = n += 2.09373617f;
    r5 = n += -0.96327752f;
    n = r0 += n;
    n = r2 *= n;
    n *= r0;
    n = r1 *= n;
    r0 = n += 3.25711226f;
    n *= 1.37667036f;
    n *= r1;
    n += r0;
    n = r5 *= n;
    n *= -1.43815625f;
    n += -0.01043860f;
    n *= 0.20272163f;
    n *= r2;
    n *= 0.62053668f;
    n += r3;
    n *= r5;
    n += -0.02930365f;
    n += -0.06851750f;
    n += 0.03875528f;
    n = r4 += n;
    n += r4;
    return n;
} // Solution1

// Solution2 result = 0.00000004
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.70860940f;
    r0 = n += -1.90938437f;
    r1 = n *= 0.11671598f;
    r2 = n *= 1.38851893f;
    n *= -0.92929596f;
    n *= 1.91326976f;
    r3 = n *= 0.74021608f;
    r4 = n *= -0.02121863f;
    n *= r0;
    r0 = n += -0.71302319f;
    r5 = n += -1.69872701f;
    n = r0 += n;
    n = r2 *= n;
    n *= r0;
    n = r1 *= n;
    r0 = n += -0.90640122f;
    n *= -0.07821801f;
    n *= r1;
    n += r0;
    n = r5 *= n;
    n *= 0.18358669f;
    n += -0.29842013f;
    n *= 1.35179245f;
    n *= r2;
    n *= 0.24852723f;
    n += r3;
    n *= r5;
    n += 0.08410162f;
    n += 0.00670785f;
    n += 0.17098993f;
    n = r4 += n;
    n += r4;
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
