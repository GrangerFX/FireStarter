// Run date: 09/15/24 12:52:56 Pacific Daylight Time
// Run duration = 7171.146350 seconds
// Run generation = 225
// Run evolution = 0
// Run max result = 0.00001442
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
    float r0, r1, r2, r3;

    n += 0.85289460f;
    n *= -1.24099219f;
    n += -0.76583403f;
    r0 = n += 1.61052370f;
    n += r0;
    n += 1.12498963f;
    n += 0.43493229f;
    r0 = n *= -1.49355030f;
    r1 = n *= 3.12436986f;
    n = r1 += n;
    n *= -0.07611138f;
    n *= r0;
    n += -1.45441508f;
    n += -1.55672240f;
    n *= -4.71420860f;
    r0 = n *= 1.36555731f;
    r2 = n += -6.66548872f;
    n += r2;
    r2 = n *= 0.50783473f;
    n *= -0.01352894f;
    r3 = n += 0.64661491f;
    n *= r3;
    n *= -3.68047714f;
    n *= r0;
    n += 5.55367756f;
    r0 = n += 0.91188771f;
    r3 = n *= -0.33051527f;
    n *= r3;
    n *= -0.19282542f;
    n *= r1;
    n *= r2;
    n *= r0;
    return n;
} // Solution
