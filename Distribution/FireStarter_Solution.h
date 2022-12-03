// Run date: 12/03/22 10:50:18 Pacific Standard Time
// Run duration = 183.185391 seconds
// Run count = 198
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_OPTIMIZE;
// Run units = 1;
// Run processes = 0;
// Run population = 69632;
// Run iterations = 512;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 256;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 198

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

// Precision = 0.00002662

// Solution0 precision = 0.00001848
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -1.22967374f;
    r0 = n += -2.37863111f;
    r1 = n *= 0.68075871f;
    n += 0.41904053f;
    r2 = n *= -0.45166159f;
    r3 = n *= -1.62723720f;
    r4 = n *= 0.06697122f;
    r5 = n += 0.01683362f;
    n = r1 *= n;
    r6 = n += -0.95062310f;
    n = r6 *= n;
    n += 1.38972974f;
    n *= r0;
    n *= -0.11874939f;
    n = r2 += n;
    n *= r2;
    n += -2.84353828f;
    n = r3 *= n;
    n = r6 *= n;
    n *= -0.68351424f;
    n = r3 *= n;
    n *= r4;
    n += r5;
    n = r1 *= n;
    n *= r3;
    n *= r1;
    n += r6;
    n += -0.03533931f;
    n *= -0.42468223f;
    n *= -1.80276740f;
    n += -0.53684390f;
    n += 0.71219498f;
    return n;
} // Solution0

// Solution1 precision = 0.00001717
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -0.49038845f;
    r0 = n += -2.79628062f;
    r1 = n *= 0.23858440f;
    n += 0.04212025f;
    r2 = n *= -1.17648077f;
    r3 = n *= 1.48819828f;
    r4 = n *= 0.22775151f;
    r5 = n += -0.02340975f;
    n = r1 *= n;
    r6 = n += 0.74175286f;
    n = r6 *= n;
    n += -1.32593465f;
    n *= r0;
    n *= -0.04050194f;
    n = r2 += n;
    n *= r2;
    n += -1.25887346f;
    n = r3 *= n;
    n = r6 *= n;
    n *= -1.15516102f;
    n = r3 *= n;
    n *= r4;
    n += r5;
    n = r1 *= n;
    n *= r3;
    n *= r1;
    n += r6;
    n += -2.47313833f;
    n *= 1.35328245f;
    n *= -2.80178857f;
    n += -6.97362185f;
    n += -2.54310131f;
    return n;
} // Solution1

// Solution2 precision = 0.00002662
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -1.44521081f;
    r0 = n += -0.10369680f;
    r1 = n *= -0.20653543f;
    n += 0.66756529f;
    r2 = n *= -0.04984602f;
    r3 = n *= -31.42787552f;
    r4 = n *= 0.29655087f;
    r5 = n += -0.10589939f;
    n = r1 *= n;
    r6 = n += -1.29886687f;
    n = r6 *= n;
    n += 0.14731711f;
    n *= r0;
    n *= 0.36476004f;
    n = r2 += n;
    n *= r2;
    n += -0.60305613f;
    n = r3 *= n;
    n = r6 *= n;
    n *= 0.11907516f;
    n = r3 *= n;
    n *= r4;
    n += r5;
    n = r1 *= n;
    n *= r3;
    n *= r1;
    n += r6;
    n += 2.44286895f;
    n *= -0.40436974f;
    n *= 1.93631077f;
    n += -21.84137917f;
    n += 24.19121170f;
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
