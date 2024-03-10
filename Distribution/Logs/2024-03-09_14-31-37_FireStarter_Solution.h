// Run date: 03/09/24 14:31:37 Pacific Standard Time
// Run duration = 15252.567248 seconds
// Run generation = 378
// Run evolution = 10
// Run max result = 0.00000036
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
// Run tests = 4
// Run streams = 4
// Run units = 4
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -1.21296787f;
    n *= -0.11553041f;
    n *= 1.61706924f;
    n += 0.70903665f;
    r0 = n += -1.42094505f;
    r1 = n *= -2.72819066f;
    n = r0 *= n;
    n += 1.04446602f;
    r2 = n *= -0.00504591f;
    n += 0.54215533f;
    n *= 2.65576696f;
    r3 = n += -3.09141707f;
    r4 = n += 0.92147404f;
    n = r1 *= n;
    r5 = n *= 0.60798222f;
    n = r5 *= n;
    n += r3;
    n *= -0.30057856f;
    r3 = n += 1.81759596f;
    n += 3.35007095f;
    n += -1.83840573f;
    n *= r2;
    n *= r0;
    n += r5;
    n += r4;
    r4 = n *= 0.86068636f;
    n *= -0.98879188f;
    n *= r3;
    n += 1.92619348f;
    n *= r1;
    n *= r4;
    n += -0.00000004f;
    return n;
} // Solution0

// Solution1 result = 0.00000036
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.00002240f;
    n *= 31007.80468750f;
    n *= -1.51780176f;
    n += 1.78294766f;
    r0 = n += 1.47585177f;
    r1 = n *= -0.16530253f;
    n = r0 *= n;
    n += 0.54848385f;
    r2 = n *= 0.00158681f;
    n += 0.10137355f;
    n *= -11.03719425f;
    r3 = n += -1.58305669f;
    r4 = n += -0.11110699f;
    n = r1 *= n;
    r5 = n *= -0.70002842f;
    n = r5 *= n;
    n += r3;
    n *= 0.94104302f;
    r3 = n += -2.58765578f;
    n += -4.00904703f;
    n += 2.23438358f;
    n *= r2;
    n *= r0;
    n += r5;
    n += r4;
    r4 = n *= 0.21488671f;
    n *= -1.18081355f;
    n *= r3;
    n += -0.00533525f;
    n *= r1;
    n *= r4;
    n += -0.11813185f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.04042002f;
    n *= 0.00004794f;
    n *= -110440.56250000f;
    n += 0.64155543f;
    r0 = n += -0.08132940f;
    r1 = n *= -0.65077657f;
    n = r0 *= n;
    n += 2.17937016f;
    r2 = n *= -0.54176533f;
    n += 0.01523014f;
    n *= 0.64338642f;
    r3 = n += -2.40695310f;
    r4 = n += 0.99665684f;
    n = r1 *= n;
    r5 = n *= 1.79349267f;
    n = r5 *= n;
    n += r3;
    n *= -0.05780738f;
    r3 = n += 0.89587766f;
    n += 2.97633862f;
    n += 0.47471496f;
    n *= r2;
    n *= r0;
    n += r5;
    n += r4;
    r4 = n *= -0.71637625f;
    n *= 0.39181161f;
    n *= r3;
    n += 1.49431741f;
    n *= r1;
    n *= r4;
    n += 0.52359873f;
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
