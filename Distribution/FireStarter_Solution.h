// Run date: 01/03/23 17:56:27 Pacific Standard Time
// Run duration = 7.849776 seconds
// Run count = 924
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_OPTIMIZE
// Run units = 1
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 32
// Run seed = 0
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 924

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

// Precision = 0.00001705

// Solution0 precision = 0.00000191
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -0.40765524f;
    r0 = n *= 0.35184297f;
    r1 = n += -1.92383432f;
    r2 = n *= -1.99639428f;
    n *= r0;
    r0 = n += -1.31426990f;
    r3 = n *= 0.19538613f;
    r4 = n += -0.30704808f;
    r5 = n += 0.64536518f;
    n *= 0.01289617f;
    n *= -2.03142619f;
    n *= r3;
    r3 = n += -0.78749907f;
    r6 = n *= -3.74022555f;
    n += r6;
    n += r4;
    n *= r3;
    r3 = n += 2.58765149f;
    r4 = n += 0.84442580f;
    n += 0.78237212f;
    n *= r3;
    n += r0;
    n += r5;
    n += -0.73994374f;
    n = r4 *= n;
    n *= 1.03958917f;
    n *= r1;
    n += -1.37083161f;
    n += -0.81311870f;
    n += r2;
    n += 0.26358402f;
    n += r4;
    return n;
} // Solution0

// Solution1 precision = 0.00000298
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.64007926f;
    r0 = n *= 1.01689422f;
    r1 = n += 1.11748517f;
    r2 = n *= -0.33339033f;
    n *= r0;
    r0 = n += 0.88030320f;
    r3 = n *= -0.09528252f;
    r4 = n += -0.01765527f;
    r5 = n += 1.75303411f;
    n *= 0.15601414f;
    n *= -0.82790071f;
    n *= r3;
    r3 = n += -0.62592429f;
    r6 = n *= 0.78467798f;
    n += r6;
    n += r4;
    n *= r3;
    r3 = n += -0.16254897f;
    r4 = n += -0.34216115f;
    n += 2.90472960f;
    n *= r3;
    n += r0;
    n += r5;
    n += -1.08753753f;
    n = r4 *= n;
    n *= -1.78942895f;
    n *= r1;
    n += 4.75251389f;
    n += 3.00725222f;
    n += r2;
    n += -7.69164896f;
    n += r4;
    return n;
} // Solution1

// Solution2 precision = 0.00001705
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -1.58751893f;
    r0 = n *= -0.52649969f;
    r1 = n += 1.08509481f;
    r2 = n *= -0.68846536f;
    n *= r0;
    r0 = n += 1.59591913f;
    r3 = n *= -0.03319719f;
    r4 = n += -0.42539775f;
    r5 = n += -2.10360527f;
    n *= -1.37284231f;
    n *= -0.89115572f;
    n *= r3;
    r3 = n += 1.41509318f;
    r6 = n *= -0.44535357f;
    n += r6;
    n += r4;
    n *= r3;
    r3 = n += 3.02848411f;
    r4 = n += -1.30704689f;
    n += 1.71273363f;
    n *= r3;
    n += r0;
    n += r5;
    n += 1.84616733f;
    n = r4 *= n;
    n *= -1.84313357f;
    n *= r1;
    n += -8.18325424f;
    n += -0.53069544f;
    n += r2;
    n += 9.61108589f;
    n += r4;
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
