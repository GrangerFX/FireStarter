// Run date: 02/15/25 14:57:30 Pacific Standard Time
// Run duration = 11.423319 seconds
// Run generation = 3
// Run evolution = 0
// Run max result = 0.00016086
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

    r0 = n *= -0.11615106f;
    r1 = n += 0.76306623f;
    r2 = n += -1.79174995f;
    n *= 2.27215219f;
    r3 = n *= -0.47443393f;
    r4 = n += -2.53887248f;
    n *= -0.44413918f;
    n *= 24.36548996f;
    n *= -0.00697680f;
    n = r3 += n;
    r5 = n += -1.86981702f;
    n *= 0.66465211f;
    n *= r2;
    r2 = n *= -0.67710906f;
    n = r3 *= n;
    n += r1;
    r1 = n *= 1.76139379f;
    n *= 0.61164892f;
    n += r2;
    r2 = n += -0.98519135f;
    n *= -0.88329977f;
    n *= r4;
    n += 0.10213143f;
    n *= r0;
    n += r5;
    n = r3 *= n;
    n += r3;
    n *= -1.94024658f;
    n *= -5.32109261f;
    n += -7.22370291f;
    n *= r2;
    n *= r1;
    return n;
} // Solution
