// Run date: 12/29/23 14:06:00 Pacific Standard Time
// Run duration = 677.004942 seconds
// Run generation = 15
// Run evolution = 11
// Run max result = 0.00000024
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 1
// Run states = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.49525133f;
    r0 = n += -1.55587792f;
    r1 = n *= -0.54329580f;
    n *= 2.75416470f;
    r2 = n *= -0.83641750f;
    n += r1;
    n *= r0;
    r0 = n += -0.12071348f;
    n *= -1.16460168f;
    n += 1.85614848f;
    r1 = n *= 0.84150749f;
    n = r0 += n;
    n += -2.13442826f;
    r3 = n *= -2.14932609f;
    n *= -0.29651794f;
    n = r3 *= n;
    n = r0 *= n;
    r4 = n *= -2.49209976f;
    n += -1.11999595f;
    n *= 0.29499918f;
    n = r4 *= n;
    n += 1.56291509f;
    n *= r2;
    n *= r4;
    n *= r1;
    n *= r3;
    n *= r0;
    n += 0.01333497f;
    n *= -3.00921631f;
    n *= 3.07485485f;
    n *= 0.51631171f;
    n += 0.06370623f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.10143030f;
    r0 = n += 0.31348652f;
    r1 = n *= -0.26761574f;
    n *= -3.57162166f;
    r2 = n *= 0.57132453f;
    n += r1;
    n *= r0;
    r0 = n += -0.04693374f;
    n *= 1.79283440f;
    n += 2.57827544f;
    r1 = n *= -0.01013968f;
    n = r0 += n;
    n += -2.21676087f;
    r3 = n *= 1.79437947f;
    n *= 1.72071970f;
    n = r3 *= n;
    n = r0 *= n;
    r4 = n *= -0.22185385f;
    n += 0.43033081f;
    n *= -1.55061650f;
    n = r4 *= n;
    n += -6.42924500f;
    n *= r2;
    n *= r4;
    n *= r1;
    n *= r3;
    n *= r0;
    n += -0.04407662f;
    n *= -0.79070699f;
    n *= -0.92945439f;
    n *= 3.84239936f;
    n += 0.00633470f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.45893687f;
    r0 = n += -1.20149386f;
    r1 = n *= -2.08998966f;
    n *= 0.85178041f;
    r2 = n *= -1.05143416f;
    n += r1;
    n *= r0;
    r0 = n += 0.59186709f;
    n *= 0.63354218f;
    n += -0.22986998f;
    r1 = n *= -1.29800284f;
    n = r0 += n;
    n += 2.05968618f;
    r3 = n *= -1.23760033f;
    n *= 1.54985309f;
    n = r3 *= n;
    n = r0 *= n;
    r4 = n *= 0.21178867f;
    n += 0.06886201f;
    n *= -0.01070436f;
    n = r4 *= n;
    n += -0.57079887f;
    n *= r2;
    n *= r4;
    n *= r1;
    n *= r3;
    n *= r0;
    n += -0.03980040f;
    n *= 2.56094885f;
    n *= 1.72734487f;
    n *= 1.65771842f;
    n += 0.81546116f;
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
