// Run date: 12/30/23 10:55:00 Pacific Standard Time
// Run duration = 881.373158 seconds
// Run generation = 16
// Run evolution = 10
// Run max result = 0.00000060
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
    float r0, r1, r2, r3;

    n *= -0.45473260f;
    r0 = n += 1.42858458f;
    n *= 2.07745981f;
    n *= -0.30021527f;
    r1 = n *= 1.91902816f;
    r2 = n *= -2.28084207f;
    n += r2;
    n *= r0;
    n *= -1.83276093f;
    n += 6.00374460f;
    n *= -0.31692353f;
    r0 = n += 0.89408600f;
    n += -4.75856400f;
    n *= 0.00271949f;
    r2 = n += -1.18495166f;
    r3 = n *= -0.69256818f;
    n = r0 *= n;
    n *= r2;
    n = r0 += n;
    n = r3 += n;
    n *= 0.70483434f;
    n += 1.23013413f;
    n *= r1;
    n *= -2.63245177f;
    n *= -1.77824652f;
    n = r3 *= n;
    n *= r0;
    n += -0.00000064f;
    n *= 0.12229979f;
    n += r3;
    n *= 0.27353606f;
    n *= -0.72682416f;
    return n;
} // Solution0

// Solution1 result = 0.00000060
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n *= -0.59325093f;
    r0 = n += 1.83353603f;
    n *= -0.03413575f;
    n *= -2.01278019f;
    r1 = n *= -0.71812242f;
    r2 = n *= -0.74188042f;
    n += r2;
    n *= r0;
    n *= 2.43331599f;
    n += -0.51052129f;
    n *= -0.74999768f;
    r0 = n += 0.18507163f;
    n += 0.67327875f;
    n *= 1.84868395f;
    r2 = n += 0.56076062f;
    r3 = n *= -1.19287813f;
    n = r0 *= n;
    n *= r2;
    n = r0 += n;
    n = r3 += n;
    n *= -0.75252032f;
    n += 62.73871231f;
    n *= r1;
    n *= 0.09468548f;
    n *= 0.90651470f;
    n = r3 *= n;
    n *= r0;
    n += -50.68810654f;
    n *= 0.00397960f;
    n += r3;
    n *= 0.43312475f;
    n *= 1.35209692f;
    return n;
} // Solution1

// Solution2 result = 0.00000060
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n *= 0.72023213f;
    r0 = n += -1.88556325f;
    n *= 0.88678443f;
    n *= -1.68877268f;
    r1 = n *= -1.22207105f;
    r2 = n *= -0.08161318f;
    n += r2;
    n *= r0;
    n *= -1.51980424f;
    n += -0.15938306f;
    n *= -1.69311297f;
    r0 = n += 0.89323652f;
    n += -0.66660213f;
    n *= 0.00767709f;
    r2 = n += 0.22510615f;
    r3 = n *= -0.56923187f;
    n = r0 *= n;
    n *= r2;
    n = r0 += n;
    n = r3 += n;
    n *= 0.25488922f;
    n += -0.89546001f;
    n *= r1;
    n *= -0.51085305f;
    n *= 0.69908637f;
    n = r3 *= n;
    n *= r0;
    n += -0.09502802f;
    n *= -0.94215107f;
    n += r3;
    n *= 1.41081142f;
    n *= 4.14531326f;
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
