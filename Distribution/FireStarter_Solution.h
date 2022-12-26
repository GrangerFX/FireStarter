// Run date: 12/25/22 23:06:58 Pacific Standard Time
// Run duration = 23.228882 seconds
// Run count = 40
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
// Run startScale = 2.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 40

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

// Precision = 0.00003576

// Solution0 precision = 0.00001830
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.98181391f;
    r1 = n *= -1.33788919f;
    n += 3.61920166f;
    r2 = n *= -0.19061831f;
    n *= -0.93450743f;
    r3 = n += 0.40152439f;
    r4 = n += -1.81461048f;
    n += 2.78003931f;
    n *= r3;
    n = r4 *= n;
    n += 1.17233026f;
    n = r4 += n;
    n *= r2;
    r2 = n += -2.70829892f;
    r3 = n += 10.69111538f;
    r5 = n *= 0.07150704f;
    n += -1.92727220f;
    n *= 3.02072048f;
    n += 1.61393201f;
    n += -2.36551619f;
    n *= r2;
    n = r4 *= n;
    n += r3;
    n += 0.49539897f;
    n += r4;
    r4 = n += 1.20174968f;
    n += r1;
    n += r5;
    n += r0;
    n *= -0.50389230f;
    n *= 2.09299731f;
    n += r4;
    return n;
} // Solution0

// Solution1 precision = 0.00001365
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.59449041f;
    r1 = n *= 0.58534318f;
    n += 0.85525239f;
    r2 = n *= -1.01448131f;
    n *= -0.29804724f;
    r3 = n += -0.02979576f;
    r4 = n += 0.93072939f;
    n += -1.53846538f;
    n *= r3;
    n = r4 *= n;
    n += -0.16902256f;
    n = r4 += n;
    n *= r2;
    r2 = n += -0.45406643f;
    r3 = n += -1.00634491f;
    r5 = n *= -2.98005080f;
    n += 1.91622829f;
    n *= 0.64199322f;
    n += 2.44505382f;
    n += 0.59998041f;
    n *= r2;
    n = r4 *= n;
    n += r3;
    n += -4.94753265f;
    n += r4;
    r4 = n += 5.75890303f;
    n += r1;
    n += r5;
    n += r0;
    n *= 0.03329499f;
    n *= 4.42036152f;
    n += r4;
    return n;
} // Solution1

// Solution2 precision = 0.00003576
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.58641845f;
    r1 = n *= -0.61914468f;
    n += -1.12150884f;
    r2 = n *= 0.31302607f;
    n *= 1.99465489f;
    r3 = n += -0.49865386f;
    r4 = n += 2.03222108f;
    n += -2.17573500f;
    n *= r3;
    n = r4 *= n;
    n += -1.45604420f;
    n = r4 += n;
    n *= r2;
    r2 = n += 0.49565560f;
    r3 = n += 1.96238065f;
    r5 = n *= -0.57680255f;
    n += -2.50409579f;
    n *= 1.18768442f;
    n += -1.44450617f;
    n += 3.48470855f;
    n *= r2;
    n = r4 *= n;
    n += r3;
    n += 1.69787169f;
    n += r4;
    r4 = n += -0.69107366f;
    n += r1;
    n += r5;
    n += r0;
    n *= 0.88899732f;
    n *= -2.00557184f;
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
