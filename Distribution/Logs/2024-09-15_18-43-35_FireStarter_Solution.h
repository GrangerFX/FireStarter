// Run date: 09/15/24 18:43:35 Pacific Daylight Time
// Run duration = 16534.771695 seconds
// Run generation = 760
// Run evolution = 0
// Run max result = 0.00001192
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
    float r0, r1, r2, r3, r4;

    n *= -1.08099604f;
    r0 = n *= -0.00431265f;
    n += 1.25189435f;
    n += -5.69473791f;
    r1 = n += 0.87023848f;
    n += -7.19157076f;
    n = r1 += n;
    n += r1;
    r1 = n *= -9.74434853f;
    r2 = n += -0.05335639f;
    n *= -0.73818821f;
    n += 3.77810001f;
    n = r2 += n;
    n += r0;
    n += r1;
    r1 = n += -1.06962502f;
    r0 = n *= -0.63133931f;
    n *= 0.48019058f;
    n *= r1;
    r1 = n += -2.94033241f;
    r3 = n += 6.74908447f;
    n *= -1.36274767f;
    n *= 3.51283073f;
    n = r3 += n;
    r4 = n += -0.41116104f;
    n *= r2;
    n = r1 *= n;
    n *= r4;
    n *= r0;
    n += -0.29340410f;
    n *= r1;
    n *= r3;
    return n;
} // Solution
