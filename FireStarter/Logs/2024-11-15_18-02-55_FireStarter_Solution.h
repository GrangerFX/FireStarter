// Run date: 11/15/24 18:02:55 Pacific Standard Time
// Run duration = 758.746822 seconds
// Run generation = 2
// Run evolution = 0
// Run max result = 0.00000012
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
// Run candidates = 16
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
    n *= 0.01655895f;
    r0 = n *= -7.21154499f;
    r1 = n *= -3.86138201f;
    r2 = n *= 0.09076831f;
    r3 = n *= 1.71170306f;
    n *= 1.53176284f;
    r4 = n *= 2.46243906f;
    r5 = n *= -0.41416103f;
    r6 = n *= -2.57954597f;
    n *= r2;
    n += 0.14983386f;
    n *= 0.59395260f;
    n += 1.11600733f;
    n *= r0;
    n = r4 += n;
    n = r3 += n;
    n *= r4;
    n *= -1.56159317f;
    r4 = n += 2.33026910f;
    n += -1.70920563f;
    n *= 0.22051999f;
    n *= 5.33966398f;
    r0 = n += 0.85936785f;
    n *= 0.27058071f;
    n += r0;
    n *= r3;
    n *= r4;
    n *= r1;
    n *= r5;
    n += r6;
    n *= -3.46388793f;
    return n;
} // Solution
