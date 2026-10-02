// Run date: 04/21/25 09:53:52 Pacific Daylight Time
// Run duration = 542.204192 seconds
// Run generation = 0
// Run evolution = 0
// Run max result = 0.00000015
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
// Run tests = 16
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
    switch (variation & 3) {
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

    r0 = n *= -0.66057330f;
    r1 = n *= 1.14160883f;
    n += 2.36912632f;
    n *= -8.83870506f;
    n *= 0.25342450f;
    r2 = n *= -1.90180838f;
    n = r1 += n;
    n *= -0.59608018f;
    n *= -0.67925853f;
    n *= r0;
    n = r1 += n;
    n += -10.09234715f;
    r0 = n *= -0.00025161f;
    r3 = n += 0.02547663f;
    r4 = n *= -2.44411182f;
    r5 = n += -0.80513412f;
    n *= r5;
    r5 = n *= -1.77240789f;
    n = r4 += n;
    n *= r3;
    n *= r5;
    n *= r1;
    n += r4;
    r4 = n *= 1.32994974f;
    n = r4 += n;
    n += -3.85859942f;
    n *= r4;
    n += -1.20295322f;
    n *= r2;
    n *= -1.43023264f;
    n *= r0;
    n *= -2.91636825f;
    return n;
} // Solution
