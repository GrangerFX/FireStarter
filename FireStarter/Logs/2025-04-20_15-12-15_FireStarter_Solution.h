// Run date: 04/20/25 15:12:15 Pacific Daylight Time
// Run duration = 2514.627166 seconds
// Run generation = 910
// Run evolution = 7
// Run max result = 0.00000872
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

inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.14159274f;
    r0 = n *= 0.88789922f;
    r1 = n *= 0.26107287f;
    r2 = n *= 0.19525245f;
    n *= r2;
    n += 2.44969225f;
    r2 = n += -4.04117680f;
    r3 = n *= -1.66824400f;
    n *= -0.95839787f;
    n = r2 *= n;
    n *= -1.38251138f;
    r4 = n += 5.08992815f;
    r5 = n += -0.94399238f;
    n += r2;
    n *= r1;
    n *= r4;
    n *= -0.22876546f;
    n *= -0.60462624f;
    n *= -1.09828734f;
    n *= -0.29065102f;
    n = r3 *= n;
    n *= 14.06520271f;
    n = r5 *= n;
    n = r0 += n;
    n *= r3;
    n *= r0;
    n = r5 += n;
    n += 2.04189706f;
    n *= 0.00000000f;
    n *= -5.06222248f;
    n += r5;
    n *= -1.36347079f;
    return n;
} // Solution0

inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.09065509f;
    r0 = n *= -0.84881067f;
    r1 = n *= -1.33685470f;
    r2 = n *= -0.03800767f;
    n *= r2;
    n += -2.35962796f;
    r2 = n += 2.31618786f;
    r3 = n *= 0.14485221f;
    n *= 2.62370491f;
    n = r2 *= n;
    n *= -20.10730362f;
    r4 = n += -0.54372603f;
    r5 = n += -3.64473224f;
    n += r2;
    n *= r1;
    n *= r4;
    n *= -0.18187594f;
    n *= -2.60829496f;
    n *= -1.07296765f;
    n *= 1.58442628f;
    n = r3 *= n;
    n *= 4.45135164f;
    n = r5 *= n;
    n = r0 += n;
    n *= r3;
    n *= r0;
    n = r5 += n;
    n += -0.51817465f;
    n *= -0.03961236f;
    n *= -1.39503777f;
    n += r5;
    n *= 4.12545490f;
    return n;
} // Solution1

inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.61799312f;
    r0 = n *= 0.37940642f;
    r1 = n *= -0.41306263f;
    r2 = n *= -0.20439517f;
    n *= r2;
    n += -0.32983026f;
    r2 = n += 1.57007635f;
    r3 = n *= -2.42934132f;
    n *= -0.67369425f;
    n = r2 *= n;
    n *= 0.83883011f;
    r4 = n += -2.23761415f;
    r5 = n += -2.93180466f;
    n += r2;
    n *= r1;
    n *= r4;
    n *= -0.32960343f;
    n *= 4.05907536f;
    n *= 1.67955530f;
    n *= 2.24344635f;
    n = r3 *= n;
    n *= 0.74236995f;
    n = r5 *= n;
    n = r0 += n;
    n *= r3;
    n *= r0;
    n = r5 += n;
    n += -0.32108960f;
    n *= 1.39633477f;
    n *= 1.07031798f;
    n += r5;
    n *= -1.09111392f;
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
