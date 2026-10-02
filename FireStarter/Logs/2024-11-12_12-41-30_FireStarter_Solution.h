// Run date: 11/12/24 12:41:30 Pacific Standard Time
// Run duration = 105.499409 seconds
// Run generation = 7
// Run evolution = 0
// Run max result = 0.00000058
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
// Run population = 49152
// Run iterations = 64
// Run passes = 384
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

    n *= -0.27631423f;
    n += -0.40144208f;
    n += -0.94061065f;
    r0 = n += 2.21011949f;
    r1 = n *= -1.46409619f;
    n = r0 += n;
    n *= -1.66632402f;
    n *= -0.73259455f;
    n = r1 *= n;
    r2 = n += 0.01206268f;
    n *= -1.24830329f;
    r3 = n += 0.35272825f;
    r4 = n *= -0.31792942f;
    n = r4 += n;
    n = r2 += n;
    n *= 0.00486817f;
    r5 = n *= -22.85309792f;
    n += -3.61937332f;
    n *= -0.03293953f;
    n *= r1;
    n *= r3;
    r3 = n += -0.97414660f;
    n = r4 += n;
    n *= -1.25394022f;
    n *= r3;
    n = r2 += n;
    n *= r5;
    n += r2;
    n *= -6.22351837f;
    n *= r0;
    n *= r4;
    n *= 0.62284517f;
    return n;
} // Solution
