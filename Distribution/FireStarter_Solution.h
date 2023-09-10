// Run date: 09/10/23 11:03:56 Pacific Daylight Time
// Run duration = 876.024327 seconds
// Run generation = 110
// Run evolution = 37
// Run result = 0.00002718
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
// Run tests = 1
// Run units = 4
// Run processes = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
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

// Solution0 result = 0.00001898
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.13076188f;
    r1 = n += -0.61040902f;
    r2 = n *= 0.46678692f;
    n = r0 += n;
    r3 = n += -0.63368499f;
    n = r0 *= n;
    n *= -0.01391362f;
    r4 = n += 0.02926531f;
    n = r4 *= n;
    n *= 0.63992608f;
    n *= r3;
    r3 = n += -2.05684757f;
    n *= r0;
    n += 2.15620494f;
    n += 4.77910852f;
    r0 = n *= 3.45547962f;
    r5 = n *= -1.84472048f;
    r6 = n *= 1.69046545f;
    n = r1 *= n;
    n += -1.29958367f;
    n += r5;
    n = r4 *= n;
    n *= -0.16189803f;
    n += r3;
    n += r6;
    n *= r1;
    n *= r2;
    n += 0.06220136f;
    n += -4.97450304f;
    n *= -0.22813381f;
    n += r0;
    n *= r4;
    return n;
} // Solution0

// Solution1 result = 0.00002718
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.33878127f;
    r1 = n += -1.14368618f;
    r2 = n *= -1.60735619f;
    n = r0 += n;
    r3 = n += -2.13490558f;
    n = r0 *= n;
    n *= -1.27429080f;
    r4 = n += 1.60552287f;
    n = r4 *= n;
    n *= 0.52125978f;
    n *= r3;
    r3 = n += 4.56570196f;
    n *= r0;
    n += 0.05440071f;
    n += 0.25863889f;
    r0 = n *= 0.14064699f;
    r5 = n *= 0.00857379f;
    r6 = n *= -0.60416335f;
    n = r1 *= n;
    n += -0.63291132f;
    n += r5;
    n = r4 *= n;
    n *= -5.05590582f;
    n += r3;
    n += r6;
    n *= r1;
    n *= r2;
    n += -3.52097988f;
    n += 0.70657736f;
    n *= 0.00338291f;
    n += r0;
    n *= r4;
    return n;
} // Solution1

// Solution2 result = 0.00002712
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 1.07679474f;
    r1 = n += -1.65727770f;
    r2 = n *= -1.42279029f;
    n = r0 += n;
    r3 = n += -1.95456254f;
    n = r0 *= n;
    n *= 0.16021511f;
    r4 = n += -1.51684916f;
    n = r4 *= n;
    n *= -5.96722555f;
    n *= r3;
    r3 = n += -6.44015980f;
    n *= r0;
    n += 12.90261364f;
    n += -6.35149717f;
    r0 = n *= -0.09777404f;
    r5 = n *= 0.00769944f;
    r6 = n *= -0.05849596f;
    n = r1 *= n;
    n += -0.44295073f;
    n += r5;
    n = r4 *= n;
    n *= -1.92487657f;
    n += r3;
    n += r6;
    n *= r1;
    n *= r2;
    n += -1.46842837f;
    n += 2.15917897f;
    n *= -0.54803067f;
    n += r0;
    n *= r4;
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
