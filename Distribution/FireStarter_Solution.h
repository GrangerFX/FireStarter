// Run date: 08/10/24 11:48:19 Pacific Daylight Time
// Run duration = 38.267954 seconds
// Run generation = 0
// Run evolution = 0
// Run max result = 0.00000000
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_GPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 0
// Run streams = 1
// Run units = 1
// Run states = 1
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

// Solution0 result = 0.00000000
inline float Solution0(float n)
{
    float r0;

    r0 = n *= 0.00000000f;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n *= r0;
    return n;
} // Solution0

// Solution1 result = 0.00000000
inline float Solution1(float n)
{
    float r0;

    r0 = n *= 0.00000000f;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n *= r0;
    return n;
} // Solution1

// Solution2 result = 0.00000000
inline float Solution2(float n)
{
    float r0;

    r0 = n *= 0.00000000f;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n *= r0;
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
