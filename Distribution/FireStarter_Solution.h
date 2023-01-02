// Run date: 01/02/23 12:53:26 Pacific Standard Time
// Run duration = 45.918617 seconds
// Run count = 13
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_OPTIMIZE
// Run units = 1
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 32
// Run seed = 0
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 13

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

#define SOLUTION_VARIATIONS 3

// Precision = 0.00000060

// Solution0 precision = 0.00000023
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += 1.82907641f;
    n += -4.03112268f;
    r0 = n += -0.93954623f;
    r1 = n *= 0.35485655f;
    n *= -1.64785528f;
    n = r1 *= n;
    r2 = n += 0.08632158f;
    r3 = n += 0.43344072f;
    n *= 0.00765830f;
    r4 = n += 0.05583464f;
    n += 0.24685310f;
    n = r1 *= n;
    n += r3;
    r3 = n *= -0.02177295f;
    r5 = n += -0.04624878f;
    n += 3.46321893f;
    n += -2.46756721f;
    n += r2;
    n *= -0.28430519f;
    n *= 0.05375965f;
    n += -1.39108801f;
    n *= r1;
    n *= -2.85595965f;
    n += 13.31564522f;
    n = r3 += n;
    n *= r3;
    n *= r0;
    n *= r4;
    n *= 0.92298347f;
    n *= r5;
    n += 0.00000002f;
    n *= 1.77764940f;
    return n;
} // Solution0

// Solution1 precision = 0.00000060
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.96388322f;
    n += -0.60343343f;
    r0 = n += -1.52334237f;
    r1 = n *= -0.53551924f;
    n *= 1.34465051f;
    n = r1 *= n;
    r2 = n += -0.40357396f;
    r3 = n += -1.13666570f;
    n *= 0.01937746f;
    r4 = n += -0.47929847f;
    n += -0.11687567f;
    n = r1 *= n;
    n += r3;
    r3 = n *= 0.06206169f;
    r5 = n += 1.61258698f;
    n += -1.62755430f;
    n += -3.28547692f;
    n += r2;
    n *= 5.34345245f;
    n *= -0.00078754f;
    n += 0.99336523f;
    n *= r1;
    n *= -0.26649338f;
    n += -1.35766518f;
    n = r3 += n;
    n *= r3;
    n *= r0;
    n *= r4;
    n *= 0.58954197f;
    n *= r5;
    n += -0.10327571f;
    n *= 1.14385033f;
    return n;
} // Solution1

// Solution2 precision = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.41295874f;
    n += -0.52221894f;
    r0 = n += -1.68281615f;
    r1 = n *= 0.33162126f;
    n *= -0.17133650f;
    n = r1 *= n;
    r2 = n += -0.07650691f;
    r3 = n += 0.85652506f;
    n *= 4.70741940f;
    r4 = n += 2.12322521f;
    n += 1.47370970f;
    n = r1 *= n;
    n += r3;
    r3 = n *= -0.45241770f;
    r5 = n += 0.02040981f;
    n += -2.05584192f;
    n += -0.36717165f;
    n += r2;
    n *= -0.00350129f;
    n *= -2.94255233f;
    n += 0.87084812f;
    n *= r1;
    n *= 0.45532322f;
    n += -0.24028599f;
    n = r3 += n;
    n *= r3;
    n *= r0;
    n *= r4;
    n *= 2.79757714f;
    n *= r5;
    n += 0.99308223f;
    n *= 0.52724612f;
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
