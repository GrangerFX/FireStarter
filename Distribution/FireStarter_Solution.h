// Run date: 11/24/24 10:47:30 Pacific Standard Time
// Run duration = 40.054686 seconds
// Run generation = 2
// Run evolution = 0
// Run max result = 0.00000054
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
    float r0, r1, r2, r3, r4, r5, r6;

    n += -2.19719553f;
    n *= -0.28063232f;
    r0 = n += 0.70584458f;
    n = r0 *= n;
    n += -1.47004545f;
    n *= 2.96803832f;
    r1 = n *= -0.70551676f;
    n += -0.68244410f;
    r2 = n += -1.13032568f;
    n *= 1.68071079f;
    r3 = n *= -0.11036986f;
    n += r3;
    r3 = n += -2.15047050f;
    r4 = n *= -0.06111309f;
    n *= r0;
    r0 = n *= -0.44957814f;
    r5 = n *= -3.18661547f;
    n = r3 *= n;
    n = r2 += n;
    r6 = n *= -0.22882436f;
    n += -1.82434869f;
    n *= r6;
    n += r3;
    n *= r1;
    n += r0;
    n += -0.38318554f;
    n *= -0.41241014f;
    n = r5 += n;
    n *= 5.88664961f;
    n += r2;
    n *= r4;
    n += r5;
    return n;
} // Solution
