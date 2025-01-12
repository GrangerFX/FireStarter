// Run date: 01/12/25 12:02:34 Pacific Standard Time
// Run duration = 132.975917 seconds
// Run generation = 871
// Run evolution = 0
// Run max result = 0.35369107
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2

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
    float r0 = -0.04557709f;
    float r1 = -0.13887781f;
    float r2 = 1.27898145f;
    float r3 = 1.57522500f;
    float r4 = 0.64405173f;
    float r5 = -1.35689414f;
    float r6 = 0.81238270f;
    float r7 = -2.83397651f;
    float r8 = -1.87237251f;
    float r9 = -0.29537040f;
    float r10 = 1.13366508f;
    float r11 = 1.19098759f;
    float r12 = 2.07157278f;
    float r13 = -0.52308029f;
    float r14 = -0.08207806f;
    float r15 = 1.08030772f;
    float r16 = -1.47356009f;
    float r17 = 1.42145085f;
    float r18 = -0.71539420f;

    n = r0 *= n;
    n = r1 += n;
    n = r2 *= n;
    n = r3 += n;
    n = r2 *= n;
    n += r4;
    n = r5 *= n;
    n = r5 += n;
    n = r6 *= n;
    n += r2;
    n *= r7;
    n += r8;
    n = r9 *= n;
    n += r10;
    n *= r9;
    n += r6;
    n = r11 *= n;
    n += r3;
    n = r12 *= n;
    n = r13 += n;
    n *= r12;
    n = r0 += n;
    n *= r11;
    n += r14;
    n *= r15;
    n += r13;
    n *= r16;
    n += r0;
    n *= r17;
    n += r1;
    n *= r5;
    n += r18;
    return n;
} // Solution
