// Run date: 12/02/23 00:46:21 Pacific Standard Time
// Run duration = 12143.030999 seconds
// Run generation = 41
// Run evolution = 8
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
// Run seeds = 64
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159250f;
    r1 = n += -0.00000018f;
    n *= r1;
    n += -4.79762363f;
    n *= -2.16863346f;
    n *= -0.11930176f;
    r1 = n += 0.18507031f;
    r2 = n *= -0.00529229f;
    n = r2 += n;
    n += 0.44537777f;
    r3 = n *= -1.61459053f;
    n *= 3.14431357f;
    r4 = n += -2.81326962f;
    n *= r2;
    r2 = n += -0.43456373f;
    n *= 0.81618756f;
    n += -0.65530598f;
    n = r2 *= n;
    r5 = n *= -1.16678238f;
    n = r3 += n;
    n *= -37.53706360f;
    n *= r5;
    n += 0.14881325f;
    n *= 0.00000002f;
    n += r1;
    n *= r3;
    n += 1.62541974f;
    n *= r4;
    n *= 0.12312795f;
    n *= r0;
    n *= r2;
    n += 0.00000012f;
    return n;
} // Solution0

// Solution1 result = 0.00000003
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065938f;
    r1 = n += 0.00000145f;
    n *= r1;
    n += -1.60769653f;
    n *= -2.18156409f;
    n *= -0.54027838f;
    r1 = n += -1.53533244f;
    r2 = n *= -0.00829731f;
    n = r2 += n;
    n += 0.70125806f;
    r3 = n *= 0.95109522f;
    n *= 0.09937423f;
    r4 = n += 0.44076213f;
    n *= r2;
    r2 = n += 0.74806541f;
    n *= 1.61827528f;
    n += 0.37179145f;
    n = r2 *= n;
    r5 = n *= 0.49838006f;
    n = r3 += n;
    n *= -12.84723091f;
    n *= r5;
    n += 5.29321766f;
    n *= -0.00000344f;
    n += r1;
    n *= r3;
    n += -15.74985981f;
    n *= r4;
    n *= 0.08312886f;
    n *= r0;
    n *= r2;
    n += -0.11813271f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799359f;
    r1 = n += -0.00000014f;
    n *= r1;
    n += 2.29778218f;
    n *= -0.12263142f;
    n *= 1.77967656f;
    r1 = n += 1.39236116f;
    r2 = n *= -0.07839088f;
    n = r2 += n;
    n += 0.69440717f;
    r3 = n *= -0.00001643f;
    n *= 8.04156303f;
    r4 = n += 0.36880413f;
    n *= r2;
    r2 = n += -0.53133541f;
    n *= -2.89595509f;
    n += 0.33246362f;
    n = r2 *= n;
    r5 = n *= 1.81207490f;
    n = r3 += n;
    n *= -4.81438208f;
    n *= r5;
    n += 0.35822135f;
    n *= -0.08497839f;
    n += r1;
    n *= r3;
    n += 1.73244715f;
    n *= r4;
    n *= -0.56474966f;
    n *= r0;
    n *= r2;
    n += 0.52359891f;
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
