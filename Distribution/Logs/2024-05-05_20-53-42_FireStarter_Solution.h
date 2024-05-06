// Run date: 05/05/24 20:53:42 Pacific Daylight Time
// Run duration = 17084.286677 seconds
// Run generation = 708
// Run evolution = 13
// Run max result = 0.00000031
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.99012828f;
    n += 0.36006418f;
    r0 = n += 0.48847139f;
    r1 = n *= -0.94793737f;
    n *= r1;
    r1 = n += -2.27084613f;
    n += -1.05600369f;
    r2 = n += -0.15723334f;
    n += 1.49442232f;
    r3 = n *= -0.02207152f;
    n *= 1.55963576f;
    r4 = n *= -0.23456816f;
    r5 = n += -0.65375924f;
    r6 = n *= 1.21062446f;
    n *= r6;
    n *= -1.74915767f;
    n = r4 += n;
    n *= r5;
    n += 0.15851107f;
    n *= r1;
    n += r2;
    n *= 0.87021130f;
    r2 = n += -8.55600739f;
    n *= -0.00104900f;
    n += 0.92517662f;
    n += r3;
    n *= r0;
    n *= 1.39396298f;
    n *= r2;
    n *= r4;
    n *= -0.04653268f;
    n += -0.00000007f;
    return n;
} // Solution0

// Solution1 result = 0.00000031
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -2.05283165f;
    n += -0.80821437f;
    r0 = n += -0.22961222f;
    r1 = n *= 1.43340790f;
    n *= r1;
    r1 = n += -2.40729761f;
    n += -0.13911296f;
    r2 = n += -2.31803322f;
    n += -3.44862652f;
    r3 = n *= -0.00117298f;
    n *= -1.34916401f;
    r4 = n *= -0.28232279f;
    r5 = n += 0.80016816f;
    r6 = n *= 0.41935727f;
    n *= r6;
    n *= 0.34549004f;
    n = r4 += n;
    n *= r5;
    n += -0.99322134f;
    n *= r1;
    n += r2;
    n *= 0.81427395f;
    r2 = n += 1.17651415f;
    n *= -1.67799318f;
    n += 12.25906754f;
    n += r3;
    n *= r0;
    n *= 1.12689376f;
    n *= r2;
    n *= r4;
    n *= 1.81963122f;
    n += -0.11813169f;
    return n;
} // Solution1

// Solution2 result = 0.00000021
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -0.86888969f;
    n += 0.96844840f;
    r0 = n += -2.71755242f;
    r1 = n *= 0.78868395f;
    n *= r1;
    r1 = n += -0.88315415f;
    n += -0.63178897f;
    r2 = n += -0.26665920f;
    n += -1.78926122f;
    r3 = n *= 0.04213565f;
    n *= -0.09253591f;
    r4 = n *= 4.40222454f;
    r5 = n += 1.41951871f;
    r6 = n *= 1.27074456f;
    n *= r6;
    n *= -0.67792219f;
    n = r4 += n;
    n *= r5;
    n += -0.95130700f;
    n *= r1;
    n += r2;
    n *= 0.32159227f;
    r2 = n += 2.51639485f;
    n *= 0.33091927f;
    n += 2.59171939f;
    n += r3;
    n *= r0;
    n *= 1.99904633f;
    n *= r2;
    n *= r4;
    n *= 0.01911291f;
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
