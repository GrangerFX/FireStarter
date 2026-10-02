// Run date: 11/16/24 12:59:22 Pacific Standard Time
// Run duration = 27.173436 seconds
// Run generation = 11
// Run evolution = 2
// Run max result = 0.00000018
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_CPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 1
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 262144
// Run passes = 500
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

    r0 = n += -3.14159274f;
    r1 = n *= 0.22227679f;
    r2 = n *= -0.42546695f;
    n = r2 *= n;
    r3 = n += -1.13254893f;
    r4 = n += 0.10489708f;
    n = r4 *= n;
    n *= -0.78705102f;
    n = r4 *= n;
    n *= -2.14748359f;
    n *= -3.04649639f;
    n += 1.06679964f;
    r5 = n += -0.11795747f;
    n += 3.86354375f;
    n *= -0.24942200f;
    n *= r5;
    n += r4;
    r4 = n *= 1.35034001f;
    r5 = n *= 1.27106798f;
    n *= r3;
    n *= r0;
    n *= -0.84032077f;
    r0 = n *= 0.30760598f;
    n *= r1;
    n *= 3.44368911f;
    n *= 1.32168663f;
    n += -0.69767904f;
    n += r2;
    n *= r4;
    n *= 0.00000000f;
    n *= r5;
    n += r0;
    return n;
} // Solution
