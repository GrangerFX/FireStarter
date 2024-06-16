// Run date: 06/15/24 17:42:26 Pacific Daylight Time
// Run duration = 39.326388 seconds
// Run generation = 1
// Run evolution = 0
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

// Solution0 result = 0.00000024
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += 2.23879528f;
    r0 = n *= 0.15714322f;
    n *= r0;
    r0 = n += -0.84549147f;
    r1 = n *= 2.15229464f;
    n += -9.52708149f;
    n *= 1.50710416f;
    n += 0.80675942f;
    r2 = n *= 1.51669645f;
    n *= 0.14944756f;
    n *= 2.24158764f;
    n *= 2.81738687f;
    r3 = n += -2.11746526f;
    r4 = n *= 0.01608074f;
    n += 0.35780591f;
    n = r4 += n;
    n *= r1;
    n *= 2.28800774f;
    n *= -1.89676189f;
    n *= 0.89489263f;
    n = r3 *= n;
    r1 = n *= 3.68413043f;
    r5 = n *= -0.93527716f;
    n = r1 *= n;
    n *= r5;
    n *= r2;
    n *= r1;
    n *= r0;
    n *= r4;
    n *= -0.00786721f;
    n *= r3;
    n *= -0.23057994f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += 0.87072140f;
    r0 = n *= 0.52985859f;
    n *= r0;
    r0 = n += -2.09897113f;
    r1 = n *= 0.31112847f;
    n += -4.34822369f;
    n *= 2.93892813f;
    n += -0.45452476f;
    r2 = n *= 1.80903685f;
    n *= -1.05314779f;
    n *= -0.49089786f;
    n *= 1.69842875f;
    r3 = n += 1.44458294f;
    r4 = n *= 0.00763778f;
    n += -0.19475046f;
    n = r4 += n;
    n *= r1;
    n *= 0.96369398f;
    n *= -1.30694759f;
    n *= 0.31271523f;
    n = r3 *= n;
    r1 = n *= -0.68033868f;
    r5 = n *= 0.04048496f;
    n = r1 *= n;
    n *= r5;
    n *= r2;
    n *= r1;
    n *= r0;
    n *= r4;
    n *= -2.94565439f;
    n *= r3;
    n *= 3.53540492f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += 0.25939810f;
    r0 = n *= 0.53404403f;
    n *= r0;
    r0 = n += -1.53665388f;
    r1 = n *= -0.12411067f;
    n += 2.84225345f;
    n *= -0.10374478f;
    n += -0.50960547f;
    r2 = n *= 2.88062191f;
    n *= -3.19322443f;
    n *= 1.09588540f;
    n *= -1.56378317f;
    r3 = n += 2.42224956f;
    r4 = n *= 0.07983326f;
    n += -0.95819640f;
    n = r4 += n;
    n *= r1;
    n *= -4.42044020f;
    n *= -1.68349409f;
    n *= -1.91587913f;
    n = r3 *= n;
    r1 = n *= -0.37520337f;
    r5 = n *= 1.93845832f;
    n = r1 *= n;
    n *= r5;
    n *= r2;
    n *= r1;
    n *= r0;
    n *= r4;
    n *= 0.32795134f;
    n *= r3;
    n *= 1.29816675f;
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
