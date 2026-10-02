// Run date: 05/05/24 11:00:58 Pacific Daylight Time
// Run duration = 1672.375671 seconds
// Run generation = 170
// Run evolution = 10
// Run max result = 0.00000036
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
// Run precision = 0
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.21707208f;
    r1 = n += -0.68195206f;
    r2 = n *= -4.70712137f;
    n *= -0.18350022f;
    r3 = n *= 0.74750942f;
    n += r2;
    n *= -2.65973973f;
    n *= r3;
    n *= -2.82288218f;
    r3 = n += 1.47163701f;
    n *= -2.20250487f;
    n *= 0.00276027f;
    r2 = n += -0.88566262f;
    n += -0.22443619f;
    n = r2 *= n;
    r4 = n += 0.39937365f;
    r5 = n *= -1.19597912f;
    n = r4 += n;
    n *= -1.75058973f;
    n *= r3;
    n += r5;
    r5 = n += 8.42257595f;
    n *= r2;
    n *= r1;
    n *= r4;
    n *= 0.17628135f;
    n *= 2.08293247f;
    n *= r5;
    n += r0;
    n += -1.49241924f;
    n += 0.05849207f;
    n += 0.75197512f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.42025328f;
    r1 = n += 1.29885936f;
    r2 = n *= -1.49775422f;
    n *= 2.80872464f;
    r3 = n *= -1.32955396f;
    n += r2;
    n *= 0.78769737f;
    n *= r3;
    n *= -0.50342596f;
    r3 = n += 4.90096855f;
    n *= 0.01053235f;
    n *= 0.39892277f;
    r2 = n += 0.03088553f;
    n += 3.47585130f;
    n = r2 *= n;
    r4 = n += 2.91131759f;
    r5 = n *= 1.18264854f;
    n = r4 += n;
    n *= 0.00498353f;
    n *= r3;
    n += r5;
    r5 = n += 0.57607782f;
    n *= r2;
    n *= r1;
    n *= r4;
    n *= 0.04326091f;
    n *= 1.57640195f;
    n *= r5;
    n += r0;
    n += -1.66911972f;
    n += 2.20191789f;
    n += 0.64792943f;
    return n;
} // Solution1

// Solution2 result = 0.00000036
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.46068192f;
    r1 = n += -1.20606232f;
    r2 = n *= -0.60812050f;
    n *= -0.64883775f;
    r3 = n *= -2.07660270f;
    n += r2;
    n *= -1.34264731f;
    n *= r3;
    n *= -1.22775149f;
    r3 = n += -0.71984988f;
    n *= 3.11552954f;
    n *= 0.00848575f;
    r2 = n += -0.67523420f;
    n += -0.90276963f;
    n = r2 *= n;
    r4 = n += 1.36560392f;
    r5 = n *= -0.25313738f;
    n = r4 += n;
    n *= -0.12556870f;
    n *= r3;
    n += r5;
    r5 = n += 1.55585611f;
    n *= r2;
    n *= r1;
    n *= r4;
    n *= 3.54687047f;
    n *= -0.36283758f;
    n *= r5;
    n += r0;
    n += 0.34605399f;
    n += -0.55578321f;
    n += -0.47273442f;
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
