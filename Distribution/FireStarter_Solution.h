// Run date: 10/07/23 20:36:30 Pacific Daylight Time
// Run duration = 1566.624029 seconds
// Run generation = 17
// Run evolution = 8
// Run result = 0.00000039
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
// Run tests = 1
// Run units = 1
// Run processes = 0
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

// Solution0 result = 0.00000039
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -1.19237649f;
    r0 = n += 0.31489795f;
    r1 = n *= -0.76609725f;
    n *= 0.37815309f;
    r2 = n *= 1.07139385f;
    r3 = n += 1.40575337f;
    n *= 0.99963164f;
    n = r2 += n;
    r4 = n += -1.53713977f;
    n += -2.23041439f;
    n *= -0.00035411f;
    n = r0 += n;
    n = r3 *= n;
    n *= -0.02041948f;
    r5 = n += -0.74009985f;
    n = r3 *= n;
    n *= 1.18061566f;
    r6 = n *= -0.13133581f;
    r7 = n += 2.00823140f;
    n *= r6;
    n = r7 += n;
    n *= r5;
    n *= 0.39770240f;
    n += r3;
    n *= r7;
    n *= -0.37176132f;
    n *= r2;
    n += r1;
    n += 0.68093354f;
    n *= 0.69125915f;
    n += r4;
    n += r0;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -2.56113505f;
    r0 = n += 0.69301260f;
    r1 = n *= -1.65922928f;
    n *= 1.09913933f;
    r2 = n *= 0.10020369f;
    r3 = n += 0.54763848f;
    n *= 0.68905884f;
    n = r2 += n;
    r4 = n += -0.44921324f;
    n += 0.81568110f;
    n *= 0.60352331f;
    n = r0 += n;
    n = r3 *= n;
    n *= 0.14597625f;
    r5 = n += 3.08452797f;
    n = r3 *= n;
    n *= -0.00516523f;
    r6 = n *= -10.45300007f;
    r7 = n += 1.81786501f;
    n *= r6;
    n = r7 += n;
    n *= r5;
    n *= 0.29307032f;
    n += r3;
    n *= r7;
    n *= 0.45683429f;
    n *= r2;
    n += r1;
    n += 0.20362061f;
    n *= 0.60971111f;
    n += r4;
    n += r0;
    return n;
} // Solution1

// Solution2 result = 0.00000039
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -1.33284461f;
    r0 = n += 0.14802337f;
    r1 = n *= -0.64244854f;
    n *= -0.38313136f;
    r2 = n *= -1.69400787f;
    r3 = n += 1.19526613f;
    n *= 0.99983990f;
    n = r2 += n;
    r4 = n += -0.99045289f;
    n += -3.73660684f;
    n *= -0.00006487f;
    n = r0 += n;
    n = r3 *= n;
    n *= -0.03678588f;
    r5 = n += -1.83723438f;
    n = r3 *= n;
    n *= 0.26445779f;
    r6 = n *= -0.24531454f;
    r7 = n += 1.66087961f;
    n *= r6;
    n = r7 += n;
    n *= r5;
    n *= 1.77141809f;
    n += r3;
    n *= r7;
    n *= 2.16582870f;
    n *= r2;
    n += r1;
    n += -0.99159122f;
    n *= -0.04213332f;
    n += r4;
    n += r0;
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
