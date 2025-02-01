// Run date: 02/01/25 12:59:44 Pacific Standard Time
// Run duration = 27.938789 seconds
// Run generation = 17
// Run evolution = 0
// Run max result = 0.00003675
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
    float r0 = 0.28380093f;
    float r1 = -1.02075183f;
    float r2 = 0.72275931f;
    float r3 = 0.09335515f;
    float r4 = 3.94290972f;
    float r5 = 2.26693249f;
    float r6 = 11.95516300f;
    float r7 = -0.24160095f;
    float r8 = 6.47144890f;
    float r9 = -0.20480515f;
    float r10 = 10.43987751f;
    float r11 = -2.18363905f;
    float r12 = 0.97891110f;
    float r13 = 1.33637977f;
    float r14 = -0.31352338f;
    float r15 = 2.22755337f;
    float r16 = -0.99202895f;
    float r17 = -3.42838097f;
    float r18 = 1.41208291f;

    n *= r0;
    n += r1;
    n *= r2;
    n += r3;
    r4 = n;
    n *= r1;
    n *= r4;
    n *= r5;
    n *= r7;
    n += r9;
    r10 = n;
    n += r11;
    n += r12;
    r1 = n;
    r13 = n;
    n *= r14;
    n *= r13;
    n *= r1;
    n *= r15;
    n *= r13;
    n *= r15;
    n += r16;
    n *= r17;
    n += r11;
    n *= r10;
    n += r14;
    n *= r4;
    return n;
} // Solution
