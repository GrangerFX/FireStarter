// Run date: 11/24/24 10:42:19 Pacific Standard Time
// Run duration = 114.372876 seconds
// Run generation = 8
// Run evolution = 0
// Run max result = 0.00000045
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
    float r0, r1, r2, r3, r4;

    n += -3.14159274f;
    r0 = n *= -0.18156986f;
    n *= 1.46034348f;
    n *= -1.02215052f;
    r1 = n *= 0.04589871f;
    n *= r0;
    n += 0.56624031f;
    r0 = n *= -0.77857441f;
    r2 = n *= -5.32491684f;
    n = r2 *= n;
    r3 = n += -5.08558035f;
    r4 = n += 5.98616505f;
    n += 7.31765890f;
    n *= r2;
    n += 2.67458773f;
    n *= 0.38262701f;
    n += -17.15634155f;
    n = r0 *= n;
    n *= 0.30986068f;
    n *= -2.01022625f;
    r2 = n *= 0.95876724f;
    n = r0 += n;
    n *= -1.24854338f;
    n += r0;
    n *= r4;
    n = r2 += n;
    r4 = n *= -3.47353530f;
    n *= r2;
    n += 5.61589622f;
    n += r4;
    n *= r1;
    n *= r3;
    return n;
} // Solution
