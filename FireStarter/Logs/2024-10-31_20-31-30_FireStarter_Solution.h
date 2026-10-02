// Run date: 10/31/24 20:31:30 Pacific Daylight Time
// Run duration = 2643.469697 seconds
// Run generation = 19
// Run evolution = 0
// Run max result = 0.00000035
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
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 65536
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
    float r0, r1, r2, r3, r4, r5, r6;

    n += -0.14324120f;
    r0 = n *= -0.41728666f;
    n += 3.81328917f;
    n = r0 *= n;
    n += 1.31093979f;
    r1 = n *= 1.01195753f;
    r2 = n *= 1.43965161f;
    n += 0.81583613f;
    r3 = n += 1.94450295f;
    n += r2;
    n *= 0.01475423f;
    r2 = n += -0.43497545f;
    r4 = n *= -0.31443059f;
    n = r1 += n;
    r5 = n *= -0.05806150f;
    r6 = n += 0.80254537f;
    n *= r2;
    n = r0 += n;
    n += r5;
    n *= -1.05859828f;
    n += r1;
    n = r6 *= n;
    n *= r0;
    n *= -0.71930063f;
    n *= r3;
    n *= -0.40176290f;
    n *= r4;
    n *= 3.72478938f;
    n *= 1.42404139f;
    n *= -0.09329987f;
    n *= 5.05806494f;
    n *= r6;
    return n;
} // Solution
