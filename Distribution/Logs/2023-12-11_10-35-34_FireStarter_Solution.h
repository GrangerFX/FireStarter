// Run date: 12/11/23 10:35:34 Pacific Standard Time
// Run duration = 7693.251991 seconds
// Run generation = 130
// Run evolution = 12
// Run max result = 0.00001499
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
// Run evolveSeed = 2
// Run optimizeSeed = 2
// Run tests = 1
// Run seeds = 64
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

// Solution0 result = 0.00001499
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= -0.62607276f;
    r1 = n += 1.32100642f;
    r2 = n += 1.68255246f;
    n = r1 *= n;
    n *= 3.28299522f;
    r3 = n += -2.40451431f;
    r4 = n *= 0.01224477f;
    r5 = n += -3.69846582f;
    n += r5;
    n *= r4;
    r4 = n *= 0.16660038f;
    r5 = n += 0.81584024f;
    r6 = n *= -0.14924400f;
    n *= 4.34363747f;
    n += r2;
    r2 = n *= -0.00565413f;
    n *= 4.62680197f;
    r7 = n += 0.93821353f;
    n += r4;
    n *= r0;
    r0 = n += 1.95965898f;
    n *= -1.87333083f;
    n += r3;
    n += r1;
    n *= 0.27457112f;
    n += -2.99033070f;
    n *= r0;
    n += r2;
    n *= 3.04290438f;
    n *= r6;
    n *= r7;
    n *= r5;
    return n;
} // Solution0

// Solution1 result = 0.00001466
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= -0.98157728f;
    r1 = n += -0.56003487f;
    r2 = n += 1.54465413f;
    n = r1 *= n;
    n *= 0.16583012f;
    r3 = n += -1.51003110f;
    r4 = n *= 0.05044551f;
    r5 = n += -1.67015612f;
    n += r5;
    n *= r4;
    r4 = n *= -0.32484728f;
    r5 = n += -0.38353562f;
    r6 = n *= 0.02158161f;
    n *= -7.54856396f;
    n += r2;
    r2 = n *= -0.12344556f;
    n *= -1.09180319f;
    r7 = n += -0.32194969f;
    n += r4;
    n *= r0;
    r0 = n += -8.55498409f;
    n *= 0.79387128f;
    n += r3;
    n += r1;
    n *= 2.95523000f;
    n += -2.88702416f;
    n *= r0;
    n += r2;
    n *= -3.89738584f;
    n *= r6;
    n *= r7;
    n *= r5;
    return n;
} // Solution1

// Solution2 result = 0.00000656
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= -0.84803724f;
    r1 = n += 2.97979045f;
    r2 = n += 0.19836652f;
    n = r1 *= n;
    n *= -0.39440683f;
    r3 = n += 2.12571430f;
    r4 = n *= -0.09534127f;
    r5 = n += -2.87391090f;
    n += r5;
    n *= r4;
    r4 = n *= 0.18601201f;
    r5 = n += 0.79690331f;
    r6 = n *= 0.05903222f;
    n *= 0.89090216f;
    n += r2;
    r2 = n *= 0.56694144f;
    n *= 0.32954687f;
    r7 = n += 1.63906503f;
    n += r4;
    n *= r0;
    r0 = n += -0.24255599f;
    n *= 0.18858194f;
    n += r3;
    n += r1;
    n *= 1.11890125f;
    n += -1.23716474f;
    n *= r0;
    n += r2;
    n *= -2.01169968f;
    n *= r6;
    n *= r7;
    n *= r5;
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
