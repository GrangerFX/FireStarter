// Run date: 01/06/24 13:13:09 Pacific Standard Time
// Run duration = 883.417863 seconds
// Run generation = 14
// Run evolution = 11
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
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.60411859f;
    r0 = n += 1.89789438f;
    r1 = n += 0.00000018f;
    r2 = n *= -0.43299365f;
    n = r2 *= n;
    r3 = n += -0.41306284f;
    n *= 0.00003798f;
    n *= 0.04472544f;
    n *= 4.34354162f;
    r4 = n *= -446.72042847f;
    n = r4 += n;
    n += -2.06921721f;
    n *= -1.15665770f;
    n *= 0.22929588f;
    n = r3 *= n;
    n *= -1.54681122f;
    n += -1.09270608f;
    n = r2 += n;
    r5 = n *= -1.85019040f;
    n *= r5;
    r5 = n += 1.25258350f;
    r6 = n *= -2.69160891f;
    n += r5;
    r5 = n += 0.24911137f;
    n *= r5;
    n += r6;
    n *= r3;
    n += r4;
    n *= r2;
    n *= r1;
    n += r0;
    n *= 0.42602864f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.49000236f;
    r0 = n += -1.40619767f;
    r1 = n += -0.10823227f;
    r2 = n *= -0.94298935f;
    n = r2 *= n;
    r3 = n += -1.26372194f;
    n *= 0.41785064f;
    n *= -2.75893378f;
    n *= 3.59296656f;
    r4 = n *= 0.00002051f;
    n = r4 += n;
    n += -1.02903569f;
    n *= 0.98096907f;
    n *= -0.63177854f;
    n = r3 *= n;
    n *= -1.43299580f;
    n += -2.44628835f;
    n = r2 += n;
    r5 = n *= 0.53048855f;
    n *= r5;
    r5 = n += -0.15948243f;
    r6 = n *= 0.14550005f;
    n += r5;
    r5 = n += 0.63005424f;
    n *= r5;
    n += r6;
    n *= r3;
    n += r4;
    n *= r2;
    n *= r1;
    n += r0;
    n *= -1.09146440f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.59698182f;
    r0 = n += 0.50134754f;
    r1 = n += 1.06154716f;
    r2 = n *= 0.46681431f;
    n = r2 *= n;
    r3 = n += -0.62846619f;
    n *= -39.66648483f;
    n *= 0.04198906f;
    n *= 0.00039100f;
    r4 = n *= -21.39119148f;
    n = r4 += n;
    n += 1.35768867f;
    n *= 1.06601560f;
    n *= -0.40706125f;
    n = r3 *= n;
    n *= 1.30226386f;
    n += -2.01256609f;
    n = r2 += n;
    r5 = n *= 1.12644756f;
    n *= r5;
    r5 = n += -2.16778898f;
    r6 = n *= 0.54801083f;
    n += r5;
    r5 = n += 1.44212723f;
    n *= r5;
    n += r6;
    n *= r3;
    n += r4;
    n *= r2;
    n *= r1;
    n += r0;
    n *= -0.49324119f;
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
