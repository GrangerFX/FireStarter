// Run date: 08/06/23 11:35:33 Pacific Daylight Time
// Run duration = 278.328973 seconds
// Run generation = 14
// Run evolution = 0
// Run result = 0.00000072
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
// Run seeds = 64
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

// Solution0 result = 10.00000000
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += 0.00000000f;
    n *= 0.00000000f;
    r1 = n *= 0.00000000f;
    n *= r1;
    r1 = n *= 0.00000000f;
    r2 = n *= 0.00000000f;
    n += 0.00000000f;
    n *= 0.00000000f;
    n += 0.00000000f;
    r3 = n += 0.00000000f;
    r4 = n *= 0.00000000f;
    n *= 0.00000000f;
    n = r4 *= n;
    n *= 0.00000000f;
    r5 = n *= 0.00000000f;
    n *= 0.00000000f;
    n *= r1;
    n = r3 *= n;
    r1 = n += 0.00000000f;
    n *= 0.00000000f;
    n *= 0.00000000f;
    r6 = n += 0.00000000f;
    n *= r4;
    n = r1 *= n;
    n *= r6;
    n += r2;
    n += 0.00000000f;
    n += r3;
    n *= r1;
    n *= r5;
    n *= r0;
    n += 0.00000000f;
    return n;
} // Solution0

// Solution1 result = 0.00000072
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.09065938f;
    n *= 0.81386048f;
    r1 = n *= -0.45259091f;
    n *= r1;
    r1 = n *= 0.86858666f;
    r2 = n *= -3.33199167f;
    n += 1.16472483f;
    n *= 0.00165404f;
    n += -0.56963807f;
    r3 = n += 1.03399599f;
    r4 = n *= 2.23559737f;
    n *= 0.53461027f;
    n = r4 *= n;
    n *= 0.25795788f;
    r5 = n *= 1.51127589f;
    n *= -0.98178971f;
    n *= r1;
    n = r3 *= n;
    r1 = n += 0.28289226f;
    n *= -0.26688266f;
    n *= 16.25619316f;
    r6 = n += 0.01694547f;
    n *= r4;
    n = r1 *= n;
    n *= r6;
    n += r2;
    n += 24.17692184f;
    n += r3;
    n *= r1;
    n *= r5;
    n *= r0;
    n += -0.11813199f;
    return n;
} // Solution1

// Solution2 result = 0.00000048
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.61799383f;
    n *= 1.33010685f;
    r1 = n *= 1.71855664f;
    n *= r1;
    r1 = n *= 0.09083872f;
    r2 = n *= -0.79519427f;
    n += 0.57696247f;
    n *= -0.03490299f;
    n += 0.05225199f;
    r3 = n += -2.15740895f;
    r4 = n *= -0.26090848f;
    n *= -2.31482363f;
    n = r4 *= n;
    n *= 0.48291233f;
    r5 = n *= 0.81331986f;
    n *= 0.23982781f;
    n *= r1;
    n = r3 *= n;
    r1 = n += -1.18604565f;
    n *= -0.00803795f;
    n *= -2.70917654f;
    r6 = n += 1.80944276f;
    n *= r4;
    n = r1 *= n;
    n *= r6;
    n += r2;
    n += -0.30980945f;
    n += r3;
    n *= r1;
    n *= r5;
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
