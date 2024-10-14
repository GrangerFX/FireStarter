// Run date: 10/13/24 16:15:58 Pacific Daylight Time
// Run duration = 1522.130846 seconds
// Run generation = 49
// Run evolution = 0
// Run max result = 0.00000024
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE_GPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 524288
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
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 7.57146168f;
    r0 = n += 0.26722589f;
    r1 = n *= 0.30437979f;
    n *= r1;
    n *= 5.56144333f;
    r1 = n *= 0.98206520f;
    n *= -1.58963084f;
    n += -1.23983979f;
    r2 = n += -0.56673872f;
    r3 = n += 0.02909625f;
    r4 = n += 2.51643348f;
    n += 2.18992686f;
    n *= -1.08045936f;
    r5 = n += -0.37980986f;
    n = r1 += n;
    n += 0.50599521f;
    r6 = n *= 0.14021516f;
    n = r2 += n;
    n = r6 += n;
    n *= 0.02466970f;
    n *= -4.13746834f;
    n *= r6;
    n *= r5;
    n += 0.18166688f;
    n += -3.99106026f;
    n *= r1;
    n = r2 *= n;
    n += -2.24390268f;
    n *= r3;
    n += r2;
    n *= r4;
    n *= r0;
    return n;
} // Solution
