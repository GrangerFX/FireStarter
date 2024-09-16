// Run date: 09/15/24 12:03:55 Pacific Daylight Time
// Run duration = 22327.563094 seconds
// Run generation = 1068
// Run evolution = 0
// Run max result = 0.00002331
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

    r0 = n *= -1.46859932f;
    n += 3.23764682f;
    n *= -5.36218739f;
    n += 0.54591495f;
    n += -4.09314537f;
    n += -0.98342890f;
    n = r0 *= n;
    r1 = n *= -10.01609516f;
    r2 = n *= 0.87618220f;
    r3 = n *= 6.45796204f;
    n += 0.44803482f;
    n *= r2;
    n *= 0.94747967f;
    r2 = n *= 1.09864259f;
    n += -1.03696370f;
    n += r2;
    n += -1.50761473f;
    n = r3 += n;
    r2 = n *= 0.23917249f;
    n += r1;
    n *= -11.84771347f;
    r1 = n *= 0.03507531f;
    n *= -1.10833728f;
    n *= r0;
    n *= 0.23678152f;
    n += r3;
    n = r1 *= n;
    n *= 0.80168706f;
    n *= r1;
    n *= 0.11478826f;
    n *= 1.16638660f;
    n += r2;
    return n;
} // Solution
