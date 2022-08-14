// Run date: 08/14/22 11:58:31 Pacific Daylight Time
// Run duration = 1.420960 seconds
// Run count = 79
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_CODE;
// Run units = 1;
// Run process = 0;
// Run population = 4352;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 5;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 1;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 395

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

// Precision = 0.00700028

// Solution0 precision = 0.00275191
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.66008884f;
    r0 = n *= -0.30010733f;
    n += 0.66623086f;
    r1 = n += 0.70964634f;
    r2 = n += 0.65370214f;
    n *= -0.67794544f;
    r3 = n += 0.95422196f;
    n *= 0.34825507f;
    r4 = n *= -1.26883340f;
    n *= 0.84832287f;
    n = r2 += n;
    n += r2;
    n += 0.52647948f;
    n = r3 *= n;
    n *= 0.97010303f;
    r2 = n *= 0.03963592f;
    n += -0.30963439f;
    n = r0 += n;
    n += 0.01593778f;
    n *= r1;
    n += 0.74608767f;
    n += -0.00172535f;
    n = r2 += n;
    n += -0.52754360f;
    n = r4 += n;
    r1 = n *= 1.22357118f;
    n += r0;
    n = r4 += n;
    n *= r4;
    n *= r1;
    n += r2;
    n *= r3;
    return n;
} // Solution0

// Solution1 precision = 0.00504696
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.59813517f;
    r0 = n *= -0.39634266f;
    n += 0.43855542f;
    r1 = n += -0.42399240f;
    r2 = n += -0.69036764f;
    n *= 0.67007965f;
    r3 = n += 0.84123325f;
    n *= 0.14140570f;
    r4 = n *= 0.84105903f;
    n *= 0.40464017f;
    n = r2 += n;
    n += r2;
    n += -0.14638589f;
    n = r3 *= n;
    n *= -0.70339650f;
    r2 = n *= 0.19095695f;
    n += 0.97297049f;
    n = r0 += n;
    n += -0.14948601f;
    n *= r1;
    n += -3.52469087f;
    n += -0.16267174f;
    n = r2 += n;
    n += 0.07163952f;
    n = r4 += n;
    r1 = n *= -0.26198936f;
    n += r0;
    n = r4 += n;
    n *= r4;
    n *= r1;
    n += r2;
    n *= r3;
    return n;
} // Solution1

// Solution2 precision = 0.00700028
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.43225899f;
    r0 = n *= -0.93566108f;
    n += -0.74442315f;
    r1 = n += 0.56173491f;
    r2 = n += 0.21045995f;
    n *= 0.62210673f;
    r3 = n += -0.01623809f;
    n *= -1.06416070f;
    r4 = n *= -0.05773007f;
    n *= 0.24145567f;
    n = r2 += n;
    n += r2;
    n += 3.50663304f;
    n = r3 *= n;
    n *= -0.92003524f;
    r2 = n *= -0.61694258f;
    n += 0.55955374f;
    n = r0 += n;
    n += -0.13446254f;
    n *= r1;
    n += -0.69008601f;
    n += -0.78955662f;
    n = r2 += n;
    n += 1.77289784f;
    n = r4 += n;
    r1 = n *= -0.03402369f;
    n += r0;
    n = r4 += n;
    n *= r4;
    n *= r1;
    n += r2;
    n *= r3;
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
