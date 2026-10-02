// Run date: 10/06/24 14:32:50 Pacific Daylight Time
// Run duration = 987.858282 seconds
// Run generation = 25
// Run evolution = 0
// Run max result = 0.00000014
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
// Run population = 524288
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

    n += -3.14159274f;
    n *= 2.55440569f;
    n *= 0.24153879f;
    r0 = n *= -1.20236874f;
    r1 = n *= 0.55560815f;
    r2 = n *= -2.07459760f;
    n = r1 *= n;
    r3 = n += 2.10873199f;
    n += r1;
    r1 = n *= 0.00978595f;
    r4 = n += 0.30992332f;
    r5 = n *= 0.82096016f;
    n = r3 *= n;
    n += 1.99203587f;
    r6 = n += -1.19357741f;
    n += -0.50328296f;
    n = r0 *= n;
    n *= 0.41902053f;
    n *= 0.16722383f;
    n *= r3;
    n *= r2;
    n = r4 *= n;
    n *= 5.24661589f;
    n *= r1;
    n *= r4;
    n *= -5.63690186f;
    n += 5.17148256f;
    n += r6;
    n *= r5;
    n += -1.76089001f;
    n += 1.53948438f;
    n *= r0;
    return n;
} // Solution
