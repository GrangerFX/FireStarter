// Run date: 08/27/23 16:58:11 Pacific Daylight Time
// Run duration = 484.056247 seconds
// Run generation = 59
// Run evolution = 5
// Run result = 0.00000024
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 0
// Run units = 1
// Run processes = 0
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.14159274f;
    r0 = n *= -0.11371551f;
    r1 = n *= 0.79776967f;
    n *= r1;
    n *= 1.25670111f;
    r1 = n *= -4.32566786f;
    n += 0.17620893f;
    n *= -0.00669231f;
    n += -0.06389534f;
    n *= 0.01876589f;
    r2 = n *= -87290.79687500f;
    n *= 0.14024848f;
    n = r2 *= n;
    n *= 0.00602789f;
    r3 = n *= -0.44488445f;
    n *= -0.90539026f;
    n += -0.85304779f;
    r4 = n *= -0.16864046f;
    r5 = n += 0.24764618f;
    n *= -0.05313461f;
    n *= r0;
    r0 = n *= 0.92066705f;
    n *= r2;
    n = r5 *= n;
    n *= r0;
    n += r1;
    n += 0.89602935f;
    n += r4;
    n *= r5;
    n *= r3;
    n += 0.05561392f;
    n += -0.05561391f;
    return n;
} // Solution0

// Solution1 result = 0.00000009
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.09065843f;
    r0 = n *= 0.36564955f;
    r1 = n *= -0.34919953f;
    n *= r1;
    n *= 1.66407859f;
    r1 = n *= -1.59966826f;
    n += 0.15791315f;
    n *= 0.02544259f;
    n += 0.20026377f;
    n *= -0.28945073f;
    r2 = n *= 0.22346708f;
    n *= -374039.90625000f;
    n = r2 *= n;
    n *= -0.08533088f;
    r3 = n *= 0.14867005f;
    n *= 0.45709646f;
    n += 1.15118504f;
    r4 = n *= -0.16410859f;
    r5 = n += -0.28269598f;
    n *= 0.47406414f;
    n *= r0;
    r0 = n *= -0.58797801f;
    n *= r2;
    n = r5 *= n;
    n *= r0;
    n += r1;
    n += -0.44909605f;
    n += r4;
    n *= r5;
    n *= r3;
    n += -0.07580934f;
    n += -0.04232236f;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.61799359f;
    r0 = n *= 0.58808035f;
    r1 = n *= 0.04425691f;
    n *= r1;
    n *= 4.37341595f;
    r1 = n *= 2.83443093f;
    n += -0.07375734f;
    n *= -0.72620219f;
    n += 0.27487627f;
    n *= -37489.85156250f;
    r2 = n *= -0.01243005f;
    n *= 0.05617874f;
    n = r2 *= n;
    n *= -0.05046832f;
    r3 = n *= 0.31364083f;
    n *= -5.00089025f;
    n += 0.32559240f;
    r4 = n *= 0.00003442f;
    r5 = n += 0.16374081f;
    n *= -0.16542967f;
    n *= r0;
    r0 = n *= 0.24274085f;
    n *= r2;
    n = r5 *= n;
    n *= r0;
    n += r1;
    n += -0.05876129f;
    n += r4;
    n *= r5;
    n *= r3;
    n += 0.44687760f;
    n += 0.07672112f;
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
