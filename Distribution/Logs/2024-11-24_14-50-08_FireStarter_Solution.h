// Run date: 11/24/24 14:50:08 Pacific Standard Time
// Run duration = 966.538027 seconds
// Run generation = 9
// Run evolution = 0
// Run max result = 0.00000028
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 2
// Run optimizeSeed = 2
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 65536
// Run passes = 384
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
    float r0, r1, r2, r3;

    n *= 0.37835112f;
    r0 = n += -1.18862510f;
    r1 = n *= 0.06539704f;
    n = r0 *= n;
    r2 = n *= 2.53599429f;
    r3 = n += -0.32132176f;
    n += r3;
    n += -2.22227788f;
    n = r0 *= n;
    r3 = n += 1.77003491f;
    n *= 0.09913540f;
    n += r2;
    n *= -0.65087658f;
    n = r3 += n;
    r2 = n *= -0.72982442f;
    n += -2.17393947f;
    n = r2 += n;
    n *= -1.98183501f;
    n += 1.78404403f;
    n *= -1.88722301f;
    n += 2.48339152f;
    n *= r3;
    n = r0 *= n;
    n = r2 += n;
    n += r2;
    n *= 0.91666758f;
    n *= -0.59029430f;
    n *= 4.81360054f;
    n *= 1.60627270f;
    n += r0;
    n *= -1.05208898f;
    n *= r1;
    return n;
} // Solution
