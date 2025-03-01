// Run date: 03/01/25 10:07:24 Pacific Standard Time
// Run duration = 27.623604 seconds
// Run generation = 2
// Run evolution = 0
// Run max result = 0.00000086
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
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -0.80530405f;
    r1 = n += -2.33628845f;
    r2 = n *= 0.06312569f;
    r3 = n *= 1.54158175f;
    n *= 0.64468789f;
    r4 = n *= 1.98378408f;
    r5 = n *= -0.86756599f;
    n = r4 *= n;
    n += 1.20393145f;
    r6 = n += -0.28448829f;
    n *= 0.64925462f;
    r7 = n *= 1.11841822f;
    n = r1 *= n;
    n *= -1.92116582f;
    n = r7 *= n;
    n *= r3;
    n = r7 *= n;
    n *= r2;
    n *= r4;
    n += 1.11615849f;
    n *= r6;
    n *= 4.80659199f;
    n *= r5;
    n += 7.05728436f;
    n += r0;
    n += 8.14118099f;
    n *= -0.32850522f;
    n += r1;
    n += 5.76025820f;
    n *= -0.97257608f;
    n = r7 += n;
    n += r7;
    return n;
} // Solution
