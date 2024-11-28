// Run date: 11/28/24 15:28:07 Pacific Standard Time
// Run duration = 181.613479 seconds
// Run generation = 9
// Run evolution = 0
// Run max result = 0.00000018
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
    float r0, r1, r2, r3;

    n += -2.23145986f;
    r0 = n += -0.91013283f;
    n *= -0.13961188f;
    n += -2.40671849f;
    n *= -1.33997107f;
    r1 = n += -3.22493315f;
    n *= 1.15451717f;
    n = r1 *= n;
    r2 = n *= 0.77276528f;
    r3 = n *= 0.99629384f;
    n *= 11.60371113f;
    n += -11.70878601f;
    n += -4.19086409f;
    n += -5.76618719f;
    n += -7.11410475f;
    n *= r1;
    n *= -0.01714316f;
    n += -2.55479717f;
    n += r2;
    r2 = n *= 0.21745338f;
    n += -0.62387770f;
    n += 0.18462388f;
    r1 = n *= 0.56625801f;
    n *= r3;
    r3 = n *= -1.45703959f;
    n += r3;
    n = r2 += n;
    n = r0 *= n;
    n *= r1;
    n *= r2;
    n *= 2.55638862f;
    n += r0;
    return n;
} // Solution
