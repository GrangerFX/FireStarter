// Run date: 11/29/24 10:45:33 Pacific Standard Time
// Run duration = 18.679265 seconds
// Run generation = 3
// Run evolution = 0
// Run max result = 0.00000054
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
    float r0, r1, r2, r3, r4, r5;

    n += -3.14159274f;
    r0 = n *= -0.08799334f;
    r1 = n *= -2.16105080f;
    n *= -0.81355023f;
    n = r0 *= n;
    n *= 1.48453355f;
    r2 = n *= -4.85538578f;
    r3 = n += 0.95985287f;
    n += 2.04598641f;
    n *= r3;
    r3 = n *= 0.61999351f;
    n = r2 += n;
    n *= 3.55063343f;
    n *= 1.98718297f;
    r4 = n += 6.33349228f;
    n *= 0.42410102f;
    r5 = n += -7.12145233f;
    n += r2;
    n *= -0.03496702f;
    n += 0.08726195f;
    n += -2.44473553f;
    n *= r4;
    n = r3 += n;
    n *= -4.22164679f;
    n += -6.37498188f;
    n *= 0.35142198f;
    n += 2.58262753f;
    n += r5;
    n *= r0;
    n += r3;
    n *= 0.11767225f;
    n *= r1;
    return n;
} // Solution
