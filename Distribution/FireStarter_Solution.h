// Run date: 11/22/23 13:11:56 Pacific Standard Time
// Run duration = 3725.259220 seconds
// Run generation = 77
// Run evolution = 10
// Run result = 0.00000036
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
// Run tests = 1
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
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

// Solution0 result = 0.00000024
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.30578101f;
    r0 = n += -0.96063936f;
    r1 = n *= -0.17955279f;
    n *= 1.86551249f;
    r2 = n *= 0.19084343f;
    n += r1;
    n *= r0;
    r0 = n += 0.22468771f;
    n *= 1.93814003f;
    r1 = n += -0.26309705f;
    n *= 0.00424374f;
    r3 = n += 0.01443417f;
    n = r3 *= n;
    n *= -2.98319674f;
    n *= -5.68854713f;
    r4 = n += -415233.68750000f;
    n *= r3;
    n *= 0.07324823f;
    n = r1 += n;
    n *= 1.66961694f;
    n = r0 *= n;
    n += r1;
    n *= r2;
    n *= r0;
    n *= 0.47383469f;
    n *= r4;
    n *= -0.11875752f;
    n += 1.11403012f;
    n *= -0.80052346f;
    n += 0.89148831f;
    n *= 0.01888432f;
    n *= -0.00603064f;
    return n;
} // Solution0

// Solution1 result = 0.00000036
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.12132220f;
    r0 = n += 0.37496552f;
    r1 = n *= -0.09569813f;
    n *= 0.04856007f;
    r2 = n *= 0.08504263f;
    n += r1;
    n *= r0;
    r0 = n += 0.09083889f;
    n *= -1.35589254f;
    r1 = n += 0.07392111f;
    n *= 1.55043054f;
    r3 = n += 0.06062453f;
    n = r3 *= n;
    n *= 3.55747843f;
    n *= 0.71572369f;
    r4 = n += 0.16794942f;
    n *= r3;
    n *= -0.03499678f;
    n = r1 += n;
    n *= 189790.65625000f;
    n = r0 *= n;
    n += r1;
    n *= r2;
    n *= r0;
    n *= 0.12577826f;
    n *= r4;
    n *= 2.06400585f;
    n += 0.14655808f;
    n *= -0.08157233f;
    n += -0.00129734f;
    n *= -6.50314569f;
    n *= -1.37071931f;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.36819026f;
    r0 = n += 0.96391976f;
    r1 = n *= -0.31075615f;
    n *= 0.50969219f;
    r2 = n *= -0.66174501f;
    n += r1;
    n *= r0;
    r0 = n += 0.13912427f;
    n *= -3.04392219f;
    r1 = n += -0.23611382f;
    n *= 0.06286113f;
    r3 = n += -0.24324107f;
    n = r3 *= n;
    n *= 2.82424974f;
    n *= 0.08030748f;
    r4 = n += 0.14204894f;
    n *= r3;
    n *= 40841.44531250f;
    n = r1 += n;
    n *= -0.01460415f;
    n = r0 *= n;
    n += r1;
    n *= r2;
    n *= r0;
    n *= 0.48800084f;
    n *= r4;
    n *= 0.49218330f;
    n += -0.06393463f;
    n *= -3.79142570f;
    n += 1.44188035f;
    n *= -0.40597898f;
    n *= -0.76573730f;
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
