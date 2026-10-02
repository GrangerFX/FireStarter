// Run date: 12/23/23 12:24:32 Pacific Standard Time
// Run duration = 8811.397481 seconds
// Run generation = 29
// Run evolution = 15
// Run max result = 0.00000012
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
// Run states = 64
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.31448838f;
    n *= -0.98732954f;
    n += -0.97547603f;
    r0 = n *= -0.59482676f;
    n *= -0.77772051f;
    n *= -1.56554103f;
    r1 = n *= -1.80730247f;
    r2 = n *= 0.14532311f;
    n = r2 += n;
    r3 = n *= -1.97545636f;
    n *= r0;
    n += -7.14186811f;
    n *= -1.01613176f;
    r0 = n += -0.44373485f;
    n *= r0;
    n *= 0.01556624f;
    r0 = n += 1.42760777f;
    r4 = n *= 0.46976855f;
    n += -0.55766368f;
    r5 = n *= 1.83688414f;
    n += 1.72528553f;
    n *= r4;
    n *= r2;
    n = r1 *= n;
    n *= r5;
    n += -2.61004543f;
    n *= r1;
    n += 1.99300945f;
    n *= r3;
    n *= r0;
    n += 0.23077056f;
    n += -0.23077051f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 1.19553530f;
    n *= 0.80910814f;
    n += -2.98964763f;
    r0 = n *= 1.53515351f;
    n *= -2.23322463f;
    n *= 0.21481669f;
    r1 = n *= 0.95791757f;
    r2 = n *= -0.75001818f;
    n = r2 += n;
    r3 = n *= -0.66515535f;
    n *= r0;
    n += 2.83038998f;
    n *= -0.00745849f;
    r0 = n += -1.58875835f;
    n *= r0;
    n *= 0.36644536f;
    r0 = n += -0.54754215f;
    r4 = n *= 0.22471948f;
    n += -1.47547722f;
    r5 = n *= -0.72679096f;
    n += -0.18788138f;
    n *= r4;
    n *= r2;
    n = r1 *= n;
    n *= r5;
    n += 6.86430883f;
    n *= r1;
    n += 4.01710320f;
    n *= r3;
    n *= r0;
    n += -0.06351250f;
    n += -0.05461932f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -1.11379385f;
    n *= -0.57068574f;
    n += -1.66406560f;
    r0 = n *= -0.46391737f;
    n *= -2.20700336f;
    n *= -1.50944829f;
    r1 = n *= -0.13667092f;
    r2 = n *= -0.20948255f;
    n = r2 += n;
    r3 = n *= -50.22483444f;
    n *= r0;
    n += 1.19519937f;
    n *= -0.02024084f;
    r0 = n += -2.26651597f;
    n *= r0;
    n *= 0.87498361f;
    r0 = n += 1.25879622f;
    r4 = n *= -0.56679922f;
    n += -1.41944528f;
    r5 = n *= 0.08112618f;
    n += -1.48059320f;
    n *= r4;
    n *= r2;
    n = r1 *= n;
    n *= r5;
    n += -0.35820624f;
    n *= r1;
    n += -0.06050590f;
    n *= r3;
    n *= r0;
    n += -0.69505560f;
    n += 1.21865427f;
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
