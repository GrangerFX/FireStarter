// Run date: 07/01/23 18:25:42 Pacific Daylight Time
// Run duration = 798.953630 seconds
// Run generation = 70
// Run evolution = 0
// Run result = 0.00005019
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 0
// Run units = 1
// Run processes = 0
// Run population = 278528
// Run iterations = 64
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

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

// Solution0 result = 0.00001413
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.14159274f;
    r1 = n *= 0.23639485f;
    r2 = n *= 0.16805221f;
    r3 = n *= 0.00000005f;
    r4 = n *= 13.23772621f;
    n *= -0.08639329f;
    n += -1.23726177f;
    n *= 1.43671417f;
    r5 = n *= -1.06246901f;
    r6 = n *= 0.26878539f;
    n *= -1.60321271f;
    n = r2 *= n;
    n += r3;
    n += r0;
    n = r2 *= n;
    r0 = n += 2.15226245f;
    n += r4;
    n = r2 *= n;
    n += r0;
    n *= 0.64480060f;
    n *= 0.56767488f;
    n += 0.14976686f;
    n = r5 *= n;
    r0 = n *= 0.90992367f;
    n *= r6;
    n *= r0;
    n += r2;
    n *= r5;
    n *= -0.97132069f;
    n *= r1;
    n *= 1.86618114f;
    n += -0.00000007f;
    return n;
} // Solution0

// Solution1 result = 0.00001526
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.09066725f;
    r1 = n *= 0.07262877f;
    r2 = n *= -2.00283670f;
    r3 = n *= -7.45244217f;
    r4 = n *= -0.00000052f;
    n *= -4.85970592f;
    n += -2.48342562f;
    n *= 0.19325787f;
    r5 = n *= -1.10899591f;
    r6 = n *= 2.33486843f;
    n *= 0.04488175f;
    n = r2 *= n;
    n += r3;
    n += r0;
    n = r2 *= n;
    r0 = n += 2.50403500f;
    n += r4;
    n = r2 *= n;
    n += r0;
    n *= 2.33994508f;
    n *= -0.57015455f;
    n += 1.11680734f;
    n = r5 *= n;
    r0 = n *= -2.40822411f;
    n *= r6;
    n *= r0;
    n += r2;
    n *= r5;
    n *= -0.72945589f;
    n *= r1;
    n *= -1.73696029f;
    n += -0.11814222f;
    return n;
} // Solution1

// Solution2 result = 0.00005019
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.61799717f;
    r1 = n *= -0.36083126f;
    r2 = n *= 1.81193078f;
    r3 = n *= 0.00000030f;
    r4 = n *= 0.90211493f;
    n *= 9.11586189f;
    n += 0.67169231f;
    n *= 2.28065968f;
    r5 = n *= -0.34840974f;
    r6 = n *= -0.04885888f;
    n *= 2.86152482f;
    n = r2 *= n;
    n += r3;
    n += r0;
    n = r2 *= n;
    r0 = n += 1.37672031f;
    n += r4;
    n = r2 *= n;
    n += r0;
    n *= 0.93533790f;
    n *= 1.91147518f;
    n += 1.97254908f;
    n = r5 *= n;
    r0 = n *= 1.68355942f;
    n *= r6;
    n *= r0;
    n += r2;
    n *= r5;
    n *= 1.81475973f;
    n *= r1;
    n *= -1.55864143f;
    n += 0.52359253f;
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
