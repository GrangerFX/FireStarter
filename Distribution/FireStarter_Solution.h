// Run date: 11/16/23 12:18:09 Pacific Standard Time
// Run duration = 2802.075298 seconds
// Run generation = 62
// Run evolution = 6
// Run result = 0.00000030
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
// Run units = 1
// Run population = 278528
// Run iterations = 64
// Run optimizations = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64

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
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14159226f;
    r1 = n *= -1.06985438f;
    r2 = n += 0.00000085f;
    r3 = n *= -0.08977646f;
    n = r3 *= n;
    r4 = n *= -1.38001478f;
    n += -1.88212025f;
    n = r3 += n;
    r5 = n += -0.48606896f;
    n += -0.10465728f;
    r6 = n *= 1.12261784f;
    r7 = n += 3.84561396f;
    n *= -1.53111613f;
    n *= r4;
    n = r6 *= n;
    n *= r3;
    n *= r0;
    n = r1 += n;
    n *= r2;
    n += r5;
    n *= -7.32675838f;
    n *= 0.00001244f;
    n += r7;
    r7 = n += -0.57344383f;
    n *= r6;
    n += 1.70977926f;
    n += 2.52152610f;
    n *= r7;
    r7 = n += -1.13329792f;
    n *= r7;
    n *= r1;
    n += 0.00000043f;
    return n;
} // Solution0

// Solution1 result = 0.00000030
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.09066272f;
    r1 = n *= -0.32989624f;
    r2 = n += -0.00000480f;
    r3 = n *= -0.00779293f;
    n = r3 *= n;
    r4 = n *= -19.07343483f;
    n += -1.88132274f;
    n = r3 += n;
    r5 = n += -0.46661413f;
    n += -1.53409183f;
    r6 = n *= 0.49885443f;
    r7 = n += 2.32652903f;
    n *= -16.91177368f;
    n *= r4;
    n = r6 *= n;
    n *= r3;
    n *= r0;
    n = r1 += n;
    n *= r2;
    n += r5;
    n *= 0.22855066f;
    n *= 1.94478452f;
    n += r7;
    r7 = n += 0.35741737f;
    n *= r6;
    n += -2.74534822f;
    n += 0.83230776f;
    n *= r7;
    r7 = n += 1.25931823f;
    n *= r7;
    n *= r1;
    n += -0.11813660f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.61799359f;
    r1 = n *= -0.11724181f;
    r2 = n += 0.00000001f;
    r3 = n *= -0.68547153f;
    n = r3 *= n;
    r4 = n *= -2.99514222f;
    n += 0.64392000f;
    n = r3 += n;
    r5 = n += 2.10996866f;
    n += 1.02804899f;
    r6 = n *= -0.28072950f;
    r7 = n += -1.59288073f;
    n *= -0.76242810f;
    n *= r4;
    n = r6 *= n;
    n *= r3;
    n *= r0;
    n = r1 += n;
    n *= r2;
    n += r5;
    n *= 0.00015826f;
    n *= 19.09689140f;
    n += r7;
    r7 = n += 1.26243746f;
    n *= r6;
    n += 1.71422780f;
    n += 0.37856600f;
    n *= r7;
    r7 = n += -0.02445769f;
    n *= r7;
    n *= r1;
    n += 0.52359879f;
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
