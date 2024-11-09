// Run date: 11/09/24 09:52:23 Pacific Standard Time
// Run duration = 11.290758 seconds
// Run generation = 11
// Run evolution = 0
// Run max result = 0.00000047
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
// Run tests = 1
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 65536
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

    r0 = n *= 0.11342222f;
    n += -0.51836187f;
    n *= 2.19906449f;
    n = r0 += n;
    r1 = n *= 1.64473450f;
    n *= r1;
    r1 = n *= 0.70434326f;
    r2 = n += -2.00352693f;
    n = r2 += n;
    n += 0.14042018f;
    n *= 0.01595110f;
    n += -0.33068407f;
    r3 = n *= -0.26515239f;
    r4 = n *= 0.54997486f;
    n += r3;
    n = r1 *= n;
    n += r1;
    r1 = n += -0.63772827f;
    n *= -1.26501679f;
    n += 5.94573736f;
    r3 = n *= -12.66479492f;
    n += r3;
    n += r2;
    n *= r4;
    n *= -8.49063492f;
    n += -3.69985223f;
    n *= 1.14624178f;
    n *= -0.16897324f;
    n *= r1;
    n *= r0;
    n *= -0.62043160f;
    n *= 0.44214040f;
    return n;
} // Solution
