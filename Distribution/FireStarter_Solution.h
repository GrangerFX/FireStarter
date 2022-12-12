// Run date: 12/11/22 16:03:53 Pacific Standard Time
// Run duration = 24.665149 seconds
// Run count = 2
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_EVOLVE;
// Run units = 10;
// Run processes = 16;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 5;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 2

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

// Precision = 0.00019825

// Solution0 precision = 0.00012574
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -1.07363462f;
    n *= -0.69941181f;
    r0 = n += 3.32674527f;
    r1 = n *= 0.64718354f;
    n += -0.05540165f;
    n += -1.31468260f;
    r2 = n += -1.27887702f;
    n += -0.59875047f;
    r3 = n += 2.45856500f;
    r4 = n *= -0.07758929f;
    r5 = n += -0.00372604f;
    n *= 2.88101530f;
    r6 = n += -0.57176995f;
    n = r3 += n;
    n *= r5;
    r5 = n += 1.12129843f;
    r7 = n *= 1.40237594f;
    n += r3;
    n *= 0.08852921f;
    r3 = n += -0.69401234f;
    n *= r6;
    n *= r5;
    n *= r2;
    r2 = n *= 0.76595479f;
    n = r3 += n;
    n += r1;
    n *= r2;
    n *= r0;
    n += 0.17604433f;
    n += r4;
    n *= r7;
    n *= r3;
    return n;
} // Solution0

// Solution1 precision = 0.00019825
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -0.81124115f;
    n *= 0.75024188f;
    r0 = n += -0.79209930f;
    r1 = n *= 0.52783424f;
    n += 2.26225853f;
    n += -2.69971943f;
    r2 = n += 1.03690720f;
    n += -0.23191421f;
    r3 = n += -0.00541625f;
    r4 = n *= -0.13406922f;
    r5 = n += 0.15855813f;
    n *= 0.35090077f;
    r6 = n += -0.25034079f;
    n = r3 += n;
    n *= r5;
    r5 = n += 0.91685218f;
    r7 = n *= -0.61342603f;
    n += r3;
    n *= -0.17248881f;
    r3 = n += -2.87254071f;
    n *= r6;
    n *= r5;
    n *= r2;
    r2 = n *= 0.54319739f;
    n = r3 += n;
    n += r1;
    n *= r2;
    n *= r0;
    n += 0.72755831f;
    n += r4;
    n *= r7;
    n *= r3;
    return n;
} // Solution1

// Solution2 precision = 0.00005910
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += 1.91325092f;
    n *= 0.55183238f;
    r0 = n += -2.08092141f;
    r1 = n *= 0.74881136f;
    n += 0.24469011f;
    n += -1.30515563f;
    r2 = n += 1.45628881f;
    n += -0.30207047f;
    r3 = n += 0.19540054f;
    r4 = n *= 0.08688474f;
    r5 = n += -0.19097905f;
    n *= -2.38211226f;
    r6 = n += -0.86980110f;
    n = r3 += n;
    n *= r5;
    r5 = n += -0.83409381f;
    r7 = n *= 1.60508513f;
    n += r3;
    n *= 1.00873554f;
    r3 = n += -1.35506725f;
    n *= r6;
    n *= r5;
    n *= r2;
    r2 = n *= -0.26008445f;
    n = r3 += n;
    n += r1;
    n *= r2;
    n *= r0;
    n += 0.30498526f;
    n += r4;
    n *= r7;
    n *= r3;
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
