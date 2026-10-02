// Run date: 10/06/24 17:40:23 Pacific Daylight Time
// Run duration = 669.859563 seconds
// Run generation = 31
// Run evolution = 0
// Run max result = 0.00000061
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE_CPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 524288
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
    float r0, r1, r2, r3, r4;

    n *= 1.24617195f;
    n *= 0.51476216f;
    n += -1.00763786f;
    r0 = n *= 0.08171137f;
    n *= -0.61071110f;
    n *= 2.00788593f;
    n *= r0;
    r0 = n *= 1.30321240f;
    r1 = n += 2.17917776f;
    r2 = n *= -1.16016293f;
    r3 = n += 0.68982053f;
    n *= 0.95829856f;
    n = r2 *= n;
    n *= 1.95300710f;
    n *= -0.42288437f;
    n *= r3;
    n = r0 *= n;
    n += 0.91310626f;
    n += 0.18240157f;
    r3 = n *= -1.47944856f;
    r4 = n *= 0.48230222f;
    n *= -0.09844604f;
    n = r0 += n;
    n *= 0.50579995f;
    n += 0.35192552f;
    n *= r2;
    n *= r3;
    n *= -1.33380270f;
    n += r4;
    n *= r0;
    n = r1 *= n;
    n += r1;
    return n;
} // Solution
