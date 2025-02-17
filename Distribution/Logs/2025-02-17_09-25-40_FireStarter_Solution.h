// Run date: 02/17/25 09:25:40 Pacific Standard Time
// Run duration = 36.382235 seconds
// Run generation = 0
// Run evolution = 0
// Run max result = 0.00059932
// Run variations = 3
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
// Run generations = 0
// Run population = 262144
// Run passes = 512
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

// Solution0 result = 0.00000000
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -2.24605441f;
    r1 = n += 0.36688647f;
    n += r1;
    r1 = n *= 0.14366542f;
    r2 = n += -0.23657240f;
    n = r2 *= n;
    n += -0.55895638f;
    r3 = n *= 0.61956209f;
    n *= -0.14617626f;
    n *= 6.37946987f;
    n += 1.21621525f;
    n += 1.12667429f;
    n *= r2;
    r2 = n += -0.76324391f;
    n *= 0.62959594f;
    r4 = n += -1.68748045f;
    n *= r0;
    n *= 0.18657863f;
    n += r1;
    n *= -1.25890100f;
    n *= 0.72304946f;
    n *= r4;
    r4 = n *= -0.08421469f;
    n = r2 *= n;
    r1 = n += -2.16185665f;
    n += -7.72396898f;
    n *= r2;
    n *= r3;
    n += 4.09419584f;
    n *= r4;
    n *= 5.72994184f;
    n *= r1;
    return n;
} // Solution0

// Solution1 result = 0.00000000
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -2.24605441f;
    r1 = n += 0.36688647f;
    n += r1;
    r1 = n *= 0.14366542f;
    r2 = n += -0.23657240f;
    n = r2 *= n;
    n += -0.55895638f;
    r3 = n *= 0.61956209f;
    n *= -0.14617626f;
    n *= 6.37946987f;
    n += 1.21621525f;
    n += 1.12667429f;
    n *= r2;
    r2 = n += -0.76324391f;
    n *= 0.62959594f;
    r4 = n += -1.68748045f;
    n *= r0;
    n *= 0.18657863f;
    n += r1;
    n *= -1.25890100f;
    n *= 0.72304946f;
    n *= r4;
    r4 = n *= -0.08421469f;
    n = r2 *= n;
    r1 = n += -2.16185665f;
    n += -7.72396898f;
    n *= r2;
    n *= r3;
    n += 4.09419584f;
    n *= r4;
    n *= 5.72994184f;
    n *= r1;
    return n;
} // Solution1

// Solution2 result = 0.00000000
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -2.24605441f;
    r1 = n += 0.36688647f;
    n += r1;
    r1 = n *= 0.14366542f;
    r2 = n += -0.23657240f;
    n = r2 *= n;
    n += -0.55895638f;
    r3 = n *= 0.61956209f;
    n *= -0.14617626f;
    n *= 6.37946987f;
    n += 1.21621525f;
    n += 1.12667429f;
    n *= r2;
    r2 = n += -0.76324391f;
    n *= 0.62959594f;
    r4 = n += -1.68748045f;
    n *= r0;
    n *= 0.18657863f;
    n += r1;
    n *= -1.25890100f;
    n *= 0.72304946f;
    n *= r4;
    r4 = n *= -0.08421469f;
    n = r2 *= n;
    r1 = n += -2.16185665f;
    n += -7.72396898f;
    n *= r2;
    n *= r3;
    n += 4.09419584f;
    n *= r4;
    n *= 5.72994184f;
    n *= r1;
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
