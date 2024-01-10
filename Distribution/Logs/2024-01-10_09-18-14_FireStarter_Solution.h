// Run date: 01/10/24 09:18:14 Pacific Standard Time
// Run duration = 10902.629698 seconds
// Run generation = 30
// Run evolution = 12
// Run max result = 0.00000024
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

    n *= 0.89247847f;
    n += -1.65840340f;
    r0 = n += -1.14540040f;
    r1 = n *= 0.12322596f;
    n *= -0.20513596f;
    n = r1 += n;
    r2 = n *= -0.27253735f;
    n *= r0;
    n *= 0.96860510f;
    r0 = n *= 0.26737815f;
    n += 1.10435557f;
    r3 = n *= 2.34807587f;
    n = r3 *= n;
    r4 = n += -0.47561696f;
    r5 = n *= -0.96609944f;
    r6 = n *= -0.06912298f;
    n *= r6;
    n = r0 += n;
    n *= 0.68586087f;
    n *= -1.07450032f;
    n *= r4;
    n *= r5;
    n *= r3;
    n += 0.27013806f;
    n *= 3.59737396f;
    n *= r0;
    n *= r2;
    n += -0.11656692f;
    n = r1 += n;
    n += r1;
    n += 0.23313387f;
    n *= 1.24274206f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.52749276f;
    n += -1.60174596f;
    r0 = n += -0.02855407f;
    r1 = n *= 0.01367053f;
    n *= -1.23815000f;
    n = r1 += n;
    r2 = n *= 0.65281528f;
    n *= r0;
    n *= 361.16882324f;
    r0 = n *= 0.07492845f;
    n += 3.85514665f;
    r3 = n *= -1.92759943f;
    n = r3 *= n;
    r4 = n += -1.96080184f;
    r5 = n *= -0.18947962f;
    r6 = n *= 0.07850694f;
    n *= r6;
    n = r0 += n;
    n *= -0.59938252f;
    n *= -0.27870935f;
    n *= r4;
    n *= r5;
    n *= r3;
    n += -0.46230438f;
    n *= -0.18245940f;
    n *= r0;
    n *= r2;
    n += 0.20419694f;
    n = r1 += n;
    n += r1;
    n += -0.49462032f;
    n *= 1.37001693f;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.14885323f;
    n += 0.54465067f;
    r0 = n += -0.93434751f;
    r1 = n *= 0.84333336f;
    n *= 0.19067797f;
    n = r1 += n;
    r2 = n *= -0.09845363f;
    n *= r0;
    n *= -2.61286139f;
    r0 = n *= -1.55892432f;
    n += 1.25810075f;
    r3 = n *= 1.69706154f;
    n = r3 *= n;
    r4 = n += -0.41024259f;
    r5 = n *= -0.57117492f;
    r6 = n *= -0.18901496f;
    n *= r6;
    n = r0 += n;
    n *= 3.65335751f;
    n *= 3.38696098f;
    n *= r4;
    n *= r5;
    n *= r3;
    n += 0.45497999f;
    n *= -1.44988000f;
    n *= r0;
    n *= r2;
    n += 0.19267143f;
    n = r1 += n;
    n += r1;
    n += -0.04556817f;
    n *= 1.54101694f;
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
