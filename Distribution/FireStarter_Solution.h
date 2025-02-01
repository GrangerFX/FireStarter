// Run date: 02/01/25 11:27:11 Pacific Standard Time
// Run duration = 4.558011 seconds
// Run generation = 5
// Run evolution = 0
// Run max result = 0.00222636
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

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
    float r0 = -2.43394327f;
    float r1 = 0.33777088f;
    float r2 = 1.61874521f;
    float r3 = 4.52646875f;
    float r4 = -7.44605255f;
    float r5 = -0.14578271f;
    float r6 = 1.99132776f;
    float r7 = -3.92081952f;
    float r8 = -4.14714479f;
    float r9 = -4.38490915f;
    float r10 = 1.65377963f;
    float r11 = -6.38964987f;
    float r12 = 1.33281231f;
    float r13 = -5.48170090f;
    float r14 = -0.00344309f;
    float r15 = 0.82723057f;
    float r16 = -5.92470074f;
    float r17 = -2.02828026f;
    float r18 = 2.21115208f;
    float r19 = -2.05956984f;
    float r20 = 0.74002254f;

    n += r0;
    n *= r1;
    n += r2;
    n += r3;
    n += r4;
    n *= r1;
    r6 = n;
    n *= r7;
    n *= r1;
    r8 = n;
    r9 = n;
    n += r10;
    n += r11;
    n *= r12;
    n += r9;
    n *= r6;
    n += r14;
    n *= r8;
    r15 = n;
    n += r7;
    r17 = n;
    n *= r15;
    n += r8;
    n += r18;
    n *= r17;
    n *= r8;
    n *= r20;
    return n;
} // Solution
