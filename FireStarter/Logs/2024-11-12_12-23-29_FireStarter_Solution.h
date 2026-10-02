// Run date: 11/12/24 12:23:29 Pacific Standard Time
// Run duration = 247.302651 seconds
// Run generation = 3
// Run evolution = 0
// Run max result = 0.00000048
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
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 65536
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

    n += 1.88547182f;
    n += -7.45074701f;
    n += 2.42368245f;
    r0 = n *= 0.71617138f;
    r1 = n *= -0.47488794f;
    n *= r0;
    r0 = n *= -1.39046025f;
    r2 = n += -2.52663708f;
    r3 = n *= -0.03125136f;
    n += -0.58870637f;
    r4 = n += 1.32511139f;
    r5 = n *= -0.14490338f;
    n = r0 *= n;
    n += 1.61438298f;
    r6 = n *= -1.10719645f;
    n += -0.15856239f;
    r7 = n *= 0.15095735f;
    n *= r4;
    n += -2.32151937f;
    r4 = n += 2.30560493f;
    n *= r0;
    n += r7;
    n += r2;
    n *= r5;
    r5 = n *= -4.29028797f;
    r2 = n += 1.68361044f;
    n += r2;
    n *= r3;
    n += r4;
    n += r5;
    n *= r6;
    n *= r1;
    return n;
} // Solution
