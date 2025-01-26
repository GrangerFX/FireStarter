// Run date: 01/26/25 10:49:29 Pacific Standard Time
// Run duration = 1.984302 seconds
// Run generation = 2
// Run evolution = 0
// Run max result = 0.00005688
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
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -2.63793063f;
    n *= -0.04109532f;
    n += -1.02171421f;
    r1 = n *= -0.04232062f;
    n *= -3.23993444f;
    n = r0 *= n;
    r2 = n += -0.77399993f;
    n *= -1.40668368f;
    r3 = n *= -0.14569788f;
    r4 = n *= 1.80543303f;
    r5 = n *= -0.06177007f;
    n += r4;
    n *= -0.51309961f;
    r4 = n += -0.13787155f;
    n += r0;
    r0 = n += 0.68246466f;
    n += 16.83252525f;
    r6 = n += 14.13730145f;
    n *= 1.07225621f;
    n *= -0.83632565f;
    n = r0 *= n;
    n += -20.09799194f;
    n += r3;
    n *= r5;
    n *= 15.01434040f;
    n += r6;
    n += r1;
    n *= r2;
    n *= -0.20620745f;
    n *= r0;
    n *= 0.23145045f;
    n *= r4;
    return n;
} // Solution
