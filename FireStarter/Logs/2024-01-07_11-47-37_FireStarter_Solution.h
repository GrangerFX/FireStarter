// Run date: 01/07/24 11:47:37 Pacific Standard Time
// Run duration = 1817.066831 seconds
// Run generation = 7
// Run evolution = 7
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
// Run tests = 4
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.73703563f;
    n += -1.70535123f;
    r0 = n += -0.61011446f;
    r1 = n *= 0.56669742f;
    n = r1 *= n;
    r2 = n += -0.55031860f;
    n *= 0.08618000f;
    n *= 286.44119263f;
    n *= 0.29613113f;
    r3 = n *= -0.00028199f;
    n += r3;
    n += 1.24498749f;
    n *= 0.61880124f;
    r3 = n *= 0.98669863f;
    n = r2 *= n;
    n *= -1.52356267f;
    n += 1.35006106f;
    n = r1 += n;
    r4 = n *= -1.77618814f;
    n = r4 *= n;
    n += -14.10125923f;
    r5 = n *= -0.80303162f;
    n *= -1.17305684f;
    n += r1;
    n += r3;
    n += r5;
    n *= r2;
    n += -1.61048174f;
    n *= r0;
    n *= r4;
    n += 0.00000034f;
    n *= 0.04075791f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.31927139f;
    n += -0.27480116f;
    r0 = n += -0.71195763f;
    r1 = n *= 0.80931610f;
    n = r1 *= n;
    r2 = n += -0.45355684f;
    n *= 1736.40466309f;
    n *= 2.41852736f;
    n *= -0.00002640f;
    r3 = n *= -0.46706596f;
    n += r3;
    n += 6.28695488f;
    n *= 0.18967535f;
    r3 = n *= -0.45287308f;
    n = r2 *= n;
    n *= 1.43945718f;
    n += -1.79411793f;
    n = r1 += n;
    r4 = n *= -0.84580064f;
    n = r4 *= n;
    n += -1.06517982f;
    r5 = n *= 2.54988265f;
    n *= -1.98810244f;
    n += r1;
    n += r3;
    n += r5;
    n *= r2;
    n += -0.74349821f;
    n *= r0;
    n *= r4;
    n += -0.07603748f;
    n *= 1.55359805f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.27894467f;
    n += -1.73879826f;
    r0 = n += 1.00852287f;
    r1 = n *= -1.40194178f;
    n = r1 *= n;
    r2 = n += -1.00070071f;
    n *= -0.04051440f;
    n *= -3.52015567f;
    n *= 0.01512584f;
    r3 = n *= -3.35187387f;
    n += r3;
    n += -1.35638356f;
    n *= 0.91221648f;
    r3 = n *= 0.95769000f;
    n = r2 *= n;
    n *= 0.73473001f;
    n += -1.45981753f;
    n = r1 += n;
    r4 = n *= -1.25029600f;
    n = r4 *= n;
    n += 1.32415223f;
    r5 = n *= 0.76975048f;
    n *= -1.20178878f;
    n += r1;
    n += r3;
    n += r5;
    n *= r2;
    n += 0.54615110f;
    n *= r0;
    n *= r4;
    n += 0.15291515f;
    n *= 3.42411327f;
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
