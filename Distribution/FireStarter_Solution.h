// Run date: 08/13/23 12:19:50 Pacific Daylight Time
// Run duration = 2723.545199 seconds
// Run generation = 105
// Run evolution = 13
// Run result = 0.00000114
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
// Run seeds = 64
// Run tests = 0
// Run units = 8
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

// Solution0 result = 0.00000024
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159179f;
    r1 = n *= -0.07872156f;
    n = r0 *= n;
    r2 = n *= 2.02438998f;
    r3 = n *= 0.00701665f;
    r4 = n += 0.54782069f;
    n *= r3;
    n *= 1.03958213f;
    r3 = n += 1.37465203f;
    r5 = n += -1.25801957f;
    n *= 0.75772011f;
    n *= r0;
    r0 = n += 0.25269732f;
    n = r3 += n;
    n *= r4;
    n *= 1.17017376f;
    r4 = n += 2.36560106f;
    n += 0.51436150f;
    n = r0 *= n;
    n = r1 *= n;
    n *= -0.00023631f;
    n *= r5;
    n *= 0.37577766f;
    n += 1.90609753f;
    n += -0.33324641f;
    n += r2;
    n *= r1;
    n *= r3;
    n *= r4;
    n *= r0;
    n *= 1.48136210f;
    n += 0.00000085f;
    return n;
} // Solution0

// Solution1 result = 0.00000060
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09066248f;
    r1 = n *= -0.12701111f;
    n = r0 *= n;
    r2 = n *= -0.57748693f;
    r3 = n *= -0.04171813f;
    r4 = n += -0.08589422f;
    n *= r3;
    n *= -3.46677423f;
    r3 = n += 0.63236785f;
    r5 = n += -2.17761278f;
    n *= 0.16453600f;
    n *= r0;
    r0 = n += -1.36951685f;
    n = r3 += n;
    n *= r4;
    n *= -3.50706387f;
    r4 = n += -0.48449212f;
    n += 1.93730676f;
    n = r0 *= n;
    n = r1 *= n;
    n *= 0.00003280f;
    n *= r5;
    n *= -0.64419794f;
    n += -1.73883164f;
    n += -1.74602473f;
    n += r2;
    n *= r1;
    n *= r3;
    n *= r4;
    n *= r0;
    n *= -1.67953265f;
    n += -0.11813670f;
    return n;
} // Solution1

// Solution2 result = 0.00000114
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799383f;
    r1 = n *= -0.17985237f;
    n = r0 *= n;
    r2 = n *= 0.31526256f;
    r3 = n *= 0.13775590f;
    r4 = n += 0.59808475f;
    n *= r3;
    n *= -0.04689643f;
    r3 = n += -1.60965598f;
    r5 = n += 1.53803158f;
    n *= 2.08804369f;
    n *= r0;
    r0 = n += -1.77640939f;
    n = r3 += n;
    n *= r4;
    n *= 1.19500184f;
    r4 = n += 2.17359495f;
    n += -1.63055384f;
    n = r0 *= n;
    n = r1 *= n;
    n *= -0.00074451f;
    n *= r5;
    n *= 0.02394812f;
    n += -2.30516696f;
    n += -2.63169718f;
    n += r2;
    n *= r1;
    n *= r3;
    n *= r4;
    n *= r0;
    n *= -0.12138175f;
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
