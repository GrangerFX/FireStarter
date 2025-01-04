// Run date: 01/04/25 14:19:01 Pacific Standard Time
// Run duration = 40.824237 seconds
// Run generation = 12
// Run evolution = 0
// Run max result = 0.00000009
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 65536
// Run passes = 384
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
    float r0, r1, r2, r3, r4, r5;

    n *= 0.28444529f;
    n *= 1.94107974f;
    n += -0.98090595f;
    r0 = n += -0.75366467f;
    r1 = n *= 0.58766133f;
    n *= r1;
    n *= 0.26888537f;
    n *= -2.10415173f;
    n *= -0.70325518f;
    n *= -2.63363481f;
    r1 = n += 0.45008788f;
    n *= -0.06166511f;
    r2 = n += -1.07602096f;
    n = r2 *= n;
    r3 = n += 0.50047058f;
    r4 = n *= 1.08052313f;
    n += -1.30024171f;
    n *= -1.53575158f;
    n *= 0.24675409f;
    n *= 12.30806446f;
    n *= -0.09833197f;
    r5 = n *= 0.14474928f;
    n *= r3;
    n = r2 += n;
    n *= r0;
    n *= r2;
    n *= -16.85173416f;
    n = r5 *= n;
    n *= r1;
    n *= r4;
    n *= 0.91992629f;
    n += r5;
    return n;
} // Solution
