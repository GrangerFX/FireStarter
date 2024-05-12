// Run date: 05/12/24 11:58:00 Pacific Daylight Time
// Run duration = 913.501085 seconds
// Run generation = 119
// Run evolution = 9
// Run max result = 0.00000024
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 0
// Run optimize = 8

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

#define SOLUTION_VARIATIONS 3

#ifndef __CUDACC__
#include <cmath>
#endif

#define SOLUTION_PI 3.14159265f
#define SOLUTION_MIN 0.0f
#define SOLUTION_MAX (2.0f * 3.14159265f)

inline float SolutionTarget(float n, unsigned int variation)
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.75339317f;
    n *= 0.28492701f;
    r0 = n += -0.68046254f;
    r1 = n *= -0.24765408f;
    n = r0 *= n;
    r2 = n += 4.81506920f;
    n *= r0;
    n += 0.78278470f;
    n *= -2.08446503f;
    r0 = n *= 1.76496220f;
    n += 0.05910930f;
    n += -0.25068143f;
    n += 1.02121818f;
    r3 = n += 1.20363104f;
    r4 = n *= 0.05759798f;
    r5 = n += -1.56342673f;
    n += -0.51247293f;
    n *= r0;
    n *= r4;
    n += r3;
    n += -1.30908680f;
    n *= r5;
    n += 1.52724957f;
    n *= r1;
    n = r2 *= n;
    n += r2;
    r2 = n += 0.25548315f;
    n *= -0.73163819f;
    n += -0.80136770f;
    n += 0.79253691f;
    n += r2;
    n += -0.05973115f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.10435688f;
    n *= 0.62622762f;
    r0 = n += -1.24387693f;
    r1 = n *= 0.15524212f;
    n = r0 *= n;
    r2 = n += -3.03065085f;
    n *= r0;
    n += -0.24252774f;
    n *= 2.38049483f;
    r0 = n *= -0.87508696f;
    n += -2.44757795f;
    n += 1.08874571f;
    n += -2.41717076f;
    r3 = n += 0.94100159f;
    r4 = n *= 0.00428170f;
    r5 = n += -0.13736141f;
    n += 1.13252354f;
    n *= r0;
    n *= r4;
    n += r3;
    n += 1.45408654f;
    n *= r5;
    n += 0.50812721f;
    n *= r1;
    n = r2 *= n;
    n += r2;
    r2 = n += 0.15897156f;
    n *= 1.92647505f;
    n += -0.01985834f;
    n += 0.09132358f;
    n += r2;
    n += -0.65482324f;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += 0.42810333f;
    n *= -0.26018345f;
    r0 = n += 0.79254407f;
    r1 = n *= 0.71905553f;
    n = r0 *= n;
    r2 = n += -3.89575076f;
    n *= r0;
    n += 1.52470350f;
    n *= -0.20943803f;
    r0 = n *= -3.39482546f;
    n += -0.67208987f;
    n += -2.32381773f;
    n += 2.08650494f;
    r3 = n += 0.04917607f;
    r4 = n *= -0.09239621f;
    r5 = n += -1.07034731f;
    n += -4.16481543f;
    n *= r0;
    n *= r4;
    n += r3;
    n += 0.44772094f;
    n *= r5;
    n += -0.04860180f;
    n *= r1;
    n = r2 *= n;
    n += r2;
    r2 = n += -0.71196955f;
    n *= -0.24602549f;
    n += -4.00944853f;
    n += -0.34530663f;
    n += r2;
    n += 5.41516066f;
    return n;
} // Solution2

inline float Solution(float n, unsigned int variation)
{
    switch (variation) {
    case 0:
        return Solution0(n);
    case 1:
        return Solution1(n);
    case 2:
        return Solution2(n);
    }
    return 0.0f;
} // Solution
