// Run date: 02/17/25 09:31:52 Pacific Standard Time
// Run duration = 67.005240 seconds
// Run generation = 2
// Run evolution = 1
// Run max result = 0.00006228
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
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= -0.09740233f;
    r1 = n += -0.60027778f;
    r2 = n *= -1.32529795f;
    n *= -2.43317008f;
    r3 = n *= -0.50247568f;
    n += -1.63397956f;
    r4 = n *= 7.70419216f;
    r5 = n *= -0.21381864f;
    n += -1.60567772f;
    n = r3 += n;
    n *= -3.78691149f;
    n *= r3;
    n += r1;
    r1 = n += 1.71511590f;
    r3 = n += 1.05134106f;
    r6 = n *= 0.77189326f;
    r7 = n *= -0.06356151f;
    n = r7 *= n;
    n *= r7;
    n += r0;
    n = r4 *= n;
    n += r4;
    n = r2 += n;
    n *= r3;
    n *= r1;
    n += r2;
    n *= 2.22840238f;
    n *= 0.91341037f;
    n *= r5;
    n += -2.55554008f;
    n *= 0.25039005f;
    n *= r6;
    return n;
} // Solution0

// Solution1 result = 0.00000000
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= -0.06677687f;
    r1 = n += -0.27067879f;
    r2 = n *= -0.55024433f;
    n *= 0.53300160f;
    r3 = n *= 1.73363054f;
    n += -0.24538660f;
    r4 = n *= 2.66733599f;
    r5 = n *= -1.88818884f;
    n += -0.34851322f;
    n = r3 += n;
    n *= 2.93270445f;
    n *= r3;
    n += r1;
    r1 = n += -1.67468214f;
    r3 = n += -0.20943801f;
    r6 = n *= 0.63062179f;
    r7 = n *= -0.16200429f;
    n = r7 *= n;
    n *= r7;
    n += r0;
    n = r4 *= n;
    n += r4;
    n = r2 += n;
    n *= r3;
    n *= r1;
    n += r2;
    n *= 1.83741140f;
    n *= -1.44114780f;
    n *= r5;
    n += 0.13684767f;
    n *= 1.04004288f;
    n *= r6;
    return n;
} // Solution1

// Solution2 result = 0.00000000
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= -0.13358194f;
    r1 = n += 0.24408928f;
    r2 = n *= 1.04147577f;
    n *= 2.74805093f;
    r3 = n *= -0.48863134f;
    n += 0.06214745f;
    r4 = n *= 0.35725167f;
    r5 = n *= -2.16032481f;
    n += -0.07031519f;
    n = r3 += n;
    n *= -10.98138618f;
    n *= r3;
    n += r1;
    r1 = n += 3.28944945f;
    r3 = n += -1.99245536f;
    r6 = n *= -0.56199670f;
    r7 = n *= 2.37929893f;
    n = r7 *= n;
    n *= r7;
    n += r0;
    n = r4 *= n;
    n += r4;
    n = r2 += n;
    n *= r3;
    n *= r1;
    n += r2;
    n *= -11.23724651f;
    n *= 0.57151431f;
    n *= r5;
    n += -4.61030436f;
    n *= 0.42810091f;
    n *= r6;
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
