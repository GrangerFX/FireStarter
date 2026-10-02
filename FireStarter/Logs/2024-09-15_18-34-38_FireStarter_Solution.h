// Run date: 09/15/24 18:34:38 Pacific Daylight Time
// Run duration = 4623.570406 seconds
// Run generation = 1864
// Run evolution = 0
// Run max result = 0.00000179
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE_GPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 262144
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

#define SOLUTION_VARIATIONS 1

#ifndef __CUDACC__
#include <cmath>
#endif

#define SOLUTION_PI 3.14159265f
#define SOLUTION_MIN 0.0f
#define SOLUTION_MAX (2.0f * 3.14159265f)

inline float SolutionTarget(float n, unsigned int variation = 0)
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

inline float Solution(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += 1.20406866f;
    r0 = n *= 0.25052986f;
    n = r0 *= n;
    r1 = n += -0.25714552f;
    r2 = n *= 5.48018551f;
    n = r1 += n;
    n += -7.36548805f;
    r3 = n *= 2.85200453f;
    n *= 3.00406718f;
    n *= -1.30529857f;
    r4 = n *= -0.59163725f;
    n *= 0.53336108f;
    r5 = n += 0.66972667f;
    n += -0.03711586f;
    n *= -2.55930305f;
    n = r0 += n;
    r6 = n *= -6.58483553f;
    n += r2;
    n += r6;
    n += -3.90732431f;
    n *= r0;
    n += r4;
    n += -0.26064295f;
    n *= -0.54084206f;
    n *= r1;
    r1 = n += 2.41648650f;
    n *= r3;
    n *= 4.37384224f;
    n *= r5;
    n *= r1;
    n *= -1.68058014f;
    n *= -5.84889507f;
    return n;
} // Solution
