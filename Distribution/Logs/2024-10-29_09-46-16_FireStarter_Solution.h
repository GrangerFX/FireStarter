// Run date: 10/29/24 09:46:16 Pacific Daylight Time
// Run duration = 106.692602 seconds
// Run generation = 12
// Run evolution = 0
// Run max result = 0.00000021
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
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 65536
// Run iterations = 64
// Run passes = 500
// Run candidates = 8
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

    n += -0.18435028f;
    r0 = n += -2.95724225f;
    r1 = n *= 0.04180724f;
    r2 = n *= 0.52458858f;
    n = r0 *= n;
    r3 = n *= -0.63975269f;
    n *= 1.24858892f;
    r4 = n *= -0.74856573f;
    n *= 1.01128519f;
    r5 = n += -0.48986828f;
    r6 = n += -8.46438026f;
    n += 2.81781387f;
    r7 = n *= -4.55386829f;
    n *= r6;
    n *= 0.00108282f;
    n *= r7;
    n = r0 *= n;
    n += 2.57929754f;
    n += 1.14453590f;
    n += 5.53678179f;
    n += 7.02138329f;
    n *= r5;
    n *= 2.71141934f;
    n += r0;
    r0 = n += -0.22950736f;
    n = r4 *= n;
    n += 2.08622599f;
    n += r1;
    n *= r2;
    n += r3;
    n *= r0;
    n += r4;
    return n;
} // Solution
