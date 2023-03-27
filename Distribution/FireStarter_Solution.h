// Run date: 03/27/23 12:03:30 Pacific Daylight Time
// Run duration = 2787.107083 seconds
// Run generation = 291
// Run result = 0.00000548
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 6

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 0
// Run seeds = 1
// Run mode = FIRESTARTER_OPTIMIZE
// Run tests = 100
// Run units = 4
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
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

// Solution0 result = 0.00000066
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.60636640f;
    n += -1.53522611f;
    r0 = n *= 0.96770000f;
    n *= -2.37933517f;
    n *= 0.69451398f;
    n *= 0.26444501f;
    r1 = n *= -0.25687617f;
    n *= r0;
    n *= -0.07232502f;
    r0 = n *= -1.39361918f;
    r2 = n += -1.72438765f;
    r3 = n *= -0.51304662f;
    r4 = n *= 1.43996060f;
    r5 = n *= -1.15236783f;
    n *= r3;
    n *= r5;
    r5 = n *= -1.38577211f;
    n += 2.77515817f;
    n += -1.61428440f;
    n *= -1.03948379f;
    n = r4 *= n;
    n *= -2.28865051f;
    n *= -0.01273570f;
    r3 = n += 3.19114685f;
    n *= r0;
    n *= r2;
    n += 0.54685372f;
    n *= r5;
    n *= r3;
    n *= r1;
    n *= r4;
    n += 0.00000004f;
    return n;
} // Solution0

// Solution1 result = 0.00000548
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.66512525f;
    n += -1.42553437f;
    r0 = n *= -1.83943629f;
    n *= 0.14978021f;
    n *= -2.14104176f;
    n *= 1.01470959f;
    r1 = n *= -0.03187033f;
    n *= r0;
    n *= 0.31607187f;
    r0 = n *= 0.69543648f;
    r2 = n += -1.46429896f;
    r3 = n *= 1.25723743f;
    r4 = n *= 0.53889543f;
    r5 = n *= 1.64049160f;
    n *= r3;
    n *= r5;
    r5 = n *= 1.75793242f;
    n += 1.53203321f;
    n += 4.02578020f;
    n *= -1.00036299f;
    n = r4 *= n;
    n *= -3.50936151f;
    n *= 0.00320396f;
    r3 = n += -3.02636504f;
    n *= r0;
    n *= r2;
    n += -0.75126767f;
    n *= r5;
    n *= r3;
    n *= r1;
    n *= r4;
    n += -0.11813271f;
    return n;
} // Solution1

// Solution2 result = 0.00000352
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.54450744f;
    n += -2.07348537f;
    r0 = n *= -2.34296417f;
    n *= -1.40892279f;
    n *= 1.23146498f;
    n *= 0.64554322f;
    r1 = n *= -0.25537595f;
    n *= r0;
    n *= -0.38291141f;
    r0 = n *= -0.02310324f;
    r2 = n += -1.48497283f;
    r3 = n *= -1.67376196f;
    r4 = n *= -0.56981307f;
    r5 = n *= 0.50397134f;
    n *= r3;
    n *= r5;
    r5 = n *= 0.80200374f;
    n += -0.33411375f;
    n += -0.54591501f;
    n *= -1.86917329f;
    n = r4 *= n;
    n *= -12.95044899f;
    n *= -0.00048134f;
    r3 = n += 2.81838322f;
    n *= r0;
    n *= r2;
    n += 1.45233262f;
    n *= r5;
    n *= r3;
    n *= r1;
    n *= r4;
    n += 0.52359945f;
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
