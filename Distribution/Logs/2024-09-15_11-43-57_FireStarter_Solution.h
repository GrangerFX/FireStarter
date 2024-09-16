// Run date: 09/15/24 11:43:57 Pacific Daylight Time
// Run duration = 1604.025568 seconds
// Run generation = 65
// Run evolution = 0
// Run max result = 0.00000054
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
// Run population = 262144
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

    n += -2.49510765f;
    n += -1.15128863f;
    r0 = n *= 0.28500065f;
    n *= 1.18435502f;
    r1 = n *= -0.15138912f;
    n *= -1.69152474f;
    n *= r1;
    r1 = n *= -3.22039437f;
    r2 = n *= 0.20789520f;
    n += r1;
    r1 = n *= -2.96259260f;
    r3 = n += 0.91474378f;
    r4 = n *= -1.44493937f;
    n += r4;
    r4 = n *= -0.33395946f;
    n *= r3;
    n += -4.40446568f;
    r3 = n *= -1.59488487f;
    n += r1;
    r1 = n += 0.44241980f;
    n = r3 += n;
    n *= 0.39234626f;
    n += -2.40519047f;
    n *= -1.51887953f;
    n *= r3;
    n *= r4;
    n += 0.63941824f;
    n *= r2;
    n *= -0.75937444f;
    n += r1;
    n *= -2.16180992f;
    n *= r0;
    return n;
} // Solution
