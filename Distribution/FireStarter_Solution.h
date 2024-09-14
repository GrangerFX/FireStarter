// Run date: 09/14/24 15:48:06 Pacific Daylight Time
// Run duration = 83.837381 seconds
// Run generation = 24
// Run evolution = 0
// Run max result = 0.00009867
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
// Run population = 262144
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
    float r0, r1, r2, r3, r4, r5;

    n += 1.82216668f;
    r0 = n += 1.87613487f;
    r1 = n += 0.71411294f;
    n *= r1;
    n += r0;
    n *= -0.67173946f;
    r0 = n *= -0.29273319f;
    r1 = n *= -3.54370522f;
    r2 = n += -0.64732552f;
    r3 = n += -1.67571533f;
    r4 = n *= -1.05305290f;
    n *= 0.65702891f;
    n += -0.54530871f;
    n *= r2;
    n = r4 += n;
    n *= -0.49014398f;
    n *= -0.74480188f;
    n *= 0.12635171f;
    r2 = n *= 0.19603871f;
    r5 = n *= 3.45103645f;
    n += 0.63057292f;
    n += 1.14583230f;
    n += r1;
    n *= -0.45138276f;
    n += r3;
    n *= 1.96067500f;
    n *= -4.17370749f;
    n *= r5;
    n *= r0;
    n *= 0.00641762f;
    n *= r4;
    n *= r2;
    return n;
} // Solution
