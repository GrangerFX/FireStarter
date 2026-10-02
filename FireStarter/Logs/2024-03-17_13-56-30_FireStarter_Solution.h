// Run date: 03/17/24 13:56:30 Pacific Daylight Time
// Run duration = 22345.194406 seconds
// Run generation = 453
// Run evolution = 12
// Run max result = 0.00000107
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
// Run optimizeSeed = 42273026
// Run tests = 16
// Run streams = 4
// Run units = 4
// Run states = 16
// Run generations = 200
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

// Solution0 result = 0.00000024
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n *= 0.13087115f;
    r0 = n += -0.41114408f;
    r1 = n *= -0.15207675f;
    n *= 1.45565569f;
    n = r0 *= n;
    n += 2.30367637f;
    n *= 2.78405309f;
    r2 = n *= 1.64727366f;
    n *= r0;
    r0 = n += 0.38892090f;
    n *= r1;
    n *= 1.36308146f;
    n *= r2;
    r2 = n += -0.00000093f;
    r1 = n += -0.00019982f;
    n *= -1.34949839f;
    n *= r1;
    n *= 0.00001940f;
    n *= 2.16737247f;
    n *= 135.26223755f;
    n = r0 += n;
    r1 = n *= 0.38050529f;
    n += 0.95058203f;
    r3 = n += 1.86246109f;
    n = r0 += n;
    n *= r0;
    n += r3;
    n *= 0.20074418f;
    n = r1 += n;
    n *= r2;
    n *= r1;
    n += 0.00000651f;
    return n;
} // Solution0

// Solution1 result = 0.00000107
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n *= -0.17758736f;
    r0 = n += 0.54887223f;
    r1 = n *= 1.64032817f;
    n *= 0.61874586f;
    n = r0 *= n;
    n += -1.57872736f;
    n *= 1.43544137f;
    r2 = n *= -0.18653038f;
    n *= r0;
    r0 = n += -0.16915809f;
    n *= r1;
    n *= -2.86057591f;
    n *= r2;
    r2 = n += -0.00006681f;
    r1 = n += 0.00197113f;
    n *= -0.00011931f;
    n *= r1;
    n *= -5.06856489f;
    n *= -666.52288818f;
    n *= 0.14968857f;
    n = r0 += n;
    r1 = n *= -0.92637199f;
    n += 1.04005778f;
    r3 = n += 0.50381523f;
    n = r0 += n;
    n *= r0;
    n += r3;
    n *= 1.02326655f;
    n = r1 += n;
    n *= r2;
    n *= r1;
    n += -0.11696353f;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n *= -0.22645193f;
    r0 = n += 0.59284979f;
    r1 = n *= -1.62784815f;
    n *= -0.60405791f;
    n = r0 *= n;
    n += -6.55671263f;
    n *= -1.39895976f;
    r2 = n *= -0.41546616f;
    n *= r0;
    r0 = n += 0.92090100f;
    n *= r1;
    n *= 0.76838297f;
    n *= r2;
    r2 = n += -0.00000144f;
    r1 = n += -0.01098139f;
    n *= -0.00190010f;
    n *= r1;
    n *= -0.00012305f;
    n *= -68.71035004f;
    n *= 3.45393896f;
    n = r0 += n;
    r1 = n *= -0.93798053f;
    n += -0.91947985f;
    r3 = n += -0.81376362f;
    n = r0 += n;
    n *= r0;
    n += r3;
    n *= -0.65544206f;
    n = r1 += n;
    n *= r2;
    n *= r1;
    n += 0.52359992f;
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
