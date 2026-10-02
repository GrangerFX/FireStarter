// Run date: 04/06/25 21:56:26 Pacific Daylight Time
// Run duration = 3029.715372 seconds
// Run generation = 0
// Run evolution = 0
// Run max result = 0.00005857
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

    r0 = n *= -0.15212685f;
    r1 = n *= -1.32458723f;
    n *= 0.95301211f;
    r2 = n += -0.42114139f;
    r3 = n *= -3.05504251f;
    n *= -0.08086079f;
    n *= -10.20911407f;
    n += r1;
    n *= -0.52667552f;
    n *= -0.06563309f;
    r1 = n += -0.99077511f;
    n *= 1.56899428f;
    n += r3;
    r3 = n += 2.10164022f;
    n = r0 *= n;
    n += r2;
    r2 = n += -4.69684839f;
    n += -0.53213775f;
    n *= -0.09229688f;
    n *= 1.61970186f;
    n = r3 *= n;
    r4 = n *= -0.62356389f;
    n *= 0.20461367f;
    n *= r2;
    n += r1;
    n *= r0;
    n *= -0.94159991f;
    n += -1.41088903f;
    n *= 1.13229990f;
    n += r3;
    n *= r4;
    n *= 2.20984626f;
    return n;
} // Solution
