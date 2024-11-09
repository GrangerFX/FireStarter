// Run date: 11/09/24 13:24:10 Pacific Standard Time
// Run duration = 37.595884 seconds
// Run generation = 9
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

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 1
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
    float r0, r1, r2, r3, r4, r5, r6;

    n += -1.89807689f;
    r0 = n += -1.24351561f;
    r1 = n *= -0.11626118f;
    n *= -0.27359229f;
    r2 = n *= 4.13819361f;
    n *= r0;
    n *= -0.61520678f;
    r0 = n += 1.48093414f;
    r3 = n *= 1.93480015f;
    r4 = n *= 0.03718653f;
    n *= -1.10559464f;
    r5 = n *= 2.30185699f;
    n += 1.02541459f;
    r6 = n *= 0.47126141f;
    n = r5 += n;
    n *= 20.87892342f;
    n *= r4;
    n += 5.91859055f;
    r4 = n *= -0.02505745f;
    n *= r5;
    n *= -3.12520003f;
    n *= 5.01698494f;
    n += r4;
    n *= r6;
    n = r0 += n;
    n *= r3;
    n *= r1;
    n *= r0;
    n += r2;
    n *= 1.07267845f;
    n += -0.00000001f;
    n *= 1.51259005f;
    return n;
} // Solution
