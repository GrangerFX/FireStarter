// Run date: 08/14/22 13:57:10 Pacific Daylight Time
// Run duration = 2.442418 seconds
// Run count = 296
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_CODE;
// Run units = 1;
// Run process = 0;
// Run population = 4352;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 5;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_INDIVIDUAL;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 1480

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

// Precision = 0.00571418

// Solution0 precision = 0.00360721
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.71305597f;
    r1 = n += 3.91025949f;
    n += 0.73325258f;
    r2 = n *= -0.24335672f;
    n *= r2;
    r2 = n += 0.79067749f;
    n *= 0.38779554f;
    r3 = n += -0.90996552f;
    n *= r1;
    n = r3 *= n;
    r1 = n += 0.20617387f;
    r4 = n += 1.74848604f;
    n *= 0.12682697f;
    n *= r2;
    n = r0 += n;
    n += 0.94069594f;
    r2 = n += 0.41533911f;
    r5 = n += 0.43128443f;
    n += 1.00654709f;
    r6 = n *= -0.45891103f;
    n += r3;
    n = r0 *= n;
    n *= -0.53667724f;
    n *= 0.82605851f;
    n += r6;
    n += -0.01555242f;
    n += r4;
    n += 0.30652297f;
    n += r2;
    n *= r0;
    n += r5;
    n *= r1;
    return n;
} // Solution0

// Solution1 precision = 0.00560850
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.66025376f;
    r1 = n += -2.12861133f;
    n += -0.82812929f;
    r2 = n *= -0.11440140f;
    n *= r2;
    r2 = n += -0.85678899f;
    n *= -0.68653768f;
    r3 = n += -0.14882964f;
    n *= r1;
    n = r3 *= n;
    r1 = n += -0.43211132f;
    r4 = n += -0.76101840f;
    n *= 0.05550417f;
    n *= r2;
    n = r0 += n;
    n += -0.66071808f;
    r2 = n += 0.17852993f;
    r5 = n += -0.80071431f;
    n += 0.86800259f;
    r6 = n *= -0.41255173f;
    n += r3;
    n = r0 *= n;
    n *= 0.90756506f;
    n *= -0.39769498f;
    n += r6;
    n += 0.24389525f;
    n += r4;
    n += -0.11161380f;
    n += r2;
    n *= r0;
    n += r5;
    n *= r1;
    return n;
} // Solution1

// Solution2 precision = 0.00571418
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.28276145f;
    r1 = n += -1.50459635f;
    n += 0.46406576f;
    r2 = n *= -1.07034159f;
    n *= r2;
    r2 = n += -2.67170382f;
    n *= 0.13464864f;
    r3 = n += -0.73332757f;
    n *= r1;
    n = r3 *= n;
    r1 = n += 0.62859517f;
    r4 = n += -0.81485045f;
    n *= 0.09614632f;
    n *= r2;
    n = r0 += n;
    n += -1.08090639f;
    r2 = n += 0.15572940f;
    r5 = n += -0.14860921f;
    n += 0.79431480f;
    r6 = n *= -0.47980800f;
    n += r3;
    n = r0 *= n;
    n *= 0.31243968f;
    n *= 0.42741916f;
    n += r6;
    n += -1.24493790f;
    n += r4;
    n += -0.01022298f;
    n += r2;
    n *= r0;
    n += r5;
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
