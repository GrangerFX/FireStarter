// Run date: 06/30/24 23:12:04 Pacific Daylight Time
// Run duration = 706.131731 seconds
// Run generation = 501
// Run evolution = 9
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

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 0
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
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159274f;
    n += 2.06035042f;
    n += 0.26649055f;
    n += -2.32684088f;
    r1 = n *= 0.50616854f;
    n = r0 *= n;
    r2 = n *= 0.31683579f;
    n += -0.36121735f;
    r3 = n *= 0.05221266f;
    r4 = n *= 2.95496702f;
    r5 = n += -1.30330253f;
    n += r2;
    r2 = n *= 1.93782794f;
    n *= 3.64042425f;
    n *= r0;
    n *= r4;
    n *= 20.88881111f;
    r4 = n *= 0.00000114f;
    n += r3;
    n += 1.47040701f;
    n += -2.14653540f;
    n = r5 *= n;
    n *= r5;
    n *= -1.94660830f;
    n = r4 += n;
    n += r2;
    n *= r4;
    n *= -0.26032439f;
    n *= r1;
    n += -0.47988811f;
    n += 0.66346747f;
    n += -0.18357936f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09064078f;
    n += -1.58038068f;
    n += 0.57826346f;
    n += 1.00209212f;
    r1 = n *= 0.37357727f;
    n = r0 *= n;
    r2 = n *= 0.64975989f;
    n += -0.45718548f;
    r3 = n *= 0.43114066f;
    r4 = n *= 0.00135547f;
    r5 = n += 0.38392928f;
    n += r2;
    r2 = n *= 0.00888578f;
    n *= 4.24650955f;
    n *= r0;
    n *= r4;
    n *= -3.21445751f;
    r4 = n *= -1.93492162f;
    n += r3;
    n += -0.69333899f;
    n += -2.92749977f;
    n = r5 *= n;
    n *= r5;
    n *= -0.47200459f;
    n = r4 += n;
    n += r2;
    n *= r4;
    n *= -2.88050222f;
    n *= r1;
    n += 0.22163394f;
    n += -0.07713589f;
    n += -0.26263803f;
    return n;
} // Solution1

// Solution2 result = 0.00000006
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799073f;
    n += -0.46937653f;
    n += -1.53060329f;
    n += 1.99997580f;
    r1 = n *= 0.09683961f;
    n = r0 *= n;
    r2 = n *= -2.50273228f;
    n += 0.71367449f;
    r3 = n *= -0.23555541f;
    r4 = n *= 0.92075980f;
    r5 = n += -2.26285911f;
    n += r2;
    r2 = n *= 1.54716516f;
    n *= -4.11552715f;
    n *= r0;
    n *= r4;
    n *= 10.58242798f;
    r4 = n *= 0.00001164f;
    n += r3;
    n += -0.40498346f;
    n += -3.68268681f;
    n = r5 *= n;
    n *= r5;
    n *= 0.07100729f;
    n = r4 += n;
    n += r2;
    n *= r4;
    n *= -0.36375135f;
    n *= r1;
    n += 0.03891264f;
    n += 0.59292257f;
    n += -0.10823745f;
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
