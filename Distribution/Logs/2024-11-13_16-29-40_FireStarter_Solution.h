// Run date: 11/13/24 16:29:40 Pacific Standard Time
// Run duration = 2379.312939 seconds
// Run generation = 4
// Run evolution = 0
// Run max result = 0.00000009
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

    n += -0.02343374f;
    r0 = n *= 0.40413240f;
    n += -1.06345880f;
    n += 0.47702634f;
    n *= -1.87044382f;
    n = r0 += n;
    r1 = n *= -1.16574192f;
    n = r1 *= n;
    r2 = n += -1.79118133f;
    n += 1.36050546f;
    r3 = n *= -0.01111607f;
    n += -1.46853042f;
    r4 = n += -3.29356050f;
    n *= r3;
    r3 = n += -0.89140397f;
    n *= r3;
    n *= r4;
    r4 = n += 0.64214832f;
    r3 = n += -0.98985094f;
    n *= -0.62189829f;
    n *= r2;
    n += 1.45653033f;
    n *= -1.40241528f;
    n = r3 *= n;
    n *= -3.71911931f;
    n += r1;
    n *= -0.00099923f;
    n += r4;
    n *= 0.03355778f;
    n *= r3;
    n += 0.51219153f;
    n *= r0;
    return n;
} // Solution
