// Run date: 11/17/24 13:29:54 Pacific Standard Time
// Run duration = 57.270203 seconds
// Run generation = 7
// Run evolution = 0
// Run max result = 0.00000037
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

    n += -3.14159250f;
    r0 = n *= 0.06725404f;
    r1 = n *= -0.71890473f;
    n *= 0.87653506f;
    r2 = n *= -8.95628071f;
    n *= -0.58715016f;
    n *= 0.15958461f;
    n = r0 *= n;
    n *= 8.59630489f;
    n *= -6.32990170f;
    r3 = n += -1.29500651f;
    r4 = n += -6.23927069f;
    r5 = n += 0.40069076f;
    r6 = n *= -0.51241070f;
    n = r5 += n;
    n = r1 *= n;
    n = r1 *= n;
    n = r5 += n;
    n *= -3.51936722f;
    n *= 1.97966623f;
    n += r3;
    n += 1.82586920f;
    n += r5;
    n += -2.04597425f;
    n += r0;
    n += r6;
    n *= 1.30133164f;
    n *= r1;
    n += r4;
    n += 1.69758785f;
    n *= 0.45138499f;
    n *= r2;
    return n;
} // Solution
