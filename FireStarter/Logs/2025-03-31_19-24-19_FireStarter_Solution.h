// Run date: 03/31/25 19:24:19 Pacific Daylight Time
// Run duration = 2595.213257 seconds
// Run generation = 38
// Run evolution = 3
// Run max result = 0.00000380
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 4

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
// Run population = 262144
// Run generations = 0
// Run passes = 512
// Run samples = 15
// Run iterations = 64
// Run candidates = 0
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

    r0 = n += -2.09599280f;
    n += 0.76105684f;
    r1 = n *= 0.90853602f;
    n += -1.77177966f;
    n *= 3.38651490f;
    n *= 0.30671990f;
    n += 1.39520895f;
    n *= 0.38254401f;
    r2 = n *= -0.01848923f;
    n *= r1;
    n += 0.50164276f;
    n *= 6.39575481f;
    r1 = n *= -0.24917568f;
    n *= 1.10779035f;
    n = r1 *= n;
    r3 = n *= -4.18183327f;
    r4 = n += 2.13912845f;
    n *= r4;
    r4 = n *= 2.92423391f;
    n += -2.58933949f;
    n *= -1.86982203f;
    n *= r3;
    n *= 0.17647798f;
    n = r4 += n;
    n += 23.04196548f;
    n *= r0;
    r0 = n += 17.81747246f;
    n *= -0.99706501f;
    n += r0;
    n *= r2;
    n += r1;
    n *= r4;
    return n;
} // Solution
