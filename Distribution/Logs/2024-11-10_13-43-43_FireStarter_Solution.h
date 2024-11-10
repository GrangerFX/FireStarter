// Run date: 11/10/24 13:43:43 Pacific Standard Time
// Run duration = 107.905032 seconds
// Run generation = 69
// Run evolution = 0
// Run max result = 0.00000092
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
// Run tests = 16
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
    float r0, r1, r2, r3;

    n += -0.99216032f;
    r0 = n += -2.14943266f;
    n *= 0.03555733f;
    r1 = n *= -2.72567868f;
    r2 = n *= -0.45588502f;
    n *= r1;
    r1 = n += 1.80435371f;
    n *= r1;
    r1 = n *= -0.83388406f;
    n += 1.22637618f;
    n = r1 *= n;
    n += -3.37845993f;
    n *= 6.15575552f;
    n *= r1;
    r1 = n += -3.97964263f;
    n *= 0.01598636f;
    r3 = n += 0.48500144f;
    n += r1;
    n += -10.11637402f;
    n *= r3;
    r3 = n += 3.10777187f;
    n *= -17.28418159f;
    n *= -0.01718691f;
    n += -2.72625184f;
    n += r3;
    n *= -0.10997383f;
    n += -1.21228790f;
    n += 1.56883240f;
    n += -0.95714271f;
    n *= r0;
    n += r2;
    n += -0.00000030f;
    return n;
} // Solution
