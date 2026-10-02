// Run date: 10/08/24 12:25:16 Pacific Daylight Time
// Run duration = 612.137677 seconds
// Run generation = 9
// Run evolution = 0
// Run max result = 0.00000045
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE_CPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 524288
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
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14159274f;
    r1 = n *= -0.16586049f;
    n = r1 *= n;
    r2 = n *= -1.40449703f;
    r3 = n += 0.38133493f;
    n *= 1.53875971f;
    n *= -1.02906692f;
    n += r2;
    n *= -1.91086864f;
    r2 = n += -0.95381916f;
    n += -0.06237283f;
    r4 = n *= -0.09770831f;
    r5 = n += -0.19367298f;
    n = r2 *= n;
    n *= -3.58561444f;
    n += -0.54401302f;
    r6 = n += 1.45262587f;
    r7 = n *= 1.28472137f;
    n *= -3.27220392f;
    n *= r2;
    n *= r5;
    n *= 0.47844458f;
    n *= -1.99480581f;
    n *= r4;
    n += r6;
    n *= -1.20850015f;
    n += 0.56619066f;
    n += -1.21998644f;
    n *= r7;
    n += r1;
    n *= r3;
    n *= r0;
    return n;
} // Solution
