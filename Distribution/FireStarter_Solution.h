// Run date: 09/12/23 09:55:35 Pacific Daylight Time
// Run duration = 11546.248837 seconds
// Run generation = 69
// Run evolution = 19
// Run result = 0.00001967
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 16
// Run units = 4
// Run processes = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

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

// Solution0 result = 0.00000346
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.23411156f;
    r0 = n += -0.74244201f;
    r1 = n *= -1.11760712f;
    r2 = n *= -1.15923905f;
    n += r1;
    n += -0.86855721f;
    r1 = n += 0.87204921f;
    n *= r0;
    r0 = n += -0.71381181f;
    n *= r2;
    r2 = n *= -1.43538535f;
    n *= 2.36703420f;
    r3 = n += -1.97662699f;
    r4 = n += 1.99577630f;
    r5 = n *= 0.73396599f;
    r6 = n *= 0.00041980f;
    n *= r1;
    r1 = n += 0.85419458f;
    n = r2 += n;
    n += r2;
    n *= r5;
    n *= r3;
    r3 = n *= -2.34842730f;
    n *= r4;
    n *= r6;
    n *= -23.95115662f;
    n += r3;
    n *= r1;
    n += 0.82020628f;
    n *= 0.38298234f;
    n += -0.30895138f;
    n *= r0;
    return n;
} // Solution0

// Solution1 result = 0.00000584
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.50070632f;
    r0 = n += 1.38087416f;
    r1 = n *= 0.61268550f;
    r2 = n *= -1.02621901f;
    n += r1;
    n += -1.54997814f;
    r1 = n += 1.54253197f;
    n *= r0;
    r0 = n += 0.86587256f;
    n *= r2;
    r2 = n *= 1.94166362f;
    n *= -0.43263218f;
    r3 = n += -0.95311379f;
    r4 = n += 1.03237855f;
    r5 = n *= -0.03675769f;
    r6 = n *= 4.76588154f;
    n *= r1;
    r1 = n += -2.52231359f;
    n = r2 += n;
    n += r2;
    n *= r5;
    n *= r3;
    r3 = n *= -5.08758640f;
    n *= r4;
    n *= r6;
    n *= 5.49236870f;
    n += r3;
    n *= r1;
    n += -1.19448519f;
    n *= -2.42936563f;
    n += -3.05467939f;
    n *= r0;
    return n;
} // Solution1

// Solution2 result = 0.00001967
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.35168529f;
    r0 = n += -1.18635476f;
    r1 = n *= 1.62929189f;
    r2 = n *= -1.12990630f;
    n += r1;
    n += -1.43635714f;
    r1 = n += 1.28448474f;
    n *= r0;
    r0 = n += 1.52261865f;
    n *= r2;
    r2 = n *= 0.60641414f;
    n *= -0.31752124f;
    r3 = n += 0.59021580f;
    r4 = n += -0.55442214f;
    r5 = n *= 2.05692697f;
    r6 = n *= 0.37022579f;
    n *= r1;
    r1 = n += 0.59819686f;
    n = r2 += n;
    n += r2;
    n *= r5;
    n *= r3;
    r3 = n *= -1.74396336f;
    n *= r4;
    n *= r6;
    n *= 0.10553990f;
    n += r3;
    n *= r1;
    n += -1.52581465f;
    n *= 1.47121298f;
    n += 2.24953723f;
    n *= r0;
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
