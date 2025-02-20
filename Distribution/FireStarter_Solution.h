// Run date: 02/17/25 15:29:49 Pacific Standard Time
// Run duration = 14.108633 seconds
// Run generation = 3
// Run evolution = 0
// Run max result = 0.00000379
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
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -0.09020530f;
    n *= 0.57044709f;
    n *= 0.54627228f;
    n += -0.92276305f;
    n *= r0;
    r0 = n *= 0.13062328f;
    r1 = n += -0.74822891f;
    n *= -1.07967639f;
    r2 = n *= 1.39514482f;
    r3 = n *= -0.39646551f;
    n *= -0.82637805f;
    r4 = n += 3.91221380f;
    n *= 13.74761391f;
    n += -13.16299629f;
    n += -10.96304989f;
    r5 = n *= -0.17901452f;
    n *= 0.22758780f;
    n *= r0;
    n += r3;
    n *= 1.56596005f;
    r3 = n *= 2.00896382f;
    n += 1.24055636f;
    n *= -0.12558435f;
    n *= r5;
    n += r4;
    n += r2;
    n *= 1.97548735f;
    n *= r1;
    n *= -0.17991243f;
    r1 = n += 0.06314282f;
    n += r3;
    n *= r1;
    return n;
} // Solution
