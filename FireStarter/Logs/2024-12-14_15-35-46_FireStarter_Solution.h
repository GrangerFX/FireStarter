// Run date: 12/14/24 15:35:46 Pacific Standard Time
// Run duration = 104.329067 seconds
// Run generation = 28
// Run evolution = 0
// Run max result = 0.00000058
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
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.68174326f;
    n += -0.73245430f;
    n *= 0.35332480f;
    n += -0.44643295f;
    n *= 1.72798669f;
    n += 2.02910948f;
    r1 = n += 0.49714494f;
    r2 = n *= -0.41257793f;
    n *= r0;
    n *= -1.13167906f;
    n = r1 += n;
    n += -1.04995775f;
    n += 0.67642820f;
    r0 = n *= -0.06196045f;
    n += 1.82517278f;
    n += -0.10435575f;
    n += -0.78382850f;
    n += r0;
    r0 = n += -0.39001861f;
    r3 = n *= 2.08050013f;
    n += 2.36844349f;
    r4 = n += -1.89775670f;
    n *= r1;
    n += -1.93502879f;
    n *= r4;
    r4 = n += -2.89299989f;
    n *= r0;
    n += 1.81897390f;
    n *= r3;
    n += r4;
    n += 2.65805101f;
    n *= r2;
    return n;
} // Solution
