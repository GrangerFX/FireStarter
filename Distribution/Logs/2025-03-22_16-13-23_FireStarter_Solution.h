// Run date: 03/22/25 16:13:23 Pacific Daylight Time
// Run duration = 88.107465 seconds
// Run generation = 17
// Run evolution = 2
// Run max result = 0.00014544
// Run variations = 3
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_CPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 262144
// Run passes = 512
// Run attempts = 0
// Run optimize = 8

// Run scale = 0.300000f
// Run startScale = 2.500000f
// Run startResult = 10.000000f

#define SOLUTION_VARIATIONS 3

#ifndef __CUDACC__
#include <cmath>
#endif

#if 0
namespace Constants {
    constexpr long double PIld = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899L; // 80 digits of precision but long double is only 80 bits.
    constexpr double PId = 3.1415926535897932;
    constexpr float PIf = 3.14159265f;
} // Constants
#endif

#define SOLUTION_PI 3.14159265f
#define SOLUTION_MIN 0.0f
#define SOLUTION_MAX (2.0f * SOLUTION_PI)

inline float SolutionTarget(float n, unsigned int variation = 0)
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

inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.98808640f;
    n *= 1.16875982f;
    r1 = n *= -0.62088931f;
    r2 = n += 0.33627081f;
    n *= -0.16858375f;
    n = r2 += n;
    r3 = n += -0.74020720f;
    r4 = n *= -0.95854664f;
    n += r3;
    n *= r1;
    r1 = n += -2.32739043f;
    r3 = n += 1.54186392f;
    n = r2 *= n;
    n += -0.54809010f;
    n += 0.27204120f;
    n *= 0.29466313f;
    n *= r1;
    n += -1.15745974f;
    n *= -2.40303254f;
    n += r4;
    r4 = n += -2.53057170f;
    r1 = n *= 2.38074422f;
    n *= 1.51009738f;
    n *= 0.05149963f;
    n *= -0.16671054f;
    n *= r0;
    n *= r1;
    n += r4;
    n *= -1.28777266f;
    n += 0.05928387f;
    n += r2;
    n *= r3;
    return n;
} // Solution0

inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.34151453f;
    n *= 1.11780560f;
    r1 = n *= 1.13157237f;
    r2 = n += 0.77766407f;
    n *= -0.04602018f;
    n = r2 += n;
    r3 = n += 1.93509817f;
    r4 = n *= -0.67643571f;
    n += r3;
    n *= r1;
    r1 = n += 0.18437180f;
    r3 = n += -0.76017231f;
    n = r2 *= n;
    n += -1.50358057f;
    n += 0.73181939f;
    n *= -0.54367709f;
    n *= r1;
    n += -1.40776896f;
    n *= 1.47259176f;
    n += r4;
    r4 = n += 1.23044193f;
    r1 = n *= 0.17885315f;
    n *= 0.01891426f;
    n *= 7.05875540f;
    n *= 5.33453417f;
    n *= r0;
    n *= r1;
    n += r4;
    n *= 0.94500041f;
    n += 1.28737295f;
    n += r2;
    n *= r3;
    return n;
} // Solution1

inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.97156918f;
    n *= 0.63139039f;
    r1 = n *= -0.29409608f;
    r2 = n += -1.15886462f;
    n *= 2.47137022f;
    n = r2 += n;
    r3 = n += 1.26998210f;
    r4 = n *= -0.61247540f;
    n += r3;
    n *= r1;
    r1 = n += -1.44047558f;
    r3 = n += -0.30161944f;
    n = r2 *= n;
    n += -2.17065573f;
    n += -0.87568182f;
    n *= -0.46475273f;
    n *= r1;
    n += -1.64348459f;
    n *= 1.23743832f;
    n += r4;
    r4 = n += 1.81404173f;
    r1 = n *= -6.63994312f;
    n *= 0.00087094f;
    n *= -0.22816627f;
    n *= 4.02459192f;
    n *= r0;
    n *= r1;
    n += r4;
    n *= -0.86312592f;
    n += -2.90957689f;
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
