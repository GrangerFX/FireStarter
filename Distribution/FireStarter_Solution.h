// Run date: 11/06/23 17:27:30 Pacific Standard Time
// Run duration = 28881.134902 seconds
// Run generation = 13
// Run evolution = 14
// Run result = 0.00000125
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

// Solution0 result = 0.00000018
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.31831166f;
    r1 = n *= -0.99690270f;
    r2 = n += -1.51062202f;
    n += -0.48320547f;
    n *= -1.86103868f;
    r3 = n *= -0.66140097f;
    n += -1.29779828f;
    n += 3.15724111f;
    n *= 0.00863953f;
    n *= 3.47718430f;
    n *= -0.89864254f;
    n = r2 *= n;
    n *= 1.97251117f;
    n += -0.28803420f;
    r4 = n += 1.59421730f;
    n += -0.05859589f;
    n = r4 *= n;
    n = r4 *= n;
    n *= r3;
    n *= 0.28403041f;
    n *= 1.47617316f;
    n *= r1;
    r1 = n *= -0.59589982f;
    n += r2;
    n += r4;
    n = r1 *= n;
    n += 1.27215195f;
    n *= 0.00000011f;
    n = r1 += n;
    n += -0.00001734f;
    n *= r0;
    n += r1;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.32358518f;
    r1 = n *= 0.92362070f;
    r2 = n += 1.38754356f;
    n += 0.46000490f;
    n *= 1.72600603f;
    r3 = n *= 0.07291261f;
    n += -1.86397481f;
    n += 1.68932676f;
    n *= -0.00615999f;
    n *= -14.78698730f;
    n *= -3.65285420f;
    n = r2 *= n;
    n *= -1.49083078f;
    n += -2.66190600f;
    r4 = n += 0.72765207f;
    n += 1.03731298f;
    n = r4 *= n;
    n = r4 *= n;
    n *= r3;
    n *= -1.23147523f;
    n *= -1.00695515f;
    n *= r1;
    r1 = n *= -1.06262851f;
    n += r2;
    n += r4;
    n = r1 *= n;
    n += 1.64651144f;
    n *= 0.51762426f;
    n = r1 += n;
    n += 0.11782143f;
    n *= r0;
    n += r1;
    return n;
} // Solution1

// Solution2 result = 0.00000125
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.38191482f;
    r1 = n *= -0.81985366f;
    r2 = n += -0.39767200f;
    n += -1.24154592f;
    n *= -0.07274224f;
    r3 = n *= -3.12953258f;
    n += 0.21142259f;
    n += -0.12097239f;
    n *= -1.63800740f;
    n *= -0.84781605f;
    n *= -1.86931551f;
    n = r2 *= n;
    n *= -0.24373573f;
    n += -1.16625130f;
    r4 = n += 0.17117266f;
    n += -1.50436664f;
    n = r4 *= n;
    n = r4 *= n;
    n *= r3;
    n *= -0.90509254f;
    n *= -0.76427585f;
    n *= r1;
    r1 = n *= -0.62208200f;
    n += r2;
    n += r4;
    n = r1 *= n;
    n += -1.70819080f;
    n *= 0.00000038f;
    n = r1 += n;
    n += -0.52320802f;
    n *= r0;
    n += r1;
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
