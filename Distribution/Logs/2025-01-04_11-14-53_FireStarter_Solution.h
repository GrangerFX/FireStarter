// Run date: 01/04/25 11:14:53 Pacific Standard Time
// Run duration = 179.680140 seconds
// Run generation = 13
// Run evolution = 0
// Run max result = 0.00000005
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 2

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
    float r0, r1, r2, r3, r4, r5, r6;

    n += -1.66114223f;
    r0 = n += -1.48045039f;
    r1 = n *= 0.75315487f;
    n += r1;
    r1 = n *= -0.90119386f;
    n *= r0;
    r0 = n += 3.72383738f;
    n += 2.54113960f;
    r2 = n *= -0.01092121f;
    r3 = n += -0.45025373f;
    n += -0.51566643f;
    r4 = n *= 0.47394118f;
    n *= 0.61074448f;
    r5 = n *= -0.04090624f;
    n = r2 += n;
    n *= r5;
    r5 = n *= -7.18780231f;
    n *= 1.52864110f;
    r6 = n *= 10.92085171f;
    n += r2;
    r2 = n += 4.91928148f;
    n *= r5;
    r5 = n += 0.16114920f;
    n *= r0;
    n += r6;
    n *= 0.21320084f;
    n += r5;
    n *= r2;
    n *= -0.53643823f;
    n += r4;
    n *= r1;
    n *= r3;
    return n;
} // Solution
