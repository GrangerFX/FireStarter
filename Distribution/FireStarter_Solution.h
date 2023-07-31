// Run date: 07/31/23 11:23:08 Pacific Daylight Time
// Run duration = 347.987575 seconds
// Run generation = 20
// Run evolution = 0
// Run result = 0.00001526
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 1
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 0
// Run units = 8
// Run processes = 8
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

// Solution0 result = 0.00001395
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -2.10008097f;
    r0 = n *= -0.39761177f;
    n += -0.83592921f;
    r1 = n *= -0.40339538f;
    r2 = n *= -4.16995430f;
    n += 1.80401158f;
    n += -1.25730598f;
    n += 1.75920737f;
    n = r2 *= n;
    r3 = n *= -1.21435738f;
    r4 = n *= 1.01148689f;
    n += r2;
    n *= -0.15086991f;
    r2 = n += -1.85301089f;
    n = r2 *= n;
    n *= -0.15305290f;
    r5 = n += 0.12861276f;
    r6 = n += 0.62324828f;
    n = r0 += n;
    n *= -0.49302745f;
    n *= r1;
    r1 = n += -0.52923775f;
    n += r4;
    n *= -1.11918378f;
    n += r0;
    n += 2.03208017f;
    n *= r6;
    n += r3;
    n *= r2;
    n *= r1;
    n += 1.52203977f;
    n *= r5;
    return n;
} // Solution0

// Solution1 result = 0.00001526
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.19577432f;
    r0 = n *= 0.34991425f;
    n += 0.53764808f;
    r1 = n *= -1.03107643f;
    r2 = n *= -2.55733228f;
    n += -1.89951825f;
    n += 2.01320291f;
    n += 1.46266139f;
    n = r2 *= n;
    r3 = n *= -0.69988668f;
    r4 = n *= 0.71169198f;
    n += r2;
    n *= -0.04820987f;
    r2 = n += 1.16907406f;
    n = r2 *= n;
    n *= -0.02159506f;
    r5 = n += -0.06809326f;
    r6 = n += -0.59275162f;
    n = r0 += n;
    n *= -0.94825602f;
    n *= r1;
    r1 = n += -3.25014019f;
    n += r4;
    n *= 0.09868585f;
    n += r0;
    n += -2.59386063f;
    n *= r6;
    n += r3;
    n *= r2;
    n *= r1;
    n += 1.14238107f;
    n *= r5;
    return n;
} // Solution1

// Solution2 result = 0.00000966
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -1.93706083f;
    r0 = n *= 1.48418748f;
    n += 0.61709988f;
    r1 = n *= -0.14886998f;
    r2 = n *= 1.87336659f;
    n += 0.04038791f;
    n += 1.59613407f;
    n += -0.04761827f;
    n = r2 *= n;
    r3 = n *= 1.14283645f;
    r4 = n *= -1.71372759f;
    n += r2;
    n *= -0.07743719f;
    r2 = n += -0.59403515f;
    n = r2 *= n;
    n *= -1.95906842f;
    r5 = n += -0.33674231f;
    r6 = n += -2.04164171f;
    n = r0 += n;
    n *= -0.19642720f;
    n *= r1;
    r1 = n += -0.22894153f;
    n += r4;
    n *= 1.05163717f;
    n += r0;
    n += 1.87401593f;
    n *= r6;
    n += r3;
    n *= r2;
    n *= r1;
    n += -0.72801727f;
    n *= r5;
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
