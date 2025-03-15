// Run date: 03/15/25 12:25:44 Pacific Daylight Time
// Run duration = 1.810316 seconds
// Run generation = 0
// Run evolution = 0
// Run max result = 10.00000000
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_NEW
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 1000
// Run population = 65536
// Run passes = 1
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

    n += -1.93975163f;
    n *= 2.30578470f;
    r0 = n *= -2.02439070f;
    n *= -2.21182346f;
    n *= -0.83396304f;
    n *= -1.78248775f;
    n += -1.50324392f;
    n *= -1.28444147f;
    r1 = n += -1.09857345f;
    r2 = n += 2.06470323f;
    n *= -1.51932764f;
    r3 = n *= -0.37763658f;
    r4 = n *= 1.86047029f;
    r5 = n += -1.95489049f;
    r6 = n *= -0.20801054f;
    n = r2 *= n;
    r7 = n *= -2.23665833f;
    n = r7 += n;
    n *= 2.28407431f;
    n *= r0;
    r0 = n *= -0.36611918f;
    n *= r7;
    n += -0.98366255f;
    n *= 2.08502579f;
    n *= -1.68825126f;
    n += r3;
    n += r2;
    n += r0;
    n *= r5;
    n *= r1;
    n += r4;
    n *= r6;
    return n;
} // Solution
