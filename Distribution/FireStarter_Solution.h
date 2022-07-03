// Run date: 07/02/22 17:11:49 Pacific Daylight Time
// Run duration = 53.043457 seconds
// Run count = 1
// Run mode = 3
// Run clients = 4
// Run process = 0
// Run units = 1
// Run states = 1
// Run population = 69632
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// Solution Generation = 0

#ifndef __CUDACC__
#include <cmath>
#endif

#define TARGET_PI 3.14159265f

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
        return fabsf(fmodf(fabsf(n - TARGET_PI * 0.5f), TARGET_PI * 2.0f) - TARGET_PI) - TARGET_PI * 0.5f;
    }
} // SolutionTarget

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define SOLUTION_VARIATIONS 3

// Precision = 0.000047

// Solution0 precision = 0.000047
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.16584280f;
    r0 = n += 0.09819904f;
    n += -0.25736931f;
    n += -0.72983819f;
    n += -0.12227536f;
    r1 = n *= 0.76976478f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.02572542f;
    r3 = n += 0.57197517f;
    r4 = n += -0.18861164f;
    n *= -0.51489669f;
    n *= -0.70711929f;
    n *= r2;
    n *= 0.32275900f;
    r2 = n += -0.39954987f;
    n *= 0.85977095f;
    n *= r1;
    n *= r2;
    n *= 1.09791684f;
    n += 0.14144447f;
    n *= r4;
    r4 = n *= 1.09474838f;
    r2 = n += 0.82093185f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -0.71134704f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.52282107f;
    return n;
} // Solution0

// Solution1 precision = 0.000039
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.32805815f;
    r0 = n += 0.73470765f;
    n += 0.26112852f;
    n += -1.17041051f;
    n += -0.57650054f;
    r1 = n *= -0.72399813f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.11894384f;
    r3 = n += 0.53392088f;
    r4 = n += 0.37166432f;
    n *= -0.60980105f;
    n *= -1.17125130f;
    n *= r2;
    n *= -0.35591426f;
    r2 = n += 0.97114891f;
    n *= -1.19113433f;
    n *= r1;
    n *= r2;
    n *= -4.09899569f;
    n += -0.64223588f;
    n *= r4;
    r4 = n *= -0.08629306f;
    r2 = n += 0.99199134f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 0.73205316f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += -0.20725027f;
    return n;
} // Solution1

// Solution2 precision = 0.000022
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.24655601f;
    r0 = n += 0.23096821f;
    n += -0.31929353f;
    n += -2.21226811f;
    n += 0.52865309f;
    r1 = n *= 0.51360506f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.06368488f;
    r3 = n += 0.51344115f;
    r4 = n += 0.35002074f;
    n *= 0.57321942f;
    n *= -0.17834559f;
    n *= r2;
    n *= -0.65601999f;
    r2 = n += -0.60792464f;
    n *= -1.23298359f;
    n *= r1;
    n *= r2;
    n *= 0.51149458f;
    n += -0.04031704f;
    n *= r4;
    r4 = n *= -0.54394674f;
    r2 = n += 0.71661091f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 0.49391678f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.28059039f;
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
