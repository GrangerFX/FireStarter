// Run date: 10/27/24 12:55:26 Pacific Daylight Time
// Run duration = 171.194534 seconds
// Run generation = 33
// Run evolution = 0
// Run max result = 0.00000061
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
// Run evolveSeed = 123
// Run optimizeSeed = 123
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 16384
// Run iterations = 64
// Run passes = 1000
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

    r0 = n *= -0.27275237f;
    n += 0.85687685f;
    n = r0 *= n;
    r1 = n *= 1.46861851f;
    n *= -0.21730584f;
    r2 = n += 2.74474549f;
    r3 = n += -1.17018902f;
    n *= 0.42042163f;
    r4 = n *= 0.22852066f;
    n *= -1.30240726f;
    n *= 0.61194450f;
    r5 = n *= -3.68833828f;
    r6 = n += 0.60415155f;
    n *= r2;
    r2 = n *= -8.23035908f;
    n += 7.24219131f;
    n *= r6;
    n *= 0.26163951f;
    n += r2;
    n *= 0.08159050f;
    n *= 3.76571298f;
    n += 1.55222881f;
    n *= r4;
    n += -1.60456967f;
    n = r1 *= n;
    n += 3.64370370f;
    n *= r3;
    n *= -1.99903274f;
    n += r1;
    n *= r5;
    n += 0.82139122f;
    n *= r0;
    return n;
} // Solution
