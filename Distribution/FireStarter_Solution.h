// Run date: 11/24/23 10:21:14 Pacific Standard Time
// Run duration = 34294.952214 seconds
// Run generation = 83
// Run evolution = 12
// Run result = 0.00000054
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
// Run optimize = 8

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

#define SOLUTION_VARIATIONS 3

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

// Solution0 result = 0.00000054
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.07643896f;
    n += 0.24014011f;
    r1 = n *= 0.23838700f;
    n *= 1.31623340f;
    n += 0.07534942f;
    n = r0 *= n;
    n *= -0.05606045f;
    n += 0.00488158f;
    n *= 0.28039369f;
    n *= 0.74413443f;
    r2 = n *= -91883.28906250f;
    n *= r0;
    r0 = n *= 0.17819218f;
    r3 = n *= -0.02779616f;
    r4 = n += -0.15254815f;
    n = r2 *= n;
    r5 = n *= 0.58638024f;
    n = r0 *= n;
    n += r5;
    r5 = n += 0.45057762f;
    n *= r4;
    n = r0 += n;
    n = r3 *= n;
    n *= 1.98487997f;
    n += r0;
    n += 0.72396499f;
    n *= r2;
    n += 0.05545578f;
    n += r5;
    n += r3;
    n *= r1;
    n += -0.00000054f;
    return n;
} // Solution0

// Solution1 result = 0.00000048
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.13245641f;
    n += 0.40937707f;
    r1 = n *= 0.78664827f;
    n *= -0.24924476f;
    n += -0.08026604f;
    n = r0 *= n;
    n *= 0.34039390f;
    n += 0.08056422f;
    n *= 98090.31250000f;
    n *= 0.07138886f;
    r2 = n *= -0.10553219f;
    n *= r0;
    r0 = n *= -0.23971245f;
    r3 = n *= -0.01812857f;
    r4 = n += -0.13169330f;
    n = r2 *= n;
    r5 = n *= 0.18135253f;
    n = r0 *= n;
    n += r5;
    r5 = n += 2.19962001f;
    n *= r4;
    n = r0 += n;
    n = r3 *= n;
    n *= 2.96330070f;
    n += r0;
    n += 0.18531896f;
    n *= r2;
    n += 1.67821252f;
    n += r5;
    n += r3;
    n *= r1;
    n += -0.11812779f;
    return n;
} // Solution1

// Solution2 result = 0.00000034
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.06937663f;
    n += 0.18162769f;
    r1 = n *= -0.16576585f;
    n *= -0.43915737f;
    n += 0.01322198f;
    n = r0 *= n;
    n *= -4.96341419f;
    n += 0.28128690f;
    n *= 0.04522784f;
    n *= 0.32103902f;
    r2 = n *= -96216.67187500f;
    n *= r0;
    r0 = n *= -0.21969280f;
    r3 = n *= -0.09456706f;
    r4 = n += 0.08336489f;
    n = r2 *= n;
    r5 = n *= 0.30130541f;
    n = r0 *= n;
    n += r5;
    r5 = n += 0.09478036f;
    n *= r4;
    n = r0 += n;
    n = r3 *= n;
    n *= 1.78066874f;
    n += r0;
    n += 0.10282499f;
    n *= r2;
    n += 3.83654475f;
    n += r5;
    n += r3;
    n *= r1;
    n += 0.52359712f;
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
