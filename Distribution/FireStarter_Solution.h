// Run date: 02/26/23 16:40:43 Pacific Standard Time
// Run duration = 2649.568959 seconds
// Run count = 33
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
// Solution Generation = 33

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

// Precision = 0.00031519

// Solution0 precision = 0.00024003
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.33002999f;
    r1 = n *= -1.15326083f;
    n *= 0.04148947f;
    n += 1.95830441f;
    r2 = n += -1.74289834f;
    r3 = n += 1.93167973f;
    n *= -0.33139682f;
    r4 = n += 0.45363986f;
    n *= r3;
    n = r0 += n;
    n *= r2;
    r2 = n += 1.31146836f;
    r3 = n *= -1.53041518f;
    n = r4 += n;
    n = r4 += n;
    n = r2 += n;
    n += -1.22211182f;
    n += -2.78203416f;
    n += 4.84774542f;
    n += r4;
    r4 = n *= 0.06546795f;
    n = r1 *= n;
    n = r3 += n;
    n = r0 *= n;
    r5 = n += 0.83311707f;
    n = r4 *= n;
    n *= r1;
    n += r3;
    n *= r0;
    n += r5;
    n *= r2;
    n *= r4;
    return n;
} // Solution0

// Solution1 precision = 0.00031519
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.12415463f;
    r1 = n *= 1.12263107f;
    n *= -1.13269424f;
    n += 0.57154012f;
    r2 = n += -0.92553180f;
    r3 = n += 0.22979212f;
    n *= 0.02267139f;
    r4 = n += 1.45657516f;
    n *= r3;
    n = r0 += n;
    n *= r2;
    r2 = n += -1.61881864f;
    r3 = n *= 2.03480411f;
    n = r4 += n;
    n = r4 += n;
    n = r2 += n;
    n += -0.18267250f;
    n += 1.11580455f;
    n += 1.46740234f;
    n += r4;
    r4 = n *= 0.03724987f;
    n = r1 *= n;
    n = r3 += n;
    n = r0 *= n;
    r5 = n += -0.92596269f;
    n = r4 *= n;
    n *= r1;
    n += r3;
    n *= r0;
    n += r5;
    n *= r2;
    n *= r4;
    return n;
} // Solution1

// Solution2 precision = 0.00023833
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.25394282f;
    r1 = n *= -0.19829601f;
    n *= 1.94077206f;
    n += 1.02063811f;
    r2 = n += -0.66476893f;
    r3 = n += 0.88331723f;
    n *= 0.03730996f;
    r4 = n += -1.17012525f;
    n *= r3;
    n = r0 += n;
    n *= r2;
    r2 = n += 1.86790597f;
    r3 = n *= -0.86589861f;
    n = r4 += n;
    n = r4 += n;
    n = r2 += n;
    n += 4.53996944f;
    n += 1.80230904f;
    n += -2.86694479f;
    n += r4;
    r4 = n *= -0.11179432f;
    n = r1 *= n;
    n = r3 += n;
    n = r0 *= n;
    r5 = n += 0.31152537f;
    n = r4 *= n;
    n *= r1;
    n += r3;
    n *= r0;
    n += r5;
    n *= r2;
    n *= r4;
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
