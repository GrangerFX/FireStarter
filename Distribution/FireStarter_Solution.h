// Run date: 08/15/23 11:21:58 Pacific Daylight Time
// Run duration = 811.917601 seconds
// Run generation = 56
// Run evolution = 5
// Run result = 0.00000191
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
// Run units = 8
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

// Solution0 result = 0.00000083
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -3.14159250f;
    r0 = n *= 0.23228231f;
    r1 = n *= 0.01722590f;
    n *= r1;
    r1 = n *= 77.42645264f;
    n *= -2.48167825f;
    n += 2.30687356f;
    r2 = n *= 0.93773496f;
    n *= 0.91060126f;
    n *= r2;
    r2 = n *= -0.51987153f;
    r3 = n += 1.87258673f;
    n = r2 *= n;
    n *= -0.71056658f;
    r4 = n *= -1.13942277f;
    n *= -4.30092907f;
    n *= r1;
    n = r3 *= n;
    r1 = n += -2.93421173f;
    n *= 0.12672430f;
    n *= r0;
    r0 = n *= -3.18095469f;
    n *= r2;
    n = r1 *= n;
    n *= r0;
    r0 = n += 1.32906449f;
    n += r0;
    n += r3;
    n *= r1;
    n *= r4;
    n += 1.84855413f;
    n += -1.84855402f;
    return n;
} // Solution0

// Solution1 result = 0.00000191
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -3.09065890f;
    r0 = n *= -0.22771095f;
    r1 = n *= 1.00585687f;
    n *= r1;
    r1 = n *= -0.24142827f;
    n *= 0.24769653f;
    n += 1.15281785f;
    r2 = n *= -0.96815443f;
    n *= 2.13617969f;
    n *= r2;
    r2 = n *= -0.65050697f;
    r3 = n += -2.42554235f;
    n = r2 *= n;
    n *= -0.47141901f;
    r4 = n *= -1.70389163f;
    n *= -0.08850222f;
    n *= r1;
    n = r3 *= n;
    r1 = n += 0.53023112f;
    n *= 0.15465190f;
    n *= r0;
    r0 = n *= -0.67790812f;
    n *= r2;
    n = r1 *= n;
    n *= r0;
    r0 = n += -1.97063982f;
    n += r0;
    n += r3;
    n *= r1;
    n *= r4;
    n += -1.25980973f;
    n += 1.14167809f;
    return n;
} // Solution1

// Solution2 result = 0.00000126
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -2.61799359f;
    r0 = n *= 0.82592416f;
    r1 = n *= -0.24802169f;
    n *= r1;
    r1 = n *= 0.00410958f;
    n *= 24.36975670f;
    n += -1.13615572f;
    r2 = n *= -0.85880744f;
    n *= 0.62109631f;
    n *= r2;
    r2 = n *= 2.71372771f;
    r3 = n += -1.02588201f;
    n = r2 *= n;
    n *= 0.31615791f;
    r4 = n *= 1.59178817f;
    n *= -3.69988704f;
    n *= r1;
    n = r3 *= n;
    r1 = n += 1.80337131f;
    n *= 0.33942997f;
    n *= r0;
    r0 = n *= 0.88138157f;
    n *= r2;
    n = r1 *= n;
    n *= r0;
    r0 = n += -1.43316472f;
    n += r0;
    n += r3;
    n *= r1;
    n *= r4;
    n += 1.03404093f;
    n += -0.51044202f;
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
