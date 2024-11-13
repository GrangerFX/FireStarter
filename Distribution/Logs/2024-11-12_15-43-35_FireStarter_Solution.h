// Run date: 11/12/24 15:43:35 Pacific Standard Time
// Run duration = 82.367649 seconds
// Run generation = 74
// Run evolution = 0
// Run max result = 0.00000015
// Run variations = 1
// Run samples = 15
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
// Run iterations = 64
// Run passes = 512
// Run candidates = 32
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

    n += -1.01681888f;
    n += -1.02346754f;
    r0 = n += -1.10130620f;
    n *= -0.05748029f;
    r1 = n *= -1.88054740f;
    n *= r0;
    r0 = n *= 1.51760423f;
    n *= -0.99113458f;
    n += -0.68346173f;
    n += 3.61545777f;
    r2 = n += 3.21208405f;
    n *= -0.46117082f;
    n = r0 += n;
    r3 = n *= 0.00465970f;
    r4 = n *= -6.07801580f;
    n *= 4.67689705f;
    n += 2.62680268f;
    n *= r0;
    r0 = n += 1.27589488f;
    n *= 0.01074349f;
    r5 = n += -0.24943709f;
    n *= -11.54700089f;
    n *= r3;
    n *= r4;
    n = r5 += n;
    n *= -0.59224993f;
    n += r5;
    n *= r2;
    n *= r1;
    n *= -2.39592862f;
    n *= r0;
    n *= 0.64374983f;
    return n;
} // Solution
