// Run date: 11/23/24 14:02:24 Pacific Standard Time
// Run duration = 768.259737 seconds
// Run generation = 9
// Run evolution = 0
// Run max result = 0.00000012
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
    float r0, r1, r2, r3;

    n *= 0.71097541f;
    r0 = n += -2.23359513f;
    r1 = n *= -0.09747152f;
    n = r0 *= n;
    r2 = n *= 0.50599343f;
    r3 = n += 3.69643283f;
    n += r3;
    n += -2.41769123f;
    n = r0 *= n;
    r3 = n += 1.52785039f;
    n *= -0.95583546f;
    n += r2;
    n *= 2.52733088f;
    n = r3 += n;
    r2 = n *= 2.42304659f;
    n += -0.87296855f;
    n = r2 += n;
    n *= -0.53346765f;
    n += -12.85604286f;
    n *= 0.07518666f;
    n += 6.42436457f;
    n *= r3;
    n = r0 *= n;
    n = r2 += n;
    n += r2;
    n *= -1.28646421f;
    n *= -0.27686363f;
    n *= -4.94578981f;
    n *= 0.33976513f;
    n += r0;
    n *= 1.06162274f;
    n *= r1;
    return n;
} // Solution
