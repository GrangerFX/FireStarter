// Run date: 11/03/24 11:14:20 Pacific Standard Time
// Run duration = 40.783427 seconds
// Run generation = 29
// Run evolution = 0
// Run max result = 0.00000083
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
    float r0, r1, r2, r3, r4;

    n += -3.14159274f;
    r0 = n *= -0.24527937f;
    r1 = n *= -0.96626717f;
    n *= r1;
    r1 = n += -1.22344983f;
    r2 = n += -0.34512645f;
    n += 1.37885666f;
    n *= 8.37975025f;
    n *= 0.04245958f;
    n *= -2.58262277f;
    n = r1 += n;
    n *= 9.01150703f;
    r3 = n *= -1.52355576f;
    r4 = n *= -0.01728988f;
    n += -5.15341759f;
    n += -3.10317230f;
    n += r3;
    r3 = n += -3.47920513f;
    n += -0.42180276f;
    n = r2 *= n;
    n = r3 += n;
    n *= r4;
    n *= r2;
    n = r3 += n;
    r2 = n *= 15.64586353f;
    n += r1;
    n += -5.09194994f;
    n += r2;
    n *= -0.10394019f;
    n += 0.57650012f;
    n += r3;
    n *= r0;
    return n;
} // Solution
