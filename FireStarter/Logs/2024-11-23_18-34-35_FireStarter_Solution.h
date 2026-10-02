// Run date: 11/23/24 18:34:35 Pacific Standard Time
// Run duration = 803.242524 seconds
// Run generation = 9
// Run evolution = 0
// Run max result = 0.00000011
// Run variations = 1
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
// Run population = 32768
// Run passes = 512
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
    float r0, r1, r2, r3;

    n *= -0.73533195f;
    r0 = n += 2.31011343f;
    r1 = n *= -0.11265405f;
    n = r0 *= n;
    r2 = n *= -0.37108594f;
    r3 = n += -2.93590260f;
    n += r3;
    n += 0.96167111f;
    n = r0 *= n;
    r3 = n += -2.09908509f;
    n *= 1.34646833f;
    n += r2;
    n *= -0.54812896f;
    n = r3 += n;
    r2 = n *= 2.09408522f;
    n += -0.07453606f;
    n = r2 += n;
    n *= 0.28039089f;
    n += -5.71480703f;
    n *= 0.70629007f;
    n += -0.58699411f;
    n *= r3;
    n = r0 *= n;
    n = r2 += n;
    n += r2;
    n *= 0.13239859f;
    n *= -0.24673671f;
    n *= 0.93148541f;
    n *= 19.17823219f;
    n += r0;
    n *= -4.35023022f;
    n *= r1;
    return n;
} // Solution
