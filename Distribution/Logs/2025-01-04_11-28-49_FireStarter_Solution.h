// Run date: 01/04/25 11:28:49 Pacific Standard Time
// Run duration = 886.674076 seconds
// Run generation = 3
// Run evolution = 0
// Run max result = 0.00000057
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

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
    float r0, r1, r2, r3, r4;

    n += -2.40071034f;
    n += -0.74088228f;
    n *= -1.01569641f;
    r0 = n *= 0.19667955f;
    r1 = n *= -2.54359674f;
    r2 = n *= -0.48429626f;
    r3 = n *= 1.71761918f;
    r4 = n *= 0.30803353f;
    n = r3 += n;
    n = r1 += n;
    n *= 2.47393084f;
    n *= r2;
    n += -1.06143987f;
    r2 = n *= 1.12648654f;
    n += -0.74851036f;
    n *= r4;
    n += -0.17531872f;
    n *= -3.87664986f;
    n += -0.67964935f;
    n *= r3;
    n *= -0.08274765f;
    r3 = n += 0.63104850f;
    n *= 2.20024610f;
    n += 2.98594809f;
    r4 = n *= 1.52775693f;
    n *= -2.50553799f;
    n += r4;
    n *= r3;
    n += 2.35015440f;
    n *= r0;
    n *= r2;
    n += r1;
    return n;
} // Solution
