// Run date: 04/19/25 12:07:06 Pacific Daylight Time
// Run duration = 141.432323 seconds
// Run generation = 46
// Run evolution = 6
// Run max result = 0.00000311
// Run variations = 1
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
// Run units = 1
// Run states = 16
// Run population = 262144
// Run generations = 0
// Run passes = 512
// Run samples = 15
// Run iterations = 64
// Run candidates = 0
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.300000f
// Run startScale = 2.500000f
// Run startResult = 10.000000f

#define SOLUTION_VARIATIONS 1

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
    switch (variation & 3) {
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

inline float Solution(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.25188217f;
    r1 = n *= -1.47898912f;
    n *= -1.28075397f;
    r2 = n += 0.16112424f;
    r3 = n *= 0.38189864f;
    n += r2;
    n *= 0.73249888f;
    n *= -0.96377468f;
    r2 = n += 2.44081426f;
    n += -0.13210857f;
    r4 = n += -1.84908676f;
    n = r2 += n;
    n *= 0.06745535f;
    n = r3 += n;
    r5 = n += 1.22174489f;
    n *= r3;
    n = r4 *= n;
    n += 1.57911325f;
    r3 = n *= -1.45996177f;
    n *= r4;
    r4 = n += -0.73238158f;
    r6 = n *= 0.06824604f;
    n += r1;
    n += r3;
    n += r5;
    n *= r0;
    n *= r6;
    n += r4;
    n *= -1.64411366f;
    n += -0.47030914f;
    n *= 0.28555781f;
    n *= r2;
    return n;
} // Solution
