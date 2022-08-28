// Run date: 08/27/22 17:04:19 Pacific Daylight Time
// Run duration = 2.076468 seconds
// Run count = 58
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_OPTIMIZE;
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
// Solution Generation = 5800

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

// Precision = 0.00114703

// Solution0 precision = 0.00014418
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -1.20980346f;
    r0 = n += -0.47661772f;
    r1 = n += 0.30749521f;
    r2 = n *= -0.23246339f;
    r3 = n += 0.15975431f;
    n += -0.07124370f;
    r4 = n *= 0.74415284f;
    r5 = n += 0.97843969f;
    r6 = n += 0.69477755f;
    n *= 1.73465300f;
    n += -4.49039125f;
    n *= r6;
    n *= 0.82973576f;
    n = r1 *= n;
    n *= 0.81365389f;
    n *= 1.38518333f;
    n *= 0.22195357f;
    n *= 3.33016396f;
    n *= 0.23672210f;
    n *= r2;
    n += r3;
    n *= 0.06766082f;
    n *= -7.57440186f;
    n *= -0.09468739f;
    n *= r0;
    n *= 1.39127278f;
    n += r4;
    n *= r1;
    n *= r5;
    n += -0.71521139f;
    n *= 15.62552452f;
    n *= -0.08785085f;
    return n;
} // Solution0

// Solution1 precision = 0.00033009
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += 0.76346612f;
    r0 = n += 0.81684971f;
    r1 = n += 2.04281640f;
    r2 = n *= 0.28927508f;
    r3 = n += 1.36876738f;
    n += -3.18657970f;
    r4 = n *= 0.82157093f;
    r5 = n += -0.07266533f;
    r6 = n += -1.36014616f;
    n *= -3.00546575f;
    n += 0.85178322f;
    n *= r6;
    n *= -1.33035779f;
    n = r1 *= n;
    n *= 23.41414452f;
    n *= 0.12032494f;
    n *= -0.34001109f;
    n *= 11.81938362f;
    n *= -10.37294006f;
    n *= r2;
    n += r3;
    n *= -0.13141029f;
    n *= 0.15707754f;
    n *= -0.28629407f;
    n *= r0;
    n *= 0.14737138f;
    n += r4;
    n *= r1;
    n *= r5;
    n += -11.86769962f;
    n *= -1.87359953f;
    n *= 0.00079773f;
    return n;
} // Solution1

// Solution2 precision = 0.00114703
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -0.00144867f;
    r0 = n += -0.00103265f;
    r1 = n += -0.76971948f;
    r2 = n *= 0.40468749f;
    r3 = n += 1.20295596f;
    n += -1.66519272f;
    r4 = n *= -1.25912201f;
    r5 = n += -1.72129357f;
    r6 = n += 4.50469208f;
    n *= -0.32497495f;
    n += 0.36542928f;
    n *= r6;
    n *= 0.44677848f;
    n = r1 *= n;
    n *= 2.44884562f;
    n *= 0.01686455f;
    n *= -32.58347702f;
    n *= -0.01216786f;
    n *= 66.63432312f;
    n *= r2;
    n += r3;
    n *= 0.13848615f;
    n *= 1.48976731f;
    n *= -0.02233403f;
    n *= r0;
    n *= -9.94364166f;
    n += r4;
    n *= r1;
    n *= r5;
    n += 0.80848658f;
    n *= 0.34361142f;
    n *= 3.43830442f;
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
