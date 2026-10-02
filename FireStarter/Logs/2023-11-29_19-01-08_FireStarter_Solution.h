// Run date: 11/29/23 19:01:08 Pacific Standard Time
// Run duration = 1502.599403 seconds
// Run generation = 23
// Run evolution = 10
// Run max result = 0.00000048
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
// Run evolveSeed = 2
// Run optimizeSeed = 2
// Run tests = 1
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.12540722f;
    n *= -0.48278779f;
    n *= 0.43246463f;
    r0 = n *= -0.71038932f;
    r1 = n *= 0.00002609f;
    n += r0;
    r0 = n += -0.00240070f;
    n *= 1.38983417f;
    r2 = n += -0.00000003f;
    n = r2 *= n;
    r3 = n *= -0.94901967f;
    n += 7.25676537f;
    n += 12.10128784f;
    n *= -0.00231626f;
    r4 = n *= -1.58180833f;
    n = r2 *= n;
    r5 = n += -0.70107007f;
    n = r2 += n;
    n *= -1.15094626f;
    n *= -4.93495512f;
    n = r2 += n;
    n *= r4;
    n = r2 += n;
    n *= r3;
    n += -1.82785904f;
    n *= -0.55319566f;
    n = r5 *= n;
    n += -1.18743992f;
    n *= r0;
    n *= r2;
    n *= r5;
    n += r1;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += 1.13241732f;
    n *= -1.02512074f;
    n *= -0.84245574f;
    r0 = n *= -0.09361287f;
    r1 = n *= 0.34599695f;
    n += r0;
    r0 = n += 0.45954752f;
    n *= -4.11319637f;
    r2 = n += -0.00000144f;
    n = r2 *= n;
    r3 = n *= 0.15277453f;
    n += 1.62331617f;
    n += 6.46088362f;
    n *= 0.00692910f;
    r4 = n *= 1.17677057f;
    n = r2 *= n;
    r5 = n += -1.58382988f;
    n = r2 += n;
    n *= -1.26982713f;
    n *= 2.59592438f;
    n = r2 += n;
    n *= r4;
    n = r2 += n;
    n *= r3;
    n += -1.52608883f;
    n *= -0.23363928f;
    n = r5 *= n;
    n += -3.93509245f;
    n *= r0;
    n *= r2;
    n *= r5;
    n += r1;
    return n;
} // Solution1

// Solution2 result = 0.00000048
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.26338601f;
    n *= -1.27973175f;
    n *= -0.31441402f;
    r0 = n *= -2.31914616f;
    r1 = n *= -0.41422221f;
    n += r0;
    r0 = n += 0.74045062f;
    n *= -0.87197679f;
    r2 = n += 0.00000196f;
    n = r2 *= n;
    r3 = n *= 0.21706884f;
    n += -8.71469879f;
    n += -7.27458572f;
    n *= -0.00437103f;
    r4 = n *= 0.82301950f;
    n = r2 *= n;
    r5 = n += -2.10239434f;
    n = r2 += n;
    n *= -1.27004468f;
    n *= 1.34644997f;
    n = r2 += n;
    n *= r4;
    n = r2 += n;
    n *= r3;
    n += -0.67498690f;
    n *= 0.69487017f;
    n = r5 *= n;
    n += 0.64336604f;
    n *= r0;
    n *= r2;
    n *= r5;
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
