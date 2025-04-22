// Run date: 04/21/25 15:10:04 Pacific Daylight Time
// Run duration = 5552.401939 seconds
// Run generation = 96
// Run evolution = 4
// Run max result = 0.00000011
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
// Run units = 8
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
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065866f;
    n *= 0.14970411f;
    r1 = n *= -0.07507447f;
    n *= -0.85503042f;
    n *= -1.56829560f;
    r2 = n *= -0.40841448f;
    n = r0 *= n;
    r3 = n += -2.45979500f;
    n += -1.91085434f;
    n *= r0;
    n *= r3;
    n *= 1.97983432f;
    n *= -1.23963749f;
    r3 = n *= 1.09380305f;
    r0 = n += 1.86195922f;
    r4 = n += 1.64224195f;
    n *= -0.00000046f;
    r5 = n += -0.27833709f;
    n *= r0;
    n *= -42.39487839f;
    n *= r3;
    n += 5.59737968f;
    n *= 0.00465656f;
    n = r4 += n;
    n *= r2;
    n *= 3.53291893f;
    n *= r4;
    n *= -9.52196503f;
    n += r5;
    n += r1;
    n *= -0.65632665f;
    n *= -0.64665645f;
    return n;
} // Solution
