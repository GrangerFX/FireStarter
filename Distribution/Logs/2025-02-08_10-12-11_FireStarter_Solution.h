// Run date: 02/08/25 10:12:11 Pacific Standard Time
// Run duration = 64.506289 seconds
// Run generation = 7
// Run evolution = 0
// Run max result = 0.00000363
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
    float r0, r1, r2, r3, r4;

    n *= 0.99869990f;
    r0 = n *= 0.16249493f;
    n *= 1.21646237f;
    r1 = n *= 1.06364560f;
    n *= 0.58993399f;
    r2 = n *= -1.54203200f;
    r3 = n *= -0.64842576f;
    n *= 0.15095606f;
    n += -2.02862906f;
    n += r1;
    n *= r3;
    n = r0 += n;
    n += -0.41243953f;
    r3 = n += -1.90647697f;
    n = r0 *= n;
    n = r0 += n;
    r1 = n += 1.92526865f;
    n += 14.79920959f;
    n += -3.76519489f;
    r4 = n *= -0.99471456f;
    n *= 0.07290294f;
    n *= r3;
    r3 = n *= -0.00218851f;
    n *= r2;
    n *= -0.00766098f;
    n += 22.65292549f;
    n *= 1.72440708f;
    n *= r1;
    n *= -6.58448648f;
    n += r4;
    n *= r0;
    n *= r3;
    return n;
} // Solution
