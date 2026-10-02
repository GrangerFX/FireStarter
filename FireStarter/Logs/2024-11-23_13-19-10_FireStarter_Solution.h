// Run date: 11/23/24 13:19:10 Pacific Standard Time
// Run duration = 818.964130 seconds
// Run generation = 2
// Run evolution = 0
// Run max result = 0.00000015
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 1
// Run optimizeSeed = 1
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 65536
// Run passes = 512
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

    n += -3.14159274f;
    n *= 0.03682444f;
    r0 = n *= 0.36982810f;
    r1 = n *= 6.44178247f;
    r2 = n *= -3.71619225f;
    r3 = n *= 0.06769498f;
    n *= 0.53302616f;
    r4 = n *= 11.59154224f;
    r5 = n *= 2.34150100f;
    r6 = n *= -1.57423186f;
    n *= r2;
    n += -21.12516212f;
    n *= -0.23511678f;
    n += -1.61378217f;
    n *= r0;
    n = r4 += n;
    n = r3 += n;
    n *= r4;
    n *= -3.94468546f;
    r4 = n += 1.56616998f;
    n += 0.07017637f;
    n *= -0.94784307f;
    n *= 3.46543932f;
    r0 = n += -1.39228690f;
    n *= 1.50237119f;
    n += r0;
    n *= r3;
    n *= r4;
    n *= r1;
    n *= r5;
    n += r6;
    n *= -1.98952866f;
    return n;
} // Solution
