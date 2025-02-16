// Run date: 02/16/25 15:08:47 Pacific Standard Time
// Run duration = 43.023745 seconds
// Run generation = 7
// Run evolution = 0
// Run max result = 0.00001929
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
    float r0, r1, r2, r3;

    n *= 2.89183879f;
    n *= 0.46932945f;
    n += -3.99595261f;
    n += -0.91964817f;
    n += 0.65175241f;
    r0 = n *= 1.12689805f;
    r1 = n *= -0.01784401f;
    r2 = n *= -1.47438943f;
    n = r0 *= n;
    n += r0;
    n += -0.77308869f;
    n *= -3.71099472f;
    n *= 0.05669758f;
    r0 = n += 2.01497102f;
    r3 = n *= -1.36149108f;
    n = r0 *= n;
    n *= -0.74310595f;
    n = r1 *= n;
    n *= r1;
    n += 0.16662423f;
    r1 = n *= 1.67561233f;
    n *= -2.18867731f;
    n *= -2.23612142f;
    n *= -1.04141450f;
    n *= r3;
    n += r0;
    n *= -1.84500253f;
    n *= 1.02555072f;
    n += 1.42035186f;
    n += r1;
    n *= r2;
    n *= -4.18863726f;
    return n;
} // Solution
