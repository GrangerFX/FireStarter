// Run date: 02/26/24 00:28:05 Pacific Standard Time
// Run duration = 27990.340241 seconds
// Run generation = 123
// Run evolution = 9
// Run max result = 0.00001669
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
// Run evolveSeed = 1
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 8
// Run units = 1
// Run states = 1
// Run generations = 128
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

// Solution0 result = 0.00001669
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.25469470f;
    r1 = n += -1.88689792f;
    n *= 0.11865029f;
    r2 = n *= -18.49624825f;
    n *= -1.83524358f;
    r3 = n += 14.40021515f;
    r4 = n *= -0.00000000f;
    n *= r3;
    n += 1.05071270f;
    r3 = n *= -1.79582655f;
    n = r0 += n;
    r5 = n *= 0.43724638f;
    n *= r5;
    n = r3 += n;
    n *= -0.26909938f;
    r5 = n += 1.61068177f;
    n *= -1.67635632f;
    r6 = n *= 0.25190127f;
    n += r2;
    n *= r4;
    n *= -11.86663055f;
    n *= r0;
    n += r6;
    n *= r5;
    n *= 0.20953399f;
    r5 = n *= -2.50544596f;
    n += 1.54606926f;
    n *= r5;
    n *= 0.20244187f;
    n += 0.01818183f;
    n *= r1;
    n *= r3;
    return n;
} // Solution0

// Solution1 result = 0.00000441
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.14048707f;
    r1 = n += -1.84264457f;
    n *= -3.13688970f;
    r2 = n *= 0.17270377f;
    n *= -0.03800176f;
    r3 = n += -1.32553768f;
    r4 = n *= -0.34763557f;
    n *= r3;
    n += 3.05077839f;
    r3 = n *= -0.69889754f;
    n = r0 += n;
    r5 = n *= -0.19224153f;
    n *= r5;
    n = r3 += n;
    n *= 1.07447267f;
    r5 = n += 0.18848249f;
    n *= -0.78653884f;
    r6 = n *= 0.27226675f;
    n += r2;
    n *= r4;
    n *= 0.15294456f;
    n *= r0;
    n += r6;
    n *= r5;
    n *= -0.95352811f;
    r5 = n *= -5.89334440f;
    n += -50.38592529f;
    n *= r5;
    n *= 0.00199976f;
    n += 0.29082629f;
    n *= r1;
    n *= r3;
    return n;
} // Solution1

// Solution2 result = 0.00000420
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.44992280f;
    r1 = n += -1.74592352f;
    n *= -0.00758589f;
    r2 = n *= -3.64146805f;
    n *= -20.29784584f;
    r3 = n += 3.99855900f;
    r4 = n *= 0.00732963f;
    n *= r3;
    n += 1.51843750f;
    r3 = n *= -0.46447960f;
    n = r0 += n;
    r5 = n *= -0.39889148f;
    n *= r5;
    n = r3 += n;
    n *= 0.30464378f;
    r5 = n += -1.81573737f;
    n *= -0.74436057f;
    r6 = n *= -0.16650414f;
    n += r2;
    n *= r4;
    n *= 1.83185709f;
    n *= r0;
    n += r6;
    n *= r5;
    n *= 0.61784232f;
    r5 = n *= -3.01667118f;
    n += -1.40541065f;
    n *= r5;
    n *= 0.49558729f;
    n += 0.04809279f;
    n *= r1;
    n *= r3;
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
