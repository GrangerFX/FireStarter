// Run date: 12/30/22 12:11:42 Pacific Standard Time
// Run duration = 0.000000 seconds
// Run count = 0
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_TEST
// Run units = 1
// Run processes = 0
// Run iterations = 256
// Run candidates = 16
// Run generations = 400
// Run precision = 0
// Run attempts = 32
// Run seed = 10484
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 0

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

#define SOLUTION_VARIATIONS 3

// Precision = 0.85227418

// Solution0 precision = 0.00040591
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.05660799f;
    r1 = n += 2.96411991f;
    r2 = n *= 1.75557351f;
    r3 = n *= -0.44024846f;
    n *= 0.58625710f;
    r4 = n *= -1.60811865f;
    n = r0 *= n;
    r5 = n *= -1.07244003f;
    n = r0 *= n;
    n *= -7.77894974f;
    n *= -0.01394310f;
    r6 = n += 1.29426908f;
    n += 0.25976095f;
    n += r4;
    n += 2.94029117f;
    n += 1.16773438f;
    n *= r6;
    n = r0 *= n;
    n += r0;
    n *= 0.16917388f;
    r0 = n *= 0.77104563f;
    n = r1 += n;
    n *= r0;
    n += 0.86958373f;
    n *= r2;
    n = r5 *= n;
    n *= 4.25911760f;
    n *= 0.03523185f;
    n += r1;
    n += r3;
    n += 1.00731671f;
    n *= r5;
    return n;
} // Solution0

// Solution1 precision = 0.85227418
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.89010841f;
    r1 = n += 8.25591087f;
    r2 = n *= 1.18601072f;
    r3 = n *= 0.50010711f;
    n *= 0.89118123f;
    r4 = n *= 0.00035213f;
    n = r0 *= n;
    r5 = n *= -9.89086342f;
    n = r0 *= n;
    n *= 2.39131546f;
    n *= 5.90354061f;
    r6 = n += -3.23197985f;
    n += -2.49449396f;
    n += r4;
    n += -4.16191196f;
    n += -0.91441166f;
    n *= r6;
    n = r0 *= n;
    n += r0;
    n *= -5.94769239f;
    r0 = n *= 5.40628815f;
    n = r1 += n;
    n *= r0;
    n += 3.24550557f;
    n *= r2;
    n = r5 *= n;
    n *= -0.61188847f;
    n *= 4.37484694f;
    n += r1;
    n += r3;
    n += -6.02752590f;
    n *= r5;
    return n;
} // Solution1

// Solution2 precision = 0.00136036
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.15220666f;
    r1 = n += 1.92546201f;
    r2 = n *= -0.54760528f;
    r3 = n *= 1.73817968f;
    n *= -1.39863253f;
    r4 = n *= -2.02801466f;
    n = r0 *= n;
    r5 = n *= 0.59587598f;
    n = r0 *= n;
    n *= -0.14095800f;
    n *= -0.59433419f;
    r6 = n += 0.51675820f;
    n += 0.19409570f;
    n += r4;
    n += 1.37362969f;
    n += -0.07745163f;
    n *= r6;
    n = r0 *= n;
    n += r0;
    n *= -0.04755820f;
    r0 = n *= 2.47635508f;
    n = r1 += n;
    n *= r0;
    n += -1.20278907f;
    n *= r2;
    n = r5 *= n;
    n *= -1.31391144f;
    n *= -0.41681552f;
    n += r1;
    n += r3;
    n += 2.27494144f;
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
