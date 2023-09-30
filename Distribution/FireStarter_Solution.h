// Run date: 09/30/23 09:22:07 Pacific Daylight Time
// Run duration = 4787.156329 seconds
// Run generation = 63
// Run evolution = 17
// Run result = 0.00001848
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
// Run tests = 8
// Run units = 4
// Run processes = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
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

// Solution0 result = 0.00000749
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.82324672f;
    r1 = n *= -0.59907877f;
    n *= -0.78084165f;
    n *= 0.09899241f;
    r2 = n += 1.78684628f;
    r3 = n += -1.80311978f;
    n *= 4.57700443f;
    n *= r1;
    r1 = n += -1.31392789f;
    n += 1.43332434f;
    n = r2 += n;
    r4 = n *= 0.51969475f;
    n *= r0;
    n *= 0.00115905f;
    n *= 4.15428114f;
    n = r3 += n;
    n *= -0.00822356f;
    n *= 10.52085972f;
    r0 = n += -1.30805147f;
    r5 = n += -1.00932825f;
    n += r4;
    n *= -0.45743412f;
    r4 = n += -1.93903887f;
    n = r4 *= n;
    n *= 0.24197379f;
    n *= r1;
    n += r2;
    n *= r4;
    n *= r3;
    n *= r0;
    n *= -2.66725469f;
    n *= r5;
    return n;
} // Solution0

// Solution1 result = 0.00001848
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -1.52616894f;
    r1 = n *= -0.59387273f;
    n *= -2.41469169f;
    n *= -0.00622473f;
    r2 = n += 0.47895685f;
    r3 = n += -0.03579300f;
    n *= 1.39081991f;
    n *= r1;
    r1 = n += -1.52868617f;
    n += -0.07951541f;
    n = r2 += n;
    r4 = n *= 0.04903308f;
    n *= r0;
    n *= 3.16339493f;
    n *= 1.14672089f;
    n = r3 += n;
    n *= 0.16486819f;
    n *= -2.08231330f;
    r0 = n += -2.82057381f;
    r5 = n += 1.40673435f;
    n += r4;
    n *= -0.43357763f;
    r4 = n += -0.07722872f;
    n = r4 *= n;
    n *= 0.08029004f;
    n *= r1;
    n += r2;
    n *= r4;
    n *= r3;
    n *= r0;
    n *= -1.24239933f;
    n *= r5;
    return n;
} // Solution1

// Solution2 result = 0.00000594
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -1.28586507f;
    r1 = n *= -0.76507980f;
    n *= -0.33436480f;
    n *= 1.99939084f;
    r2 = n += -0.66367400f;
    r3 = n += -0.33428335f;
    n *= 0.63625526f;
    n *= r1;
    r1 = n += 0.92118198f;
    n += 0.07777379f;
    n = r2 += n;
    r4 = n *= 0.29219097f;
    n *= r0;
    n *= 11.71134853f;
    n *= 0.00241803f;
    n = r3 += n;
    n *= 0.12243658f;
    n *= -0.33725780f;
    r0 = n += 0.12240718f;
    r5 = n += -0.34198621f;
    n += r4;
    n *= -0.39385730f;
    r4 = n += -1.78178334f;
    n = r4 *= n;
    n *= -4.81376505f;
    n *= r1;
    n += r2;
    n *= r4;
    n *= r3;
    n *= r0;
    n *= -1.06355989f;
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
