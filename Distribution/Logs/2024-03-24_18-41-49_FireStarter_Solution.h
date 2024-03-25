// Run date: 03/24/24 18:41:49 Pacific Daylight Time
// Run duration = 135.787675 seconds
// Run generation = 69
// Run evolution = 8
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
// Run streams = 1
// Run units = 8
// Run states = 16
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159274f;
    r1 = n *= -0.26928777f;
    n = r0 *= n;
    r2 = n += 0.09743846f;
    n += 0.27863428f;
    n *= -0.91751760f;
    n *= 1.10936165f;
    n = r2 += n;
    r3 = n += -1.84339464f;
    n *= r2;
    n *= -0.38243800f;
    r2 = n += -0.23031713f;
    r4 = n *= 1.73350108f;
    n *= 0.00000006f;
    r5 = n *= 19.22719765f;
    n += r0;
    n *= r2;
    r2 = n += -1.11537063f;
    n *= 0.00748843f;
    n *= r5;
    n *= -3.89890146f;
    n = r4 += n;
    n = r4 += n;
    n = r4 *= n;
    n += -1.09929574f;
    n *= r4;
    n *= r2;
    n *= r1;
    n *= r3;
    n += -0.23825409f;
    n += 0.23825410f;
    n *= 0.41266060f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065890f;
    r1 = n *= -0.03578699f;
    n = r0 *= n;
    r2 = n += 3.45358396f;
    n += 6992.59033203f;
    n *= -0.41716978f;
    n *= 0.00000870f;
    n = r2 += n;
    r3 = n += 3.25311637f;
    n *= r2;
    n *= 0.00055007f;
    r2 = n += 0.96616513f;
    r4 = n *= 0.25597805f;
    n *= -1.68112290f;
    r5 = n *= -1.57357049f;
    n += r0;
    n *= r2;
    r2 = n += 1.07494891f;
    n *= -1.00569153f;
    n *= r5;
    n *= 0.45775998f;
    n = r4 += n;
    n = r4 += n;
    n = r4 *= n;
    n += 3.66271448f;
    n *= r4;
    n *= r2;
    n *= r1;
    n *= r3;
    n += 0.02048792f;
    n += -0.07373306f;
    n *= 2.21864200f;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799383f;
    r1 = n *= 0.24614206f;
    n = r0 *= n;
    r2 = n += 1.51630104f;
    n += -0.18702140f;
    n *= -0.70279127f;
    n *= 1.39021361f;
    n = r2 += n;
    r3 = n += -0.51114827f;
    n *= r2;
    n *= -0.17620932f;
    r2 = n += -0.38415143f;
    r4 = n *= -1.12728560f;
    n *= -1.27206612f;
    r5 = n *= -0.17616245f;
    n += r0;
    n *= r2;
    r2 = n += 0.49218014f;
    n *= -0.67624879f;
    n *= r5;
    n *= -1.64400220f;
    n = r4 += n;
    n = r4 += n;
    n = r4 *= n;
    n += 0.49517989f;
    n *= r4;
    n *= r2;
    n *= r1;
    n *= r3;
    n += 0.11633805f;
    n += -0.09552852f;
    n *= 25.16149330f;
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
