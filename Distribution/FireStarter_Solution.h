// Run date: 08/09/22 12:52:42 Pacific Daylight Time
// Run duration = 2.535544 seconds
// Run count = 11
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
// Run population = 139264;
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
// Solution Generation = 1100

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

// Precision = 0.00010180

// Solution0 precision = 0.00005968
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += 0.00001759f;
    n *= 0.39198843f;
    r1 = n += -0.33644319f;
    r2 = n += -3.32450008f;
    n *= r0;
    r0 = n *= 0.25978136f;
    n *= -0.99120307f;
    r3 = n *= -0.40857181f;
    n += -1.01114058f;
    n = r1 *= n;
    n *= r2;
    r2 = n *= 0.48356959f;
    r4 = n += -0.62312210f;
    n += r1;
    n += -0.87803495f;
    n += -1.94670141f;
    n *= 0.18792403f;
    n = r2 += n;
    n += r2;
    r2 = n *= 0.41743985f;
    n += 0.46192023f;
    n += -0.71603745f;
    n = r3 += n;
    n += 0.45472014f;
    r1 = n += -2.31153440f;
    n += r4;
    n *= r2;
    n += 1.92598164f;
    n += r1;
    n *= 0.08193299f;
    n += r3;
    n *= r0;
    return n;
} // Solution0

// Solution1 precision = 0.00004107
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += 1.37596297f;
    n *= 0.22848327f;
    r1 = n += -0.01940344f;
    r2 = n += -0.97658014f;
    n *= r0;
    r0 = n *= 0.09946489f;
    n *= 0.73381168f;
    r3 = n *= 0.72488397f;
    n += -0.80904406f;
    n = r1 *= n;
    n *= r2;
    r2 = n *= -1.11976516f;
    r4 = n += -0.34885865f;
    n += r1;
    n += -0.41767710f;
    n += -0.05579751f;
    n *= 1.93861389f;
    n = r2 += n;
    n += r2;
    r2 = n *= 0.33580101f;
    n += -2.41622758f;
    n += 0.11615363f;
    n = r3 += n;
    n += -0.76850736f;
    r1 = n += -1.18919623f;
    n += r4;
    n *= r2;
    n += 0.28793505f;
    n += r1;
    n *= -0.83189368f;
    n += r3;
    n *= r0;
    return n;
} // Solution1

// Solution2 precision = 0.00010180
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.19575310f;
    n *= -0.77859586f;
    r1 = n += -0.40751621f;
    r2 = n += 1.31005311f;
    n *= r0;
    r0 = n *= 0.08658817f;
    n *= -0.59507787f;
    r3 = n *= -0.13870814f;
    n += 0.23920065f;
    n = r1 *= n;
    n *= r2;
    r2 = n *= 0.57216096f;
    r4 = n += -1.15894294f;
    n += r1;
    n += -0.68839592f;
    n += 0.29334921f;
    n *= 1.11557245f;
    n = r2 += n;
    n += r2;
    r2 = n *= 2.08420968f;
    n += 0.56415576f;
    n += -0.48166388f;
    n = r3 += n;
    n += 3.34690452f;
    r1 = n += 2.01529980f;
    n += r4;
    n *= r2;
    n += -3.82793403f;
    n += r1;
    n *= -0.04813556f;
    n += r3;
    n *= r0;
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
