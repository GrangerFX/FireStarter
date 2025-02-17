// Run date: 02/16/25 19:29:37 Pacific Standard Time
// Run duration = 40.864229 seconds
// Run generation = 0
// Run evolution = 0
// Run max result = 0.00000251
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

    r0 = n += -1.57079613f;
    r1 = n *= -0.09058128f;
    n = r1 *= n;
    r2 = n += -0.02024489f;
    r3 = n *= 1.63006496f;
    n *= -2.74071407f;
    r4 = n += 3.57188010f;
    n *= r2;
    r2 = n += -0.46131235f;
    r5 = n *= -2.34018302f;
    n *= 1.48980367f;
    r6 = n *= -0.16783680f;
    n *= r0;
    n *= r1;
    n += 4.60484505f;
    n *= 0.42625254f;
    r1 = n *= 1.00638843f;
    n += r6;
    n += -1.90539336f;
    r6 = n += -1.82120776f;
    r0 = n *= 0.91238606f;
    n *= 0.00757299f;
    r7 = n *= -18.21115303f;
    n *= r7;
    n *= r0;
    n += -4.10730553f;
    n *= r2;
    n += r4;
    n *= r3;
    n *= r5;
    n *= r6;
    n *= r1;
    return n;
} // Solution
