// Run date: 12/25/22 11:10:50 Pacific Standard Time
// Run duration = 522.989628 seconds
// Run count = 12
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

// Precision = 0.00000381

// Solution0 precision = 0.00000008
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14159250f;
    r1 = n *= -0.46035430f;
    n = r1 *= n;
    n *= -0.06580912f;
    n += 2.88626027f;
    r2 = n *= 0.90864605f;
    r3 = n *= -0.99142671f;
    n *= -0.32578272f;
    n *= -0.53838378f;
    r4 = n *= 1.13439691f;
    n = r3 *= n;
    r5 = n *= -0.51957810f;
    r6 = n *= 0.76448423f;
    n = r1 *= n;
    r7 = n *= 0.28710645f;
    n *= r2;
    n *= -0.93265331f;
    n += -1.38891792f;
    n += 60.66537094f;
    n *= 0.02230056f;
    n = r6 *= n;
    n += -0.93426722f;
    n *= r6;
    n = r1 += n;
    n *= r7;
    n += -0.64531296f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += 0.00000007f;
    return n;
} // Solution0

// Solution1 precision = 0.00000250
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.09066057f;
    r1 = n *= 0.73793745f;
    n = r1 *= n;
    n *= 0.29680333f;
    n += -6.14703274f;
    r2 = n *= 0.32667005f;
    r3 = n *= 0.45419562f;
    n *= 0.12468325f;
    n *= 0.85101956f;
    r4 = n *= -0.79706627f;
    n = r3 *= n;
    r5 = n *= -3.04493332f;
    r6 = n *= 0.20570582f;
    n = r1 *= n;
    r7 = n *= 16.69528008f;
    n *= r2;
    n *= -13.19869614f;
    n += -4.90618515f;
    n += -8.78227901f;
    n *= -0.00828539f;
    n = r6 *= n;
    n += 2.98895502f;
    n *= r6;
    n = r1 += n;
    n *= r7;
    n += 78.09304810f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += -0.11813313f;
    return n;
} // Solution1

// Solution2 precision = 0.00000381
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.61799359f;
    r1 = n *= 0.78638697f;
    n = r1 *= n;
    n *= -0.04551356f;
    n += 4.45575809f;
    r2 = n *= 1.31658125f;
    r3 = n *= 0.96006572f;
    n *= -0.64699370f;
    n *= -0.69844198f;
    r4 = n *= 0.12930121f;
    n = r3 *= n;
    r5 = n *= 0.99781412f;
    r6 = n *= 0.05507000f;
    n = r1 *= n;
    r7 = n *= -0.65740973f;
    n *= r2;
    n *= -4.77747965f;
    n += -5.43818474f;
    n += -3.43723559f;
    n *= 0.03481231f;
    n = r6 *= n;
    n += 2.09269238f;
    n *= r6;
    n = r1 += n;
    n *= r7;
    n += -0.32288766f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += 0.52359891f;
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
