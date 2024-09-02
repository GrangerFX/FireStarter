// Run date: 09/02/24 10:07:48 Pacific Daylight Time
// Run duration = 24.373645 seconds
// Run generation = 13
// Run evolution = 0
// Run max result = 0.00000026
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 0
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 8704
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 0
// Run optimize = 4

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

inline float SolutionTarget(float n, unsigned int variation)
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

    n *= 0.38633925f;
    r0 = n += 0.68066907f;
    n += r0;
    r0 = n += -3.78877926f;
    r1 = n *= 1.08981001f;
    n = r0 *= n;
    r2 = n += -1.95747876f;
    n *= -0.13192600f;
    r3 = n *= 1.78440428f;
    n *= 3.31409740f;
    r4 = n *= 2.36963773f;
    n *= -1.01467741f;
    n += -0.97237301f;
    n += 0.01850716f;
    n = r4 += n;
    n *= -0.21718095f;
    n *= r3;
    r3 = n += 1.71164215f;
    n *= 1.27057672f;
    r5 = n *= -1.28255796f;
    r6 = n += 2.47955012f;
    n += r5;
    n += -2.33541536f;
    n += r2;
    n += r0;
    n *= -0.00530201f;
    n += r4;
    n += 0.57507408f;
    n *= r1;
    n *= -3.53600311f;
    n *= r3;
    n *= r6;
    return n;
} // Solution
