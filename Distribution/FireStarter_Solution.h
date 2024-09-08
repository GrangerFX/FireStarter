// Run date: 09/08/24 10:01:27 Pacific Daylight Time
// Run duration = 247.301924 seconds
// Run generation = 106
// Run evolution = 0
// Run max result = 0.00000028
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
// Run tests = 0
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 262144
// Run iterations = 64
// Run passes = 100
// Run candidates = 16
// Run attempts = 0
// Run optimize = 4

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

    n *= -3.64820981f;
    r0 = n += 1.00084472f;
    r1 = n *= -6.39614773f;
    n *= r0;
    n *= 0.14320765f;
    r0 = n *= 0.46703890f;
    r2 = n += 3.66686463f;
    r3 = n += 2.03531265f;
    n += r0;
    r0 = n += 0.84730339f;
    r4 = n *= -0.20250432f;
    n += -1.49965858f;
    n += -1.66370761f;
    n += r2;
    n += r4;
    r4 = n *= -1.31115365f;
    n = r4 *= n;
    n *= 5.27248764f;
    n *= 1.99457109f;
    r2 = n += 1.06048691f;
    n *= -0.00000007f;
    n += 0.66020244f;
    r5 = n *= -2.41783786f;
    n *= r4;
    n *= r3;
    n *= r5;
    n *= 8.07890415f;
    n *= r2;
    n *= r1;
    n *= 1.02289510f;
    n += 1.88222539f;
    n *= r0;
    return n;
} // Solution
