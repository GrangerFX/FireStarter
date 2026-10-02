// Run date: 10/27/24 11:19:28 Pacific Daylight Time
// Run duration = 275.615749 seconds
// Run generation = 21
// Run evolution = 0
// Run max result = 0.00000011
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
// Run population = 131072
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
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14159274f;
    r1 = n *= -0.44342023f;
    r2 = n *= -0.41566318f;
    n = r1 *= n;
    n += 2.32153964f;
    n += -0.48717657f;
    r3 = n += 1.62095189f;
    r4 = n *= 1.47479975f;
    n += -0.98630828f;
    n += 0.56904227f;
    r5 = n += 2.46145844f;
    n += -4.84686184f;
    r6 = n += -2.11315799f;
    r7 = n *= -0.00249861f;
    n *= r5;
    n += -0.11887585f;
    n *= r4;
    r4 = n += -0.00247190f;
    n *= 2.12164259f;
    n = r3 *= n;
    n = r6 *= n;
    n += r1;
    n *= 5.48650074f;
    n *= r4;
    n *= r7;
    n *= r0;
    r0 = n *= -0.19124207f;
    n *= r0;
    n += r3;
    n += -0.02191514f;
    n += r6;
    n *= r2;
    return n;
} // Solution
