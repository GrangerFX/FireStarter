// Run date: 02/16/25 19:35:25 Pacific Standard Time
// Run duration = 23.923395 seconds
// Run generation = 5
// Run evolution = 1
// Run max result = 0.00000204
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_CPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 262144
// Run passes = 512
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

    r0 = n += -1.57079804f;
    r1 = n *= -0.06241390f;
    n = r1 *= n;
    n += -0.23370637f;
    r2 = n *= -1.71521127f;
    r3 = n += -0.25248030f;
    r4 = n += 3.14774919f;
    n = r2 *= n;
    r5 = n += -1.26059341f;
    r6 = n *= 2.24405718f;
    n *= -0.00046916f;
    r7 = n *= 28.40366554f;
    n *= r0;
    n *= r1;
    n += 5.64911604f;
    n *= r3;
    r3 = n *= 0.51338047f;
    n += r7;
    n += 8.11582851f;
    r7 = n += 0.79209089f;
    r1 = n *= 0.28730115f;
    n *= -0.14930736f;
    n *= -0.98960978f;
    n = r2 *= n;
    n *= r1;
    n += 1.80328059f;
    n *= r5;
    n += r4;
    n *= r2;
    n *= r6;
    n *= r7;
    n *= r3;
    return n;
} // Solution
