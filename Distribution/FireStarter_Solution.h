// Run date: 07/26/23 09:09:10 Pacific Daylight Time
// Run duration = 834.536634 seconds
// Run generation = 105
// Run evolution = 0
// Run result = 0.00000465
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 64
// Run units = 8
// Run processes = 8
// Run population = 278528
// Run iterations = 64
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

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

// Solution0 result = 0.00000155
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.43307474f;
    n += -1.36054420f;
    r0 = n *= -0.97509956f;
    r1 = n *= -1.29184043f;
    n = r1 *= n;
    r2 = n += -1.11473310f;
    r3 = n *= 0.03468366f;
    r4 = n += -1.49734652f;
    n *= -1.02908945f;
    n = r4 *= n;
    r5 = n += 0.01048189f;
    n *= 0.86351311f;
    n *= -1.96277225f;
    n += 2.32067227f;
    n *= -1.59204710f;
    r6 = n *= 0.02340366f;
    n = r4 += n;
    n *= r3;
    n *= r6;
    n = r5 += n;
    n *= -1.06155372f;
    n *= r4;
    n += -1.49214804f;
    n += 2.61647296f;
    r4 = n *= 0.10106281f;
    n += r2;
    n *= r5;
    n += r1;
    n *= r0;
    n *= r4;
    n *= -0.97483456f;
    n += -0.00000049f;
    return n;
} // Solution0

// Solution1 result = 0.00000465
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.21509849f;
    n += -0.66479617f;
    r0 = n *= -0.44054154f;
    r1 = n *= 0.79127300f;
    n = r1 *= n;
    r2 = n += -0.14397763f;
    r3 = n *= -1.56274521f;
    r4 = n += 1.73604453f;
    n *= -1.17421019f;
    n = r4 *= n;
    r5 = n += 1.69444609f;
    n *= -0.09499672f;
    n *= 2.49343705f;
    n += -2.83703732f;
    n *= 0.00187390f;
    r6 = n *= -0.58408570f;
    n = r4 += n;
    n *= r3;
    n *= r6;
    n = r5 += n;
    n *= -0.29190600f;
    n *= r4;
    n += 0.50919539f;
    n += 1.42154419f;
    r4 = n *= 1.87258136f;
    n += r2;
    n *= r5;
    n += r1;
    n *= r0;
    n *= r4;
    n *= -0.35112375f;
    n += -0.11813279f;
    return n;
} // Solution1

// Solution2 result = 0.00000310
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.53797579f;
    n += -1.40841651f;
    r0 = n *= 1.13574064f;
    r1 = n *= -0.95570606f;
    n = r1 *= n;
    r2 = n += -1.29496121f;
    r3 = n *= -0.06514295f;
    r4 = n += 1.72713017f;
    n *= 1.05032718f;
    n = r4 *= n;
    r5 = n += -1.05114985f;
    n *= 0.17814592f;
    n *= -3.63523459f;
    n += 2.22526073f;
    n *= -0.16444519f;
    r6 = n *= 0.03629545f;
    n = r4 += n;
    n *= r3;
    n *= r6;
    n = r5 += n;
    n *= 1.07412934f;
    n *= r4;
    n += 0.01942488f;
    n += 0.18051858f;
    r4 = n *= -0.18864903f;
    n += r2;
    n *= r5;
    n += r1;
    n *= r0;
    n *= r4;
    n *= -0.13327524f;
    n += 0.52359819f;
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
