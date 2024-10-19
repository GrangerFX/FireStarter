// Run date: 10/19/24 10:22:47 Pacific Daylight Time
// Run duration = 29.595645 seconds
// Run generation = 40
// Run evolution = 0
// Run max result = 0.00000038
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
// Run tests = 1
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
    float r0, r1, r2, r3, r4, r5;

    n += -0.07325700f;
    n += -3.06833553f;
    r0 = n *= 1.74298418f;
    r1 = n += -1.32114553f;
    n *= 0.65056109f;
    n += 1.71897113f;
    n *= 0.90611821f;
    n *= -0.02837576f;
    n *= r1;
    n *= 0.51870263f;
    r1 = n += 1.51627135f;
    r2 = n += -0.57345909f;
    r3 = n *= -1.45244730f;
    r4 = n *= -2.55340600f;
    n = r3 *= n;
    n += r3;
    n = r1 += n;
    r3 = n *= -0.04011148f;
    n *= -0.02044572f;
    r5 = n *= -3.32486153f;
    n *= r5;
    n *= r4;
    n += r3;
    r3 = n += 0.66599190f;
    n += r1;
    n += 3.14890146f;
    n *= r0;
    n *= r3;
    n *= 0.06328304f;
    n *= 0.73214960f;
    n *= 3.06623173f;
    n *= r2;
    return n;
} // Solution
