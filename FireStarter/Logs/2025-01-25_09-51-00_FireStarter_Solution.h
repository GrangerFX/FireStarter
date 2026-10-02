// Run date: 01/25/25 09:51:00 Pacific Standard Time
// Run duration = 239.322066 seconds
// Run generation = 805
// Run evolution = 0
// Run max result = 0.00067905
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
    float r0 = -0.04951024f;
    float r1 = 1.94636989f;
    float r2 = 0.18212980f;
    float r3 = -2.67496252f;
    float r4 = 1.61493731f;
    float r5 = -0.40221620f;
    float r6 = -0.57308698f;
    float r7 = -0.22985341f;
    float r8 = 0.44740722f;
    float r9 = 1.36173785f;
    float r10 = -0.47528702f;
    float r11 = -2.04911232f;
    float r12 = -0.69708753f;
    float r13 = -0.84527665f;
    float r14 = 2.40025353f;
    float r15 = -0.12774079f;
    float r16 = 1.25093222f;
    float r17 = -4.09535217f;

    n *= r0;
    n *= r1;
    n *= r2;
    n += r1;
    n *= r3;
    n *= r5;
    n *= r6;
    n += r8;
    r9 = n;
    r10 = n;
    n *= r8;
    n += r12;
    n *= r10;
    r13 = n;
    r9 = n;
    n *= r8;
    n *= r10;
    n *= r2;
    n *= r15;
    n *= r2;
    n += r13;
    n += r13;
    n *= r16;
    n *= r17;
    n += r9;
    n += r10;
    return n;
} // Solution
