// Run date: 01/14/24 13:08:47 Pacific Standard Time
// Run duration = 7353.460399 seconds
// Run generation = 59
// Run evolution = 6
// Run max result = 0.00000887
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

// Solution0 result = 0.00000244
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.70794147f;
    r0 = n += 2.14429450f;
    n += 1.71472204f;
    r1 = n *= 0.50910217f;
    r2 = n *= 3.15802455f;
    r3 = n *= -0.32669446f;
    n += 1.79213595f;
    r4 = n *= -0.05963591f;
    n *= -218.09349060f;
    n *= r1;
    n *= 0.00321134f;
    r1 = n += 0.62428170f;
    r5 = n *= -0.45343760f;
    n = r3 += n;
    n *= -1.09536970f;
    n = r2 += n;
    n *= r4;
    r4 = n += -1.30813766f;
    n += r4;
    n = r0 *= n;
    n *= r1;
    n *= 0.22300461f;
    n = r3 += n;
    n += 0.43626678f;
    r1 = n += 1.71910858f;
    n *= -0.44117653f;
    n *= r0;
    n += 4.50917673f;
    n *= r3;
    n += r2;
    n += r1;
    n *= r5;
    return n;
} // Solution0

// Solution1 result = 0.00000381
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.44465819f;
    r0 = n += 1.49893129f;
    n += 0.26313132f;
    r1 = n *= 0.38937110f;
    r2 = n *= 0.91070414f;
    r3 = n *= 1.07102072f;
    n += -0.58573776f;
    r4 = n *= -0.20437318f;
    n *= -0.00196075f;
    n *= r1;
    n *= 778.70513916f;
    r1 = n += -1.59711254f;
    r5 = n *= -0.45307299f;
    n = r3 += n;
    n *= 0.43841285f;
    n = r2 += n;
    n *= r4;
    r4 = n += 0.44867775f;
    n += r4;
    n = r0 *= n;
    n *= r1;
    n *= -0.32266486f;
    n = r3 += n;
    n += -2.12919545f;
    r1 = n += 0.16282231f;
    n *= -1.88899088f;
    n *= r0;
    n += 0.11835588f;
    n *= r3;
    n += r2;
    n += r1;
    n *= r5;
    return n;
} // Solution1

// Solution2 result = 0.00000887
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.37471819f;
    r0 = n += -2.09787440f;
    n += 1.18275344f;
    r1 = n *= 0.09286076f;
    r2 = n *= 2.63054991f;
    r3 = n *= 1.13183165f;
    n += 0.19241828f;
    r4 = n *= -1.84182501f;
    n *= 303.93051147f;
    n *= r1;
    n *= 0.00321645f;
    r1 = n += 0.48729911f;
    r5 = n *= 1.85091436f;
    n = r3 += n;
    n *= -0.04573663f;
    n = r2 += n;
    n *= r4;
    r4 = n += 0.76742435f;
    n += r4;
    n = r0 *= n;
    n *= r1;
    n *= 0.98161381f;
    n = r3 += n;
    n += -0.43103671f;
    r1 = n += 1.29345846f;
    n *= 2.33775377f;
    n *= r0;
    n += 0.02158870f;
    n *= r3;
    n += r2;
    n += r1;
    n *= r5;
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
