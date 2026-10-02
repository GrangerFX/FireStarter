// Run date: 01/10/24 15:34:08 Pacific Standard Time
// Run duration = 52484.342682 seconds
// Run generation = 113
// Run evolution = 7
// Run max result = 0.00000024
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 1
// Run optimizeSeed = 1
// Run tests = 16
// Run states = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
// Run optimize = 8

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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.93741065f;
    n *= 0.19068663f;
    r1 = n += 0.56156492f;
    r2 = n += 0.40652663f;
    n += r0;
    n *= r2;
    r2 = n *= 0.87844920f;
    n *= 1.06703377f;
    r0 = n += -0.78273499f;
    r3 = n *= 0.00120324f;
    n *= -0.99957561f;
    n += r3;
    r3 = n *= 3840.77758789f;
    r4 = n += -0.04983661f;
    n = r2 *= n;
    n *= 2.65860486f;
    n += 1.02092397f;
    r5 = n *= 3.25232863f;
    n = r4 *= n;
    n += r0;
    n *= 3.70106792f;
    n += 2.16200233f;
    n *= r2;
    n *= r3;
    n += -0.84997857f;
    n = r5 += n;
    n = r4 += n;
    n += -1.96964812f;
    n *= r4;
    n *= r5;
    n *= r1;
    n += 0.00000010f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.47120956f;
    n *= -1.32778358f;
    r1 = n += 1.93372142f;
    r2 = n += -1.16801596f;
    n += r0;
    n *= r2;
    r2 = n *= 0.22131179f;
    n *= 8.05116081f;
    r0 = n += -0.85989040f;
    r3 = n *= 0.00179254f;
    n *= -1.00123596f;
    n += r3;
    r3 = n *= -152.19358826f;
    r4 = n += 0.99886847f;
    n = r2 *= n;
    n *= -1.36484516f;
    n += 1.26027262f;
    r5 = n *= 0.90041935f;
    n = r4 *= n;
    n += r0;
    n *= -10.90289402f;
    n += 120.56610107f;
    n *= r2;
    n *= r3;
    n += -0.63519871f;
    n = r5 += n;
    n = r4 += n;
    n += -0.19747084f;
    n *= r4;
    n *= r5;
    n *= r1;
    n += -0.11814377f;
    return n;
} // Solution1

// Solution2 result = 0.00000015
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.21901508f;
    n *= 1.96551180f;
    r1 = n += -1.12698531f;
    r2 = n += -0.22855000f;
    n += r0;
    n *= r2;
    r2 = n *= -1.72140086f;
    n *= -0.46274608f;
    r0 = n += -2.72000003f;
    r3 = n *= -0.00253795f;
    n *= 14.49076462f;
    n += r3;
    r3 = n *= 0.02056363f;
    r4 = n += -0.82215393f;
    n = r2 *= n;
    n *= 1.65085661f;
    n += -0.31706139f;
    r5 = n *= 0.39707106f;
    n = r4 *= n;
    n += r0;
    n *= -5.61004448f;
    n += -4.69045019f;
    n *= r2;
    n *= r3;
    n += -1.11595631f;
    n = r5 += n;
    n = r4 += n;
    n += -0.37354782f;
    n *= r4;
    n *= r5;
    n *= r1;
    n += 0.52359873f;
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
