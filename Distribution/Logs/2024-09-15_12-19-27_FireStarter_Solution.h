// Run date: 09/15/24 12:19:27 Pacific Daylight Time
// Run duration = 13979.220025 seconds
// Run generation = 24
// Run evolution = 0
// Run max result = 0.00000077
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
    float r0, r1, r2, r3, r4, r5;

    n += 1.03386223f;
    n += -2.41203523f;
    r0 = n *= 4.41222572f;
    n *= -3.43576145f;
    r1 = n *= 3.47304392f;
    n *= -1.83700657f;
    n *= r1;
    r1 = n *= 0.90447009f;
    r2 = n *= 1.25453115f;
    n += r1;
    r1 = n *= -1.37396038f;
    r3 = n += -1.29105377f;
    n *= -1.30533314f;
    r4 = n += -0.39005977f;
    n *= -2.14496922f;
    n *= r3;
    n += -0.91948384f;
    r3 = n *= 0.16500416f;
    n = r1 += n;
    r5 = n += -4.32602501f;
    n = r3 += n;
    n *= -5.86181068f;
    n += r4;
    n *= -0.24495538f;
    n *= r1;
    n += r3;
    n += -1.23411822f;
    n *= r2;
    n += -0.64603990f;
    n += r5;
    n += 0.63458413f;
    n *= r0;
    return n;
} // Solution
