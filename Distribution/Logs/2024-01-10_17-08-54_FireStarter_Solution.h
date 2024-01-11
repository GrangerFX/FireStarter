// Run date: 01/10/24 17:08:54 Pacific Standard Time
// Run duration = 13839.156757 seconds
// Run generation = 80
// Run evolution = 16
// Run max result = 0.00000012
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
// Run tests = 16
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.37219483f;
    r1 = n += -0.79822046f;
    r2 = n += 2.55214739f;
    n = r2 *= n;
    r3 = n += -2.19618082f;
    n *= -0.00349790f;
    r4 = n += 0.56876177f;
    n += -0.38957492f;
    n *= r3;
    n = r4 += n;
    n += -1.77898479f;
    n *= -0.14461346f;
    n += 0.78420079f;
    n *= r4;
    n += -0.86175942f;
    r4 = n *= 2.03849816f;
    r3 = n += -1.50268662f;
    n *= r4;
    n = r2 *= n;
    n += -0.26296949f;
    n *= r3;
    n += r2;
    n += 3.56242633f;
    n += 1.02685034f;
    r2 = n *= -0.45199013f;
    n += -29.56909561f;
    n += 18.83357811f;
    n += r1;
    n += r0;
    n *= -0.00000033f;
    n += r2;
    n += 1.42077649f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.25461164f;
    r1 = n += -1.55791879f;
    r2 = n += 1.21538198f;
    n = r2 *= n;
    r3 = n += -1.24495590f;
    n *= -0.00876268f;
    r4 = n += -0.86953056f;
    n += 1.13413250f;
    n *= r3;
    n = r4 += n;
    n += -1.22574461f;
    n *= 2.32661319f;
    n += -4.92827940f;
    n *= r4;
    n += 3.63480091f;
    r4 = n *= -0.93671173f;
    r3 = n += 6.25379229f;
    n *= r4;
    n = r2 *= n;
    n += -0.59192324f;
    n *= r3;
    n += r2;
    n += 4.69076777f;
    n += -4.78482723f;
    r2 = n *= 0.00919740f;
    n += 0.46806908f;
    n += 0.44325098f;
    n += r1;
    n += r0;
    n *= -0.39275688f;
    n += r2;
    n += 1.21663582f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.47080961f;
    r1 = n += -1.79469609f;
    r2 = n += -0.05416881f;
    n = r2 *= n;
    r3 = n += -2.10614848f;
    n *= -0.00722262f;
    r4 = n += 0.13599634f;
    n += 0.10281999f;
    n *= r3;
    n = r4 += n;
    n += -1.31535327f;
    n *= -0.17415240f;
    n += 2.77656269f;
    n *= r4;
    n += -1.88085258f;
    r4 = n *= 0.45766810f;
    r3 = n += -1.80818641f;
    n *= r4;
    n = r2 *= n;
    n += -0.80260867f;
    n *= r3;
    n += r2;
    n += 6.34722090f;
    n += 0.02261463f;
    r2 = n *= -0.26195061f;
    n += -3.22706628f;
    n += -0.48162413f;
    n += r1;
    n += r0;
    n *= 0.21240011f;
    n += r2;
    n += 3.00980568f;
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
