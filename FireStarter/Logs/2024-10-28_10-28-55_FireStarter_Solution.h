// Run date: 10/28/24 10:28:55 Pacific Daylight Time
// Run duration = 171.171060 seconds
// Run generation = 16
// Run evolution = 0
// Run max result = 0.00000066
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
// Run evolveSeed = 2
// Run optimizeSeed = 2
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 32768
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

    r0 = n += -1.77941132f;
    n += 0.34031227f;
    n *= -1.66980398f;
    r1 = n *= -0.17488579f;
    n += r0;
    n *= r1;
    n += -2.41578293f;
    r1 = n += 1.59529853f;
    r0 = n *= -2.01923728f;
    r2 = n *= 0.07298952f;
    n *= 0.10390435f;
    r3 = n += 0.28763458f;
    n *= 2.02980351f;
    n += 0.76626414f;
    n = r2 *= n;
    r4 = n += 1.53263545f;
    r5 = n += 1.96286070f;
    r6 = n += 6.73193264f;
    r7 = n += 3.45738530f;
    n *= r7;
    n += 8.09259033f;
    n += r0;
    n *= -0.20468803f;
    n += r6;
    n *= r2;
    n += r5;
    n += r1;
    n *= r3;
    n *= r4;
    n *= -0.88217223f;
    n *= 0.37681556f;
    n += 0.60238940f;
    return n;
} // Solution
