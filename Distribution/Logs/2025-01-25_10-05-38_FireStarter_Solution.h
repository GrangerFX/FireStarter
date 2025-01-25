// Run date: 01/25/25 10:05:38 Pacific Standard Time
// Run duration = 249.406654 seconds
// Run generation = 277
// Run evolution = 0
// Run max result = 0.00000229
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
    float r0 = -3.14159274f;
    float r1 = 0.34797636f;
    float r2 = 0.61749887f;
    float r3 = 5.66898584f;
    float r4 = 11.97434711f;
    float r5 = 3.47254181f;
    float r6 = -2.58925271f;
    float r7 = -5.11255980f;
    float r8 = -1.97063088f;
    float r9 = -0.00000006f;
    float r10 = 2.22958565f;
    float r11 = -1.85622382f;
    float r12 = 5.93080711f;
    float r13 = -5.32765961f;
    float r14 = 0.24187465f;
    float r15 = 0.96064383f;
    float r16 = -1.00443172f;
    float r17 = -1.87243891f;
    float r18 = -2.47447228f;
    float r19 = 1.47197056f;

    n += r0;
    n *= r1;
    n *= r2;
    r4 = n;
    n *= r4;
    r5 = n;
    n += r6;
    n *= r5;
    n += r8;
    n += r9;
    n += r10;
    n *= r11;
    n *= r14;
    n *= r15;
    n += r16;
    n += r17;
    r15 = n;
    n += r5;
    n *= r15;
    n *= r5;
    n += r18;
    n *= r16;
    n *= r4;
    n *= r17;
    n += r9;
    return n;
} // Solution
