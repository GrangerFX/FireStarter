// Run date: 11/07/23 18:14:14 Pacific Standard Time
// Run duration = 2164.808936 seconds
// Run generation = 60
// Run evolution = 11
// Run result = 0.00000036
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 1
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 64

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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.14159274f;
    r0 = n *= 0.91298616f;
    r1 = n *= -0.07156091f;
    n *= r0;
    r0 = n += 0.58871347f;
    r2 = n += -0.43756315f;
    r3 = n += 4.59526253f;
    r4 = n *= -1.37993824f;
    n *= 0.00150792f;
    n = r2 *= n;
    n += -0.16996416f;
    n *= r4;
    n = r3 *= n;
    r4 = n += -1.16084266f;
    r5 = n += 5.00899029f;
    r6 = n += -2.23349237f;
    n = r2 *= n;
    n *= r6;
    n += r5;
    n *= r2;
    n *= 0.00005134f;
    n += -1.70191884f;
    n *= r0;
    n *= -1.50871217f;
    n *= r1;
    n *= r4;
    n *= r3;
    n *= 0.80279219f;
    n *= -0.80342931f;
    n += -0.00000000f;
    n *= -0.77619392f;
    n *= 0.91006070f;
    return n;
} // Solution0

// Solution1 result = 0.00000036
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.09065890f;
    r0 = n *= 1.15130138f;
    r1 = n *= 0.03211089f;
    n *= r0;
    r0 = n += -1.83893931f;
    r2 = n += 0.64741474f;
    r3 = n += 0.09294788f;
    r4 = n *= 0.06345363f;
    n *= -0.00003486f;
    n = r2 *= n;
    n += -2.94117975f;
    n *= r4;
    n = r3 *= n;
    r4 = n += -1.55187774f;
    r5 = n += 3.54797840f;
    r6 = n += 21.60125351f;
    n = r2 *= n;
    n *= r6;
    n += r5;
    n *= r2;
    n *= -0.00008670f;
    n += -1.76711023f;
    n *= r0;
    n *= 3.77116132f;
    n *= r1;
    n *= r4;
    n *= r3;
    n *= -0.57776195f;
    n *= 2.66863322f;
    n += -0.03002723f;
    n *= -2.89616394f;
    n *= -1.35840476f;
    return n;
} // Solution1

// Solution2 result = 0.00000036
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -2.61799359f;
    r0 = n *= 0.34008145f;
    r1 = n *= -0.35469612f;
    n *= r0;
    r0 = n += 0.20442539f;
    r2 = n += 0.27758694f;
    r3 = n += 1.27637637f;
    r4 = n *= 1.91526043f;
    n *= 0.00412226f;
    n = r2 *= n;
    n += 0.20976420f;
    n *= r4;
    n = r3 *= n;
    r4 = n += 0.44417986f;
    r5 = n += -0.37679940f;
    r6 = n += 0.74679399f;
    n = r2 *= n;
    n *= r6;
    n += r5;
    n *= r2;
    n *= -0.11572706f;
    n += -2.37700129f;
    n *= r0;
    n *= 2.39999437f;
    n *= r1;
    n *= r4;
    n *= r3;
    n *= 1.84443593f;
    n *= -1.17498684f;
    n += 0.35349637f;
    n *= 0.87277615f;
    n *= 1.69711256f;
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
