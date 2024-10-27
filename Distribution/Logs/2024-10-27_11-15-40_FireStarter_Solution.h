// Run date: 10/27/24 11:15:40 Pacific Daylight Time
// Run duration = 157.528364 seconds
// Run generation = 5
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
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 123
// Run optimizeSeed = 123
// Run tests = 16
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
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= 0.27095187f;
    n *= -3.30408311f;
    r0 = n += 2.81250310f;
    r1 = n *= -0.22822885f;
    n = r1 *= n;
    r2 = n *= 0.53777868f;
    r3 = n += -1.30963099f;
    n += -0.36477077f;
    r4 = n *= -0.14453317f;
    n *= 0.99996459f;
    r5 = n *= -2.60067558f;
    n *= 2.06081343f;
    n *= r1;
    n *= 1.10936248f;
    r1 = n += -0.45214504f;
    r6 = n += 0.76864326f;
    n += 5.24062395f;
    r7 = n *= -1.30596995f;
    n *= r5;
    n *= r7;
    r7 = n *= -0.10041205f;
    n += r1;
    n += 0.91623372f;
    n *= 0.90000457f;
    n += 0.14077611f;
    n *= r3;
    n += r7;
    n *= r2;
    n += r4;
    n += r6;
    n = r0 *= n;
    n += r0;
    return n;
} // Solution
