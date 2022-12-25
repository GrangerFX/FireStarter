// Run date: 12/24/22 18:12:07 Pacific Standard Time
// Run duration = 7.071837 seconds
// Run count = 5
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_OPTIMIZE;
// Run units = 1;
// Run processes = 0;
// Run population = 69632;
// Run iterations = 512;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 256;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 5

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

// Precision = 0.00000155

// Solution0 precision = 0.00000095
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14159274f;
    r1 = n *= 0.28555003f;
    n = r1 *= n;
    n *= -0.79307896f;
    n += 6.54082918f;
    r2 = n *= -0.95721227f;
    r3 = n *= -0.93874925f;
    n *= 1.08963346f;
    n *= 0.63761914f;
    r4 = n *= -0.10170350f;
    n = r3 *= n;
    r5 = n *= 0.30440274f;
    r6 = n *= -1.29912210f;
    n = r1 *= n;
    r7 = n *= -0.00112290f;
    n *= r2;
    n *= 5.85306644f;
    n += -2.80161548f;
    n += 3.98816323f;
    n *= -0.72976601f;
    n = r6 *= n;
    n += 1.53967869f;
    n *= r6;
    n = r1 += n;
    n *= r7;
    n += 0.26592079f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += -0.00000004f;
    return n;
} // Solution0

// Solution1 precision = 0.00000155
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.09065843f;
    r1 = n *= -0.17193151f;
    n = r1 *= n;
    n *= 0.16053762f;
    n += -1.28203428f;
    r2 = n *= 1.12877536f;
    r3 = n *= -2.55156016f;
    n *= 0.67734569f;
    n *= -0.11250363f;
    r4 = n *= 1.40252614f;
    n = r3 *= n;
    r5 = n *= 1.32606244f;
    r6 = n *= -0.68137801f;
    n = r1 *= n;
    r7 = n *= -0.56888008f;
    n *= r2;
    n *= -22.59752274f;
    n += -1.39186943f;
    n += 19.97656059f;
    n *= -0.00000000f;
    n = r6 *= n;
    n += -6.13362551f;
    n *= r6;
    n = r1 += n;
    n *= r7;
    n += -0.25050521f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += -0.11813168f;
    return n;
} // Solution1

// Solution2 precision = 0.00000072
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.61799383f;
    r1 = n *= -0.62144125f;
    n = r1 *= n;
    n *= 0.01068661f;
    n += -0.67083818f;
    r2 = n *= 1.72603428f;
    r3 = n *= 1.26455235f;
    n *= 0.34950998f;
    n *= -1.22637320f;
    r4 = n *= 1.09549475f;
    n = r3 *= n;
    r5 = n *= -1.26630795f;
    r6 = n *= -0.34686604f;
    n = r1 *= n;
    r7 = n *= 0.25312585f;
    n *= r2;
    n *= -12.71260929f;
    n += 6.24782324f;
    n += -2.94867516f;
    n *= 0.02273063f;
    n = r6 *= n;
    n += -2.92453098f;
    n *= r6;
    n = r1 += n;
    n *= r7;
    n += 1.21688485f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += 0.52359885f;
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
