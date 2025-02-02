// Run date: 02/02/25 11:15:17 Pacific Standard Time
// Run duration = 859.985483 seconds
// Run generation = 2
// Run evolution = 0
// Run max result = 0.00000017
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 4

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

    n += -3.10811424f;
    r0 = n += -0.03347845f;
    r1 = n *= 0.75305337f;
    r2 = n *= 2.68988967f;
    r3 = n *= 0.02941432f;
    n *= -0.95326132f;
    r4 = n *= 0.55107623f;
    n = r4 *= n;
    n *= 13.65281296f;
    n *= r4;
    n += 0.38345635f;
    n *= r1;
    n *= 1.17371225f;
    n *= r3;
    r3 = n += -1.19997025f;
    r1 = n *= -2.07493258f;
    r4 = n += 0.71625918f;
    n += 1.10621405f;
    n *= 2.53270364f;
    n = r1 *= n;
    n *= r2;
    n += r0;
    n *= 1.10579455f;
    n *= 0.91044039f;
    r0 = n *= -0.05482613f;
    n *= r3;
    n += r0;
    n *= r1;
    n *= -0.13613233f;
    n *= r4;
    n *= 0.46832198f;
    n *= 0.29061723f;
    return n;
} // Solution
