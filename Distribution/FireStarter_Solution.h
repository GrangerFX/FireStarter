// Run date: 12/28/24 11:38:16 Pacific Standard Time
// Run duration = 82.145693 seconds
// Run generation = 710
// Run evolution = 0
// Run max result = 0.41665831
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_NEW
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 1000
// Run population = 65536
// Run passes = 1
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

    r0 = n *= -0.62981868f;
    n *= -0.52226114f;
    n += -1.30030715f;
    n *= 0.27053881f;
    r1 = n += -0.51777315f;
    n = r0 += n;
    n *= 1.99543357f;
    n *= -1.34538341f;
    r2 = n *= 0.11161298f;
    r3 = n *= 2.04136729f;
    n *= -1.54356480f;
    r4 = n *= -0.85706031f;
    n = r0 += n;
    r5 = n *= -0.30323160f;
    n *= r2;
    n *= 1.92201650f;
    n *= -5.41100550f;
    n *= -0.00336188f;
    r2 = n *= 4.40935946f;
    n = r0 *= n;
    n += r2;
    n *= 0.29204541f;
    n *= r1;
    n += r4;
    n *= -0.16263479f;
    n += 0.36312640f;
    n += r0;
    n *= 4.50626945f;
    n *= 3.31191444f;
    n *= r3;
    n += 7.58863354f;
    n += r5;
    return n;
} // Solution
