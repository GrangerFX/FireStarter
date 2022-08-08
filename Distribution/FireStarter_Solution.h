// Run date: 08/08/22 11:33:35 Pacific Daylight Time
// Run duration = 1.137664 seconds
// Run count = 35
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_OPTIMIZE;
// Run units = 1;
// Run process = 0;
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
// Solution Generation = 3500

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

// Precision = 0.00034302

// Solution0 precision = 0.00006644
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    r0 = n *= 0.21850552f;
    r1 = n += -0.13026544f;
    r2 = n += -0.68065876f;
    n *= r2;
    n *= 0.08644840f;
    n += -0.66669071f;
    r2 = n += -0.65056968f;
    n = r1 *= n;
    n *= -1.85995960f;
    r3 = n *= -0.23975036f;
    n += 5.68941450f;
    n *= 0.00002511f;
    n += r0;
    n += -0.13845085f;
    n += -0.71160185f;
    n = r2 += n;
    n = r1 *= n;
    n += -0.24233097f;
    r0 = n *= 0.86145133f;
    n += r3;
    n += 1.67419517f;
    n *= 1.43795788f;
    n *= r0;
    r0 = n *= -1.47369158f;
    n = r0 *= n;
    n += r2;
    n += -7.71784735f;
    n += 2.08459496f;
    n += r0;
    n *= 0.51713932f;
    n *= -0.15989819f;
    n += r1;
    return n;
} // Solution0

// Solution1 precision = 0.00012970
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    r0 = n *= 0.25658745f;
    r1 = n += -0.41964766f;
    r2 = n += -0.46527222f;
    n *= r2;
    n *= 0.03526625f;
    n += -0.63120884f;
    r2 = n += -0.65074950f;
    n = r1 *= n;
    n *= 0.00000022f;
    r3 = n *= 16.84364319f;
    n += 0.00007836f;
    n *= -13.49799919f;
    n += r0;
    n += 0.11418682f;
    n += -0.92673290f;
    n = r2 += n;
    n = r1 *= n;
    n += 0.90797418f;
    r0 = n *= 0.69167322f;
    n += r3;
    n += 1.33545852f;
    n *= 0.70590186f;
    n *= r0;
    r0 = n *= 0.64085042f;
    n = r0 *= n;
    n += r2;
    n += 0.51705486f;
    n += -0.91022027f;
    n += r0;
    n *= 0.39019513f;
    n *= -2.02858067f;
    n += r1;
    return n;
} // Solution1

// Solution2 precision = 0.00034302
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    r0 = n *= 0.55020058f;
    r1 = n += -1.23591578f;
    r2 = n += 4.05427742f;
    n *= r2;
    n *= -0.01796536f;
    n += 0.69340765f;
    r2 = n += -1.49056745f;
    n = r1 *= n;
    n *= 0.12407918f;
    r3 = n *= -2.16066480f;
    n += 1.55680168f;
    n *= -0.83238876f;
    n += r0;
    n += 0.60709721f;
    n += -0.69883931f;
    n = r2 += n;
    n = r1 *= n;
    n += 1.69066274f;
    r0 = n *= -0.39139402f;
    n += r3;
    n += -0.46912271f;
    n *= -0.66036135f;
    n *= r0;
    r0 = n *= 3.67149282f;
    n = r0 *= n;
    n += r2;
    n += -5.08366203f;
    n += -4.40695763f;
    n += r0;
    n *= 8.00737953f;
    n *= -0.02648007f;
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
