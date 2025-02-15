// Run date: 02/15/25 15:00:13 Pacific Standard Time
// Run duration = 51.480409 seconds
// Run generation = 38
// Run evolution = 3
// Run max result = 0.00181949
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
    float r0, r1, r2, r3;

    n *= -1.92991674f;
    n *= -0.33647910f;
    n *= -0.01612892f;
    n += -2.07170153f;
    n *= 1.08459330f;
    r0 = n *= -1.56801903f;
    r1 = n *= -0.62321049f;
    n *= r1;
    r1 = n *= -0.03558043f;
    n = r0 *= n;
    r2 = n *= -2.20152998f;
    n *= 1.38228035f;
    n = r0 *= n;
    r3 = n += 2.77866983f;
    n *= 0.40722907f;
    n = r2 *= n;
    n = r0 *= n;
    n *= r3;
    n = r0 *= n;
    n = r0 *= n;
    n *= r1;
    n += r2;
    n = r0 *= n;
    n *= -1.76206255f;
    n += 3.01519370f;
    n = r0 *= n;
    n = r0 *= n;
    n += -2.79595137f;
    n = r0 *= n;
    n = r0 *= n;
    n *= r0;
    n += -13.58836365f;
    return n;
} // Solution
