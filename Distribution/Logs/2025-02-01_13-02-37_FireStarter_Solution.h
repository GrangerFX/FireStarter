// Run date: 02/01/25 13:02:37 Pacific Standard Time
// Run duration = 5473.180467 seconds
// Run generation = 317
// Run evolution = 0
// Run max result = 0.00000124
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
    float r0 = -3.79844189f;
    float r1 = -0.27387011f;
    float r2 = 1.96180165f;
    float r3 = 11.35546589f;
    float r4 = -2.31557798f;
    float r5 = 10.23891449f;
    float r6 = -0.24560411f;
    float r7 = 0.02179924f;
    float r8 = 2.35374618f;
    float r9 = -0.74145854f;
    float r10 = -0.10622724f;
    float r11 = 0.49520251f;
    float r12 = -0.73733401f;
    float r13 = -2.05626583f;
    float r14 = -1.65026557f;
    float r15 = 2.66177535f;
    float r16 = 3.94753766f;
    float r17 = 0.64766794f;

    n += r0;
    n *= r1;
    n *= r1;
    n *= r2;
    r3 = n;
    n *= r4;
    n += r6;
    n += r7;
    r8 = n;
    n *= r8;
    n += r9;
    n *= r0;
    n *= r10;
    r3 = n;
    n *= r11;
    n += r12;
    r13 = n;
    n += r14;
    n *= r4;
    n *= r13;
    n *= r13;
    n += r16;
    n *= r3;
    n *= r13;
    n += r7;
    n += r17;
    n *= r8;
    return n;
} // Solution
