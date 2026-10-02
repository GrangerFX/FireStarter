// Run date: 03/02/24 15:19:36 Pacific Standard Time
// Run duration = 4356.064951 seconds
// Run generation = 117
// Run evolution = 2
// Run max result = 0.00000370
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
// Run tests = 8
// Run streams = 8
// Run units = 1
// Run states = 4
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
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

// Solution0 result = 0.00000092
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.14159274f;
    r0 = n *= 0.10981227f;
    n *= 0.19508894f;
    r1 = n *= 2.26449299f;
    n = r1 *= n;
    r2 = n *= -0.00044273f;
    r3 = n *= 2.95928621f;
    n *= r2;
    r2 = n += 5.14057255f;
    n += 3.06985974f;
    n = r1 *= n;
    r4 = n *= -0.24773557f;
    n = r2 *= n;
    n *= r2;
    r2 = n *= 2.16824937f;
    n += 2.96344495f;
    n = r4 *= n;
    n = r3 *= n;
    n += -1.72358763f;
    n = r1 += n;
    n *= -1.63203251f;
    n = r4 += n;
    n = r1 *= n;
    n *= -0.47062841f;
    r5 = n += -1.78918004f;
    n += r3;
    n += r2;
    n *= r4;
    n += r5;
    n *= r0;
    n *= r1;
    n += -0.00000009f;
    return n;
} // Solution0

// Solution1 result = 0.00000048
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.09065914f;
    r0 = n *= -0.18031272f;
    n *= -0.40395510f;
    r1 = n *= 1.70135677f;
    n = r1 *= n;
    r2 = n *= -0.01761849f;
    r3 = n *= -2.03835964f;
    n *= r2;
    r2 = n += 0.65816015f;
    n += 1.65916574f;
    n = r1 *= n;
    r4 = n *= -0.01349147f;
    n = r2 *= n;
    n *= r2;
    r2 = n *= 2.10988379f;
    n += 0.89165634f;
    n = r4 *= n;
    n = r3 *= n;
    n += -0.92176932f;
    n = r1 += n;
    n *= -1.59233260f;
    n = r4 += n;
    n = r1 *= n;
    n *= 0.17094634f;
    r5 = n += -1.59591341f;
    n += r3;
    n += r2;
    n *= r4;
    n += r5;
    n *= r0;
    n *= r1;
    n += -0.11813200f;
    return n;
} // Solution1

// Solution2 result = 0.00000370
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.61799335f;
    r0 = n *= -1.72281647f;
    n *= 0.06149244f;
    r1 = n *= -2.06098557f;
    n = r1 *= n;
    r2 = n *= 0.45105031f;
    r3 = n *= 0.44488716f;
    n *= r2;
    r2 = n += -0.14472435f;
    n += -12.12155247f;
    n = r1 *= n;
    r4 = n *= -0.02917149f;
    n = r2 *= n;
    n *= r2;
    r2 = n *= -5.55613708f;
    n += 3.12376094f;
    n = r4 *= n;
    n = r3 *= n;
    n += 2.90018129f;
    n = r1 += n;
    n *= 0.10059137f;
    n = r4 += n;
    n = r1 *= n;
    n *= 0.17965068f;
    r5 = n += 0.37910789f;
    n += r3;
    n += r2;
    n *= r4;
    n += r5;
    n *= r0;
    n *= r1;
    n += 0.52359885f;
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
