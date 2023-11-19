// Run date: 11/19/23 09:32:11 Pacific Standard Time
// Run duration = 4255.331962 seconds
// Run generation = 80
// Run evolution = 19
// Run result = 0.00000030
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

// Solution0 result = 0.00000021
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.98142076f;
    r0 = n *= -0.60168135f;
    n += 0.34121701f;
    r1 = n += 0.95851761f;
    n *= -0.00000003f;
    r2 = n *= 0.53855765f;
    n = r2 += n;
    n *= 2.15007925f;
    n += -1.79239261f;
    n += 0.77970433f;
    n *= r0;
    r0 = n += -1.31622648f;
    n *= 0.50758511f;
    n = r2 += n;
    r3 = n *= -2.10114884f;
    r4 = n *= -0.00289140f;
    n *= 4.06843996f;
    n *= r2;
    r2 = n += -1.01191044f;
    n = r2 *= n;
    n = r0 *= n;
    n = r4 += n;
    n *= r2;
    n *= r4;
    r4 = n += -6.15807962f;
    n += 0.18590824f;
    n *= r4;
    n *= r0;
    n *= 0.30577844f;
    n += r3;
    n += r1;
    n *= -0.17346576f;
    return n;
} // Solution0

// Solution1 result = 0.00000018
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += 1.65454471f;
    r0 = n *= 0.19290192f;
    n += -0.85445553f;
    r1 = n += 0.08737642f;
    n *= -0.00000000f;
    r2 = n *= 1.06037235f;
    n = r2 += n;
    n *= 9.50486851f;
    n += -1.43347263f;
    n += 0.01616764f;
    n *= r0;
    r0 = n += 1.29734266f;
    n *= 0.88095695f;
    n = r2 += n;
    r3 = n *= -0.05772528f;
    r4 = n *= -1.00593555f;
    n *= 0.59389329f;
    n *= r2;
    r2 = n += -1.02623439f;
    n = r2 *= n;
    n = r0 *= n;
    n = r4 += n;
    n *= r2;
    n *= r4;
    r4 = n += -1.08919418f;
    n += -1.44548261f;
    n *= r4;
    n *= r0;
    n *= -1.47679043f;
    n += r3;
    n += r1;
    n *= -0.79668111f;
    return n;
} // Solution1

// Solution2 result = 0.00000030
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.81338680f;
    r0 = n *= -0.13904294f;
    n += -0.46786129f;
    r1 = n += 0.25542489f;
    n *= 0.00000147f;
    r2 = n *= 2.84976864f;
    n = r2 += n;
    n *= -1.49334812f;
    n += 0.96130574f;
    n += 1.22441030f;
    n *= r0;
    r0 = n += 0.24452677f;
    n *= 0.24204762f;
    n = r2 += n;
    r3 = n *= -0.69126201f;
    r4 = n *= 0.34415659f;
    n *= 2.90044069f;
    n *= r2;
    r2 = n += 1.13627470f;
    n = r2 *= n;
    n = r0 *= n;
    n = r4 += n;
    n *= r2;
    n *= r4;
    r4 = n += -0.99571669f;
    n += -1.87073028f;
    n *= r4;
    n *= r0;
    n *= -0.63180530f;
    n += r3;
    n += r1;
    n *= -1.61450934f;
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
