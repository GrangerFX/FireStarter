// Run date: 04/12/24 16:17:27 Pacific Daylight Time
// Run duration = 28759.715562 seconds
// Run generation = 424
// Run evolution = 8
// Run max result = 0.00000051
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
// Run evolveSeed = 3
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
    float r0, r1, r2, r3, r4;

    n += -1.64719486f;
    r0 = n += -1.49439788f;
    r1 = n *= -0.03204046f;
    n = r0 *= n;
    n += r0;
    r0 = n += 0.67093545f;
    r2 = n += 1.54716408f;
    r3 = n += -0.53753978f;
    r4 = n *= 1.81065941f;
    n *= r4;
    n = r0 += n;
    r4 = n *= 0.17957686f;
    n = r4 *= n;
    n *= -2.74990702f;
    n += 102.69885254f;
    n *= 4.40127754f;
    n *= -0.00000001f;
    n += r2;
    n += -0.44287628f;
    n *= -1.38999557f;
    r2 = n += -1.13478112f;
    n = r3 += n;
    n += r0;
    n += r4;
    n += -0.71702927f;
    n += r3;
    n = r2 *= n;
    n += r2;
    n *= -0.50668162f;
    n *= r1;
    n += 0.14902215f;
    n += -0.14902215f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -2.00925493f;
    r0 = n += -1.08140409f;
    r1 = n *= 0.04538042f;
    n = r0 *= n;
    n += r0;
    r0 = n += -0.30393577f;
    r2 = n += -2.32375622f;
    r3 = n += -2.15078282f;
    r4 = n *= 0.78631574f;
    n *= r4;
    n = r0 += n;
    r4 = n *= -0.17255175f;
    n = r4 *= n;
    n *= 0.32534978f;
    n += 1.89403844f;
    n *= -0.13419254f;
    n *= 0.93464273f;
    n += r2;
    n += 2.28117442f;
    n *= -0.52105802f;
    r2 = n += 0.91222566f;
    n = r3 += n;
    n += r0;
    n += r4;
    n += -1.92024660f;
    n += r3;
    n = r2 *= n;
    n += r2;
    n *= -0.84748375f;
    n *= r1;
    n += 0.06280784f;
    n += -0.18093997f;
    return n;
} // Solution1

// Solution2 result = 0.00000051
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -3.57600689f;
    r0 = n += 0.95801330f;
    r1 = n *= -0.10669476f;
    n = r0 *= n;
    n += r0;
    r0 = n += 1.43746412f;
    r2 = n += -2.29579091f;
    r3 = n += 0.94702309f;
    r4 = n *= 0.22726297f;
    n *= r4;
    n = r0 += n;
    r4 = n *= 1.06235600f;
    n = r4 *= n;
    n *= 5.44187450f;
    n += -6.47628832f;
    n *= -16.02863503f;
    n *= -0.00046987f;
    n += r2;
    n += 1.51258826f;
    n *= 0.09498699f;
    r2 = n += 0.58242351f;
    n = r3 += n;
    n += r0;
    n += r4;
    n += 0.24467301f;
    n += r3;
    n = r2 *= n;
    n += r2;
    n *= 1.31489873f;
    n *= r1;
    n += 0.60665810f;
    n += -0.08305935f;
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
