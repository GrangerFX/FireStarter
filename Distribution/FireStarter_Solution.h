// Run date: 11/06/22 17:53:11 Pacific Standard Time
// Run duration = 50.606015 seconds
// Run count = 20
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_EVOLVE;
// Run units = 8;
// Run processes = 8;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 20

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

// Precision = 0.00009207

// Solution0 precision = 0.00005727
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n += -3.14460802f;
    r1 = n *= -0.97529596f;
    n = r0 += n;
    n *= 0.30450115f;
    r2 = n *= -7.41793966f;
    r3 = n += 0.00087280f;
    r4 = n *= 0.00739664f;
    r5 = n += -0.05643379f;
    r6 = n += -3.46392536f;
    n = r3 *= n;
    n += 0.00623001f;
    r7 = n *= -0.07505415f;
    n *= 1.83059502f;
    n = r1 *= n;
    n = r5 += n;
    n += r6;
    n = r1 *= n;
    n += 3.09745336f;
    r6 = n *= 0.66863799f;
    n = r1 += n;
    r8 = n += 0.19130534f;
    n = r6 *= n;
    n += r7;
    n += r4;
    n += 0.70600498f;
    n += r5;
    n += r1;
    n += r0;
    n *= r8;
    n += r6;
    n *= r2;
    n += r3;
    return n;
} // Solution0

// Solution1 precision = 0.00009207
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n += -2.98248339f;
    r1 = n *= -1.03159904f;
    n = r0 += n;
    n *= 1.18441617f;
    r2 = n *= 0.86021042f;
    r3 = n += 0.00032505f;
    r4 = n *= -0.06406401f;
    r5 = n += 0.76565862f;
    r6 = n += 1.71757233f;
    n = r3 *= n;
    n += 0.01495162f;
    r7 = n *= -1.84692001f;
    n *= 0.13211499f;
    n = r1 *= n;
    n = r5 += n;
    n += r6;
    n = r1 *= n;
    n += 1.10767841f;
    r6 = n *= 1.07627368f;
    n = r1 += n;
    r8 = n += 2.83342791f;
    n = r6 *= n;
    n += r7;
    n += r4;
    n += -0.08206950f;
    n += r5;
    n += r1;
    n += r0;
    n *= r8;
    n += r6;
    n *= r2;
    n += r3;
    return n;
} // Solution1

// Solution2 precision = 0.00004721
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n += -1.95419729f;
    r1 = n *= -1.03711784f;
    n = r0 += n;
    n *= 0.80009955f;
    r2 = n *= 4.93127394f;
    r3 = n += -1.32348359f;
    r4 = n *= -0.50623453f;
    r5 = n += -0.77060306f;
    r6 = n += -0.73486435f;
    n = r3 *= n;
    n += 0.45634514f;
    r7 = n *= -0.79244524f;
    n *= 0.37326720f;
    n = r1 *= n;
    n = r5 += n;
    n += r6;
    n = r1 *= n;
    n += -0.62502241f;
    r6 = n *= -1.23017538f;
    n = r1 += n;
    r8 = n += 0.70469451f;
    n = r6 *= n;
    n += r7;
    n += r4;
    n += 1.07113194f;
    n += r5;
    n += r1;
    n += r0;
    n *= r8;
    n += r6;
    n *= r2;
    n += r3;
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
