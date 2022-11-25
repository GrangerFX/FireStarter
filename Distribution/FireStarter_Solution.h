// Run date: 11/25/22 15:22:35 Pacific Standard Time
// Run duration = 16.246019 seconds
// Run count = 3
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
// Run seed = 5;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 3

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

// Precision = 0.00033529

// Solution0 precision = 0.00033529
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += 1.90310061f;
    r0 = n += -3.75103021f;
    r1 = n *= 0.72410876f;
    r2 = n += 0.49152294f;
    r3 = n *= -0.71148789f;
    r4 = n *= -0.74129027f;
    r5 = n *= -0.95925361f;
    n += 1.35337079f;
    r6 = n += -0.51233095f;
    n *= -1.23609197f;
    r7 = n += -0.16776866f;
    n *= 1.71893954f;
    n = r3 += n;
    n = r6 += n;
    n *= r7;
    n = r4 += n;
    r7 = n *= -0.07211950f;
    n += r6;
    n *= r1;
    n = r2 += n;
    n *= r3;
    n *= r4;
    n *= r5;
    n *= 0.65824848f;
    n = r2 += n;
    n += r0;
    n *= 4.98028183f;
    n *= -0.16593298f;
    n += -68.74720764f;
    n *= 0.18897401f;
    n *= r7;
    n *= r2;
    return n;
} // Solution0

// Solution1 precision = 0.00008485
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -1.15162849f;
    r0 = n += -1.26585782f;
    r1 = n *= -0.44285789f;
    r2 = n += 1.16929424f;
    r3 = n *= 0.68428630f;
    r4 = n *= 0.74608123f;
    r5 = n *= -1.00263059f;
    n += 0.79486388f;
    r6 = n += -0.33476871f;
    n *= -0.07452762f;
    r7 = n += -1.01547480f;
    n *= -1.45697260f;
    n = r3 += n;
    n = r6 += n;
    n *= r7;
    n = r4 += n;
    r7 = n *= -0.94669932f;
    n += r6;
    n *= r1;
    n = r2 += n;
    n *= r3;
    n *= r4;
    n *= r5;
    n *= 0.76071119f;
    n = r2 += n;
    n += r0;
    n *= 0.84472620f;
    n *= -0.01745585f;
    n += 0.37446922f;
    n *= 0.40264791f;
    n *= r7;
    n *= r2;
    return n;
} // Solution1

// Solution2 precision = 0.00033432
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += 0.24705477f;
    r0 = n += -3.52035189f;
    r1 = n *= 0.31983250f;
    r2 = n += 0.03001234f;
    r3 = n *= -0.82506680f;
    r4 = n *= -0.83969104f;
    r5 = n *= 0.61812741f;
    n += -1.24772573f;
    r6 = n += -0.72415310f;
    n *= -1.11697960f;
    r7 = n += 0.61288881f;
    n *= 0.38679385f;
    n = r3 += n;
    n = r6 += n;
    n *= r7;
    n = r4 += n;
    r7 = n *= -0.43985596f;
    n += r6;
    n *= r1;
    n = r2 += n;
    n *= r3;
    n *= r4;
    n *= r5;
    n *= -0.65130389f;
    n = r2 += n;
    n += r0;
    n *= 3.02667832f;
    n *= -1.12763608f;
    n += 5.31089354f;
    n *= -0.30307573f;
    n *= r7;
    n *= r2;
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
