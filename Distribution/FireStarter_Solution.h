// Run date: 09/11/22 22:33:23 Pacific Daylight Time
// Run duration = 2.193136 seconds
// Run count = 26
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_RANDOM;
// Run units = 2;
// Run processes = 6;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 10000;
// Run seed = 88;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 24

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

// Precision = 0.00035234

// Solution0 precision = 0.00022751
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.42393631f;
    n *= 0.92973131f;
    n += -0.09290761f;
    r0 = n += -0.25011402f;
    r1 = n += -1.36284792f;
    r2 = n *= -0.64595699f;
    r3 = n *= 0.28293276f;
    n *= 2.47305536f;
    r4 = n += -0.33187610f;
    n = r4 *= n;
    r5 = n += -1.72377968f;
    n = r0 *= n;
    r6 = n *= 0.40532541f;
    n += 3.00668645f;
    n += -3.03637385f;
    n += -0.35163122f;
    n = r4 += n;
    n *= r4;
    n *= r5;
    n += r0;
    n *= r2;
    n += -0.30021721f;
    n *= r1;
    n += r6;
    n += 2.05856943f;
    r6 = n += -2.68467689f;
    n += r6;
    n += 6.51438284f;
    n += -6.94427204f;
    n += 1.56438172f;
    n *= 0.48789737f;
    n += r3;
    return n;
} // Solution0

// Solution1 precision = 0.00003564
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.79733151f;
    n *= 0.83841789f;
    n += -0.69133472f;
    r0 = n += 0.09319327f;
    r1 = n += -2.26607752f;
    r2 = n *= -0.39458895f;
    r3 = n *= 1.33260691f;
    n *= 0.29406810f;
    r4 = n += -0.38978153f;
    n = r4 *= n;
    r5 = n += -0.85735959f;
    n = r0 *= n;
    r6 = n *= 0.62816978f;
    n += 0.24638942f;
    n += -0.19573478f;
    n += 0.01232328f;
    n = r4 += n;
    n *= r4;
    n *= r5;
    n += r0;
    n *= r2;
    n += -0.20357211f;
    n *= r1;
    n += r6;
    n += 0.97250646f;
    r6 = n += -1.13089478f;
    n += r6;
    n += -2.18141913f;
    n += 1.08949494f;
    n += 0.58258325f;
    n *= 0.43616825f;
    n += r3;
    return n;
} // Solution1

// Solution2 precision = 0.00035234
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.56112915f;
    n *= 0.66701019f;
    n += 0.11698994f;
    r0 = n += 0.99960470f;
    r1 = n += -0.30570531f;
    r2 = n *= -0.86525953f;
    r3 = n *= -0.13847874f;
    n *= 4.01933241f;
    r4 = n += 0.29431275f;
    n = r4 *= n;
    r5 = n += -1.51131046f;
    n = r0 *= n;
    r6 = n *= 0.61013180f;
    n += -0.58785534f;
    n += -0.45525447f;
    n += 0.54421347f;
    n = r4 += n;
    n *= r4;
    n *= r5;
    n += r0;
    n *= r2;
    n += -0.10314920f;
    n *= r1;
    n += r6;
    n += -2.59585643f;
    r6 = n += 2.97582102f;
    n += r6;
    n += 0.10798538f;
    n += -4.51237345f;
    n += 3.34332347f;
    n *= -1.13943088f;
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
