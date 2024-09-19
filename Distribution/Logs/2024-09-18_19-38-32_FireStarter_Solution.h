// Run date: 09/18/24 19:38:32 Pacific Daylight Time
// Run duration = 2001.952247 seconds
// Run generation = 8
// Run evolution = 0
// Run max result = 0.00000017
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

    n += 0.21075588f;
    r0 = n *= -3.14159274f;
    r1 = n *= 1.69688416f;
    n *= -0.05935362f;
    r2 = n *= -2.00043082f;
    r3 = n *= -1.58784401f;
    n *= -1.14030254f;
    n *= r1;
    r1 = n *= -7.60550737f;
    r4 = n += -1.46422470f;
    n *= -2.10074759f;
    r5 = n *= -1.38766146f;
    n *= r3;
    n *= r5;
    n = r0 *= n;
    n *= -0.17582437f;
    n *= 0.84306824f;
    r5 = n += 4.80499411f;
    r3 = n *= 0.58099830f;
    n += r5;
    n += r0;
    n += 1.36780787f;
    n += -2.60302401f;
    r0 = n += -2.51534677f;
    n = r4 += n;
    n = r0 += n;
    n *= r4;
    n += -0.09554650f;
    n *= r1;
    n += r3;
    n *= r0;
    n *= r2;
    return n;
} // Solution
