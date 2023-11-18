// Run date: 11/18/23 13:45:40 Pacific Standard Time
// Run duration = 357.273408 seconds
// Run generation = 77
// Run evolution = 20
// Run result = 0.00011456
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 0
// Run seeds = 1
// Run units = 1
// Run population = 278528
// Run iterations = 64
// Run optimizations = 100
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

// Solution0 result = 0.00004768
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.45296121f;
    r1 = n *= 0.54693174f;
    r2 = n += 1.10092199f;
    n += -0.08149194f;
    n = r1 *= n;
    r3 = n *= -0.26283371f;
    n *= r1;
    n *= 0.63431215f;
    n *= 0.05703122f;
    n += r3;
    n += 1.50319350f;
    n *= -1.02615213f;
    r3 = n *= -1.15595305f;
    n = r3 *= n;
    r1 = n *= -0.64094031f;
    r4 = n *= 0.09109487f;
    n *= r3;
    n *= 2.32786465f;
    n *= 3.27229023f;
    r3 = n *= 0.57460034f;
    n = r2 *= n;
    n *= -6.68026686f;
    n *= -0.00208044f;
    n += -1.31685781f;
    n = r0 *= n;
    n += -1.02047527f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += -1.39557266f;
    n *= r1;
    n += r2;
    return n;
} // Solution0

// Solution1 result = 0.00002956
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 1.92246616f;
    r1 = n *= 0.24664429f;
    r2 = n += -2.08210278f;
    n += -0.60194349f;
    n = r1 *= n;
    r3 = n *= 0.11303343f;
    n *= r1;
    n *= 5.09011602f;
    n *= 0.00487287f;
    n += r3;
    n += -0.71517497f;
    n *= -0.53512251f;
    r3 = n *= 1.26037633f;
    n = r3 *= n;
    r1 = n *= -1.48463380f;
    r4 = n *= 1.97643399f;
    n *= r3;
    n *= 2.34940672f;
    n *= 1.77354717f;
    r3 = n *= 1.21745467f;
    n = r2 *= n;
    n *= 0.00009492f;
    n *= -18.79305077f;
    n += -0.06400037f;
    n = r0 *= n;
    n += 0.23817891f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 2.38976789f;
    n *= r1;
    n += r2;
    return n;
} // Solution1

// Solution2 result = 0.00011456
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.87877303f;
    r1 = n *= -0.15628260f;
    r2 = n += -0.43810475f;
    n += 1.14856458f;
    n = r1 *= n;
    r3 = n *= -0.18181433f;
    n *= r1;
    n *= -0.00094988f;
    n *= 5.74304008f;
    n += r3;
    n += 0.90443987f;
    n *= 0.79923165f;
    r3 = n *= -0.84507161f;
    n = r3 *= n;
    r1 = n *= 1.34536934f;
    r4 = n *= -5.35061836f;
    n *= r3;
    n *= -0.71099418f;
    n *= 1.38789999f;
    r3 = n *= -1.80553377f;
    n = r2 *= n;
    n *= -0.47910926f;
    n *= -1.09581149f;
    n += -0.80076283f;
    n = r0 *= n;
    n += -1.35780549f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += -1.55825996f;
    n *= r1;
    n += r2;
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
