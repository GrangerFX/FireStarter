// Run date: 09/15/24 10:41:01 Pacific Daylight Time
// Run duration = 2056.136789 seconds
// Run generation = 2
// Run evolution = 0
// Run max result = 0.00000048
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE_GPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 262144
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

    r0 = n += 0.25092399f;
    r1 = n += -0.79466414f;
    n *= -5.79140902f;
    n += 1.33056080f;
    n *= r1;
    r1 = n += -3.34869051f;
    n += 1.72273469f;
    n *= 3.38346004f;
    n += 2.18116403f;
    r2 = n *= 1.64593685f;
    r3 = n *= -1.60333741f;
    r4 = n += -0.43284607f;
    n += -3.14159274f;
    n = r2 += n;
    n *= -2.61479521f;
    r5 = n *= 9.02164650f;
    n += -0.60202372f;
    n += r4;
    n *= -2.37612367f;
    n += 1.46009243f;
    r4 = n += 0.63254094f;
    n = r5 += n;
    n += r2;
    n *= 1.76182127f;
    n *= r5;
    n = r4 += n;
    n = r4 *= n;
    n *= r0;
    n *= r4;
    n = r1 *= n;
    n *= r3;
    n += r1;
    return n;
} // Solution
