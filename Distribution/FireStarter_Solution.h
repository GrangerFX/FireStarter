// Run date: 03/05/23 13:09:20 Pacific Standard Time
// Run duration = 6718.655423 seconds
// Run count = 6
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run units = 2
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 32
// Run seed = 99
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 6

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

// Precision = 0.00085905

// Solution0 precision = 0.00085905
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n *= 0.14316241f;
    r1 = n += 0.29685605f;
    r2 = n *= -0.40947250f;
    r3 = n += 0.48984998f;
    r4 = n += -0.18408893f;
    r5 = n += 0.46584255f;
    n *= -1.02002180f;
    r6 = n *= -1.99464345f;
    n *= r5;
    n *= r3;
    n = r4 *= n;
    r3 = n += 1.28920996f;
    r5 = n += -1.63982928f;
    r7 = n += 0.93116802f;
    n = r3 *= n;
    r8 = n += 1.78394902f;
    n = r6 *= n;
    n *= r7;
    n += 24.20905685f;
    n *= r2;
    n = r6 *= n;
    n *= 2.05373216f;
    n += 0.08810411f;
    n *= r0;
    n += -3.68634772f;
    n *= r3;
    n *= r6;
    n *= r1;
    n += r8;
    n += -12.96026516f;
    n += r5;
    n *= r4;
    return n;
} // Solution0

// Solution1 precision = 0.00019407
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n *= -0.38197067f;
    r1 = n += -1.27893114f;
    r2 = n *= 0.27788609f;
    r3 = n += -0.52635401f;
    r4 = n += 0.73978752f;
    r5 = n += 1.07085800f;
    n *= 1.50145650f;
    r6 = n *= -0.21429054f;
    n *= r5;
    n *= r3;
    n = r4 *= n;
    r3 = n += -0.65861839f;
    r5 = n += 2.78537512f;
    r7 = n += 1.73450124f;
    n = r3 *= n;
    r8 = n += -1.32053351f;
    n = r6 *= n;
    n *= r7;
    n += 2.93253613f;
    n *= r2;
    n = r6 *= n;
    n *= 0.05252040f;
    n += 2.12538028f;
    n *= r0;
    n += 2.15551615f;
    n *= r3;
    n *= r6;
    n *= r1;
    n += r8;
    n += 0.43384206f;
    n += r5;
    n *= r4;
    return n;
} // Solution1

// Solution2 precision = 0.00078985
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n *= 0.60496849f;
    r1 = n += -2.29157186f;
    r2 = n *= -0.34704810f;
    r3 = n += -1.85669363f;
    r4 = n += 1.06152141f;
    r5 = n += 2.03217387f;
    n *= 0.60583740f;
    r6 = n *= -0.46592462f;
    n *= r5;
    n *= r3;
    n = r4 *= n;
    r3 = n += 1.37882471f;
    r5 = n += -1.18247581f;
    r7 = n += -0.74394017f;
    n = r3 *= n;
    r8 = n += 2.01302719f;
    n = r6 *= n;
    n *= r7;
    n += 1.16317725f;
    n *= r2;
    n = r6 *= n;
    n *= 2.51581454f;
    n += 4.90001583f;
    n *= r0;
    n += 4.23655462f;
    n *= r3;
    n *= r6;
    n *= r1;
    n += r8;
    n += -0.33375430f;
    n += r5;
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
