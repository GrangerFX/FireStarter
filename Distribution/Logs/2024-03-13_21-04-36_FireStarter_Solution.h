// Run date: 03/13/24 21:04:36 Pacific Daylight Time
// Run duration = 28870.245906 seconds
// Run generation = 107
// Run evolution = 9
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
// Run tests = 16
// Run streams = 4
// Run units = 4
// Run states = 16
// Run generations = 200
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

    n *= 0.50145197f;
    r0 = n += -1.57535779f;
    r1 = n *= -0.18879630f;
    n = r0 *= n;
    r2 = n += 0.46854565f;
    r3 = n *= 0.03042822f;
    n *= -1.45390546f;
    n *= -0.00176525f;
    n += -2.01219869f;
    n = r3 *= n;
    n += -1.19962120f;
    n += r3;
    r3 = n *= -1.68533742f;
    r4 = n *= 0.12036557f;
    n = r0 *= n;
    r5 = n += 1.85701978f;
    r6 = n *= 1.29663992f;
    n += r4;
    n *= 1.82283366f;
    r4 = n += 0.99451423f;
    n += -1.57454181f;
    n *= r5;
    n *= r6;
    n *= r0;
    r0 = n += 1.13900185f;
    n += r4;
    n += r0;
    n *= 1.30948687f;
    n *= r2;
    n *= r1;
    n *= r3;
    n += 0.00000000f;
    return n;
} // Solution0

// Solution1 result = 0.00000036
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.58585542f;
    r0 = n += 1.81067932f;
    r1 = n *= -0.06264906f;
    n = r0 *= n;
    r2 = n += 0.60539037f;
    r3 = n *= -1.43321323f;
    n *= 2.95751214f;
    n *= -3.73048973f;
    n += 3.35964894f;
    n = r3 *= n;
    n += 1.07141232f;
    n += r3;
    r3 = n *= 0.03522331f;
    r4 = n *= -0.02329737f;
    n = r0 *= n;
    r5 = n += 0.62717050f;
    r6 = n *= 0.17095481f;
    n += r4;
    n *= 665.29357910f;
    r4 = n += -1.28999472f;
    n += 12.23470688f;
    n *= r5;
    n *= r6;
    n *= r0;
    r0 = n += -0.72040755f;
    n += r4;
    n += r0;
    n *= 0.81935233f;
    n *= r2;
    n *= r1;
    n *= r3;
    n += -0.11813208f;
    return n;
} // Solution1

// Solution2 result = 0.00000007
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.48661831f;
    r0 = n += 1.27396369f;
    r1 = n *= -0.45236498f;
    n = r0 *= n;
    r2 = n += 0.53379983f;
    r3 = n *= -0.01539997f;
    n *= 7.73579693f;
    n *= 0.00006826f;
    n += -2.26770306f;
    n = r3 *= n;
    n += 1.13901234f;
    n += r3;
    r3 = n *= 1.03813398f;
    r4 = n *= 0.13739958f;
    n = r0 *= n;
    r5 = n += 1.69167364f;
    r6 = n *= 0.77384502f;
    n += r4;
    n *= 2.07166076f;
    r4 = n += 1.38099718f;
    n += -0.86672848f;
    n *= r5;
    n *= r6;
    n *= r0;
    r0 = n += -0.27183723f;
    n += r4;
    n += r0;
    n *= -1.78835273f;
    n *= r2;
    n *= r1;
    n *= r3;
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
