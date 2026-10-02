// Run date: 10/06/24 11:40:40 Pacific Daylight Time
// Run duration = 513.225766 seconds
// Run generation = 49
// Run evolution = 0
// Run max result = 0.00000017
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
// Run population = 262144
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
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.51485389f;
    r0 = n += -1.61746120f;
    r1 = n *= -0.16706915f;
    n *= r1;
    n *= 1.76365948f;
    r1 = n *= 2.19053316f;
    n *= 1.13488626f;
    n += -0.79610014f;
    r2 = n += -1.40058780f;
    r3 = n += 1.04350519f;
    r4 = n += 0.83301520f;
    n += 1.45668805f;
    n *= -0.00219613f;
    r5 = n += -1.35097909f;
    n = r1 += n;
    n += -5.88317013f;
    r6 = n *= -0.14707510f;
    n = r2 += n;
    n = r6 += n;
    n *= -0.04426700f;
    n *= -16.30044746f;
    n *= r6;
    n *= r5;
    n += -0.70131189f;
    n += -3.46766472f;
    n *= r1;
    n = r2 *= n;
    n += -4.41100550f;
    n *= r3;
    n += r2;
    n *= r4;
    n *= r0;
    return n;
} // Solution
