// Run date: 12/31/22 19:34:07 Pacific Standard Time
// Run duration = 7.877029 seconds
// Run count = 61
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
// Run generations = 100
// Run precision = 0
// Run attempts = 32
// Run seed = 10484
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 61

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

// Precision = 0.00000107

// Solution0 precision = 0.00000107
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14159274f;
    r1 = n *= 1.92418587f;
    n = r1 *= n;
    r2 = n *= -0.05924584f;
    n += 16.42972946f;
    r3 = n *= 0.07803949f;
    r4 = n *= 0.77521408f;
    n *= -0.81071025f;
    r5 = n *= -0.72020155f;
    r6 = n *= -0.68776810f;
    n = r4 *= n;
    n *= -0.36366093f;
    r7 = n *= 0.02206246f;
    n = r1 *= n;
    n *= 16.05988312f;
    n *= r3;
    n *= -0.48100531f;
    n += 1.09624028f;
    n += 1.22599232f;
    n *= 3.16381979f;
    n = r7 *= n;
    n += -7.99493980f;
    n *= r7;
    n += r1;
    n = r4 += n;
    n += 2.35856080f;
    n *= r5;
    n += r2;
    n *= r4;
    n += r6;
    n *= r0;
    n += -0.00000004f;
    return n;
} // Solution0

// Solution1 precision = 0.00000060
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.09065890f;
    r1 = n *= 0.85246599f;
    n = r1 *= n;
    r2 = n *= -0.06714260f;
    n += 3.14158082f;
    r3 = n *= 0.78935945f;
    r4 = n *= 0.50039506f;
    n *= 0.26216730f;
    r5 = n *= -1.92290366f;
    r6 = n *= 1.67058742f;
    n = r4 *= n;
    n *= 0.88896424f;
    r7 = n *= -0.00872997f;
    n = r1 *= n;
    n *= 8.28373814f;
    n *= r3;
    n *= 0.36861005f;
    n += -2.34657812f;
    n += 2.18764114f;
    n *= -0.28833437f;
    n = r7 *= n;
    n += -2.77519345f;
    n *= r7;
    n += r1;
    n = r4 += n;
    n += 1.23043692f;
    n *= r5;
    n += r2;
    n *= r4;
    n += r6;
    n *= r0;
    n += -0.11813217f;
    return n;
} // Solution1

// Solution2 precision = 0.00000083
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.61799383f;
    r1 = n *= -0.23716940f;
    n = r1 *= n;
    r2 = n *= 1.38910425f;
    n += -3.21591234f;
    r3 = n *= -0.44511789f;
    r4 = n *= 1.18151903f;
    n *= 0.31697327f;
    r5 = n *= -1.57892466f;
    r6 = n *= -0.66279787f;
    n = r4 *= n;
    n *= 0.80387551f;
    r7 = n *= -0.74566162f;
    n = r1 *= n;
    n *= -6.30843592f;
    n *= r3;
    n *= -3.68804717f;
    n += -0.23047131f;
    n += 2.58518529f;
    n *= 0.00015760f;
    n = r7 *= n;
    n += 6.38220930f;
    n *= r7;
    n += r1;
    n = r4 += n;
    n += 0.99881619f;
    n *= r5;
    n += r2;
    n *= r4;
    n += r6;
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
