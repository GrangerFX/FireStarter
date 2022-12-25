// Run date: 12/25/22 12:27:35 Pacific Standard Time
// Run duration = 25.244086 seconds
// Run count = 51
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_OPTIMIZE;
// Run units = 1;
// Run processes = 0;
// Run population = 139264;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 50;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 2.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 51

#ifndef __CUDACC__
#include <cmath>
#endif

#define SOLUTION_PI 3.14159265f
#define SOLUTION_MIN 0.0f
#define SOLUTION_MAX (2.0f * 3.14159265f)

inline float SolutionTarget(float n, unsigned int variation)
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

#define SOLUTION_VARIATIONS 3

// Precision = 0.00000131

// Solution0 precision = 0.00000131
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14159274f;
    r1 = n *= -0.19243622f;
    n = r1 *= n;
    n *= 1.14973307f;
    n += -1.58331668f;
    r2 = n *= -0.91401893f;
    r3 = n *= 1.39563656f;
    n *= -1.45034504f;
    n *= -0.37992847f;
    r4 = n *= 0.55440170f;
    n = r3 *= n;
    r5 = n *= -1.04440105f;
    r6 = n *= 0.09493364f;
    n = r1 *= n;
    r7 = n *= -2.25847626f;
    n *= r2;
    n *= -1.05586457f;
    n += -1.87769258f;
    n += -4.29694033f;
    n *= 0.05471557f;
    n = r6 *= n;
    n += 0.58684218f;
    n *= r6;
    n = r1 += n;
    n *= r7;
    n += 0.97069561f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += -0.00000007f;
    return n;
} // Solution0

// Solution1 precision = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.09065843f;
    r1 = n *= 0.88429576f;
    n = r1 *= n;
    n *= 0.00846841f;
    n += -1.71588087f;
    r2 = n *= 1.12157440f;
    r3 = n *= -1.72661078f;
    n *= -0.35199434f;
    n *= -0.45026958f;
    r4 = n *= -1.67138481f;
    n = r3 *= n;
    r5 = n *= 0.08142813f;
    r6 = n *= -0.88305944f;
    n = r1 *= n;
    r7 = n *= -0.11929268f;
    n *= r2;
    n *= -1.99589717f;
    n += -1.88688600f;
    n += -1.45983791f;
    n *= 0.14293094f;
    n = r6 *= n;
    n += 0.22747186f;
    n *= r6;
    n = r1 += n;
    n *= r7;
    n += -0.30273241f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += -0.11813167f;
    return n;
} // Solution1

// Solution2 precision = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.61799359f;
    r1 = n *= 1.64586043f;
    n = r1 *= n;
    n *= 0.01205171f;
    n += -5.06346369f;
    r2 = n *= 1.61961043f;
    r3 = n *= 1.49338746f;
    n *= 1.00484550f;
    n *= -0.25072026f;
    r4 = n *= 0.12322363f;
    n = r3 *= n;
    r5 = n *= -0.04748786f;
    r6 = n *= -0.41251209f;
    n = r1 *= n;
    r7 = n *= 0.16545756f;
    n *= r2;
    n *= -2.91617823f;
    n += 1.08420885f;
    n += -7.00492048f;
    n *= 0.10809901f;
    n = r6 *= n;
    n += -0.20608260f;
    n *= r6;
    n = r1 += n;
    n *= r7;
    n += 1.34913671f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += 0.52359873f;
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
