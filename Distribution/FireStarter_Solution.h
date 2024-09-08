// Run date: 09/08/24 10:07:01 Pacific Daylight Time
// Run duration = 79.797390 seconds
// Run generation = 23
// Run evolution = 0
// Run max result = 0.00000066
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
// Run tests = 0
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 262144
// Run iterations = 64
// Run passes = 100
// Run candidates = 16
// Run attempts = 0
// Run optimize = 4

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

    n *= 3.42216349f;
    r0 = n += 0.62199420f;
    r1 = n *= -2.79481649f;
    n *= r0;
    n *= 0.72035635f;
    n *= 2.60419583f;
    r0 = n *= -1.74978960f;
    r2 = n *= -2.32230592f;
    r3 = n += 6.19738913f;
    n += -1.85935163f;
    n *= r3;
    n += -0.00000059f;
    n *= 3.24166751f;
    n = r2 += n;
    n = r0 *= n;
    n += r2;
    r2 = n += 0.30876651f;
    n += r2;
    n += -0.79222149f;
    n *= 2.28712273f;
    n *= r1;
    r1 = n *= -0.54667693f;
    n *= 0.80524755f;
    n += -0.78961647f;
    n += -1.35641074f;
    n += -0.64475918f;
    n += 0.33375883f;
    n = r0 *= n;
    n += r0;
    n += 0.16418555f;
    n *= -0.23318119f;
    n *= r1;
    return n;
} // Solution
