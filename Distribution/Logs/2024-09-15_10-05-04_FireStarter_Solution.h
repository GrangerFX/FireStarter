// Run date: 09/15/24 10:05:04 Pacific Daylight Time
// Run duration = 2047.985904 seconds
// Run generation = 29
// Run evolution = 0
// Run max result = 0.00000322
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
    float r0, r1, r2, r3, r4, r5, r6;

    n += 1.56021130f;
    n += -0.46290314f;
    r0 = n *= 0.01052582f;
    n *= 1.09211707f;
    r1 = n *= -0.33921343f;
    n *= 1.88607907f;
    n *= r1;
    n *= -0.95935917f;
    r1 = n *= -1.95520020f;
    r2 = n *= -0.81432450f;
    n *= 0.70471549f;
    r3 = n += -1.62342739f;
    n *= 0.53151983f;
    n += -1.21392810f;
    r4 = n += -0.69594359f;
    n *= r3;
    r3 = n += -1.78021562f;
    r5 = n *= -0.77700448f;
    n += 1.83349276f;
    r6 = n += -0.83500475f;
    n = r5 += n;
    n *= -0.51272756f;
    n *= 0.87062317f;
    n *= -0.09326771f;
    n *= r3;
    n += r5;
    n += r4;
    n *= r1;
    n += 4.37185097f;
    n += r6;
    n += r2;
    n *= r0;
    return n;
} // Solution
