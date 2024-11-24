// Run date: 11/23/24 20:15:25 Pacific Standard Time
// Run duration = 744.309445 seconds
// Run generation = 13
// Run evolution = 0
// Run max result = 0.00000062
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 1
// Run optimizeSeed = 1
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 49152
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
    float r0, r1, r2, r3;

    r0 = n += -3.14159274f;
    r1 = n *= 0.22525932f;
    n *= r1;
    r1 = n += -0.10239223f;
    n += r1;
    r1 = n *= -1.08856380f;
    n *= -8.96616554f;
    n += -3.87437844f;
    n *= 3.81439137f;
    n += -5.22210455f;
    r2 = n += -3.29502988f;
    n += -2.00921488f;
    n *= -0.00925884f;
    n += -3.90192413f;
    n += -1.11731255f;
    n *= r1;
    n += 4.11665869f;
    r1 = n += -5.02894878f;
    r3 = n *= -1.31723964f;
    n += r2;
    n += 4.73878098f;
    n += -0.56706691f;
    r2 = n *= 0.09449150f;
    n += r1;
    n += -3.59019685f;
    n = r3 += n;
    n += r2;
    r2 = n *= 0.06382716f;
    n *= r2;
    n *= r3;
    n += 0.21397562f;
    n *= r0;
    return n;
} // Solution
