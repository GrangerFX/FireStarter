// Run date: 12/25/22 13:39:08 Pacific Standard Time
// Run duration = 391.917724 seconds
// Run count = 6
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_OPTIMIZE;
// Run units = 1;
// Run processes = 0;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 2.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 6

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

#define SOLUTION_VARIATIONS 3

// Precision = 0.00000060

// Solution0 precision = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14159274f;
    r1 = n *= 1.96825361f;
    n = r1 *= n;
    n *= 0.00200702f;
    n += -1.65905249f;
    r2 = n *= 1.54330754f;
    r3 = n *= -1.08563650f;
    n *= -1.42133069f;
    n *= 2.72107816f;
    r4 = n *= 0.03994442f;
    n = r3 *= n;
    r5 = n *= -0.12694593f;
    r6 = n *= -1.44981635f;
    n = r1 *= n;
    r7 = n *= 0.02997992f;
    n *= r2;
    n *= 5.31771231f;
    n += -4.53026962f;
    n += 1.02030540f;
    n *= -0.00015759f;
    n = r6 *= n;
    n += -3.44121623f;
    n *= r6;
    n = r1 += n;
    n *= r7;
    n += 3.15400171f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += 0.00000000f;
    return n;
} // Solution0

// Solution1 precision = 0.00000060
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.09065890f;
    r1 = n *= 1.25337887f;
    n = r1 *= n;
    n *= 0.00862965f;
    n += -1.65844142f;
    r2 = n *= 0.23727413f;
    r3 = n *= -1.85706329f;
    n *= 0.47202387f;
    n *= -1.99826717f;
    r4 = n *= 0.73021680f;
    n = r3 *= n;
    r5 = n *= -0.94269854f;
    r6 = n *= -1.23584998f;
    n = r1 *= n;
    r7 = n *= -0.00828408f;
    n *= r2;
    n *= 3.26305842f;
    n += 1.90650415f;
    n += -1.76603961f;
    n *= 10.58883572f;
    n = r6 *= n;
    n += -1.06440508f;
    n *= r6;
    n = r1 += n;
    n *= r7;
    n += 3.59403753f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += -0.11813203f;
    return n;
} // Solution1

// Solution2 precision = 0.00000016
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.61799359f;
    r1 = n *= 0.79096621f;
    n = r1 *= n;
    n *= 0.00992502f;
    n += -1.02665520f;
    r2 = n *= -1.73394525f;
    r3 = n *= 1.71064532f;
    n *= 0.09607806f;
    n *= -3.37641382f;
    r4 = n *= -0.79096419f;
    n = r3 *= n;
    r5 = n *= -1.11315036f;
    r6 = n *= 0.02047612f;
    n = r1 *= n;
    r7 = n *= 1.25381875f;
    n *= r2;
    n *= -0.49150303f;
    n += -1.32235551f;
    n += 1.31470561f;
    n *= -1.22180879f;
    n = r6 *= n;
    n += -2.27535844f;
    n *= r6;
    n = r1 += n;
    n *= r7;
    n += 0.28149503f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += 0.52359885f;
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
