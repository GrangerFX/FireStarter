// Run date: 12/16/23 17:34:51 Pacific Standard Time
// Run duration = 3815.937688 seconds
// Run generation = 17
// Run evolution = 11
// Run max result = 0.00000016
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
// Run optimize = 8

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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.14159274f;
    r1 = n *= -0.30652711f;
    n *= r1;
    r1 = n += -0.71199411f;
    r2 = n *= -0.29761624f;
    n += 1.84110498f;
    r3 = n += -0.99163467f;
    r4 = n *= -0.48544338f;
    r5 = n += -1.76386023f;
    n *= -1.02246392f;
    n *= -0.45367920f;
    r6 = n *= 1.94614041f;
    n = r6 *= n;
    n *= r2;
    n += 0.24034292f;
    n *= r6;
    n *= -0.05123612f;
    n *= r0;
    n = r3 *= n;
    n = r4 *= n;
    n *= r5;
    n += r3;
    r3 = n *= 1.07656527f;
    n = r4 += n;
    r5 = n *= -0.00117680f;
    n *= r3;
    n *= -5.20301247f;
    n *= r5;
    n *= r1;
    n += r4;
    n += 0.00000001f;
    n *= 2.09222007f;
    return n;
} // Solution0

// Solution1 result = 0.00000016
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.09065890f;
    r1 = n *= 0.69028968f;
    n *= r1;
    r1 = n += -2.49685478f;
    r2 = n *= -0.05435789f;
    n += 1.10081959f;
    r3 = n += 0.60060996f;
    r4 = n *= 1.02083802f;
    r5 = n += -1.19612849f;
    n *= 1.61712599f;
    n *= 1.73780644f;
    r6 = n *= 0.15345135f;
    n = r6 *= n;
    n *= r2;
    n += 2.29354930f;
    n *= r6;
    n *= 0.73009598f;
    n *= r0;
    n = r3 *= n;
    n = r4 *= n;
    n *= r5;
    n += r3;
    r3 = n *= 0.20194121f;
    n = r4 += n;
    r5 = n *= -0.00363140f;
    n *= r3;
    n *= -6.94796991f;
    n *= r5;
    n *= r1;
    n += r4;
    n += 0.06652644f;
    n *= -1.77571428f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.61799383f;
    r1 = n *= 0.34866789f;
    n *= r1;
    r1 = n += -0.13317569f;
    r2 = n *= 0.37010878f;
    n += 1.20439780f;
    r3 = n += -1.37932396f;
    r4 = n *= -0.30234337f;
    r5 = n += 1.44741774f;
    n *= 1.94316459f;
    n *= 0.84629923f;
    r6 = n *= -0.47777602f;
    n = r6 *= n;
    n *= r2;
    n += -1.06861663f;
    n *= r6;
    n *= 0.73635763f;
    n *= r0;
    n = r3 *= n;
    n = r4 *= n;
    n *= r5;
    n += r3;
    r3 = n *= -1.59302008f;
    n = r4 += n;
    r5 = n *= 0.00293977f;
    n *= r3;
    n *= 5.56845474f;
    n *= r5;
    n *= r1;
    n += r4;
    n += 0.23557526f;
    n *= 2.22263885f;
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
