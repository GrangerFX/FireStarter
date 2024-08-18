// Run date: 08/18/24 14:23:27 Pacific Daylight Time
// Run duration = 185.283212 seconds
// Run generation = 23
// Run evolution = 2
// Run max result = 0.00013721
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_CPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 0
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

// Solution0 result = 0.00012368
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8, r9;

    n += -1.58720779f;
    r0 = n *= 0.95915097f;
    n *= -1.39765775f;
    r1 = n *= -0.52724856f;
    r2 = n *= 0.06131078f;
    r3 = n += 3.28559828f;
    r4 = n *= 0.07979224f;
    r5 = n += -0.52858341f;
    r6 = n += -1.85000181f;
    r7 = n *= 0.99206436f;
    r8 = n += 1.57310319f;
    n = r0 *= n;
    n *= r2;
    n *= -0.43524745f;
    r2 = n += -0.30225971f;
    r9 = n *= -2.05496836f;
    n *= r3;
    n *= -0.77054304f;
    n += -3.88910079f;
    n *= r4;
    n *= r2;
    n *= r7;
    n = r8 += n;
    n *= r0;
    n *= r9;
    n *= r6;
    n *= r8;
    n *= r1;
    n += -2.50113320f;
    n *= 1.94096375f;
    n *= r5;
    n += -0.29351553f;
    return n;
} // Solution0

// Solution1 result = 0.00013721
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8, r9;

    n += 1.83068931f;
    r0 = n *= 1.46624076f;
    n *= 0.73678917f;
    r1 = n *= 1.25419271f;
    r2 = n *= -0.00736930f;
    r3 = n += -0.90429395f;
    r4 = n *= 0.96661192f;
    r5 = n += 1.24319184f;
    r6 = n += 0.27212101f;
    r7 = n *= -0.92309636f;
    r8 = n += -0.23772155f;
    n = r0 *= n;
    n *= r2;
    n *= 1.38403952f;
    r2 = n += -0.36865249f;
    r9 = n *= -1.94089162f;
    n *= r3;
    n *= -0.35898879f;
    n += 2.05551910f;
    n *= r4;
    n *= r2;
    n *= r7;
    n = r8 += n;
    n *= r0;
    n *= r9;
    n *= r6;
    n *= r8;
    n *= r1;
    n += 1.78576767f;
    n *= -0.89332235f;
    n *= r5;
    n += 0.52036983f;
    return n;
} // Solution1

// Solution2 result = 0.00008881
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8, r9;

    n += -1.44468343f;
    r0 = n *= -1.04579842f;
    n *= 1.04202712f;
    r1 = n *= -1.48575544f;
    r2 = n *= -0.08540979f;
    r3 = n += -0.35399354f;
    r4 = n *= 0.19172068f;
    r5 = n += 1.86868548f;
    r6 = n += -1.50219464f;
    r7 = n *= -1.42958879f;
    r8 = n += -0.78591222f;
    n = r0 *= n;
    n *= r2;
    n *= -0.70752656f;
    r2 = n += -1.71406484f;
    r9 = n *= -0.83096969f;
    n *= r3;
    n *= 0.20885152f;
    n += 6.28685570f;
    n *= r4;
    n *= r2;
    n *= r7;
    n = r8 += n;
    n *= r0;
    n *= r9;
    n *= r6;
    n *= r8;
    n *= r1;
    n += 1.04975212f;
    n *= -0.19540839f;
    n *= r5;
    n += 1.64501870f;
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
