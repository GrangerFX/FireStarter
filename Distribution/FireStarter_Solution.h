// Run date: 10/30/22 16:10:18 Pacific Daylight Time
// Run duration = 388.926872 seconds
// Run count = 3533
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_RANDOM;
// Run units = 2;
// Run processes = 12;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 10000;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 3533

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

// Precision = 0.00002766

// Solution0 precision = 0.00000370
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -0.48729444f;
    r0 = n += -2.65430617f;
    n += 0.00001534f;
    r1 = n *= 0.15463600f;
    n = r1 *= n;
    n *= -1.46912420f;
    n *= 2.24804258f;
    r2 = n += 0.97110254f;
    r3 = n *= 3.53173065f;
    n += -5.32413578f;
    n += r3;
    r3 = n *= -0.00347295f;
    r4 = n += -1.36373663f;
    n = r1 += n;
    r5 = n += -0.11268366f;
    r6 = n *= -0.03156218f;
    n *= r1;
    r1 = n *= 4.44416714f;
    n += r2;
    n *= r5;
    r5 = n *= 0.67844701f;
    n += r6;
    n *= r4;
    n += 8.73570251f;
    n *= r3;
    n += -1.43466663f;
    n *= r1;
    n = r5 *= n;
    n += r5;
    n *= 1.71336055f;
    n *= r0;
    n += -0.00000959f;
    return n;
} // Solution0

// Solution1 precision = 0.00002766
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += 0.23866192f;
    r0 = n += -3.32927084f;
    n += -0.00007975f;
    r1 = n *= 0.13393097f;
    n = r1 *= n;
    n *= 0.47834527f;
    n *= 4.33994579f;
    r2 = n += -0.58682007f;
    r3 = n *= -4.48556376f;
    n += -3.65822291f;
    n += r3;
    r3 = n *= 0.00261175f;
    r4 = n += -0.56479931f;
    n = r1 += n;
    r5 = n += -0.62260664f;
    r6 = n *= -0.62603867f;
    n *= r1;
    r1 = n *= 3.09890652f;
    n += r2;
    n *= r5;
    r5 = n *= -0.10691581f;
    n += r6;
    n *= r4;
    n += 0.89508986f;
    n *= r3;
    n += 1.39877880f;
    n *= r1;
    n = r5 *= n;
    n += r5;
    n *= -1.28664470f;
    n *= r0;
    n += -0.11807734f;
    return n;
} // Solution1

// Solution2 precision = 0.00001770
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -0.97135776f;
    r0 = n += -1.64670527f;
    n += 0.00013034f;
    r1 = n *= -0.18467014f;
    n = r1 *= n;
    n *= 1.68347251f;
    n *= 1.57269514f;
    r2 = n += -0.85045189f;
    r3 = n *= 0.02617224f;
    n += -0.36129758f;
    n += r3;
    r3 = n *= 3.35182047f;
    r4 = n += -1.97785962f;
    n = r1 += n;
    r5 = n += 1.01769030f;
    r6 = n *= 0.23229069f;
    n *= r1;
    r1 = n *= 0.26943278f;
    n += r2;
    n *= r5;
    r5 = n *= -0.22689188f;
    n += r6;
    n *= r4;
    n += 13.55068302f;
    n *= r3;
    n += 5.38541603f;
    n *= r1;
    n = r5 *= n;
    n += r5;
    n *= -0.32729656f;
    n *= r0;
    n += 0.52352244f;
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
