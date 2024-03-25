// Run date: 03/24/24 16:56:06 Pacific Daylight Time
// Run duration = 1054.578711 seconds
// Run generation = 352
// Run evolution = 15
// Run max result = 0.00000018
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

// Solution0 result = 0.00000018
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.63936937f;
    r0 = n += -2.00863814f;
    r1 = n *= 1.07475019f;
    n *= r1;
    n += -0.56409198f;
    r1 = n *= -0.47604269f;
    n *= -1.02557623f;
    n = r1 += n;
    r2 = n += -1.75264561f;
    n = r2 *= n;
    r3 = n *= -1.07892680f;
    n += -0.48833275f;
    n += -3.43856072f;
    r4 = n += 1.18411756f;
    r5 = n += 5.93809652f;
    r6 = n *= 0.00083156f;
    n *= -4.81582785f;
    n *= r5;
    n += r3;
    n *= r1;
    n *= r2;
    n += 0.84562939f;
    n *= r4;
    r4 = n += -2.47371769f;
    n *= 0.19954939f;
    n += 0.95437378f;
    n *= r4;
    n += r6;
    n *= -0.14901674f;
    n = r0 *= n;
    n += 0.00000003f;
    n += r0;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.44871733f;
    r0 = n += -1.38683200f;
    r1 = n *= -0.84628832f;
    n *= r1;
    n += -0.95862859f;
    r1 = n *= 0.01235925f;
    n *= -0.41288412f;
    n = r1 += n;
    r2 = n += -0.67841059f;
    n = r2 *= n;
    r3 = n *= -3.12039828f;
    n += -1.01199722f;
    n += 1.66364682f;
    r4 = n += -0.34509483f;
    r5 = n += -0.19847666f;
    r6 = n *= 0.08147287f;
    n *= -1632.28210449f;
    n *= r5;
    n += r3;
    n *= r1;
    n *= r2;
    n += 0.23291384f;
    n *= r4;
    r4 = n += -1.66669631f;
    n *= -2.53332138f;
    n += -0.46565741f;
    n *= r4;
    n += r6;
    n *= 0.06237609f;
    n = r0 *= n;
    n += -0.11813175f;
    n += r0;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.52823383f;
    r0 = n += -1.38291287f;
    r1 = n *= -2.10164094f;
    n *= r1;
    n += -2.38015079f;
    r1 = n *= 0.00241915f;
    n *= 1.11900401f;
    n = r1 += n;
    r2 = n += -1.46783423f;
    n = r2 *= n;
    r3 = n *= -1.75854194f;
    n += -2.88668251f;
    n += 0.41135460f;
    r4 = n += 1.84720743f;
    r5 = n += 5.28812504f;
    r6 = n *= -0.00000001f;
    n *= 11.06392002f;
    n *= r5;
    n += r3;
    n *= r1;
    n *= r2;
    n += 0.39581308f;
    n *= r4;
    r4 = n += 1.06449056f;
    n *= 0.23392771f;
    n += -0.70125604f;
    n *= r4;
    n += r6;
    n *= -0.82972056f;
    n = r0 *= n;
    n += 0.52359873f;
    n += r0;
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
