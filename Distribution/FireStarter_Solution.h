// Run date: 08/06/22 13:50:35 Pacific Daylight Time
// Run duration = 2.355642 seconds
// Run count = 43
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_OPTIMIZE;
// Run states = 1;
// Run units = 1;
// Run process = 0;
// Run population = 69632;
// Run iterations = 512;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 256;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 4200

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

#define SOLUTION_VARIATIONS 3

// Precision = 0.00000286

// Solution0 precision = 0.00000083
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.00364327f;
    n += -3.14523602f;
    n *= 0.27987814f;
    r0 = n *= -0.72778875f;
    r1 = n *= 0.43431905f;
    n = r0 *= n;
    r2 = n += -0.89890999f;
    n *= r2;
    r2 = n *= 1.08762634f;
    n += -1.13096952f;
    n = r2 += n;
    n *= -1.02014494f;
    n *= 1.37699008f;
    r3 = n += -1.53247261f;
    n = r2 *= n;
    n += 1.91664743f;
    n *= r0;
    r0 = n *= -0.02370219f;
    n *= 0.82253289f;
    n += -0.19340400f;
    n += -0.42624214f;
    n *= 0.65012574f;
    n *= -0.46076262f;
    r4 = n += 1.04756951f;
    n += r4;
    n *= -1.94197440f;
    n += -0.27258494f;
    n += r0;
    n += r3;
    n *= r2;
    n *= r1;
    n += -0.00000001f;
    return n;
} // Solution0

// Solution1 precision = 0.00000143
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.22330403f;
    n += -1.86735439f;
    n *= 0.20365617f;
    r0 = n *= -0.90460783f;
    r1 = n *= 0.55622089f;
    n = r0 *= n;
    r2 = n += -0.94628096f;
    n *= r2;
    r2 = n *= 0.56066698f;
    n += -0.24643895f;
    n = r2 += n;
    n *= 0.91282427f;
    n *= 1.77135050f;
    r3 = n += 0.02274323f;
    n = r2 *= n;
    n += -1.04442978f;
    n *= r0;
    r0 = n *= 0.80402863f;
    n *= 0.68743461f;
    n += -0.31810269f;
    n += -0.74368697f;
    n *= -0.35703361f;
    n *= -0.96934026f;
    r4 = n += -1.44285381f;
    n += r4;
    n *= -2.67680311f;
    n += 0.41478944f;
    n += r0;
    n += r3;
    n *= r2;
    n *= r1;
    n += -0.11813170f;
    return n;
} // Solution1

// Solution2 precision = 0.00000286
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.40456617f;
    n += -1.21342742f;
    n *= 0.72617286f;
    r0 = n *= 0.90808499f;
    r1 = n *= -0.12974198f;
    n = r0 *= n;
    r2 = n += 3.10150456f;
    n *= r2;
    r2 = n *= 0.27554491f;
    n += 0.23613067f;
    n = r2 += n;
    n *= 0.38893819f;
    n *= 0.16783202f;
    r3 = n += 1.50575721f;
    n = r2 *= n;
    n += 0.00937218f;
    n *= r0;
    r0 = n *= 0.45557296f;
    n *= 0.49039227f;
    n += -3.31318402f;
    n += 2.78083372f;
    n *= -0.00000226f;
    n *= 0.00421123f;
    r4 = n += 0.68946368f;
    n += r4;
    n *= -0.33080485f;
    n += -0.28057194f;
    n += r0;
    n += r3;
    n *= r2;
    n *= r1;
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
