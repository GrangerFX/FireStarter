// Run date: 11/30/24 09:25:49 Pacific Standard Time
// Run duration = 100.344897 seconds
// Run generation = 33
// Run evolution = 0
// Run max result = 0.00000017
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
// Run population = 65536
// Run passes = 384
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
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159274f;
    r1 = n *= 0.85753447f;
    n *= r1;
    n += -7.18067360f;
    n += 4.70194244f;
    r1 = n += 3.93320370f;
    r2 = n *= -1.39106238f;
    n += r1;
    r1 = n += 1.48599112f;
    n *= -0.55716038f;
    r3 = n *= 1.82978046f;
    n += r1;
    r1 = n *= -0.00028694f;
    r4 = n *= -4.40051270f;
    n += -3.14259052f;
    n *= 2.78415322f;
    n += r3;
    n += 6.79086113f;
    r3 = n *= 0.04780575f;
    n += -1.99986100f;
    n = r3 *= n;
    n += -1.97126365f;
    r5 = n += 2.76318526f;
    n *= r2;
    n += r1;
    n *= r4;
    n *= -6.89887857f;
    n = r5 += n;
    n *= r0;
    n *= -2.85930228f;
    n *= r5;
    n *= r3;
    return n;
} // Solution
