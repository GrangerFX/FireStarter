// Run date: 11/07/23 02:19:14 Pacific Standard Time
// Run duration = 2079.965292 seconds
// Run generation = 5
// Run evolution = 6
// Run result = 0.00000060
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

// Solution0 result = 0.00000015
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159274f;
    n *= -0.90913373f;
    n *= 0.24434149f;
    r1 = n *= 0.40032050f;
    r2 = n *= 0.71105230f;
    n = r2 *= n;
    r3 = n += -1.42597580f;
    n = r3 *= n;
    r4 = n *= -1.81034946f;
    r5 = n *= 1.59553850f;
    n = r3 += n;
    n *= r5;
    n *= -1.12396026f;
    n += -2.96094894f;
    n += 2.60498881f;
    n = r2 *= n;
    n *= r4;
    r4 = n += -2.73256516f;
    n = r0 *= n;
    n *= r3;
    n *= -0.06142396f;
    r3 = n += 0.07793362f;
    n *= -0.00000000f;
    n *= -7.04296446f;
    n = r2 *= n;
    n += -0.03569601f;
    n *= r4;
    n *= r0;
    n += r3;
    n += r1;
    n += r2;
    n += -0.07793368f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065843f;
    n *= 0.36878717f;
    n *= 1.34744453f;
    r1 = n *= -0.82708204f;
    r2 = n *= -0.13920903f;
    n = r2 *= n;
    r3 = n += -1.47709882f;
    n = r3 *= n;
    r4 = n *= -1.72558284f;
    r5 = n *= 2.06848192f;
    n = r3 += n;
    n *= r5;
    n *= 1.39398801f;
    n += -0.55682790f;
    n += -2.08317280f;
    n = r2 *= n;
    n *= r4;
    r4 = n += 5.01798677f;
    n = r0 *= n;
    n *= r3;
    n *= 0.01937960f;
    r3 = n += -0.04740945f;
    n *= 0.00000000f;
    n *= 4.30382490f;
    n = r2 *= n;
    n += -0.00571313f;
    n *= r4;
    n *= r0;
    n += r3;
    n += r1;
    n += r2;
    n += -0.07072219f;
    return n;
} // Solution1

// Solution2 result = 0.00000060
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799526f;
    n *= -1.87039256f;
    n *= -1.67390859f;
    r1 = n *= 0.07895237f;
    r2 = n *= 0.29540887f;
    n = r2 *= n;
    r3 = n += -1.30673325f;
    n = r3 *= n;
    r4 = n *= -1.40844369f;
    r5 = n *= 1.41021919f;
    n = r3 += n;
    n *= r5;
    n *= -4.23392439f;
    n += -0.52447098f;
    n += -0.80808163f;
    n = r2 *= n;
    n *= r4;
    r4 = n += -2.03443146f;
    n = r0 *= n;
    n *= r3;
    n *= -0.21637329f;
    r3 = n += -1.96804357f;
    n *= 2.45094967f;
    n *= 0.00000090f;
    n = r2 *= n;
    n += -0.12222798f;
    n *= r4;
    n *= r0;
    n += r3;
    n += r1;
    n += r2;
    n += 2.49164081f;
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
