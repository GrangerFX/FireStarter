// Run date: 07/09/23 15:20:25 Pacific Daylight Time
// Run duration = 974.027417 seconds
// Run generation = 77
// Run evolution = 0
// Run result = 0.00000203
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 1
// Run optimizeSeed = 1
// Run seeds = 1
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

// Solution0 result = 0.00000013
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.14159274f;
    n *= -0.47483963f;
    n *= -0.29306355f;
    r1 = n *= -0.67307848f;
    n *= 1.65575993f;
    n = r0 *= n;
    r2 = n += 1.53063536f;
    r3 = n *= 0.02881118f;
    r4 = n += -0.07605943f;
    n += -15.59354687f;
    n *= 2.09747291f;
    n *= r4;
    n = r0 += n;
    n *= r2;
    n *= -0.75658947f;
    r2 = n += -3.20921206f;
    n *= r1;
    n *= r3;
    n = r2 *= n;
    n *= r0;
    n += 1.42834485f;
    r0 = n += -1.92960238f;
    n += r2;
    n += 1.95250642f;
    n += -1.24148464f;
    n += -0.33540323f;
    n = r0 += n;
    n += r0;
    n += 1.31281042f;
    n += -0.04475641f;
    r0 = n += -0.01426099f;
    n += r0;
    return n;
} // Solution0

// Solution1 result = 0.00000083
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.09065700f;
    n *= 0.32041344f;
    n *= 1.41468215f;
    r1 = n *= -0.09909713f;
    n *= -0.45175916f;
    n = r0 *= n;
    r2 = n += -0.92056310f;
    r3 = n *= -0.44987181f;
    r4 = n += 1.11212420f;
    n += -0.47519577f;
    n *= 1.11523676f;
    n *= r4;
    n = r0 += n;
    n *= r2;
    n *= -1.84557343f;
    r2 = n += -1.24259675f;
    n *= r1;
    n *= r3;
    n = r2 *= n;
    n *= r0;
    n += 6.13530397f;
    r0 = n += -13.37287998f;
    n += r2;
    n += 3.31747460f;
    n += -0.09620229f;
    n += 6.21026325f;
    n = r0 += n;
    n += r0;
    n += 2.96295762f;
    n += 6.53236628f;
    r0 = n += 0.53284365f;
    n += r0;
    return n;
} // Solution1

// Solution2 result = 0.00000203
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -2.61799240f;
    n *= -0.65896565f;
    n *= 2.27469039f;
    r1 = n *= 0.03551004f;
    n *= -0.70196843f;
    n = r0 *= n;
    r2 = n += -0.18619362f;
    r3 = n *= -0.34508628f;
    r4 = n += 0.90333480f;
    n += 2.59409833f;
    n *= 2.08614540f;
    n *= r4;
    n = r0 += n;
    n *= r2;
    n *= -0.29260126f;
    r2 = n += 1.78850627f;
    n *= r1;
    n *= r3;
    n = r2 *= n;
    n *= r0;
    n += -7.68852091f;
    r0 = n += 1.22870004f;
    n += r2;
    n += 1.19714212f;
    n += 1.19698644f;
    n += 4.59394169f;
    n = r0 += n;
    n += r0;
    n += 3.80904055f;
    n += 8.15758705f;
    r0 = n += 0.15831365f;
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
