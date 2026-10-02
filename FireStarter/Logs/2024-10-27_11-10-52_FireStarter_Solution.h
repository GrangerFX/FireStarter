// Run date: 10/27/24 11:10:52 Pacific Daylight Time
// Run duration = 150.463083 seconds
// Run generation = 5
// Run evolution = 0
// Run max result = 0.00000030
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
// Run population = 131072
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
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= -0.64849550f;
    n *= -0.76638168f;
    r0 = n += -1.56135607f;
    r1 = n *= -0.59724748f;
    n = r1 *= n;
    r2 = n *= 1.19778311f;
    r3 = n += -0.74440837f;
    n += 0.05611632f;
    r4 = n *= 1.11767149f;
    n *= -0.02034757f;
    r5 = n *= -0.04426225f;
    n *= 5.19388819f;
    n *= r1;
    n *= 2.20533824f;
    r1 = n += 1.02875388f;
    r6 = n += -1.26551676f;
    n += 1.81039023f;
    r7 = n *= -2.36078119f;
    n *= r5;
    n *= r7;
    r7 = n *= -5.49931765f;
    n += r1;
    n += 0.17606556f;
    n *= -1.84146929f;
    n += 1.74426460f;
    n *= r3;
    n += r7;
    n *= r2;
    n += r4;
    n += r6;
    n = r0 *= n;
    n += r0;
    return n;
} // Solution
