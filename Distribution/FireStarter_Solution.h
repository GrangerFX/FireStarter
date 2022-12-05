// Run date: 12/04/22 16:01:38 Pacific Standard Time
// Run duration = 1452.770008 seconds
// Run count = 10484
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_RANDOM;
// Run units = 8;
// Run processes = 16;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 11000;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 10484

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

// Precision = 0.00001186

// Solution0 precision = 0.00001186
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14159250f;
    r1 = n *= 0.52719843f;
    n = r1 *= n;
    n *= 0.14556336f;
    n += -1.49737847f;
    r2 = n *= 1.87999880f;
    r3 = n *= -0.95613652f;
    n *= 0.75770247f;
    n *= -0.50925094f;
    r4 = n *= -0.59372884f;
    n = r3 *= n;
    r5 = n *= -1.03773141f;
    r6 = n *= 0.00663406f;
    n = r1 *= n;
    r7 = n *= 0.89037472f;
    n *= r2;
    n *= -7.96993780f;
    n += 2.76467228f;
    n += -3.55355668f;
    n *= 0.52724493f;
    n = r6 *= n;
    n += 1.34690058f;
    n *= r6;
    n = r1 += n;
    n *= r7;
    n += 0.55911165f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += 0.00000009f;
    return n;
} // Solution0

// Solution1 precision = 0.00000536
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.09065843f;
    r1 = n *= 0.13242066f;
    n = r1 *= n;
    n *= 0.51097620f;
    n += -1.14646554f;
    r2 = n *= -0.85816646f;
    r3 = n *= 1.66088676f;
    n *= 0.47287440f;
    n *= -0.62397629f;
    r4 = n *= 1.21185362f;
    n = r3 *= n;
    r5 = n *= -2.10185719f;
    r6 = n *= -1.48313534f;
    n = r1 *= n;
    r7 = n *= 0.00198145f;
    n *= r2;
    n *= -0.50569028f;
    n += 2.13978362f;
    n += -2.12202954f;
    n *= -0.80524606f;
    n = r6 *= n;
    n += 0.66202742f;
    n *= r6;
    n = r1 += n;
    n *= r7;
    n += 0.23914775f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += -0.11813185f;
    return n;
} // Solution1

// Solution2 precision = 0.00000048
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.61799359f;
    r1 = n *= 0.39196599f;
    n = r1 *= n;
    n *= 0.03090577f;
    n += -0.75289994f;
    r2 = n *= -2.09341812f;
    r3 = n *= 0.93213880f;
    n *= 1.05242455f;
    n *= 0.86654788f;
    r4 = n *= 0.40413538f;
    n = r3 *= n;
    r5 = n *= -1.72958291f;
    r6 = n *= 0.92703766f;
    n = r1 *= n;
    r7 = n *= 0.23236614f;
    n *= r2;
    n *= -1.65858436f;
    n += -3.00824642f;
    n += -4.26644897f;
    n *= 0.04057327f;
    n = r6 *= n;
    n += 0.71505857f;
    n *= r6;
    n = r1 += n;
    n *= r7;
    n += 0.99729782f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += 0.52359879f;
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
