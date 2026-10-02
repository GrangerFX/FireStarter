// Run date: 01/12/25 11:02:03 Pacific Standard Time
// Run duration = 24.776853 seconds
// Run generation = 80
// Run evolution = 0
// Run max result = 0.00757020
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
// Run generations = 100
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
    float r0 = -0.47747877f;
    float r1 = 1.67394948f;
    float r2 = -2.06819439f;
    float r3 = -0.00129408f;
    float r4 = 0.46173871f;
    float r5 = -13.84465408f;
    float r6 = 1.22613907f;
    float r7 = -0.23092476f;
    float r8 = -2.47519922f;
    float r9 = -0.65428430f;
    float r10 = 0.76398295f;
    float r11 = 0.22522280f;
    float r12 = -1.60102558f;
    float r13 = 2.48163176f;
    float r14 = -2.93668699f;
    float r15 = -7.30610418f;
    float r16 = 1.61441946f;
    float r17 = 0.70867813f;
    float r18 = -2.26865578f;
    float r19 = 2.22923517f;

    n += r0;
    n *= r2;
    n *= r3;
    n *= r4;
    n += r5;
    n += r6;
    n += r7;
    n *= r4;
    r9 = n;
    n *= r10;
    n += r6;
    n += r6;
    n += r12;
    n *= r14;
    n *= r4;
    n *= r4;
    n += r15;
    n *= r16;
    n *= r18;
    n *= r3;
    n *= r19;
    n *= r5;
    n *= r18;
    return n;
} // Solution
