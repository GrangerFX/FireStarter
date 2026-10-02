// Run date: 04/06/24 22:15:59 Pacific Daylight Time
// Run duration = 35712.613337 seconds
// Run generation = 1687
// Run evolution = 14
// Run max result = 0.00000012
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.84471047f;
    n += -1.56323218f;
    n += 0.26634994f;
    r0 = n *= -0.20131807f;
    r1 = n *= -0.07383421f;
    n = r1 *= n;
    r2 = n *= -371.13198853f;
    n += 9.52903557f;
    r3 = n *= 0.08327468f;
    r4 = n *= -0.07669079f;
    n += -0.09092958f;
    n += r1;
    n = r4 *= n;
    n *= 10.33967686f;
    n = r3 += n;
    n = r2 += n;
    n *= 2.40959835f;
    n += -2.73425722f;
    n *= r4;
    r4 = n += 0.04608610f;
    n += 0.18386693f;
    n *= -264199.25000000f;
    n *= r4;
    n *= r3;
    n *= r0;
    n *= r2;
    n += -0.39117718f;
    n *= 0.02205833f;
    n *= 23.30356407f;
    n *= -0.01843146f;
    n += -0.00370642f;
    n *= 0.27535599f;
    return n;
} // Solution0

// Solution1 result = 0.00000006
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -3.82051063f;
    n += 0.47580311f;
    n += 0.25404897f;
    r0 = n *= -1.32896399f;
    r1 = n *= -0.20736296f;
    n = r1 *= n;
    r2 = n *= -0.00055105f;
    n += -0.09266596f;
    r3 = n *= 0.06815950f;
    r4 = n *= 10.32373524f;
    n += -0.16178910f;
    n += r1;
    n = r4 *= n;
    n *= -0.02141207f;
    n = r3 += n;
    n = r2 += n;
    n *= -392516.62500000f;
    n += -1449.05712891f;
    n *= r4;
    r4 = n += 60.42823410f;
    n += 730.57702637f;
    n *= -7964.66601562f;
    n *= r4;
    n *= r3;
    n *= r0;
    n *= r2;
    n += 9.21350574f;
    n *= -0.03559344f;
    n *= 0.00737343f;
    n *= 0.09688468f;
    n += -0.07942249f;
    n *= 1.48300922f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.60452634f;
    n += -3.48925304f;
    n += 0.26673296f;
    r0 = n *= 0.09049897f;
    r1 = n *= -0.01107675f;
    n = r1 *= n;
    r2 = n *= 10594.79882812f;
    n += -0.05305391f;
    r3 = n *= -0.20995918f;
    r4 = n *= -6.23861599f;
    n += -6.14325953f;
    n += r1;
    n = r4 *= n;
    n *= 0.12280018f;
    n = r3 += n;
    n = r2 += n;
    n *= 1.79010940f;
    n += 0.86229736f;
    n *= r4;
    r4 = n += 4.11571264f;
    n += -1.58664894f;
    n *= -38707.55078125f;
    n *= r4;
    n *= r3;
    n *= r0;
    n *= r2;
    n += -135.25784302f;
    n *= 0.46138337f;
    n *= 2.25949812f;
    n *= 0.00788204f;
    n += 1.94207585f;
    n *= 0.63033706f;
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
