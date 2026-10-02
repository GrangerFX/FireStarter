// Run date: 10/05/24 16:19:43 Pacific Daylight Time
// Run duration = 210.687238 seconds
// Run generation = 0
// Run evolution = 0
// Run max result = 0.00018477
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
// Run population = 1310720
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 32
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

    r0 = n *= 1.56970441f;
    r1 = n *= 0.14761306f;
    r2 = n += -0.72793442f;
    n *= 0.39805138f;
    r3 = n *= -1.79585230f;
    r4 = n *= 1.60412574f;
    r5 = n *= -0.21449852f;
    n *= -1.60677958f;
    n += r0;
    r0 = n *= -0.33117887f;
    n *= 0.14472236f;
    n += r1;
    n += -0.60090256f;
    n += 1.05176139f;
    n *= 0.93592036f;
    n = r4 += n;
    n = r3 += n;
    r1 = n += -2.15106106f;
    n += 0.51260281f;
    n *= 3.07625842f;
    n += -0.38651147f;
    n = r5 *= n;
    n *= r1;
    n *= 0.16591537f;
    n *= r4;
    n *= 1.84510159f;
    n *= 4.86531734f;
    n += r2;
    n += r0;
    n *= -4.48640347f;
    n *= r3;
    n *= r5;
    return n;
} // Solution
