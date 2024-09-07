// Run date: 09/07/24 10:26:23 Pacific Daylight Time
// Run duration = 132.748360 seconds
// Run generation = 0
// Run evolution = 0
// Run max result = 0.00000069
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
// Run tests = 0
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 100
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

    n *= 3.02345181f;
    r0 = n += -0.37046576f;
    n += r0;
    r0 = n += -2.63117909f;
    r1 = n *= 0.71248287f;
    n = r0 *= n;
    r2 = n += 0.93054801f;
    r3 = n *= -0.70234370f;
    r4 = n *= -0.42904937f;
    n *= 0.07383004f;
    r5 = n *= 1.21796215f;
    n *= 1.13742542f;
    n += -1.10015094f;
    n += 2.75326467f;
    n = r5 += n;
    n *= -0.95369458f;
    n *= r4;
    r4 = n += 1.89850163f;
    n *= 2.06328630f;
    n *= -2.20583844f;
    r6 = n += -2.87068486f;
    n *= r3;
    n += r0;
    n += r2;
    n += -1.26849675f;
    n *= -1.72311544f;
    n += r5;
    n += 0.11285971f;
    n *= r1;
    n *= 0.08948325f;
    n *= r4;
    n *= r6;
    return n;
} // Solution
