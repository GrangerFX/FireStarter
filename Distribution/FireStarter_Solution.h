// Run date: 11/23/24 11:07:14 Pacific Standard Time
// Run duration = 46.438120 seconds
// Run generation = 15
// Run evolution = 0
// Run max result = 0.00000029
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
// Run population = 65536
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
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.14159274f;
    r1 = n *= -0.01417878f;
    n *= -0.78901613f;
    n *= 0.69673628f;
    n = r0 *= n;
    n *= 5.44619799f;
    r2 = n += -0.89726663f;
    n *= 2.03596711f;
    r3 = n += 1.59151268f;
    r4 = n *= 0.16145337f;
    r5 = n += 0.37838906f;
    r6 = n *= 4.37340307f;
    n += -3.60585237f;
    n += -0.92859173f;
    n = r5 += n;
    n = r5 += n;
    n += r4;
    n *= -1.23742867f;
    n = r6 += n;
    n += -1.34458709f;
    n += r3;
    n = r0 *= n;
    n += -1.98841262f;
    n *= r0;
    n *= -0.59536266f;
    n += r2;
    n *= r6;
    n *= 0.54044020f;
    n *= r5;
    n *= 3.38789892f;
    n += -2.63747954f;
    n *= r1;
    return n;
} // Solution
