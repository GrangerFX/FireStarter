// Run date: 11/30/24 09:29:34 Pacific Standard Time
// Run duration = 107.353662 seconds
// Run generation = 8
// Run evolution = 0
// Run max result = 0.00000034
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 65536
// Run passes = 384
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.300000f
// Run startScale = 2.500000f
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
    float r0, r1, r2, r3, r4;

    n += -2.01355433f;
    r0 = n += -1.12803829f;
    r1 = n *= -0.14573033f;
    n *= 0.33255804f;
    n = r0 *= n;
    n = r0 += n;
    n *= -0.27568355f;
    r2 = n += -0.94612312f;
    n *= 0.52792752f;
    r3 = n *= -4.71133137f;
    n *= 1.46542895f;
    n *= r2;
    n = r3 += n;
    n *= -1.78063774f;
    n = r3 += n;
    n += r0;
    r0 = n += 0.57006788f;
    r2 = n += -0.72184402f;
    n += 8.90700722f;
    r4 = n *= 1.27097940f;
    n += r4;
    n *= 0.46850502f;
    n *= -5.15215206f;
    n *= -0.00446816f;
    n += 0.07050665f;
    n *= 2.60072756f;
    n *= r2;
    n += 6.10387802f;
    n += r0;
    n += 1.80223668f;
    n *= r3;
    n *= r1;
    return n;
} // Solution
