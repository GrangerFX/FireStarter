// Run date: 11/15/24 18:35:32 Pacific Standard Time
// Run duration = 908.908011 seconds
// Run generation = 10
// Run evolution = 0
// Run max result = 0.00000042
// Run variations = 1
// Run samples = 15
// Run instructions = 30
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

    n *= 0.12143396f;
    r0 = n += -0.57224405f;
    n = r0 *= n;
    n *= 0.56834888f;
    r1 = n += -0.15981612f;
    n += -0.14994207f;
    n *= -1.56320059f;
    r2 = n += 0.28932384f;
    r3 = n += 1.04849827f;
    n = r0 *= n;
    n *= -4.93263721f;
    r4 = n *= -2.24819708f;
    r5 = n *= 0.41159123f;
    n += -1.13345015f;
    r6 = n *= -2.58096838f;
    n = r4 += n;
    n *= r3;
    n += -2.46429944f;
    n *= r5;
    n *= 0.51118398f;
    n *= -4.39584732f;
    n += r6;
    n += 2.82234716f;
    n *= r4;
    n *= -0.63168347f;
    n *= r2;
    n *= r1;
    n += r0;
    n += -0.66248381f;
    n *= -1.53710115f;
    return n;
} // Solution
