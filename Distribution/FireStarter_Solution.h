// Run date: 11/07/23 17:26:16 Pacific Standard Time
// Run duration = 2379.261682 seconds
// Run generation = 37
// Run evolution = 12
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
// Run passes = 5
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 64

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

// Solution0 result = 0.00000013
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.14159274f;
    r0 = n *= -0.24622354f;
    r1 = n *= 0.59131873f;
    n = r0 *= n;
    r2 = n += -0.35381845f;
    r3 = n *= 1.13871658f;
    r4 = n += -1.14719391f;
    n *= -0.00057950f;
    r5 = n += -0.00273155f;
    n *= 7.96893358f;
    n += -3.77715135f;
    n *= 0.26776245f;
    n = r4 *= n;
    r6 = n += 1.39487588f;
    n += 0.82253522f;
    n *= r3;
    n += -6.03216314f;
    n = r6 *= n;
    n *= r5;
    n *= r0;
    n *= -4.58588314f;
    n += 7.26103449f;
    n += -4.49609423f;
    n *= 1.31109405f;
    n *= r1;
    n *= r6;
    n *= r4;
    n *= 1.76625550f;
    n *= r2;
    n += 0.51628953f;
    n += -0.51628947f;
    n *= 0.08583882f;
    return n;
} // Solution0

// Solution1 result = 0.00000036
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.09065843f;
    r0 = n *= 0.12613188f;
    r1 = n *= 0.70985287f;
    n = r0 *= n;
    r2 = n += -0.49865255f;
    r3 = n *= -1.74783111f;
    r4 = n += -0.38432238f;
    n *= -0.78353447f;
    r5 = n += 2.56560755f;
    n *= 0.01384105f;
    n += 0.70737267f;
    n *= 0.54941344f;
    n = r4 *= n;
    r6 = n += 3.48572493f;
    n += -2.27395296f;
    n *= r3;
    n += -0.39271155f;
    n = r6 *= n;
    n *= r5;
    n *= r0;
    n *= -0.97310156f;
    n += 21.27319908f;
    n += -2.11914349f;
    n *= -1.70598459f;
    n *= r1;
    n *= r6;
    n *= r4;
    n *= -0.72426140f;
    n *= r2;
    n += 0.99811703f;
    n += -1.06706667f;
    n *= 1.71330440f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -2.61799359f;
    r0 = n *= 0.45100880f;
    r1 = n *= 0.12113418f;
    n = r0 *= n;
    r2 = n += -0.12278613f;
    r3 = n *= -0.10951333f;
    r4 = n += 1.40505755f;
    n *= 2.02806044f;
    r5 = n += -1.70007384f;
    n *= -3.13450527f;
    n += 1.26047647f;
    n *= 1.45910263f;
    n = r4 *= n;
    r6 = n += -3.51508045f;
    n += -1.26897061f;
    n *= r3;
    n += -2.17506289f;
    n = r6 *= n;
    n *= r5;
    n *= r0;
    n *= -0.24033496f;
    n += 2.43492723f;
    n += -0.19694312f;
    n *= -1.50984085f;
    n *= r1;
    n *= r6;
    n *= r4;
    n *= -0.42710218f;
    n *= r2;
    n += -0.73462629f;
    n += 0.23273452f;
    n *= -1.04325032f;
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
