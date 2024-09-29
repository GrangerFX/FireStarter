// Run date: 09/28/24 15:59:53 Pacific Daylight Time
// Run duration = 1926.458963 seconds
// Run generation = 17
// Run evolution = 0
// Run max result = 0.00020361
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
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 278528
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
    float r0, r1, r2, r3;

    r0 = n += -1.42125976f;
    r1 = n *= -0.07203078f;
    n += -0.06225952f;
    n = r0 *= n;
    n += -6.21392488f;
    n += -0.91925424f;
    n = r0 += n;
    n += 0.49523884f;
    n += r1;
    n *= -6.63096619f;
    r1 = n *= -2.88618898f;
    n *= r1;
    n += -0.54850650f;
    n += 2.05614996f;
    r1 = n += -0.85471988f;
    n *= 0.80323166f;
    n *= 0.61594760f;
    n += r0;
    n += -0.55550069f;
    r0 = n += 0.22726032f;
    r2 = n *= 0.36247936f;
    r3 = n *= 4.15745878f;
    n *= r3;
    n += -0.59119576f;
    n += 0.60363996f;
    n *= -1.41915011f;
    n *= r1;
    n += 4.35699463f;
    n += r2;
    n *= 1.34182179f;
    n += -4.19874716f;
    n *= r0;
    return n;
} // Solution
