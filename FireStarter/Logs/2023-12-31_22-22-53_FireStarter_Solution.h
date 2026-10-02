// Run date: 12/31/23 22:22:53 Pacific Standard Time
// Run duration = 2851.768949 seconds
// Run generation = 13
// Run evolution = 10
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
// Run states = 64
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.58295453f;
    r0 = n += 1.83140564f;
    r1 = n *= -1.47145593f;
    r2 = n *= -1.49111557f;
    n *= r2;
    r2 = n += -3.01305890f;
    n *= -2.78921866f;
    n *= -3.64557862f;
    n *= -0.00013069f;
    r3 = n += 1.13452780f;
    n += 0.26331621f;
    n += -0.79454678f;
    r4 = n *= 0.01024222f;
    n *= -2.72194362f;
    n = r2 *= n;
    r5 = n *= 0.23421007f;
    r6 = n += 0.41239342f;
    n += r5;
    n = r3 *= n;
    n *= r3;
    n += 1.04815114f;
    n += r2;
    n = r4 += n;
    n *= r0;
    r0 = n *= -0.35751539f;
    n *= -0.78031486f;
    n *= r1;
    n += r6;
    n += r4;
    n *= r0;
    n += -0.00000000f;
    n *= -1.99754846f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.25725773f;
    r0 = n += 0.79509580f;
    r1 = n *= -1.44644701f;
    r2 = n *= 2.12292171f;
    n *= r2;
    r2 = n += -1.59538722f;
    n *= -4.14170742f;
    n *= -0.00059867f;
    n *= -6.91053677f;
    r3 = n += -0.39401928f;
    n += 1.05251694f;
    n += 1.00334740f;
    r4 = n *= -0.44272515f;
    n *= -0.24598768f;
    n = r2 *= n;
    r5 = n *= 0.17458241f;
    r6 = n += -0.42868349f;
    n += r5;
    n = r3 *= n;
    n *= r3;
    n += -1.61960649f;
    n += r2;
    n = r4 += n;
    n *= r0;
    r0 = n *= 0.34736368f;
    n *= 0.74808252f;
    n *= r1;
    n += r6;
    n += r4;
    n *= r0;
    n += -0.07810824f;
    n *= 1.51241124f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.43856326f;
    r0 = n += -1.14815581f;
    r1 = n *= -0.77818054f;
    r2 = n *= -0.93304008f;
    n *= r2;
    r2 = n += -1.21074164f;
    n *= -0.00023774f;
    n *= 13181.53027344f;
    n *= 0.00308244f;
    r3 = n += 0.73383856f;
    n += 0.88350749f;
    n += -1.52368736f;
    r4 = n *= -3.54887795f;
    n *= 0.87628818f;
    n = r2 *= n;
    r5 = n *= -0.27650258f;
    r6 = n += -0.18560967f;
    n += r5;
    n = r3 *= n;
    n *= r3;
    n += 0.86678469f;
    n += r2;
    n = r4 += n;
    n *= r0;
    r0 = n *= -1.87757111f;
    n *= -0.48908404f;
    n *= r1;
    n += r6;
    n += r4;
    n *= r0;
    n += 0.28983361f;
    n *= 1.80654955f;
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
