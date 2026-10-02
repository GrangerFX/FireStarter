// Run date: 07/05/24 14:43:32 Pacific Daylight Time
// Run duration = 2378.927499 seconds
// Run generation = 828
// Run evolution = 5
// Run max result = 0.00000066
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
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

    r0 = n += -2.12917805f;
    r1 = n += -1.01241457f;
    r2 = n *= 0.86714709f;
    r3 = n += 0.19997887f;
    n += r1;
    n *= r0;
    n *= -0.00000000f;
    n += r2;
    r2 = n *= -3.05843377f;
    r0 = n *= -0.36530146f;
    r1 = n *= 0.12936665f;
    n *= r1;
    n *= 4.31118011f;
    r1 = n += -0.55569583f;
    n += -2.83837152f;
    n += -0.27360427f;
    r4 = n *= -3.01166058f;
    n += 1.46366704f;
    n *= -0.06931337f;
    r5 = n *= -0.14663827f;
    n = r1 *= n;
    n += -0.79176146f;
    n *= r4;
    n *= r5;
    n *= r1;
    n *= -4.01098824f;
    n *= r2;
    n += r0;
    n *= 0.59722638f;
    n *= -1.66371202f;
    n += r3;
    n += -0.19997884f;
    return n;
} // Solution0

// Solution1 result = 0.00000066
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.77111077f;
    r1 = n += 0.68045241f;
    r2 = n *= 0.38877198f;
    r3 = n += -0.25453067f;
    n += r1;
    n *= r0;
    n *= 0.00000005f;
    n += r2;
    r2 = n *= 1.57623601f;
    r0 = n *= 1.44135535f;
    r1 = n *= -0.11070897f;
    n *= r1;
    n *= -0.68441200f;
    r1 = n += 0.05726583f;
    n += 0.24263526f;
    n += 0.17934625f;
    r4 = n *= -5.56396437f;
    n += -0.23838426f;
    n *= -0.71769243f;
    r5 = n *= 1.06259513f;
    n = r1 *= n;
    n += 1.43777072f;
    n *= r4;
    n *= r5;
    n *= r1;
    n *= -1.22837567f;
    n *= r2;
    n += r0;
    n *= 1.49387288f;
    n *= -0.56435782f;
    n += r3;
    n += 0.13639919f;
    return n;
} // Solution1

// Solution2 result = 0.00000063
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.25293231f;
    r1 = n += -0.36506155f;
    r2 = n *= 1.00927246f;
    r3 = n += 0.06907515f;
    n += r1;
    n *= r0;
    n *= 0.00000003f;
    n += r2;
    r2 = n *= 0.20339097f;
    r0 = n *= 1.76963902f;
    r1 = n *= -2.08066893f;
    n *= r1;
    n *= 0.16974397f;
    r1 = n += -0.57394171f;
    n += -0.97331262f;
    n += -1.94739389f;
    r4 = n *= 1.64982498f;
    n += -1.05077672f;
    n *= -0.16117585f;
    r5 = n *= -0.52169263f;
    n = r1 *= n;
    n += 3.64226890f;
    n *= r4;
    n *= r5;
    n *= r1;
    n *= 0.50539851f;
    n *= r2;
    n += r0;
    n *= -0.73347169f;
    n *= 3.37729168f;
    n += r3;
    n += 0.45452368f;
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
