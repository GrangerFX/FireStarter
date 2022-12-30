// Run date: 12/30/22 11:47:05 Pacific Standard Time
// Run duration = 590.334561 seconds
// Run count = 119
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
// Solution Generation = 119

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

// Precision = 0.00006700

// Solution0 precision = 0.00000310
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.29103893f;
    n += -0.94582361f;
    n += -1.20542634f;
    r1 = n += 0.77976817f;
    r2 = n *= 0.00004950f;
    r3 = n *= -0.53660250f;
    n += r2;
    n *= r0;
    n = r1 += n;
    n *= -1.19265091f;
    n = r1 *= n;
    n += 1.12945282f;
    n *= -0.07172645f;
    n += -0.02614785f;
    n *= 3.56979561f;
    n += -0.13142300f;
    r0 = n *= 0.57322252f;
    r2 = n += -1.55522668f;
    r4 = n += 1.12876141f;
    n *= r2;
    r2 = n += 1.94490290f;
    n *= -0.36863586f;
    r5 = n *= 1.67435372f;
    n *= r1;
    n *= 2.09642887f;
    n = r0 *= n;
    n *= r5;
    n += r0;
    n += r4;
    n += r3;
    n *= r2;
    n += 1.36426568f;
    return n;
} // Solution0

// Solution1 precision = 0.00001878
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.08001880f;
    n += 1.79965746f;
    n += 1.32653558f;
    r1 = n += 1.20991254f;
    r2 = n *= -0.83044595f;
    r3 = n *= 0.07537373f;
    n += r2;
    n *= r0;
    n = r1 += n;
    n *= 0.08159844f;
    n = r1 *= n;
    n += -1.35618091f;
    n *= 1.91731668f;
    n += -1.44895911f;
    n *= -8.06824970f;
    n += 0.12041657f;
    r0 = n *= -0.08483675f;
    r2 = n += -0.40653992f;
    r4 = n += 1.22122371f;
    n *= r2;
    r2 = n += -0.54944235f;
    n *= -1.84596837f;
    r5 = n *= 0.56698292f;
    n *= r1;
    n *= 1.25758803f;
    n = r0 *= n;
    n *= r5;
    n += r0;
    n += r4;
    n += r3;
    n *= r2;
    n += -0.20701820f;
    return n;
} // Solution1

// Solution2 precision = 0.00006700
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 1.27328837f;
    n += -1.49977183f;
    n += 0.48372620f;
    r1 = n += -0.63130265f;
    r2 = n *= -0.09814669f;
    r3 = n *= -1.00281215f;
    n += r2;
    n *= r0;
    n = r1 += n;
    n *= 0.68513101f;
    n = r1 *= n;
    n += -4.26900244f;
    n *= -1.14563286f;
    n += -1.86268306f;
    n *= -0.03707195f;
    n += -0.59954667f;
    r0 = n *= -0.32625169f;
    r2 = n += 0.58288640f;
    r4 = n += 0.57229942f;
    n *= r2;
    r2 = n += 0.63806581f;
    n *= 0.46327609f;
    r5 = n *= -3.97065258f;
    n *= r1;
    n *= -0.19274305f;
    n = r0 *= n;
    n *= r5;
    n += r0;
    n += r4;
    n += r3;
    n *= r2;
    n += -1.19566953f;
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
