// Run date: 11/15/23 13:59:20 Pacific Standard Time
// Run duration = 12619.719408 seconds
// Run generation = 56
// Run evolution = 4
// Run result = 0.00000024
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.27018446f;
    r0 = n *= -1.17812049f;
    r1 = n += -1.99999988f;
    n *= r0;
    r0 = n += 0.92497492f;
    n *= 1.70422256f;
    n += -1.18935883f;
    r2 = n *= -0.06431131f;
    r3 = n *= 1.01280987f;
    n *= -1.06333673f;
    r4 = n += -4.35129833f;
    n *= r2;
    n *= r4;
    r4 = n *= -0.00498249f;
    r2 = n += -1.18329847f;
    n *= r2;
    n = r3 += n;
    n = r3 *= n;
    r2 = n *= 0.63052458f;
    n *= r3;
    n *= -0.46651354f;
    n += r4;
    n *= r0;
    n *= -1.45573044f;
    n += -1.39013445f;
    n *= 0.70604396f;
    n = r2 *= n;
    n *= r1;
    n += r2;
    r2 = n += -0.02444397f;
    n += 0.04888802f;
    n += r2;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.64771503f;
    r0 = n *= -0.49953672f;
    r1 = n += -2.00000787f;
    n *= r0;
    r0 = n += 0.63421816f;
    n *= 4.87115479f;
    n += 0.71848577f;
    r2 = n *= -0.03839221f;
    r3 = n *= 1.02352929f;
    n *= 0.09714561f;
    r4 = n += -0.01723251f;
    n *= r2;
    n *= r4;
    r4 = n *= -3.13626051f;
    r2 = n += -1.55255008f;
    n *= r2;
    n = r3 += n;
    n = r3 *= n;
    r2 = n *= 0.48399395f;
    n *= r3;
    n *= 2.68249273f;
    n += r4;
    n *= r0;
    n *= -0.08092595f;
    n += 3.32017779f;
    n *= -0.12399782f;
    n = r2 *= n;
    n *= r1;
    n += r2;
    r2 = n += 0.05898686f;
    n += -0.23611347f;
    n += r2;
    return n;
} // Solution1

// Solution2 result = 0.00000023
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.73250449f;
    r0 = n *= 0.52145964f;
    r1 = n += -1.99999869f;
    n *= r0;
    r0 = n += 0.41651797f;
    n *= 0.83222616f;
    n += -0.75103074f;
    r2 = n *= -0.05818054f;
    r3 = n *= 1.72286761f;
    n *= 0.28137276f;
    r4 = n += 0.00144948f;
    n *= r2;
    n *= r4;
    r4 = n *= -1.92972875f;
    r2 = n += -0.85782874f;
    n *= r2;
    n = r3 += n;
    n = r3 *= n;
    r2 = n *= -2.10047674f;
    n *= r3;
    n *= 2.58029628f;
    n += r4;
    n *= r0;
    n *= -1.52194655f;
    n += -0.48324573f;
    n *= -0.27016383f;
    n = r2 *= n;
    n *= r1;
    n += r2;
    r2 = n += 0.50445199f;
    n += -0.48530418f;
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
