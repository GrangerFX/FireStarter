// Run date: 12/26/23 11:51:17 Pacific Standard Time
// Run duration = 2232.152004 seconds
// Run generation = 50
// Run evolution = 17
// Run max result = 0.00000054
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
// Run startResult = 9.999999f

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
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.19086443f;
    n += r0;
    r0 = n += -1.19923663f;
    r1 = n += 0.00000007f;
    r2 = n *= -0.20798205f;
    n *= 4.56633234f;
    n *= -0.00001432f;
    n += r2;
    n *= 4.88229227f;
    n *= r1;
    n *= 1.43211019f;
    r1 = n += 0.42969275f;
    r2 = n *= -0.00256403f;
    n *= 3.78690243f;
    r3 = n += -0.33983243f;
    r4 = n += -1.35801625f;
    n *= r4;
    n = r3 += n;
    n *= r2;
    n *= 1.83833158f;
    n *= r3;
    r3 = n += -0.96730739f;
    n = r3 *= n;
    n += -0.20194443f;
    n *= 0.79141617f;
    n *= r1;
    n = r3 += n;
    n += 1.78546715f;
    n *= r3;
    n *= r0;
    n *= -0.71473503f;
    n += -0.00000014f;
    return n;
} // Solution0

// Solution1 result = 0.00000048
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.41448873f;
    n += r0;
    r0 = n += -2.56209207f;
    r1 = n += 0.00000971f;
    r2 = n *= 3.85576224f;
    n *= 0.61681014f;
    n *= 2.10216212f;
    n += r2;
    n *= -0.07222020f;
    n *= r1;
    n *= -1.03788888f;
    r1 = n += -1.57225084f;
    r2 = n *= -0.00340501f;
    n *= -4.70452118f;
    r3 = n += 1.59123039f;
    r4 = n += -2.38507318f;
    n *= r4;
    n = r3 += n;
    n *= r2;
    n *= -0.53380823f;
    n *= r3;
    r3 = n += -1.80475068f;
    n = r3 *= n;
    n += -2.20459723f;
    n *= -0.38141608f;
    n *= r1;
    n = r3 += n;
    n += -0.09673105f;
    n *= r3;
    n *= r0;
    n *= -0.08624178f;
    n += -0.11813959f;
    return n;
} // Solution1

// Solution2 result = 0.00000054
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.30595720f;
    n += r0;
    r0 = n += -1.60198760f;
    r1 = n += -0.00000068f;
    r2 = n *= 1.10239172f;
    n *= 0.00013153f;
    n *= -8.55670738f;
    n += r2;
    n *= -1.44089162f;
    n *= r1;
    n *= 1.50566232f;
    r1 = n += 1.90983236f;
    r2 = n *= 0.00159792f;
    n *= -4.61599064f;
    r3 = n += 1.13232839f;
    r4 = n += -1.65029097f;
    n *= r4;
    n = r3 += n;
    n *= r2;
    n *= 4.16312265f;
    n *= r3;
    r3 = n += 0.57169861f;
    n = r3 *= n;
    n += 0.20598963f;
    n *= 0.22947440f;
    n *= r1;
    n = r3 += n;
    n += 1.54300332f;
    n *= r3;
    n *= r0;
    n *= -1.26481962f;
    n += 0.52359939f;
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
