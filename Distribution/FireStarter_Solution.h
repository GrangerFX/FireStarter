// Run date: 02/16/25 12:08:20 Pacific Standard Time
// Run duration = 8.070628 seconds
// Run generation = 5
// Run evolution = 0
// Run max result = 0.00008190
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

    r0 = n *= -1.11292255f;
    n += -0.88972527f;
    r1 = n *= -0.03405924f;
    n += -0.29903612f;
    r2 = n *= -1.25492132f;
    n *= 0.40325233f;
    r3 = n *= -2.39026666f;
    r4 = n *= 2.26752925f;
    r5 = n *= 2.34262228f;
    n *= -20.51429749f;
    n *= 0.00107246f;
    n = r5 += n;
    n *= 0.81845063f;
    n *= r4;
    n += r5;
    r5 = n *= -2.58381295f;
    n += r2;
    r2 = n *= 2.26464295f;
    n += 1.05439520f;
    n = r3 *= n;
    n *= 2.23845077f;
    n += 2.80698776f;
    n *= r1;
    n += r3;
    n *= -0.70303649f;
    n *= r5;
    r5 = n += -0.93094432f;
    n += r2;
    n *= r5;
    n *= 0.02171186f;
    n *= r0;
    n *= -4.90137434f;
    return n;
} // Solution
