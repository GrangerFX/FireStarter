// Run date: 03/07/24 08:23:01 Pacific Standard Time
// Run duration = 1183.015874 seconds
// Run generation = 90
// Run evolution = 17
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
// Run evolveSeed = 1
// Run optimizeSeed = 0
// Run tests = 0
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.14159274f;
    n *= 0.36934832f;
    r1 = n *= -4.32621431f;
    r2 = n *= -0.58100480f;
    r3 = n *= 0.56608808f;
    n *= r3;
    r3 = n += -0.99971688f;
    r4 = n += -1.02938032f;
    r5 = n *= -0.02096708f;
    n = r5 += n;
    r6 = n += 3.42467403f;
    n *= r6;
    n += 0.39784202f;
    n *= r3;
    n *= 1.08503699f;
    n += r4;
    r4 = n *= -0.00304355f;
    n *= -1.79738486f;
    r3 = n += -0.60936958f;
    n = r4 += n;
    n *= r5;
    n *= r4;
    n *= r0;
    n *= 4087.77954102f;
    n *= -0.01829734f;
    n += r1;
    n += r2;
    n *= -0.55107749f;
    n *= r3;
    n *= 0.31052771f;
    n += 0.00000000f;
    n *= 2.51408601f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.09065866f;
    n *= 1.61368752f;
    r1 = n *= -1.04591990f;
    r2 = n *= -0.41296923f;
    r3 = n *= -0.41850594f;
    n *= r3;
    r3 = n += -0.17955700f;
    r4 = n += -0.41221941f;
    r5 = n *= 0.13420591f;
    n = r5 += n;
    r6 = n += -5.86277962f;
    n *= r6;
    n += 1.18110168f;
    n *= r3;
    n *= 0.05667856f;
    n += r4;
    r4 = n *= 0.04542267f;
    n *= 0.72769976f;
    r3 = n += -0.97016090f;
    n = r4 += n;
    n *= r5;
    n *= r4;
    n *= r0;
    n *= -0.00763826f;
    n *= -918.88818359f;
    n += r1;
    n += r2;
    n *= -1.16977727f;
    n *= r3;
    n *= -0.08496266f;
    n += 0.02366156f;
    n *= -4.99256134f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.61799383f;
    n *= -0.25582060f;
    r1 = n *= 1.80501890f;
    r2 = n *= 0.40309873f;
    r3 = n *= 1.62340891f;
    n *= r3;
    r3 = n += -0.46431500f;
    r4 = n += -0.49148071f;
    r5 = n *= -0.14346659f;
    n = r5 += n;
    r6 = n += 3.54572344f;
    n *= r6;
    n += 3.41236186f;
    n *= r3;
    n *= 0.23911722f;
    n += r4;
    r4 = n *= -2.05617619f;
    n *= -0.97852641f;
    r3 = n += 1.08375275f;
    n = r4 += n;
    n *= r5;
    n *= r4;
    n *= r0;
    n *= -52.57863617f;
    n *= 0.04414088f;
    n += r1;
    n += r2;
    n *= -0.34193632f;
    n *= r3;
    n *= -0.29594275f;
    n += -0.40859050f;
    n *= -1.28147566f;
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
