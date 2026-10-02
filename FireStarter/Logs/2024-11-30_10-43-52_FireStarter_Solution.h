// Run date: 11/30/24 10:43:52 Pacific Standard Time
// Run duration = 782.857479 seconds
// Run generation = 8
// Run evolution = 0
// Run max result = 0.00000013
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
// Run passes = 384
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
    float r0, r1, r2, r3, r4, r5, r6;

    n += -2.22361755f;
    r0 = n += -0.91797507f;
    r1 = n *= -0.32578325f;
    n *= r0;
    r0 = n *= -0.15925480f;
    r2 = n += -1.67909706f;
    r3 = n *= 2.61495256f;
    n *= -0.46041879f;
    n += -0.77887905f;
    r4 = n += -0.62620223f;
    n = r1 *= n;
    n *= -0.01454269f;
    r5 = n *= 2.17796612f;
    n *= 12.53467274f;
    n = r5 *= n;
    n = r4 *= n;
    n += 1.24568939f;
    r6 = n += -1.68048692f;
    n *= r3;
    n *= 0.56394732f;
    n *= -0.58212650f;
    n *= 2.05427313f;
    n *= -0.24307962f;
    n += r5;
    n += r4;
    n *= r0;
    n += r6;
    n *= 0.80084068f;
    n *= 1.58599055f;
    n = r2 += n;
    n *= r1;
    n *= r2;
    return n;
} // Solution
