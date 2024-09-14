// Run date: 09/14/24 14:51:55 Pacific Daylight Time
// Run duration = 12.851631 seconds
// Run generation = 4
// Run evolution = 0
// Run max result = 0.00140667
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_GPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 0
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 8192
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
    float r0, r1, r2;

    r0 = n += 0.81905216f;
    r1 = n *= 0.53935957f;
    n *= -0.33181623f;
    n += 2.73510814f;
    n *= -1.22610867f;
    n += 1.34505010f;
    r2 = n *= -0.50313902f;
    n *= r2;
    n += 0.66965443f;
    n = r0 *= n;
    r2 = n += 1.24802029f;
    n += r0;
    r0 = n *= -0.74961865f;
    n += r2;
    n *= -0.15103360f;
    n *= 1.57882249f;
    n += r1;
    n *= 0.09894010f;
    n = r0 += n;
    r1 = n *= -0.41334522f;
    n *= 1.76178157f;
    n *= r0;
    n += -0.18801126f;
    n *= -2.03354716f;
    r0 = n *= -0.20456068f;
    n *= 0.07975113f;
    n += -0.18674734f;
    n *= -2.18986964f;
    n += r0;
    n = r1 *= n;
    n += r1;
    n *= 1.04727304f;
    return n;
} // Solution
