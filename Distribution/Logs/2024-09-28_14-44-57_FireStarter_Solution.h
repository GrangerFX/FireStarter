// Run date: 09/28/24 14:44:57 Pacific Daylight Time
// Run duration = 118.208746 seconds
// Run generation = 25
// Run evolution = 0
// Run max result = 0.00000072
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
// Run tests = 1
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 32
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
    float r0, r1, r2, r3, r4, r5;

    n *= 1.21468616f;
    r0 = n += -1.03092718f;
    n += r0;
    r0 = n += -3.47607517f;
    r1 = n *= 5.20710659f;
    n = r0 *= n;
    r2 = n += 3.34543276f;
    n *= 2.99539089f;
    r3 = n *= 0.39205065f;
    n *= -0.14043267f;
    r4 = n *= -2.10559440f;
    n *= 4.14117718f;
    n += 0.14002781f;
    n += 10.85432148f;
    r5 = n += -3.08766603f;
    n *= r5;
    n = r3 *= n;
    n *= -0.54641658f;
    n *= 0.04304894f;
    n *= 2.29700303f;
    r5 = n += 3.59962320f;
    n += -1.49848640f;
    n += r3;
    n += r2;
    n += r0;
    n += 0.51853406f;
    n += r4;
    n += 0.00446341f;
    n *= r1;
    n *= 1.41464245f;
    n *= -1.37049377f;
    n *= r5;
    return n;
} // Solution
