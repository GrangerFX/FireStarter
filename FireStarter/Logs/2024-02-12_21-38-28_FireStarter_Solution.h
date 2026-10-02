// Run date: 02/12/24 21:38:28 Pacific Standard Time
// Run duration = 16740.573408 seconds
// Run generation = 61
// Run evolution = 11
// Run max result = 0.00011468
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
// Run tests = 256
// Run streams = 8
// Run units = 1
// Run states = 1
// Run generations = 64
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 0
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

// Solution0 result = 0.00003484
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.10630207f;
    r1 = n += 0.66791260f;
    n *= 0.38533807f;
    r2 = n *= 1.38929462f;
    n *= -2.46172285f;
    r3 = n += 1.50981605f;
    r4 = n += -1.06970632f;
    n *= 1.28189993f;
    n += 0.49628657f;
    n *= -0.42664906f;
    n *= 1.85714841f;
    r5 = n += 0.78157789f;
    n += 0.39361542f;
    n += 1.32739937f;
    n *= -0.50178325f;
    n = r4 *= n;
    n *= r2;
    n *= 37.93642426f;
    n *= 0.04571260f;
    n *= r0;
    n += 0.95390773f;
    r0 = n += 2.03431368f;
    n += r0;
    n *= r1;
    n = r4 *= n;
    n *= r3;
    n += -2.02112889f;
    n *= 0.85080051f;
    r3 = n += -0.32292911f;
    n += r5;
    n *= r4;
    n *= r3;
    return n;
} // Solution0

// Solution1 result = 0.00007212
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.22914511f;
    r1 = n += -0.68358231f;
    n *= 1.45541918f;
    r2 = n *= -0.47897288f;
    n *= -1.11246502f;
    r3 = n += -0.03044990f;
    r4 = n += 3.41742039f;
    n *= 0.43142286f;
    n += 0.30571428f;
    n *= 0.18550217f;
    n *= 1.65268981f;
    r5 = n += -0.55705076f;
    n += 1.58602834f;
    n += -2.29915619f;
    n *= 0.21978292f;
    n = r4 *= n;
    n *= r2;
    n *= 292.37701416f;
    n *= -0.00311074f;
    n *= r0;
    n += 0.70209509f;
    r0 = n += 1.98008811f;
    n += r0;
    n *= r1;
    n = r4 *= n;
    n *= r3;
    n += 1.00552630f;
    n *= 0.54804653f;
    r3 = n += 0.73871183f;
    n += r5;
    n *= r4;
    n *= r3;
    return n;
} // Solution1

// Solution2 result = 0.00011468
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.54172456f;
    r1 = n += -1.73128498f;
    n *= -1.59590709f;
    r2 = n *= 0.13078901f;
    n *= 1.10254931f;
    r3 = n += 0.90703100f;
    r4 = n += -0.76251554f;
    n *= 0.99343294f;
    n += -0.38231498f;
    n *= 2.95677829f;
    n *= 0.28931484f;
    r5 = n += 1.68667507f;
    n += -0.39972287f;
    n += -1.97554946f;
    n *= 0.48939636f;
    n = r4 *= n;
    n *= r2;
    n *= -0.01128272f;
    n *= 10.80258942f;
    n *= r0;
    n += -0.51440889f;
    r0 = n += 2.60294747f;
    n += r0;
    n *= r1;
    n = r4 *= n;
    n *= r3;
    n += -2.09262562f;
    n *= -1.16986239f;
    r3 = n += -0.82165295f;
    n += r5;
    n *= r4;
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
