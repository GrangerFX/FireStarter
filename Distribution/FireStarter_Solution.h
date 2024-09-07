// Run date: 09/07/24 15:38:29 Pacific Daylight Time
// Run duration = 101.510463 seconds
// Run generation = 76
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
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE_GPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 0
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 131072
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
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -0.76777768f;
    n *= 1.59455752f;
    n += 0.12310392f;
    n = r0 *= n;
    n += -1.01678216f;
    n += -0.69075710f;
    n *= 0.32344350f;
    n *= -0.91920972f;
    n *= -5.57918501f;
    r1 = n *= 1.29309320f;
    r2 = n *= -4.56525707f;
    r3 = n += -3.45903945f;
    r4 = n *= -1.11192584f;
    r5 = n += -0.21857743f;
    r6 = n += 0.86607057f;
    n += 3.89047194f;
    n *= r5;
    n *= -2.70634246f;
    n += -1.25612938f;
    n *= r0;
    n = r4 += n;
    n += r1;
    n += -0.82943940f;
    n += r4;
    n *= 1.60584462f;
    n = r6 *= n;
    n += r2;
    n *= 4.96783257f;
    n += -0.23680224f;
    n *= r3;
    n *= -1.84575093f;
    n *= r6;
    return n;
} // Solution
