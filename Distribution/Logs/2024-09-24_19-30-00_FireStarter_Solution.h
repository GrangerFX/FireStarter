// Run date: 09/24/24 19:30:00 Pacific Daylight Time
// Run duration = 2357.291627 seconds
// Run generation = 1117
// Run evolution = 0
// Run max result = 0.00000244
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_GPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 8192
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
    float r0, r1, r2, r3, r4, r5;

    n += 0.36358532f;
    n *= -0.00063278f;
    r0 = n += -1.74725771f;
    r1 = n += 0.33373702f;
    r2 = n *= -3.79930902f;
    n *= 2.30152893f;
    r3 = n *= -0.14251128f;
    n = r0 *= n;
    n *= 0.36356181f;
    r4 = n += 0.62018275f;
    n *= 2.58221745f;
    n += 0.80490136f;
    r5 = n += 0.03572399f;
    n *= r1;
    n = r3 += n;
    n *= r3;
    n = r4 += n;
    n *= -2.89731526f;
    r3 = n *= -0.03060615f;
    n += r4;
    r4 = n *= -3.17327142f;
    n += -3.67707109f;
    n += r0;
    n *= r5;
    n *= -0.34458768f;
    r5 = n += -1.14539874f;
    n *= -1.52412140f;
    n *= r4;
    n += r3;
    n *= 0.85500860f;
    n += r5;
    n *= r2;
    return n;
} // Solution
