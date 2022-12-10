// Run date: 12/10/22 11:59:34 Pacific Standard Time
// Run duration = 20.225615 seconds
// Run count = 1
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
// Solution Generation = 1

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

// Precision = 0.00033873

// Solution0 precision = 0.00000888
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n += -2.04837656f;
    n *= -0.43643507f;
    n += -5.67524910f;
    n += 0.38101101f;
    r0 = n += 6.45690536f;
    n *= r0;
    n += -1.18931079f;
    n += -1.23578966f;
    r0 = n *= 0.15216118f;
    n *= 0.10900521f;
    r1 = n += -1.07855678f;
    n *= r1;
    n += 0.52838498f;
    r1 = n *= 0.92518640f;
    r2 = n += -0.44272959f;
    n += 0.36343110f;
    r3 = n += 0.35678652f;
    n *= r0;
    n *= -0.95949215f;
    n += 0.88047713f;
    r0 = n += 0.89032078f;
    n += -0.73297399f;
    n *= r0;
    n *= -0.71630991f;
    n = r1 += n;
    n *= r1;
    n *= r3;
    n += -3.44429421f;
    n *= -0.48271772f;
    n *= r2;
    n += -0.98124254f;
    n += 0.08727248f;
    return n;
} // Solution0

// Solution1 precision = 0.00015521
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n += -0.92920059f;
    n *= 0.06394673f;
    n += 0.52680743f;
    n += -0.42646122f;
    r0 = n += 0.80656952f;
    n *= r0;
    n += -0.35539746f;
    n += -0.67400736f;
    r0 = n *= -0.80025941f;
    n *= -2.97633696f;
    r1 = n += -0.95673585f;
    n *= r1;
    n += -0.25357446f;
    r1 = n *= 0.62752801f;
    r2 = n += -0.20183547f;
    n += -1.48371744f;
    r3 = n += -1.87031114f;
    n *= r0;
    n *= 0.23974837f;
    n += 1.51617360f;
    r0 = n += -3.18824744f;
    n += -0.74680465f;
    n *= r0;
    n *= -0.69865149f;
    n = r1 += n;
    n *= r1;
    n *= r3;
    n += -0.21312973f;
    n *= -0.17221163f;
    n *= r2;
    n += -0.67652017f;
    n += 0.39190310f;
    return n;
} // Solution1

// Solution2 precision = 0.00033873
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n += -0.93399143f;
    n *= -0.02003502f;
    n += 0.32332382f;
    n += 0.46541199f;
    r0 = n += 0.30872267f;
    n *= r0;
    n += -0.66825652f;
    n += -0.34146830f;
    r0 = n *= 0.71839237f;
    n *= 6.90249777f;
    r1 = n += -1.05431247f;
    n *= r1;
    n += -1.02601004f;
    r1 = n *= -0.95246410f;
    r2 = n += 0.33447510f;
    n += -0.09871279f;
    r3 = n += 1.98032665f;
    n *= r0;
    n *= -2.22526145f;
    n += 0.41353601f;
    r0 = n += 0.46432185f;
    n += -0.35419574f;
    n *= r0;
    n *= -1.06581950f;
    n = r1 += n;
    n *= r1;
    n *= r3;
    n += -3.55807710f;
    n *= 0.88125020f;
    n *= r2;
    n += 0.98240995f;
    n += 1.14191020f;
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
