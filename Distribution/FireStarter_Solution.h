// Run date: 09/07/24 10:50:48 Pacific Daylight Time
// Run duration = 26.403668 seconds
// Run generation = 0
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
// Run tests = 0
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 100
// Run candidates = 16
// Run attempts = 0
// Run optimize = 4

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

    n *= -2.67006230f;
    r0 = n += 2.09947395f;
    n += r0;
    r0 = n += -0.02891193f;
    r1 = n *= -4.48817205f;
    n = r0 *= n;
    r2 = n += 1.67072308f;
    n *= -0.06875918f;
    r3 = n *= 0.62380648f;
    n *= 0.53934544f;
    r4 = n *= -1.91721988f;
    n *= 1.83857381f;
    n += 0.31770372f;
    n += 3.30707836f;
    n = r4 += n;
    n *= 0.07607646f;
    n *= r3;
    r3 = n += -1.25527287f;
    n *= -1.67241967f;
    r5 = n *= 0.42235085f;
    r6 = n += -1.07524562f;
    n += r5;
    n += -1.31713367f;
    n += r2;
    n += r0;
    n *= 0.88927501f;
    n += r4;
    n += 1.16086555f;
    n *= r1;
    n *= -0.19425905f;
    n *= r3;
    n *= r6;
    return n;
} // Solution
