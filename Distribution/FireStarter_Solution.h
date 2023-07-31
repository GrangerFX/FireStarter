// Run date: 07/30/23 14:58:44 Pacific Daylight Time
// Run duration = 928.829089 seconds
// Run generation = 72
// Run evolution = 0
// Run result = 0.00000525
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

// Solution0 result = 0.00000337
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.21998143f;
    r1 = n *= -0.43901587f;
    r2 = n += 0.01184246f;
    r3 = n += -0.08645333f;
    n *= r2;
    n += -1.01955318f;
    r2 = n += -1.47693992f;
    n += 1.79484248f;
    n *= 1.12206650f;
    n *= 0.55369496f;
    r4 = n += -0.74472815f;
    r5 = n *= -1.55972052f;
    n = r2 += n;
    n = r2 *= n;
    n = r2 *= n;
    n *= 3.19394541f;
    r6 = n += 4.51507902f;
    r7 = n *= -0.01197918f;
    n += r1;
    n *= r4;
    n *= -0.27012658f;
    n = r3 += n;
    n += r0;
    r0 = n *= -0.03594977f;
    n += r0;
    n += -0.73855430f;
    n *= r7;
    n += r3;
    n *= r2;
    n *= r5;
    n += 0.00140319f;
    n *= r6;
    return n;
} // Solution0

// Solution1 result = 0.00000525
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.05844641f;
    r1 = n *= -0.29242942f;
    r2 = n += 0.05345665f;
    r3 = n += -0.08865795f;
    n *= r2;
    n += 0.28657904f;
    r2 = n += -1.98376358f;
    n += -0.96177560f;
    n *= 1.56383061f;
    n *= 1.68133831f;
    r4 = n += 1.44346464f;
    r5 = n *= -0.39750999f;
    n = r2 += n;
    n = r2 *= n;
    n = r2 *= n;
    n *= 1.39859366f;
    r6 = n += 1.56459296f;
    r7 = n *= 0.00606777f;
    n += r1;
    n *= r4;
    n *= -2.60645938f;
    n = r3 += n;
    n += r0;
    r0 = n *= -0.27119267f;
    n += r0;
    n += 5.08186865f;
    n *= r7;
    n += r3;
    n *= r2;
    n *= r5;
    n += -0.07357887f;
    n *= r6;
    return n;
} // Solution1

// Solution2 result = 0.00000417
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.34689641f;
    r1 = n *= -0.68995845f;
    r2 = n += 0.23535380f;
    r3 = n += -0.07283396f;
    n *= r2;
    n += 4.02975035f;
    r2 = n += -5.82050943f;
    n += 0.80490232f;
    n *= 1.43641150f;
    n *= 0.70575464f;
    r4 = n += -1.40394783f;
    r5 = n *= -1.00946069f;
    n = r2 += n;
    n = r2 *= n;
    n = r2 *= n;
    n *= 1.28045523f;
    r6 = n += 3.20935726f;
    r7 = n *= 0.00085867f;
    n += r1;
    n *= r4;
    n *= -0.02919280f;
    n = r3 += n;
    n += r0;
    r0 = n *= -0.61714327f;
    n += r0;
    n += 4.90453243f;
    n *= r7;
    n += r3;
    n *= r2;
    n *= r5;
    n += 0.16264275f;
    n *= r6;
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
