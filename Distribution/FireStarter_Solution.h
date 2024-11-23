// Run date: 11/23/24 11:41:21 Pacific Standard Time
// Run duration = 49.729247 seconds
// Run generation = 7
// Run evolution = 0
// Run max result = 0.00000093
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
    float r0, r1, r2, r3, r4;

    r0 = n += -1.57079685f;
    n *= r0;
    r0 = n *= -0.00903619f;
    r1 = n *= 5.98391771f;
    r2 = n *= -3.95081019f;
    n += -0.07451629f;
    n += -0.10774871f;
    n += -1.30926323f;
    n *= -1.01549172f;
    n = r2 += n;
    n += 1.37170303f;
    n += -2.05687714f;
    n *= r0;
    r0 = n *= 2.49253416f;
    n *= 0.68337452f;
    r3 = n += 0.68399209f;
    n += -1.06693733f;
    n = r3 += n;
    n += -0.19126752f;
    n = r0 += n;
    r4 = n += 0.40376344f;
    n *= -5.34699821f;
    n += r3;
    n += -4.28134632f;
    r3 = n *= 0.14949915f;
    n *= r3;
    n += r2;
    n = r4 += n;
    n += r1;
    n *= r0;
    n += -0.00463718f;
    n *= r4;
    return n;
} // Solution
