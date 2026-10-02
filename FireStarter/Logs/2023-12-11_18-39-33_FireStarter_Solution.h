// Run date: 12/11/23 18:39:33 Pacific Standard Time
// Run duration = 1279.996446 seconds
// Run generation = 17
// Run evolution = 4
// Run max result = 0.00001419
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
// Run evolveSeed = 2
// Run optimizeSeed = 2
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

// Solution0 result = 0.00001419
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n *= 1.37308097f;
    n *= 0.72709489f;
    r1 = n += -0.00001399f;
    n *= 1.49028313f;
    n = r0 *= n;
    n += -0.80686760f;
    n *= 0.55066699f;
    r2 = n *= 0.01340472f;
    r3 = n *= -0.95325774f;
    r4 = n += 2.07773089f;
    n *= -1.11799812f;
    n = r3 *= n;
    r5 = n *= 1.88350272f;
    r6 = n += -1.79341972f;
    r7 = n *= 0.02313594f;
    n += -0.34072980f;
    n = r4 *= n;
    r8 = n += -0.15370019f;
    n *= r5;
    n += 0.54634869f;
    n = r8 *= n;
    n += r3;
    n *= 1.88692462f;
    n = r2 += n;
    n += r0;
    n += r2;
    n *= r7;
    n *= 0.12212862f;
    n *= r4;
    n += r8;
    n *= r6;
    n *= r1;
    return n;
} // Solution0

// Solution1 result = 0.00000942
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n *= -0.02617886f;
    n *= 1.20147943f;
    r1 = n += -1.43631530f;
    n *= 2.49868584f;
    n = r0 *= n;
    n += -0.38440078f;
    n *= -3.06492186f;
    r2 = n *= -0.25346515f;
    r3 = n *= 2.22511911f;
    r4 = n += -0.83797145f;
    n *= 3.52760100f;
    n = r3 *= n;
    r5 = n *= 0.07319126f;
    r6 = n += -0.58727449f;
    r7 = n *= -1.62136173f;
    n += -0.31131107f;
    n = r4 *= n;
    r8 = n += -0.36501899f;
    n *= r5;
    n += 0.35762304f;
    n = r8 *= n;
    n += r3;
    n *= -3.66009235f;
    n = r2 += n;
    n += r0;
    n += r2;
    n *= r7;
    n *= 0.42228365f;
    n *= r4;
    n += r8;
    n *= r6;
    n *= r1;
    return n;
} // Solution1

// Solution2 result = 0.00001293
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n *= 0.25221083f;
    n *= 3.05390263f;
    r1 = n += -0.00000707f;
    n *= -0.38605788f;
    n = r0 *= n;
    n += 0.48770273f;
    n *= -2.38636017f;
    r2 = n *= 1.02289188f;
    r3 = n *= 0.04408382f;
    r4 = n += -1.63228929f;
    n *= 1.55011225f;
    n = r3 *= n;
    r5 = n *= 2.14903021f;
    r6 = n += 0.51318389f;
    r7 = n *= 0.46733767f;
    n += 1.06678891f;
    n = r4 *= n;
    r8 = n += 0.14496119f;
    n *= r5;
    n += -0.29241344f;
    n = r8 *= n;
    n += r3;
    n *= 5.96582317f;
    n = r2 += n;
    n += r0;
    n += r2;
    n *= r7;
    n *= -0.00165146f;
    n *= r4;
    n += r8;
    n *= r6;
    n *= r1;
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
