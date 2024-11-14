// Run date: 11/13/24 19:27:17 Pacific Standard Time
// Run duration = 1088.194704 seconds
// Run generation = 3
// Run evolution = 0
// Run max result = 0.00000055
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

// Run scale = 0.200000f
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
    float r0, r1, r2, r3;

    r0 = n += -3.14159274f;
    r1 = n *= -0.66549671f;
    n *= -2.42834711f;
    n = r1 *= n;
    r2 = n *= 2.28119874f;
    n += r2;
    n += -0.23677729f;
    r2 = n *= -0.44615549f;
    n = r1 += n;
    n += r1;
    n *= 1.65233469f;
    n *= -0.57950634f;
    n = r2 += n;
    r1 = n *= -0.11424132f;
    n *= -12.63579750f;
    n += -2.28779006f;
    n += -6.98451376f;
    r3 = n *= 0.12998515f;
    n *= -1.87437725f;
    n *= -0.76439905f;
    n *= r1;
    r1 = n += -0.26663193f;
    n *= r3;
    n += 0.32353768f;
    n *= r0;
    n *= 2.22325969f;
    r0 = n *= 0.96479297f;
    n = r0 += n;
    n *= -2.17598438f;
    n *= r2;
    n += r0;
    n *= r1;
    return n;
} // Solution
