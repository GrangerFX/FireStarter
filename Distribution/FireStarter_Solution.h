// Run date: 03/02/25 11:46:21 Pacific Standard Time
// Run duration = 11.026516 seconds
// Run generation = 2
// Run evolution = 0
// Run max result = 1.82481635
// Run variations = 3
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

#define SOLUTION_VARIATIONS 3

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

inline float Solution0(float n)
{
    float r0;

    r0 = n *= -0.01134519f;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n *= r0;
    return n;
} // Solution0

inline float Solution1(float n)
{
    float r0;

    r0 = n *= -0.01134519f;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n *= r0;
    return n;
} // Solution1

inline float Solution2(float n)
{
    float r0;

    r0 = n *= 0.15915494f;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n = r0 *= n;
    n *= r0;
    return n;
} // Solution2

inline float Solution(float n, unsigned int variation)
{
    switch (variation) {
    case 0:
        return Solution0(n);
    case 1:
        return Solution1(n);
    case 2:
        return Solution2(n);
    }
    return 0.0f;
} // Solution
