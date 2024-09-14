// Run date: 09/14/24 16:49:03 Pacific Daylight Time
// Run duration = 501.971331 seconds
// Run generation = 215
// Run evolution = 0
// Run max result = 0.00000036
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
    float r0, r1, r2, r3, r4, r5;

    n += 4.88787985f;
    r0 = n += 1.45706201f;
    r1 = n *= -4.06162643f;
    n *= -1.63477182f;
    n *= r1;
    r1 = n += -1.33322001f;
    r2 = n *= -4.05693626f;
    r3 = n *= 1.85700297f;
    n *= 1.84033525f;
    r4 = n += 0.62038970f;
    n += -1.82366180f;
    n += r3;
    r3 = n *= 0.03648131f;
    r5 = n *= 1.39625168f;
    n += 1.10948110f;
    n *= -0.17786893f;
    n *= -2.02918744f;
    n *= -1.10657465f;
    n = r3 += n;
    n += r4;
    n *= -2.17590070f;
    n *= r3;
    n += -5.35416031f;
    n *= r1;
    r1 = n *= -0.65031117f;
    n = r5 += n;
    n += r2;
    n *= r5;
    n += r1;
    n *= r0;
    n *= -0.25495926f;
    n *= -0.48729333f;
    return n;
} // Solution
