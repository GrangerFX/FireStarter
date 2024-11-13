// Run date: 11/12/24 23:48:25 Pacific Standard Time
// Run duration = 2303.722132 seconds
// Run generation = 8
// Run evolution = 0
// Run max result = 0.00000035
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
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= 0.19954753f;
    n += -0.62689704f;
    n = r0 *= n;
    r1 = n *= 1.17044163f;
    n *= 0.99452418f;
    n += -0.14356366f;
    n *= -0.57330191f;
    r2 = n *= 0.05137445f;
    r3 = n += -0.78228247f;
    n += 1.13551462f;
    n *= 0.90440452f;
    n = r0 *= n;
    r4 = n += -1.84056962f;
    r5 = n *= 1.04398131f;
    r6 = n += -0.61014909f;
    r7 = n += -3.52671504f;
    n *= 9.82150841f;
    n *= r2;
    n = r7 += n;
    n = r3 *= n;
    n += 0.46471521f;
    r2 = n += -1.39211833f;
    n += r7;
    n += r5;
    n *= r0;
    n *= 0.85784680f;
    n *= r6;
    n += r4;
    n *= r1;
    n *= r2;
    n *= r3;
    n *= 0.18980345f;
    return n;
} // Solution
