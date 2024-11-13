// Run date: 11/12/24 12:44:39 Pacific Standard Time
// Run duration = 87.058875 seconds
// Run generation = 6
// Run evolution = 0
// Run max result = 0.00000024
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
// Run population = 49152
// Run iterations = 64
// Run passes = 384
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

    n *= -1.62442935f;
    n *= 0.26651993f;
    r0 = n += 1.36012995f;
    r1 = n *= -0.60006535f;
    n = r1 *= n;
    r2 = n *= 1.73802078f;
    r3 = n += -0.03155610f;
    n += -1.14567089f;
    r4 = n *= -1.54755926f;
    n *= -0.00159600f;
    r5 = n *= -0.37918487f;
    n *= 13.24228668f;
    n *= r1;
    n *= 1.06411016f;
    r1 = n += -2.14842367f;
    r6 = n += 1.48148286f;
    n += -0.88609201f;
    r7 = n *= -1.66907763f;
    n *= r5;
    n *= r7;
    r7 = n *= -11.11401081f;
    n += r1;
    n += 1.89044797f;
    n *= -1.75388932f;
    n += 0.03492526f;
    n *= r3;
    n += r7;
    n *= r2;
    n += r4;
    n += r6;
    n = r0 *= n;
    n += r0;
    return n;
} // Solution
