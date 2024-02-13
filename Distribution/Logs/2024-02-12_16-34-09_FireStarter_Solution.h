// Run date: 02/12/24 16:34:09 Pacific Standard Time
// Run duration = 16577.840397 seconds
// Run generation = 57
// Run evolution = 8
// Run max result = 0.00007463
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
// Run tests = 256
// Run streams = 8
// Run units = 1
// Run states = 1
// Run generations = 64
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

// Solution0 result = 0.00002375
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n *= -0.46298221f;
    r1 = n += -1.41912711f;
    r2 = n *= -0.93884730f;
    n *= 2.76761675f;
    r3 = n *= -0.15773964f;
    r4 = n += 1.16400802f;
    r5 = n += 1.73796988f;
    n *= -0.79161435f;
    n += 1.28436911f;
    n *= 1.20187485f;
    r6 = n *= 1.12657964f;
    r7 = n += -0.29670513f;
    n = r7 *= n;
    n += -4.99158192f;
    r8 = n *= 0.01422125f;
    n *= -0.61380845f;
    n += -0.15060237f;
    n *= 1.86601877f;
    n *= r7;
    n *= r0;
    n += r5;
    n += -0.68780154f;
    r5 = n *= -1.29234695f;
    n *= r1;
    n += -2.25363374f;
    n *= r5;
    n *= r4;
    n += r8;
    n *= r2;
    n *= r3;
    n += r6;
    n *= 0.81891328f;
    return n;
} // Solution0

// Solution1 result = 0.00001836
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n *= -0.17217261f;
    r1 = n += 1.56993973f;
    r2 = n *= 1.05646157f;
    n *= -1.75524497f;
    r3 = n *= -0.99939632f;
    r4 = n += -1.90592539f;
    r5 = n += -0.59999603f;
    n *= 38.89475632f;
    n += 5.67303514f;
    n *= -0.45890382f;
    r6 = n *= -0.00716897f;
    r7 = n += 0.14942315f;
    n = r7 *= n;
    n += -0.07035284f;
    r8 = n *= 4.99773359f;
    n *= -0.81983322f;
    n += 2.73424983f;
    n *= -3.36581063f;
    n *= r7;
    n *= r0;
    n += r5;
    n += -0.94981807f;
    r5 = n *= 2.08663225f;
    n *= r1;
    n += 1.09885383f;
    n *= r5;
    n *= r4;
    n += r8;
    n *= r2;
    n *= r3;
    n += r6;
    n *= 0.25436172f;
    return n;
} // Solution1

// Solution2 result = 0.00007463
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n *= -0.84345460f;
    r1 = n += 1.47233236f;
    r2 = n *= 0.70797420f;
    n *= 1.24570072f;
    r3 = n *= -0.70793051f;
    r4 = n += -1.45524490f;
    r5 = n += -1.80019760f;
    n *= -0.40011179f;
    n += -0.66322744f;
    n *= -1.05888224f;
    r6 = n *= -1.72815943f;
    r7 = n += 0.75143629f;
    n = r7 *= n;
    n += -2.50312233f;
    r8 = n *= 0.00622196f;
    n *= 4.22846556f;
    n += -0.78662992f;
    n *= -0.15337050f;
    n *= r7;
    n *= r0;
    n += r5;
    n += -0.16364019f;
    r5 = n *= 0.14740244f;
    n *= r1;
    n += 2.19082332f;
    n *= r5;
    n *= r4;
    n += r8;
    n *= r2;
    n *= r3;
    n += r6;
    n *= 1.03861308f;
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
