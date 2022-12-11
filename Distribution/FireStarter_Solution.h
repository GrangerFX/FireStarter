// Run date: 12/11/22 12:27:56 Pacific Standard Time
// Run duration = 63.812919 seconds
// Run count = 12
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_EVOLVE;
// Run units = 10;
// Run processes = 16;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 12

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

// Precision = 0.00004235

// Solution0 precision = 0.00004235
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -1.19008958f;
    r0 = n *= -0.44851944f;
    r1 = n *= -1.00005150f;
    n += 0.62635833f;
    r2 = n += -2.20626760f;
    n *= r2;
    n += -8.17605782f;
    n += -2.48349619f;
    r2 = n *= -0.27421948f;
    n *= -1.06409562f;
    r3 = n += 0.94447821f;
    n = r3 *= n;
    r4 = n += -0.70929396f;
    r5 = n *= -0.67981517f;
    r6 = n += 2.51208830f;
    n += 4.69864178f;
    n += -6.04117918f;
    n *= r2;
    n *= -0.00397231f;
    n += -0.49297121f;
    n *= r3;
    n *= -0.07248187f;
    n *= r6;
    n *= 1.23013616f;
    n = r5 += n;
    n *= r5;
    n *= -0.65660250f;
    n += r1;
    n += r0;
    n += r4;
    n += 3.02599072f;
    n += -3.05779338f;
    return n;
} // Solution0

// Solution1 precision = 0.00002646
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.50117707f;
    r0 = n *= -0.33964831f;
    r1 = n *= -0.41124657f;
    n += 0.21902224f;
    r2 = n += -0.40547660f;
    n *= r2;
    n += 0.58038759f;
    n += -1.12376809f;
    r2 = n *= 0.55170083f;
    n *= -3.71020031f;
    r3 = n += 0.69290841f;
    n = r3 *= n;
    r4 = n += -0.87275553f;
    r5 = n *= 0.77965426f;
    r6 = n += -1.58027375f;
    n += 4.68072653f;
    n += 1.31698787f;
    n *= r2;
    n *= 0.15691750f;
    n += 4.92810726f;
    n *= r3;
    n *= 0.00229015f;
    n *= r6;
    n *= 5.33492613f;
    n = r5 += n;
    n *= r5;
    n *= -1.06182718f;
    n += r1;
    n += r0;
    n += r4;
    n += 0.55847323f;
    n += -0.26374462f;
    return n;
} // Solution1

// Solution2 precision = 0.00001985
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -1.78084815f;
    r0 = n *= 0.57797354f;
    r1 = n *= -0.65396780f;
    n += 0.30938613f;
    r2 = n += 0.50180364f;
    n *= r2;
    n += -0.20512275f;
    n += -0.47777903f;
    r2 = n *= -0.65344143f;
    n *= 0.13099037f;
    r3 = n += 0.82842624f;
    n = r3 *= n;
    r4 = n += 0.70896375f;
    r5 = n *= 0.58225471f;
    r6 = n += 1.89371908f;
    n += 3.66475654f;
    n += 1.29039860f;
    n *= r2;
    n *= 3.27367330f;
    n += -0.60239822f;
    n *= r3;
    n *= 0.06990496f;
    n *= r6;
    n *= 1.03572941f;
    n = r5 += n;
    n *= r5;
    n *= -0.32958663f;
    n += r1;
    n += r0;
    n += r4;
    n += 4.13262272f;
    n += -4.12656689f;
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
