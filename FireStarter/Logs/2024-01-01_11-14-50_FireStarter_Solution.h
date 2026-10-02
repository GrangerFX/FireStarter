// Run date: 01/01/24 11:14:50 Pacific Standard Time
// Run duration = 977.740217 seconds
// Run generation = 19
// Run evolution = 15
// Run max result = 0.00000024
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
// Run tests = 1
// Run states = 64
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.40968606f;
    r1 = n += -1.28706670f;
    r2 = n *= -1.63268042f;
    n *= -3.49850059f;
    r3 = n *= -0.13776989f;
    n = r2 += n;
    n *= r1;
    r1 = n += 0.85336703f;
    n *= -0.57027894f;
    n += -1.47636294f;
    r4 = n *= -0.39455661f;
    r5 = n += 7.14489508f;
    n += 2.48484564f;
    n += 1.28788388f;
    n += -2.24378252f;
    n *= -0.00102476f;
    n *= r5;
    n += 0.52913857f;
    n += -0.61129582f;
    n *= 1.76498735f;
    n *= r1;
    r1 = n += -3.46105552f;
    n = r3 *= n;
    n += r3;
    n *= r4;
    n *= r1;
    n += 0.15586355f;
    n += -1.44293046f;
    n += r2;
    n += r0;
    n *= -1.32245827f;
    n *= -0.10191587f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.59692162f;
    r1 = n += -1.84488082f;
    r2 = n *= 0.71510667f;
    n *= 0.11152859f;
    r3 = n *= 20.54840851f;
    n = r2 += n;
    n *= r1;
    r1 = n += -2.71385598f;
    n *= -0.37489197f;
    n += 1.78619897f;
    r4 = n *= 0.05901174f;
    r5 = n += 2.23371935f;
    n += 3.00825906f;
    n += -5.14565992f;
    n += 2.08147073f;
    n *= -1.07285166f;
    n *= r5;
    n += -2.89395714f;
    n += -2.16472340f;
    n *= 0.00942728f;
    n *= r1;
    r1 = n += 3.38033628f;
    n = r3 *= n;
    n += r3;
    n *= r4;
    n *= r1;
    n += 0.68605661f;
    n += -1.84923327f;
    n += r2;
    n += r0;
    n *= -0.18122847f;
    n *= 0.95618933f;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.64570189f;
    r1 = n += 1.69044352f;
    r2 = n *= 1.95475709f;
    n *= -0.63924074f;
    r3 = n *= 2.07153964f;
    n = r2 += n;
    n *= r1;
    r1 = n += 0.52321970f;
    n *= -0.86379433f;
    n += -0.95854282f;
    r4 = n *= -0.29661664f;
    r5 = n += 0.35168114f;
    n += 5.70139837f;
    n += 3.05190182f;
    n += -1.65849447f;
    n *= -0.01480448f;
    n *= r5;
    n += -1.76067090f;
    n += 1.26025760f;
    n *= 0.33863786f;
    n *= r1;
    r1 = n += -1.08192956f;
    n = r3 *= n;
    n += r3;
    n *= r4;
    n *= r1;
    n += -0.51242071f;
    n += 1.29582548f;
    n += r2;
    n += r0;
    n *= 1.55642998f;
    n *= -0.37088832f;
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
