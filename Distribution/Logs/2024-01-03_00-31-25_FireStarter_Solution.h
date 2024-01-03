// Run date: 01/03/24 00:31:25 Pacific Standard Time
// Run duration = 3934.706177 seconds
// Run generation = 5
// Run evolution = 5
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.17354226f;
    n += 0.03194964f;
    r0 = n *= -0.55692452f;
    r1 = n *= 0.10960738f;
    n = r0 *= n;
    n *= 3.05177522f;
    n *= 0.52087414f;
    r2 = n += -0.37502408f;
    r3 = n += -0.14817432f;
    n *= 161.99266052f;
    n *= -0.05434048f;
    n += -0.12599578f;
    n = r3 += n;
    n += -2.92736411f;
    n *= -4.49042988f;
    r4 = n *= -0.00818098f;
    r5 = n += 1.85772216f;
    n *= r5;
    r5 = n *= 0.42896476f;
    r6 = n *= -2.22955084f;
    n += -2.81265020f;
    n *= r6;
    n += r2;
    n *= r3;
    r3 = n *= 0.11995764f;
    n *= 1.62547266f;
    n *= r4;
    n += r3;
    n += r0;
    n *= r5;
    n *= r1;
    n += 0.00000007f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -2.86357236f;
    n += -0.22708635f;
    r0 = n *= 0.02498834f;
    r1 = n *= -0.88052249f;
    n = r0 *= n;
    n *= 5617.93798828f;
    n *= 0.10185303f;
    r2 = n += 1.68471146f;
    r3 = n += -0.62320989f;
    n *= -24.73451996f;
    n *= 0.03612037f;
    n += 0.77318686f;
    n = r3 += n;
    n += 1.03189635f;
    n *= 0.84777236f;
    r4 = n *= -1.66205549f;
    r5 = n += 0.21069363f;
    n *= r5;
    r5 = n *= -1.00049782f;
    r6 = n *= 0.14126541f;
    n += 10.24919510f;
    n *= r6;
    n += r2;
    n *= r3;
    r3 = n *= -1.76011956f;
    n *= 0.66165650f;
    n *= r4;
    n += r3;
    n += r0;
    n *= r5;
    n *= r1;
    n += -0.11813191f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += 0.15856969f;
    n += -2.77656341f;
    r0 = n *= 0.44011903f;
    r1 = n *= 0.21101646f;
    n = r0 *= n;
    n *= 6.67611551f;
    n *= -1.27912974f;
    r2 = n += 0.64247870f;
    r3 = n += 0.46574524f;
    n *= 0.95384640f;
    n *= -0.93872070f;
    n += 1.45274055f;
    n = r3 += n;
    n += 0.26998985f;
    n *= 0.00005132f;
    r4 = n *= -25849.17382812f;
    r5 = n += -0.04128345f;
    n *= r5;
    r5 = n *= 0.40232494f;
    r6 = n *= -0.69481856f;
    n += 0.50642943f;
    n *= r6;
    n += r2;
    n *= r3;
    r3 = n *= -0.18753377f;
    n *= -1.81127012f;
    n *= r4;
    n += r3;
    n += r0;
    n *= r5;
    n *= r1;
    n += 0.52359879f;
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
