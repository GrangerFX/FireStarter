// Run date: 05/14/22 15:58:15 Pacific Daylight Time
// Run duration = 1.483402 seconds
// Run count = 25
// Run units = 1
// Run population = 69632
// Run iterations = 512
// Run generations = 100
// Run samples = 15
// State Generation = 1228800

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define SOLUTION_VARIATIONS 3

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

// Precision = 0.000007

// Solution0 precision = 0.000000
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.39082935f;
    r0 = n += -1.22782683f;
    r1 = n *= 0.70161861f;
    r2 = n += 0.00000018f;
    n *= r1;
    n += -0.13062277f;
    r1 = n += -0.61150080f;
    r3 = n += -0.80745679f;
    r4 = n += -3.12970424f;
    n += r3;
    n += -1.06180024f;
    r3 = n *= 0.23988937f;
    n *= -0.97961432f;
    n = r2 *= n;
    r5 = n *= 0.06326402f;
    n *= r0;
    r0 = n *= 0.48431897f;
    n *= 0.00686696f;
    n *= -0.68492812f;
    n += r0;
    r0 = n += -0.69889104f;
    n *= -1.06169915f;
    r6 = n *= 0.46459153f;
    n += -0.72083765f;
    n *= r5;
    n *= r0;
    n += r2;
    n *= r3;
    n *= r6;
    n *= r4;
    n *= r1;
    n += 0.00000022f;
    return n;
} // Solution0

// Solution1 precision = 0.000007
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.32444158f;
    r0 = n += -1.00272751f;
    r1 = n *= -0.49065787f;
    r2 = n += 0.00000723f;
    n *= r1;
    n += 0.55058831f;
    r1 = n += -1.14034915f;
    r3 = n += 1.66179240f;
    r4 = n += -4.34563065f;
    n += r3;
    n += 0.39247650f;
    r3 = n *= -1.34101653f;
    n *= -1.08734334f;
    n = r2 *= n;
    r5 = n *= -0.26946032f;
    n *= r0;
    r0 = n *= 0.14119960f;
    n *= -1.87830734f;
    n *= -0.09601906f;
    n += r0;
    r0 = n += 1.64957154f;
    n *= 0.24745938f;
    r6 = n *= -2.60338354f;
    n += 2.12850189f;
    n *= r5;
    n *= r0;
    n += r2;
    n *= r3;
    n *= r6;
    n *= r4;
    n *= r1;
    n += -0.11814611f;
    return n;
} // Solution1

// Solution2 precision = 0.000002
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.32515395f;
    r0 = n += -0.85125005f;
    r1 = n *= -0.75090331f;
    r2 = n += 0.00000105f;
    n *= r1;
    n += -4.04690409f;
    r1 = n += -0.40886262f;
    r3 = n += 0.68060267f;
    r4 = n += -1.08682358f;
    n += r3;
    n += 2.09973621f;
    r3 = n *= 0.86401922f;
    n *= -0.37824535f;
    n = r2 *= n;
    r5 = n *= -0.53128499f;
    n *= r0;
    r0 = n *= -0.11531754f;
    n *= 0.09530140f;
    n *= 1.11377954f;
    n += r0;
    r0 = n += 0.05207544f;
    n *= 0.80410755f;
    r6 = n *= -0.36552659f;
    n += -0.83470953f;
    n *= r5;
    n *= r0;
    n += r2;
    n *= r3;
    n *= r6;
    n *= r4;
    n *= r1;
    n += 0.52359742f;
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
