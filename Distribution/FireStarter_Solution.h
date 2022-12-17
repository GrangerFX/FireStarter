// Run date: 12/17/22 14:20:13 Pacific Standard Time
// Run duration = 10.944748 seconds
// Run count = 7
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
// Run iterations = 512;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 256;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 7

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

// Precision = 0.00113058

// Solution0 precision = 0.00066325
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n *= 0.64784783f;
    r1 = n *= -0.24021587f;
    n *= 7.14325047f;
    n = r1 += n;
    r2 = n *= -0.45074677f;
    r3 = n *= 0.06050808f;
    r4 = n += -2.23344445f;
    r5 = n += -2.90181708f;
    r6 = n += 5.41499949f;
    n = r0 *= n;
    n = r0 += n;
    r7 = n *= 0.02811648f;
    r8 = n *= -35.63088226f;
    n = r0 += n;
    n += 14.88868809f;
    n += r1;
    n *= r2;
    n *= r3;
    n = r4 += n;
    n += r5;
    n *= -21.79942894f;
    n = r0 *= n;
    n *= r6;
    n *= -1.78745604f;
    n += r8;
    n += 29.24714661f;
    n += -20.66694069f;
    n += -4.28562355f;
    n *= r0;
    n += r7;
    n *= r4;
    n += 0.00057115f;
    return n;
} // Solution0

// Solution1 precision = 0.00037670
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n *= 0.03351924f;
    r1 = n *= -8.63490009f;
    n *= -1.58520663f;
    n = r1 += n;
    r2 = n *= -0.02712440f;
    r3 = n *= 16.60409737f;
    r4 = n += -0.35051987f;
    r5 = n += 0.93497318f;
    r6 = n += 14.74283600f;
    n = r0 *= n;
    n = r0 += n;
    r7 = n *= -0.37566167f;
    r8 = n *= -1.61913800f;
    n = r0 += n;
    n += 13.29179955f;
    n += r1;
    n *= r2;
    n *= r3;
    n = r4 += n;
    n += r5;
    n *= -0.22747967f;
    n = r0 *= n;
    n *= r6;
    n *= -0.99898583f;
    n += r8;
    n += 4.27537823f;
    n += 8.30426693f;
    n += 3.70466495f;
    n *= r0;
    n += r7;
    n *= r4;
    n += 0.85263944f;
    return n;
} // Solution1

// Solution2 precision = 0.00113058
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n *= 0.00034097f;
    r1 = n *= -19.04228210f;
    n *= -19.68685150f;
    n = r1 += n;
    r2 = n *= -43.33878326f;
    r3 = n *= 0.01434363f;
    r4 = n += 4.97747803f;
    r5 = n += -6.46594000f;
    r6 = n += -2.74492335f;
    n = r0 *= n;
    n = r0 += n;
    r7 = n *= -1.08540094f;
    r8 = n *= -0.79170340f;
    n = r0 += n;
    n += -1.12114942f;
    n += r1;
    n *= r2;
    n *= r3;
    n = r4 += n;
    n += r5;
    n *= 4.47972679f;
    n = r0 *= n;
    n *= r6;
    n *= -0.41229194f;
    n += r8;
    n += -2.17408967f;
    n += 1.93481886f;
    n += -3.08087111f;
    n *= r0;
    n += r7;
    n *= r4;
    n += -0.00021444f;
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
