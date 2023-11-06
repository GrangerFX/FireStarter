// Run date: 11/06/23 12:20:00 Pacific Standard Time
// Run duration = 705.851948 seconds
// Run generation = 22
// Run evolution = 10
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

// Solution0 result = 0.00000024
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.28608495f;
    r1 = n += 2.16560984f;
    n *= 0.70944798f;
    n = r0 += n;
    r2 = n *= 0.61034226f;
    n *= r0;
    n *= 2.03221798f;
    n += -1.01625824f;
    r0 = n *= 0.32183805f;
    n += -0.46533233f;
    r3 = n *= -0.47589970f;
    r4 = n *= 3.78883553f;
    r5 = n *= -0.00140516f;
    n += 0.58166057f;
    r6 = n += 9.72428226f;
    n *= r5;
    n *= r0;
    n *= r6;
    n = r4 += n;
    n *= 0.20425656f;
    r6 = n += 2.04070306f;
    n *= -0.48971987f;
    n *= -2.08562112f;
    n += r3;
    n *= r6;
    n *= r4;
    n *= r2;
    n += r1;
    n += -1.26684749f;
    r1 = n *= 0.16056198f;
    n += r1;
    n *= 0.97377491f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.23539810f;
    r1 = n += -1.79062784f;
    n *= 0.68435723f;
    n = r0 += n;
    r2 = n *= 0.78168607f;
    n *= r0;
    n *= 0.63804859f;
    n += -0.24848631f;
    r0 = n *= -2.66413021f;
    n += 1.16925728f;
    r3 = n *= 0.09959534f;
    r4 = n *= -1.81334376f;
    r5 = n *= 0.00125120f;
    n += 1.64270437f;
    r6 = n += -8.19347477f;
    n *= r5;
    n *= r0;
    n *= r6;
    n = r4 += n;
    n *= 0.85987294f;
    r6 = n += -2.35212803f;
    n *= 1.89913869f;
    n *= -0.31354979f;
    n += r3;
    n *= r6;
    n *= r4;
    n *= r2;
    n += r1;
    n += 1.14142287f;
    r1 = n *= -0.54235363f;
    n += r1;
    n *= 1.39035225f;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 1.17170155f;
    r1 = n += 1.59012520f;
    n *= -0.65859795f;
    n = r0 += n;
    r2 = n *= 2.44078565f;
    n *= r0;
    n *= 2.75048971f;
    n += -1.07986164f;
    r0 = n *= 0.20723322f;
    n += -1.14545524f;
    r3 = n *= -0.46805379f;
    r4 = n *= -1.19837976f;
    r5 = n *= -0.02721812f;
    n += -3.02635026f;
    r6 = n += 4.30964184f;
    n *= r5;
    n *= r0;
    n *= r6;
    n = r4 += n;
    n *= 0.34881654f;
    r6 = n += -0.79941159f;
    n *= 3.46799588f;
    n *= 3.47826242f;
    n += r3;
    n *= r6;
    n *= r4;
    n *= r2;
    n += r1;
    n += -0.06378870f;
    r1 = n *= -0.89581853f;
    n += r1;
    n *= -0.06361689f;
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
