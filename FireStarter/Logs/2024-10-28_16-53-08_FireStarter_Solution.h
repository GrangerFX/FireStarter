// Run date: 10/28/24 16:53:08 Pacific Daylight Time
// Run duration = 98.650658 seconds
// Run generation = 5
// Run evolution = 0
// Run max result = 0.00000066
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
// Run population = 131072
// Run iterations = 64
// Run passes = 256
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

    n *= -0.64849550f;
    n *= -0.76638210f;
    r0 = n += -1.56135690f;
    r1 = n *= -0.59719282f;
    n = r1 *= n;
    r2 = n *= 1.19779432f;
    r3 = n += -0.74436015f;
    n += 0.05611815f;
    r4 = n *= 1.11781883f;
    n *= -0.35306358f;
    r5 = n *= -0.04420728f;
    n *= 1.23709500f;
    n *= r1;
    n *= 0.53435308f;
    r1 = n += 1.02879012f;
    r6 = n += -1.26550508f;
    n += 1.84869385f;
    r7 = n *= -0.86741143f;
    n *= r5;
    n *= r7;
    r7 = n *= -2.24020028f;
    n += r1;
    n += 0.17590870f;
    n *= -1.84167767f;
    n += 1.74414241f;
    n *= r3;
    n += r7;
    n *= r2;
    n += r4;
    n += r6;
    n = r0 *= n;
    n += r0;
    return n;
} // Solution
