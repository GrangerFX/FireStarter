// Run date: 06/02/24 05:30:51 Pacific Daylight Time
// Run duration = 8353.835220 seconds
// Run generation = 17
// Run evolution = 1
// Run max result = 0.00000024
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 0
// Run optimize = 8

// Run scale = 0.200000f
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

// Solution0 result = 0.00000017
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159274f;
    r1 = n *= 0.33744279f;
    n *= 0.62218773f;
    n = r0 *= n;
    n *= 0.25239205f;
    r2 = n *= -0.43330443f;
    n *= 1.53138709f;
    r3 = n *= 1.84312212f;
    r4 = n *= 0.00203515f;
    n += -0.65344870f;
    n *= r2;
    n *= 7.14323759f;
    n *= -2.76336813f;
    r2 = n += 2.50491738f;
    n *= -0.44486886f;
    r5 = n += -1.46277440f;
    n *= -4.32462931f;
    n *= r4;
    n *= r0;
    n += r2;
    n *= 0.30450428f;
    n += r5;
    n *= 0.99215060f;
    r5 = n *= 0.67718273f;
    n = r3 *= n;
    n += r5;
    n += -1.74444592f;
    n = r1 *= n;
    n *= -1.65290749f;
    n *= r3;
    n += 0.00000001f;
    n += r1;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065843f;
    r1 = n *= 0.42723328f;
    n *= 0.05746992f;
    n = r0 *= n;
    n *= -1.29527068f;
    r2 = n *= 1.35382700f;
    n *= -0.76587284f;
    r3 = n *= -1.55656946f;
    r4 = n *= 0.00671939f;
    n += 1.28891087f;
    n *= r2;
    n *= -1.58830333f;
    n *= 9.29706764f;
    r2 = n += -7.89098740f;
    n *= -0.18519858f;
    r5 = n += -0.48059043f;
    n *= 3.65943480f;
    n *= r4;
    n *= r0;
    n += r2;
    n *= 0.19946031f;
    n += r5;
    n *= 2.01241899f;
    r5 = n *= 0.93881923f;
    n = r3 *= n;
    n += r5;
    n += -1.45410621f;
    n = r1 *= n;
    n *= -1.38283825f;
    n *= r3;
    n += -0.11813157f;
    n += r1;
    return n;
} // Solution1

// Solution2 result = 0.00000015
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799359f;
    r1 = n *= -0.93226862f;
    n *= 0.44947934f;
    n = r0 *= n;
    n *= 1.43425977f;
    r2 = n *= 0.29123950f;
    n *= -2.03198242f;
    r3 = n *= -1.30033863f;
    r4 = n *= -0.00357728f;
    n += -0.55384362f;
    n *= r2;
    n *= 0.50479370f;
    n *= 3.85360098f;
    r2 = n += -1.16890550f;
    n *= -0.01482904f;
    r5 = n += 0.34261796f;
    n *= 7.85465479f;
    n *= r4;
    n *= r0;
    n += r2;
    n *= -0.03368929f;
    n += r5;
    n *= 1.56764066f;
    r5 = n *= 0.79213393f;
    n = r3 *= n;
    n += r5;
    n += 0.57677019f;
    n = r1 *= n;
    n *= 0.27731153f;
    n *= r3;
    n += 0.52359873f;
    n += r1;
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
