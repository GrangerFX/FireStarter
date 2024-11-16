// Run date: 11/16/24 09:47:30 Pacific Standard Time
// Run duration = 3.732874 seconds
// Run generation = 2
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
// Run tests = 1
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 65536
// Run passes = 512
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

    r0 = n += -3.14159274f;
    r1 = n *= -0.92325860f;
    n *= -0.24630162f;
    n = r1 *= n;
    n += 0.41266683f;
    r2 = n *= 0.02100982f;
    n *= -1.37645054f;
    n = r2 *= n;
    r3 = n *= 9.96113968f;
    n += r1;
    r1 = n += 2.17811680f;
    r4 = n *= -0.11683082f;
    r5 = n += -0.74285191f;
    n = r3 += n;
    n = r2 *= n;
    n *= 16.66096497f;
    n += -1.41507292f;
    n *= -0.57257354f;
    n += -1.43435180f;
    n += 0.84983265f;
    n += r3;
    r3 = n *= 0.11726555f;
    n = r1 += n;
    n *= r2;
    n *= -0.60598880f;
    n += 3.69724870f;
    n *= r1;
    n *= r3;
    n *= -1.79679501f;
    n += r4;
    n *= r0;
    n *= r5;
    return n;
} // Solution
