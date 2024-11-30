// Run date: 11/30/24 10:30:58 Pacific Standard Time
// Run duration = 115.485700 seconds
// Run generation = 1
// Run evolution = 0
// Run max result = 0.00000061
// Run variations = 1
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
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.14159274f;
    r0 = n *= 0.45002869f;
    r1 = n *= -0.16333991f;
    r2 = n *= -4.52919197f;
    n *= 0.79228103f;
    n = r1 *= n;
    r3 = n += 1.35693944f;
    r4 = n *= -1.61932492f;
    n *= r4;
    n += -1.10635996f;
    n += 2.58658910f;
    r4 = n += -1.89678693f;
    n *= -0.75545228f;
    r5 = n += 0.76938391f;
    n += -10.78130436f;
    r6 = n *= -0.00472790f;
    n *= r6;
    r6 = n *= 4.21731472f;
    n = r3 += n;
    n *= r0;
    r0 = n *= 0.11131980f;
    n *= r2;
    n *= r6;
    n *= r5;
    n += r1;
    n *= -0.85354185f;
    n *= r3;
    n += -0.19729613f;
    n *= r4;
    n *= r0;
    n *= -2.91586232f;
    n *= -5.72529793f;
    return n;
} // Solution
