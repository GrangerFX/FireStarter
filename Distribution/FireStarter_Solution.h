// Run date: 11/03/24 18:25:16 Pacific Standard Time
// Run duration = 16.954031 seconds
// Run generation = 2
// Run evolution = 0
// Run max result = 0.00000000
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
    float r0, r1, r2, r3, r4, r5;

    n += 1.54165483f;
    r0 = n *= 0.38253188f;
    n += -1.38264728f;
    n += 0.78102887f;
    r1 = n += -1.92856336f;
    n += r1;
    r1 = n *= 0.90985918f;
    r2 = n *= 0.39018533f;
    r3 = n += -0.98797834f;
    r4 = n *= -0.30255070f;
    n = r2 += n;
    r5 = n += -0.98191625f;
    n += r3;
    r3 = n += -1.37744045f;
    n *= -1.12640703f;
    n = r3 += n;
    n = r3 += n;
    n += 1.92859554f;
    n *= 0.17066553f;
    n += 4.16670895f;
    n *= 0.24819459f;
    n += r3;
    n += -1.98459482f;
    n *= r5;
    n += -0.00121818f;
    n += r4;
    n = r0 *= n;
    r4 = n += -2.95102358f;
    n += r4;
    n *= r2;
    n += r0;
    n += r1;
    return n;
} // Solution
