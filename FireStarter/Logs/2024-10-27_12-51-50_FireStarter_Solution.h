// Run date: 10/27/24 12:51:50 Pacific Daylight Time
// Run duration = 146.806825 seconds
// Run generation = 42
// Run evolution = 0
// Run max result = 0.00000092
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
// Run evolveSeed = 123
// Run optimizeSeed = 123
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 32768
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
    float r0, r1, r2, r3, r4;

    n *= 0.13688493f;
    r0 = n += -0.84187466f;
    n += 0.39363930f;
    n *= r0;
    n *= -0.73647583f;
    r0 = n *= 0.58167362f;
    n *= 0.54784942f;
    r1 = n += 1.45020556f;
    n = r1 *= n;
    r2 = n *= -2.26021719f;
    n += 0.04999347f;
    n *= -0.81455570f;
    r3 = n += -0.83036786f;
    r4 = n += 0.67466515f;
    n *= -1.05297709f;
    n *= r4;
    n += 0.77770239f;
    n += r3;
    n += 0.26354489f;
    n = r0 *= n;
    r3 = n += -0.31384495f;
    n *= 0.77168614f;
    r4 = n += -1.76731479f;
    n += 1.52244556f;
    n *= 0.50216085f;
    n *= r2;
    n *= r1;
    n *= r0;
    n += r4;
    n += 2.20337725f;
    n += r3;
    n += -0.01258615f;
    return n;
} // Solution
