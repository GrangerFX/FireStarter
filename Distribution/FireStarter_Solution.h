// Run date: 11/16/23 10:16:19 Pacific Standard Time
// Run duration = 2853.171933 seconds
// Run generation = 59
// Run evolution = 8
// Run result = 0.00000015
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
// Run units = 1
// Run population = 278528
// Run iterations = 64
// Run optimizations = 500
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

// Solution0 result = 0.00000003
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159274f;
    r1 = n *= -0.28866947f;
    r2 = n += -0.00000034f;
    r3 = n *= -0.02192548f;
    r4 = n *= 1.41968763f;
    n *= r2;
    r2 = n += 0.69547606f;
    r5 = n *= -2.11447787f;
    n *= -0.18402468f;
    n = r0 *= n;
    n = r4 += n;
    n += r3;
    n = r4 += n;
    n *= -2.64022446f;
    n *= -1.95508790f;
    n = r5 *= n;
    n = r1 += n;
    r3 = n *= -0.00604165f;
    n *= r1;
    n *= 0.54381931f;
    n = r2 += n;
    n = r5 *= n;
    n += r4;
    n *= r2;
    n += r5;
    n += r3;
    n += r0;
    n *= 0.29417619f;
    n += 0.05065074f;
    n += -0.07011995f;
    n *= 0.77779073f;
    n += 0.01514297f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09066677f;
    r1 = n *= -0.16292158f;
    r2 = n += -0.00000180f;
    r3 = n *= 0.23414917f;
    r4 = n *= -4.26537037f;
    n *= r2;
    r2 = n += 2.64086175f;
    r5 = n *= -0.35708979f;
    n *= -0.01605165f;
    n = r0 *= n;
    n = r4 += n;
    n += r3;
    n = r4 += n;
    n *= 0.83887935f;
    n *= 0.89077085f;
    n = r5 *= n;
    n = r1 += n;
    r3 = n *= 0.15167488f;
    n *= r1;
    n *= -3.96723175f;
    n = r2 += n;
    n = r5 *= n;
    n += r4;
    n *= r2;
    n += r5;
    n += r3;
    n += r0;
    n *= -0.48839968f;
    n += 0.23105945f;
    n += -0.43942288f;
    n *= -1.66036463f;
    n += -0.46408921f;
    return n;
} // Solution1

// Solution2 result = 0.00000015
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799335f;
    r1 = n *= -0.50274116f;
    r2 = n += -0.00000095f;
    r3 = n *= 0.68176937f;
    r4 = n *= 0.02813509f;
    n *= r2;
    r2 = n += -0.75887007f;
    r5 = n *= 0.92475981f;
    n *= -1.64204502f;
    n = r0 *= n;
    n = r4 += n;
    n += r3;
    n = r4 += n;
    n *= -0.11188491f;
    n *= -4.77184486f;
    n = r5 *= n;
    n = r1 += n;
    r3 = n *= 0.91078162f;
    n *= r1;
    n *= 0.11086544f;
    n = r2 += n;
    n = r5 *= n;
    n += r4;
    n *= r2;
    n += r5;
    n += r3;
    n += r0;
    n *= -1.15711582f;
    n += -0.40399870f;
    n += -0.16821136f;
    n *= -0.65996462f;
    n += 0.14596009f;
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
