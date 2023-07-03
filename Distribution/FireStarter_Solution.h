// Run date: 07/03/23 09:57:37 Pacific Daylight Time
// Run duration = 1386.199581 seconds
// Run generation = 117
// Run evolution = 0
// Run result = 0.00000012
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 1
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 0
// Run units = 1
// Run processes = 0
// Run population = 278528
// Run iterations = 64
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.56972027f;
    r0 = n += 1.78982902f;
    r1 = n *= 0.89272720f;
    n *= -0.70700961f;
    n = r1 *= n;
    r2 = n += 1.80503607f;
    n += -1.21938097f;
    r3 = n *= 0.00649120f;
    r4 = n *= -2.53487039f;
    r5 = n += 0.27098557f;
    n *= r4;
    n *= -8.76909065f;
    n *= r5;
    n += 0.80857068f;
    n *= r1;
    n += -0.71550983f;
    n *= -0.07211560f;
    r1 = n += -3.65075397f;
    n *= -0.00202012f;
    n = r1 += n;
    n *= r3;
    n *= r1;
    n += 0.22875851f;
    r1 = n += 0.73155022f;
    r3 = n += -0.44179085f;
    n *= r0;
    n *= r3;
    n = r2 *= n;
    n = r1 *= n;
    n += r1;
    n += -0.00000002f;
    n += r2;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.38206875f;
    r0 = n += -1.18084407f;
    r1 = n *= 0.72956592f;
    n *= 0.36717862f;
    n = r1 *= n;
    r2 = n += -1.15429032f;
    n += 0.99229574f;
    r3 = n *= -1.05727577f;
    r4 = n *= 2.02221441f;
    r5 = n += -6.45641375f;
    n *= r4;
    n *= 3.91349840f;
    n *= r5;
    n += 3.04052114f;
    n *= r1;
    n += 3.23201561f;
    n *= -0.00013170f;
    r1 = n += 0.73498744f;
    n *= 0.30401427f;
    n = r1 += n;
    n *= r3;
    n *= r1;
    n += 1.13693309f;
    r1 = n += 0.34879753f;
    r3 = n += -0.88000268f;
    n *= r0;
    n *= r3;
    n = r2 *= n;
    n = r1 *= n;
    n += r1;
    n += -0.11813183f;
    n += r2;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.90149021f;
    r0 = n += -2.36009574f;
    r1 = n *= 0.31570745f;
    n *= 1.64586008f;
    n = r1 *= n;
    r2 = n += -0.66435039f;
    n += -1.02464056f;
    r3 = n *= -0.04477796f;
    r4 = n *= -2.33059549f;
    r5 = n += 0.30086142f;
    n *= r4;
    n *= -6.94796038f;
    n *= r5;
    n += -10.51757812f;
    n *= r1;
    n += 1.86982620f;
    n *= -0.02464364f;
    r1 = n += -7.50510359f;
    n *= -1.26441181f;
    n = r1 += n;
    n *= r3;
    n *= r1;
    n += -0.70334840f;
    r1 = n += 1.26406443f;
    r3 = n += -0.07935479f;
    n *= r0;
    n *= r3;
    n = r2 *= n;
    n = r1 *= n;
    n += r1;
    n += 0.52359873f;
    n += r2;
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
