// Run date: 12/10/23 15:40:14 Pacific Standard Time
// Run duration = 2611.901259 seconds
// Run generation = 45
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
// Run evolveSeed = 2
// Run optimizeSeed = 2
// Run tests = 1
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
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.14159298f;
    n += 0.50838453f;
    n += -0.50838405f;
    r1 = n *= 0.30227661f;
    n = r0 *= n;
    r2 = n += -0.53425902f;
    n *= -3.15454698f;
    n += r0;
    r0 = n += 1.37885237f;
    n *= 0.00001164f;
    n *= -4.85035610f;
    r3 = n += -0.00726126f;
    n *= r2;
    r2 = n += 1.09692609f;
    r4 = n += -0.90484184f;
    r5 = n *= -0.52540129f;
    r6 = n += 2.45975375f;
    n = r3 += n;
    n = r4 *= n;
    n += r6;
    n *= r2;
    n += r3;
    n *= 0.43665740f;
    n = r0 += n;
    n *= r4;
    r4 = n += 1.43251634f;
    n *= r4;
    n += r0;
    n *= 1.53157246f;
    n *= r5;
    n *= r1;
    n += 0.00000017f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.09065795f;
    n += 0.92615193f;
    n += -0.92615271f;
    r1 = n *= 0.29856601f;
    n = r0 *= n;
    r2 = n += -1.28230882f;
    n *= -1.45810723f;
    n += r0;
    r0 = n += 0.94235152f;
    n *= 0.00004127f;
    n *= 13.39759541f;
    r3 = n += 0.04074798f;
    n *= r2;
    r2 = n += 1.79961467f;
    r4 = n += -3.13788915f;
    r5 = n *= 0.10733995f;
    r6 = n += -3.41921115f;
    n = r3 += n;
    n = r4 *= n;
    n += r6;
    n *= r2;
    n += r3;
    n *= -0.50366127f;
    n = r0 += n;
    n *= r4;
    r4 = n += -3.48128057f;
    n *= r4;
    n += r0;
    n *= 0.13758461f;
    n *= r5;
    n *= r1;
    n += -0.11813197f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.61799455f;
    n += 2.13911963f;
    n += -2.13911843f;
    r1 = n *= 1.22184849f;
    n = r0 *= n;
    r2 = n += -3.45095062f;
    n *= -3.62502575f;
    n += r0;
    r0 = n += 6.59158230f;
    n *= -0.00122987f;
    n *= 0.00939617f;
    r3 = n += -0.00643828f;
    n *= r2;
    r2 = n += 0.18949111f;
    r4 = n += 0.41852713f;
    r5 = n *= -0.09534943f;
    r6 = n += -0.21804330f;
    n = r3 += n;
    n = r4 *= n;
    n += r6;
    n *= r2;
    n += r3;
    n *= 8.97031212f;
    n = r0 += n;
    n *= r4;
    r4 = n += -0.30057478f;
    n *= r4;
    n += r0;
    n *= 0.53567719f;
    n *= r5;
    n *= r1;
    n += 0.52359915f;
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
