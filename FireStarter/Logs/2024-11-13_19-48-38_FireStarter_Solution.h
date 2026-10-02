// Run date: 11/13/24 19:48:38 Pacific Standard Time
// Run duration = 1029.094937 seconds
// Run generation = 4
// Run evolution = 0
// Run max result = 0.00000006
// Run variations = 1
// Run samples = 15
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
// Run iterations = 64
// Run passes = 512
// Run candidates = 16
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
    float r0, r1, r2, r3, r4, r5;

    n += -3.64478111f;
    r0 = n += 0.50318849f;
    r1 = n *= -0.20075192f;
    n = r0 *= n;
    n += 3.91913414f;
    r2 = n *= 0.01574458f;
    r3 = n += 1.31979775f;
    n += r0;
    r0 = n *= 0.32001340f;
    n *= 0.19430022f;
    n *= 0.00023725f;
    n = r3 *= n;
    n *= 12.01038170f;
    n += 0.00873842f;
    r4 = n *= -4.34080172f;
    n += r0;
    r0 = n *= -4.46549177f;
    n = r4 *= n;
    r5 = n += 0.52496433f;
    n = r3 += n;
    n += r3;
    n *= 2.60484433f;
    r3 = n *= -0.31066972f;
    n *= 2.66082239f;
    n *= r5;
    n *= r0;
    n *= r3;
    n += -0.90901774f;
    n += r2;
    n *= -1.40352428f;
    n += r4;
    n *= r1;
    return n;
} // Solution
