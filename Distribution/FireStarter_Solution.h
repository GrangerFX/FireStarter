// Run date: 11/12/22 18:17:37 Pacific Standard Time
// Run duration = 9.947304 seconds
// Run count = 4
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_TEST;
// Run units = 1;
// Run processes = 0;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 100;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 4

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

// Precision = 0.00326318

// Solution0 precision = 0.00032425
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.36629874f;
    n += -0.13780129f;
    r1 = n += 1.86722910f;
    r2 = n *= -0.23550418f;
    r3 = n *= 0.04754550f;
    r4 = n += 0.07325356f;
    n = r4 *= n;
    r5 = n += -1.00549436f;
    n *= r0;
    n += 1.85574389f;
    n += -3.07412124f;
    n += -1.04218256f;
    n *= r2;
    n += -0.86069435f;
    n += -0.14976248f;
    n *= -0.51529610f;
    n += -0.85798717f;
    r2 = n += 3.22166276f;
    r0 = n += 0.80579996f;
    n = r0 *= n;
    r6 = n += -16.74603462f;
    n = r1 += n;
    n = r2 += n;
    n = r0 += n;
    n *= r0;
    n += r6;
    n += r1;
    n += r2;
    n *= r3;
    n = r4 += n;
    n *= r4;
    n += r5;
    return n;
} // Solution0

// Solution1 precision = 0.00035357
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.57205653f;
    n += -0.46111336f;
    r1 = n += -0.04522794f;
    r2 = n *= -0.95006359f;
    r3 = n *= -0.08619774f;
    r4 = n += 1.34915030f;
    n = r4 *= n;
    r5 = n += -3.89507961f;
    n *= r0;
    n += 3.59093380f;
    n += 2.88092709f;
    n += -1.45112491f;
    n *= r2;
    n += 7.41372633f;
    n += -105.31830597f;
    n *= -0.01583491f;
    n += -1.33099508f;
    r2 = n += -1.16402042f;
    r0 = n += -0.79970807f;
    n = r0 *= n;
    r6 = n += -9.28602982f;
    n = r1 += n;
    n = r2 += n;
    n = r0 += n;
    n *= r0;
    n += r6;
    n += r1;
    n += r2;
    n *= r3;
    n = r4 += n;
    n *= r4;
    n += r5;
    return n;
} // Solution1

// Solution2 precision = 0.00326318
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.57237005f;
    n += 0.40643254f;
    r1 = n += -0.23194267f;
    r2 = n *= -0.10183613f;
    r3 = n *= -1.38806343f;
    r4 = n += 0.83329874f;
    n = r4 *= n;
    r5 = n += -1.59950078f;
    n *= r0;
    n += -3.54566002f;
    n += -3.19016242f;
    n += -2.07060337f;
    n *= r2;
    n += -1.04541326f;
    n += -0.34588492f;
    n *= -0.25763977f;
    n += 0.63467652f;
    r2 = n += -0.74655432f;
    r0 = n += -0.21526821f;
    n = r0 *= n;
    r6 = n += -5.13784504f;
    n = r1 += n;
    n = r2 += n;
    n = r0 += n;
    n *= r0;
    n += r6;
    n += r1;
    n += r2;
    n *= r3;
    n = r4 += n;
    n *= r4;
    n += r5;
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
