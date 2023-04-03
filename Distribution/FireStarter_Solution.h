// Run date: 04/02/23 23:35:49 Pacific Daylight Time
// Run duration = 284.022368 seconds
// Run generation = 561
// Run result = 0.00000322
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 1
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

// Solution0 result = 0.00000018
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.14159274f;
    r1 = n *= -0.43369538f;
    n *= r0;
    n += 1.50350165f;
    r0 = n *= 0.17878547f;
    r2 = n += 0.49646935f;
    r3 = n += 3.09193540f;
    n *= 1.55226040f;
    r4 = n *= -0.17814292f;
    n = r4 *= n;
    n *= -0.88046724f;
    r5 = n *= -0.00042740f;
    r6 = n *= -5.27743244f;
    n = r6 *= n;
    n = r4 += n;
    n += -9.56500626f;
    n *= r6;
    n *= r3;
    n *= -10.96773148f;
    n *= r5;
    n = r4 += n;
    n *= 0.16147837f;
    n *= -0.13830590f;
    n += -0.15924698f;
    n *= r0;
    n *= 1.40203547f;
    r0 = n += -1.55779982f;
    n *= r4;
    n *= r0;
    n *= r2;
    n *= r1;
    n += 0.00000004f;
    return n;
} // Solution0

// Solution1 result = 0.00000131
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.09065962f;
    r1 = n *= 0.13818200f;
    n *= r0;
    n += -0.84267020f;
    r0 = n *= 0.06225343f;
    r2 = n += -0.14935468f;
    r3 = n += -0.10115556f;
    n *= 0.59461004f;
    r4 = n *= 2.09099841f;
    n = r4 *= n;
    n *= -0.92554176f;
    r5 = n *= 0.05714068f;
    r6 = n *= -0.09563035f;
    n = r6 *= n;
    n = r4 += n;
    n += 1.93976927f;
    n *= r6;
    n *= r3;
    n *= -0.12612139f;
    n *= r5;
    n = r4 += n;
    n *= 1.40912020f;
    n *= 4.32324314f;
    n += 3.64853883f;
    n *= r0;
    n *= -2.22523499f;
    r0 = n += 16.14605522f;
    n *= r4;
    n *= r0;
    n *= r2;
    n *= r1;
    n += -0.11813236f;
    return n;
} // Solution1

// Solution2 result = 0.00000322
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.61799359f;
    r1 = n *= -0.13296375f;
    n *= r0;
    n += 1.35679436f;
    r0 = n *= 0.49181727f;
    r2 = n += -0.34142175f;
    r3 = n += 4.17305565f;
    n *= 0.03768678f;
    r4 = n *= 0.58935225f;
    n = r4 *= n;
    n *= 0.46223077f;
    r5 = n *= -0.77613908f;
    r6 = n *= 24.90280914f;
    n = r6 *= n;
    n = r4 += n;
    n += -0.14406298f;
    n *= r6;
    n *= r3;
    n *= 67.37241364f;
    n *= r5;
    n = r4 += n;
    n *= 1.74056375f;
    n *= 0.03065658f;
    n += -4.57038736f;
    n *= r0;
    n *= -2.46294689f;
    r0 = n += 27.31273842f;
    n *= r4;
    n *= r0;
    n *= r2;
    n *= r1;
    n += 0.52359891f;
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
