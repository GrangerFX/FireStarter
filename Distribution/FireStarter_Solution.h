// Run date: 11/27/22 14:20:52 Pacific Standard Time
// Run duration = 67.800742 seconds
// Run count = 71
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
// Solution Generation = 71

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

// Precision = 0.00005329

// Solution0 precision = 0.00005329
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -1.99219382f;
    n += -0.72928840f;
    n *= 0.91075259f;
    r1 = n *= 0.18285270f;
    n *= 0.91941583f;
    r2 = n += 0.13470507f;
    n += -0.43797570f;
    r3 = n *= -0.42627901f;
    r4 = n += -1.59945989f;
    n += 0.18973845f;
    n += r2;
    n += -3.04394841f;
    r2 = n += 3.00545621f;
    n = r3 *= n;
    n *= r0;
    r0 = n *= 0.52079231f;
    n = r1 += n;
    n = r2 *= n;
    n += -0.87703270f;
    n += r3;
    n += r0;
    n = r2 *= n;
    n *= 12.80780220f;
    n *= -0.01510841f;
    n = r1 += n;
    n *= 0.45796031f;
    n += r1;
    r1 = n += -0.90825140f;
    n = r4 += n;
    n *= r1;
    n *= r4;
    n *= r2;
    return n;
} // Solution0

// Solution1 precision = 0.00003588
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -1.53480458f;
    n += -1.13578105f;
    n *= -0.21919854f;
    r1 = n *= -0.43175283f;
    n *= 3.08517623f;
    r2 = n += -0.57794404f;
    n += 0.23770371f;
    r3 = n *= -0.98679942f;
    r4 = n += 0.68341786f;
    n += -1.22399378f;
    n += r2;
    n += -0.82096452f;
    r2 = n += 1.35154831f;
    n = r3 *= n;
    n *= r0;
    r0 = n *= 0.33117494f;
    n = r1 += n;
    n = r2 *= n;
    n += -0.69833380f;
    n += r3;
    n += r0;
    n = r2 *= n;
    n *= -0.00185006f;
    n *= 61.76679993f;
    n = r1 += n;
    n *= 1.95849359f;
    n += r1;
    r1 = n += -4.34164000f;
    n = r4 += n;
    n *= r1;
    n *= r4;
    n *= r2;
    return n;
} // Solution1

// Solution2 precision = 0.00002986
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -0.14331758f;
    n += 0.07785711f;
    n *= -0.55632907f;
    r1 = n *= 0.48405498f;
    n *= 0.41736147f;
    r2 = n += 0.91211766f;
    n += 0.16380052f;
    r3 = n *= 1.23374891f;
    r4 = n += 1.33420646f;
    n += -0.12206040f;
    n += r2;
    n += -1.14062822f;
    r2 = n += -1.23412621f;
    n = r3 *= n;
    n *= r0;
    r0 = n *= 0.08416163f;
    n = r1 += n;
    n = r2 *= n;
    n += -3.48205423f;
    n += r3;
    n += r0;
    n = r2 *= n;
    n *= -44.15674973f;
    n *= -0.00030295f;
    n = r1 += n;
    n *= -0.40291420f;
    n += r1;
    r1 = n += 0.45736617f;
    n = r4 += n;
    n *= r1;
    n *= r4;
    n *= r2;
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
