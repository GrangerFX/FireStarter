// Run date: 08/05/23 14:25:38 Pacific Daylight Time
// Run duration = 1114.729879 seconds
// Run generation = 74
// Run evolution = 0
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
// Run seeds = 64
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

// Solution0 result = 0.00000024
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -3.14159274f;
    r0 = n *= -0.11339071f;
    r1 = n *= -1.08907807f;
    n = r1 *= n;
    r2 = n += -0.74660748f;
    r3 = n *= -2.45128345f;
    r4 = n *= -0.00229341f;
    n = r2 += n;
    n *= 7.13441324f;
    n += 4.18857813f;
    n += r1;
    n = r4 *= n;
    n = r4 *= n;
    n += 1.66820705f;
    n = r2 *= n;
    n *= 1.13369715f;
    n += r4;
    n += -1.88767350f;
    r4 = n += -0.69584668f;
    n *= -0.54035437f;
    n = r0 *= n;
    r1 = n *= 0.04927665f;
    n += r0;
    n = r4 *= n;
    n *= r1;
    n += r3;
    r3 = n += 0.13025936f;
    n *= r3;
    n = r4 *= n;
    n *= r2;
    n += -0.00000001f;
    n += r4;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -3.09065843f;
    r0 = n *= 0.14717703f;
    r1 = n *= 2.35572195f;
    n = r1 *= n;
    r2 = n += -0.91338146f;
    r3 = n *= -0.00028970f;
    r4 = n *= -2.58115673f;
    n = r2 += n;
    n *= 1.61141157f;
    n += 12.65855408f;
    n += r1;
    n = r4 *= n;
    n = r4 *= n;
    n += 0.02195204f;
    n = r2 *= n;
    n *= 4.09070301f;
    n += r4;
    n += -0.74663371f;
    r4 = n += -2.08899307f;
    n *= -0.79817086f;
    n = r0 *= n;
    r1 = n *= -0.56007701f;
    n += r0;
    n = r4 *= n;
    n *= r1;
    n += r3;
    r3 = n += -1.59756827f;
    n *= r3;
    n = r4 *= n;
    n *= r2;
    n += -0.11813169f;
    n += r4;
    return n;
} // Solution1

// Solution2 result = 0.00000023
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -2.61799383f;
    r0 = n *= -0.92913926f;
    r1 = n *= -0.62353158f;
    n = r1 *= n;
    r2 = n += -0.62832004f;
    r3 = n *= -0.02478543f;
    r4 = n *= 0.01649751f;
    n = r2 += n;
    n *= 1.73675728f;
    n += 5.46534300f;
    n += r1;
    n = r4 *= n;
    n = r4 *= n;
    n += -0.95800716f;
    n = r2 *= n;
    n *= -0.04880744f;
    n += r4;
    n += -3.15661240f;
    r4 = n += -0.03679306f;
    n *= 0.01860766f;
    n = r0 *= n;
    r1 = n *= 1.49821079f;
    n += r0;
    n = r4 *= n;
    n *= r1;
    n += r3;
    r3 = n += 1.16415143f;
    n *= r3;
    n = r4 *= n;
    n *= r2;
    n += 0.52359879f;
    n += r4;
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
