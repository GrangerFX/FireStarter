// Run date: 10/06/24 11:17:19 Pacific Daylight Time
// Run duration = 894.450489 seconds
// Run generation = 47
// Run evolution = 0
// Run max result = 0.00000043
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

    r0 = n += -3.14159274f;
    r1 = n *= 0.02841808f;
    n *= -0.61726403f;
    n = r0 *= n;
    r2 = n += 1.73153019f;
    n *= 0.71981657f;
    n *= r2;
    n *= 1.59072828f;
    r2 = n *= -0.60796565f;
    r3 = n *= 1.66596949f;
    n *= 1.59639812f;
    r4 = n += 0.75384492f;
    n += r0;
    r0 = n *= 0.88921005f;
    n *= -0.46585351f;
    n *= r2;
    r2 = n += 0.76738238f;
    n += 1.21338522f;
    n += 0.99255872f;
    n *= r2;
    n *= -9.54108715f;
    n += -6.98973036f;
    n *= 0.68474269f;
    n += -1.61552560f;
    n += 7.66931915f;
    n += 4.06736565f;
    n *= 1.44155085f;
    n += r3;
    n *= 0.78775817f;
    n += r0;
    n += r4;
    n *= r1;
    return n;
} // Solution
