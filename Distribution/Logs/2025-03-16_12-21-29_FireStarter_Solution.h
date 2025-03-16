// Run date: 03/16/25 12:21:29 Pacific Daylight Time
// Run duration = 14.698638 seconds
// Run generation = 0
// Run evolution = 0
// Run max result = 0.00000194
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
// Run tests = 256
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 262144
// Run passes = 512
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

inline float Solution(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -1.57079661f;
    r1 = n *= -0.09058330f;
    n = r1 *= n;
    r2 = n += -0.02024581f;
    r3 = n *= 1.63028860f;
    n *= -2.73998761f;
    r4 = n += 3.57299876f;
    n *= r2;
    r2 = n += -0.46152434f;
    r5 = n *= -2.34309530f;
    n *= 0.06579512f;
    r6 = n *= -3.97651243f;
    n *= r0;
    n *= r1;
    n += 4.63582754f;
    n *= 0.43322989f;
    r1 = n *= 1.00115812f;
    n += r6;
    n += -1.90849781f;
    r6 = n += -1.81837213f;
    r0 = n *= 0.13306300f;
    n *= -0.08311944f;
    r7 = n *= -16.64663696f;
    n *= r7;
    n *= r0;
    n += -4.08318949f;
    n *= r2;
    n += r4;
    n *= r3;
    n *= r5;
    n *= r6;
    n *= r1;
    return n;
} // Solution
