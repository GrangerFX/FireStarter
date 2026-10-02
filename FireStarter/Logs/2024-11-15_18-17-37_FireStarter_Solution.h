// Run date: 11/15/24 18:17:37 Pacific Standard Time
// Run duration = 78.642468 seconds
// Run generation = 10
// Run evolution = 0
// Run max result = 0.00000043
// Run variations = 1
// Run samples = 15
// Run instructions = 24
// Run registers = 24
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
    float r0, r1, r2, r3, r4, r5, r6;

    n += 2.48169303f;
    n += 4.69488049f;
    n += -11.83579254f;
    n *= -0.68442392f;
    r0 = n += -1.03869975f;
    r1 = n *= 2.15196252f;
    n *= r1;
    r1 = n *= -0.02190074f;
    r2 = n *= 5.07324457f;
    r3 = n *= 0.02507817f;
    r4 = n += 0.25879034f;
    r5 = n *= -2.95421219f;
    r6 = n += -2.08410168f;
    n *= r6;
    n += -1.09664559f;
    n *= r4;
    n = r5 += n;
    n += -2.66616344f;
    n += r3;
    n *= r1;
    n += 1.38929868f;
    n += r2;
    n *= r5;
    n *= r0;
    return n;
} // Solution
