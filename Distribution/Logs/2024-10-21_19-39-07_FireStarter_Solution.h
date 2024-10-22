// Run date: 10/21/24 19:39:07 Pacific Daylight Time
// Run duration = 5.336445 seconds
// Run generation = 3
// Run evolution = 0
// Run max result = 0.00000033
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE_CPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 1
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 131072
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

    r0 = n += -3.14159274f;
    r1 = n *= 0.03751755f;
    n = r0 *= n;
    n *= 1.71074903f;
    n += -0.22239067f;
    r2 = n *= -0.96855229f;
    n *= 2.36889911f;
    r3 = n += 0.99477506f;
    n *= -1.58727443f;
    r4 = n += 0.08192263f;
    r5 = n *= -0.92053384f;
    n = r4 += n;
    n = r4 += n;
    n += 1.45604110f;
    r6 = n += -0.38765693f;
    n += 1.83879960f;
    n *= -0.17209674f;
    n += r3;
    n = r0 *= n;
    n += r6;
    n += -4.98888588f;
    n *= r2;
    n *= 0.05861318f;
    n += -2.78291726f;
    n += 1.77616549f;
    n *= r0;
    n += 1.81915498f;
    n += r5;
    n *= 4.03757906f;
    n *= 4.56652737f;
    n *= r4;
    n *= r1;
    return n;
} // Solution
