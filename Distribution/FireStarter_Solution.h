// Run date: 01/08/23 18:05:07 Pacific Standard Time
// Run duration = 6.490206 seconds
// Run count = 8
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_CODE
// Run units = 1
// Run processes = 0
// Run iterations = 256
// Run candidates = 16
// Run generations = 1
// Run precision = 0
// Run attempts = 32
// Run seed = 0
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 8

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

// Precision = 0.02672791

// Solution0 precision = 0.01174120
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.12150946f;
    r1 = n += -0.38147759f;
    r2 = n *= -8.63022995f;
    r3 = n *= -0.01939017f;
    n = r2 *= n;
    r4 = n += 0.74425352f;
    n += 0.94716465f;
    n *= -0.75055176f;
    n += 1.02821708f;
    r5 = n += -0.10069638f;
    r6 = n += -0.89425671f;
    n += -0.16852976f;
    n += r2;
    n = r6 += n;
    n *= 0.27982745f;
    r2 = n *= 0.69792509f;
    n += 0.79596376f;
    n += r6;
    n *= r2;
    n *= r5;
    r5 = n *= 3.55366373f;
    n *= r4;
    n *= r5;
    n = r3 += n;
    n += r3;
    n *= 2.18235517f;
    n *= -0.69551879f;
    r3 = n += 0.28504652f;
    n += r0;
    n += r3;
    n += 0.71594518f;
    n *= r1;
    return n;
} // Solution0

// Solution1 precision = 0.02317047
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.24900408f;
    r1 = n += -0.23193827f;
    r2 = n *= 0.50373238f;
    r3 = n *= -0.79333180f;
    n = r2 *= n;
    r4 = n += 0.30454543f;
    n += 0.71547621f;
    n *= 0.54221272f;
    n += 0.97616690f;
    r5 = n += -0.38947365f;
    r6 = n += 1.02804470f;
    n += -0.85167319f;
    n += r2;
    n = r6 += n;
    n *= 0.54763305f;
    r2 = n *= 0.97299415f;
    n += -0.58421695f;
    n += r6;
    n *= r2;
    n *= r5;
    r5 = n *= 0.82865679f;
    n *= r4;
    n *= r5;
    n = r3 += n;
    n += r3;
    n *= -0.24421109f;
    n *= 0.28949705f;
    r3 = n += 1.26247025f;
    n += r0;
    n += r3;
    n += -0.56039685f;
    n *= r1;
    return n;
} // Solution1

// Solution2 precision = 0.02672791
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.31325951f;
    r1 = n += -0.00493913f;
    r2 = n *= 0.73025590f;
    r3 = n *= 0.56620336f;
    n = r2 *= n;
    r4 = n += -0.19041467f;
    n += -1.49827397f;
    n *= -1.06908429f;
    n += -0.18226980f;
    r5 = n += -0.33518535f;
    r6 = n += 0.55773407f;
    n += -0.43283713f;
    n += r2;
    n = r6 += n;
    n *= -0.58126688f;
    r2 = n *= 2.47257423f;
    n += 0.05297875f;
    n += r6;
    n *= r2;
    n *= r5;
    r5 = n *= -0.43422464f;
    n *= r4;
    n *= r5;
    n = r3 += n;
    n += r3;
    n *= -0.76586694f;
    n *= 0.53466463f;
    r3 = n += 0.59397244f;
    n += r0;
    n += r3;
    n += -0.70076281f;
    n *= r1;
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
