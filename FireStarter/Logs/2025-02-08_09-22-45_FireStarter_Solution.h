// Run date: 02/08/25 09:22:45 Pacific Standard Time
// Run duration = 1463.966792 seconds
// Run generation = 32
// Run evolution = 5
// Run max result = 0.00000122
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
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.43928057f;
    r1 = n += -1.38003564f;
    n *= -6.24473476f;
    n *= -0.06258687f;
    r2 = n *= 0.63101691f;
    n *= 0.65632850f;
    r3 = n *= -1.41620886f;
    r4 = n *= 1.58048379f;
    n += r4;
    r4 = n += 0.00010876f;
    n += -1.00010133f;
    n *= r1;
    n = r0 += n;
    n *= -0.32411906f;
    r1 = n *= -0.18885194f;
    n += 1.57173073f;
    r5 = n += -0.16160065f;
    n = r1 *= n;
    n *= r4;
    n *= r2;
    n += r5;
    n *= 3.11947322f;
    n = r0 += n;
    n *= r0;
    n *= r3;
    n += 3.44772124f;
    n *= 0.16036509f;
    n *= 1.59890163f;
    n += 2.89877939f;
    n += -3.78279185f;
    n *= r1;
    n *= 8.40186501f;
    return n;
} // Solution
