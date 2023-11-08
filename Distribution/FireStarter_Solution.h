// Run date: 11/07/23 19:13:58 Pacific Standard Time
// Run duration = 25724.297151 seconds
// Run generation = 19
// Run evolution = 9
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
// Run tests = 16
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.79717362f;
    r0 = n += 2.50439477f;
    r1 = n *= 1.87084842f;
    n *= 0.76438338f;
    r2 = n *= 1.43903542f;
    r3 = n *= -0.11336204f;
    r4 = n *= -0.05883643f;
    n = r0 *= n;
    r5 = n += 1.26334083f;
    n += -1.30474424f;
    n *= 7.62210703f;
    n = r0 *= n;
    n *= r4;
    r4 = n *= 9.22013187f;
    n += r2;
    n *= -0.19144952f;
    n *= r3;
    r3 = n += -1.57750070f;
    n *= -0.52281481f;
    n *= r5;
    n = r0 += n;
    n *= r0;
    n *= -1.19946921f;
    r0 = n *= 0.89164257f;
    n += -0.36869138f;
    n *= -0.00222499f;
    n *= r4;
    n = r1 += n;
    n *= r3;
    n += r1;
    n *= r0;
    n += -0.00000003f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.60605186f;
    r0 = n += 1.87309945f;
    r1 = n *= -0.42901316f;
    n *= 0.38063020f;
    r2 = n *= -0.85328007f;
    r3 = n *= 1.28704953f;
    r4 = n *= -0.98618722f;
    n = r0 *= n;
    r5 = n += 1.68225574f;
    n += 0.49017647f;
    n *= 0.00799940f;
    n = r0 *= n;
    n *= r4;
    r4 = n *= -3.32471442f;
    n += r2;
    n *= 1.32556200f;
    n *= r3;
    r3 = n += -1.66252363f;
    n *= -1.06940889f;
    n *= r5;
    n = r0 += n;
    n *= r0;
    n *= -0.43278766f;
    r0 = n *= -1.64940906f;
    n += 0.72964746f;
    n *= 0.04811798f;
    n *= r4;
    n = r1 += n;
    n *= r3;
    n += r1;
    n *= r0;
    n += -0.11813183f;
    return n;
} // Solution1

// Solution2 result = 0.00000018
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 1.08566737f;
    r0 = n += -2.84227037f;
    r1 = n *= -3.39352012f;
    n *= -0.20970279f;
    r2 = n *= 0.38796434f;
    r3 = n *= -1.08639324f;
    r4 = n *= 0.05019236f;
    n = r0 *= n;
    r5 = n += 1.71150994f;
    n += 0.18311122f;
    n *= -1.42894614f;
    n = r0 *= n;
    n *= r4;
    r4 = n *= 0.71342576f;
    n += r2;
    n *= -2.25449514f;
    n *= r3;
    r3 = n += -2.08683205f;
    n *= -0.18412901f;
    n *= r5;
    n = r0 += n;
    n *= r0;
    n *= 0.67640072f;
    r0 = n *= -0.85370618f;
    n += 5.19780922f;
    n *= 0.00027946f;
    n *= r4;
    n = r1 += n;
    n *= r3;
    n += r1;
    n *= r0;
    n += 0.52359879f;
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
