// Run date: 11/22/23 12:24:46 Pacific Standard Time
// Run duration = 2545.352813 seconds
// Run generation = 43
// Run evolution = 10
// Run result = 0.00000024
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
// Run tests = 1
// Run seeds = 64
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

// Solution0 result = 0.00000015
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159274f;
    r1 = n *= -0.87513900f;
    n *= r1;
    r1 = n += -3.16606641f;
    r2 = n *= -0.00357204f;
    r3 = n += 0.56473446f;
    n = r1 += n;
    r4 = n *= 0.00684954f;
    r5 = n += -0.35316998f;
    n = r2 += n;
    n += r4;
    r4 = n *= -0.12207391f;
    n *= r4;
    n += 0.05996978f;
    n = r2 *= n;
    n *= r1;
    n *= r3;
    n += 0.20382117f;
    r3 = n *= 0.39517906f;
    n += -0.05851875f;
    n *= r2;
    n = r0 *= n;
    n = r3 *= n;
    r2 = n *= 0.04517502f;
    n *= r5;
    n *= r3;
    n *= r0;
    r0 = n *= -3.03819871f;
    n += 0.00000000f;
    n += r2;
    n += r0;
    n *= 300621.15625000f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065866f;
    r1 = n *= -0.43048829f;
    n *= r1;
    r1 = n += 0.72797817f;
    r2 = n *= -0.03370385f;
    r3 = n += -0.94295996f;
    n = r1 += n;
    r4 = n *= 0.00031242f;
    r5 = n += 0.32747537f;
    n = r2 += n;
    n += r4;
    r4 = n *= 1.01583314f;
    n *= r4;
    n += 0.38663635f;
    n = r2 *= n;
    n *= r1;
    n *= r3;
    n += 0.29017243f;
    r3 = n *= 0.00886805f;
    n += 0.12357128f;
    n *= r2;
    n = r0 *= n;
    n = r3 *= n;
    r2 = n *= 30873.94726562f;
    n *= r5;
    n *= r3;
    n *= r0;
    r0 = n *= 15.27470207f;
    n += 0.17554250f;
    n += r2;
    n += r0;
    n *= -0.67295289f;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799359f;
    r1 = n *= 0.13525495f;
    n *= r1;
    r1 = n += -0.04537775f;
    r2 = n *= 0.03822808f;
    r3 = n += -0.04753559f;
    n = r1 += n;
    r4 = n *= -0.25901791f;
    r5 = n += 0.67611170f;
    n = r2 += n;
    n += r4;
    r4 = n *= 0.84294462f;
    n *= r4;
    n += -0.05732834f;
    n = r2 *= n;
    n *= r1;
    n *= r3;
    n += 0.00000000f;
    r3 = n *= 1.47346783f;
    n += 0.28416762f;
    n *= r2;
    n = r0 *= n;
    n = r3 *= n;
    r2 = n *= 10217.10058594f;
    n *= r5;
    n *= r3;
    n *= r0;
    r0 = n *= 2.29792476f;
    n += -0.50740618f;
    n += r2;
    n += r0;
    n *= -1.03191233f;
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
