// Run date: 11/24/22 13:00:02 Pacific Standard Time
// Run duration = 13.265571 seconds
// Run count = 11
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
// Solution Generation = 11

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

// Precision = 0.00011575

// Solution0 precision = 0.00010496
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -3.41208148f;
    r0 = n *= 0.92013055f;
    r1 = n *= -0.03601530f;
    n *= 3.87141442f;
    r2 = n *= -0.11338769f;
    n += 0.39100632f;
    r3 = n += -0.39165741f;
    n = r0 *= n;
    n *= -0.15330137f;
    r4 = n *= -6.96771336f;
    r5 = n += -0.34132403f;
    n = r2 += n;
    n = r0 += n;
    n += -1.26438463f;
    n = r5 += n;
    r6 = n += -10.07263660f;
    n *= r5;
    n *= 0.77859455f;
    n = r2 *= n;
    n = r3 += n;
    r5 = n *= -0.10897052f;
    r7 = n += 1.59556389f;
    n = r6 += n;
    n *= r2;
    n += r3;
    n *= r5;
    n += r7;
    n += r6;
    n += r0;
    n *= r1;
    n += r4;
    n += -0.26712453f;
    return n;
} // Solution0

// Solution1 precision = 0.00003374
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -3.03131342f;
    r0 = n *= 2.05182743f;
    r1 = n *= 0.03488573f;
    n *= 2.31680727f;
    r2 = n *= -0.17447530f;
    n += 0.28176591f;
    r3 = n += -0.25025681f;
    n = r0 *= n;
    n *= 7.84053373f;
    r4 = n *= 0.01677079f;
    r5 = n += 0.96200436f;
    n = r2 += n;
    n = r0 += n;
    n += 4.61571550f;
    n = r5 += n;
    r6 = n += -3.39720869f;
    n *= r5;
    n *= 0.27261662f;
    n = r2 *= n;
    n = r3 += n;
    r5 = n *= -0.18165527f;
    r7 = n += 0.24515186f;
    n = r6 += n;
    n *= r2;
    n += r3;
    n *= r5;
    n += r7;
    n += r6;
    n += r0;
    n *= r1;
    n += r4;
    n += -0.05286140f;
    return n;
} // Solution1

// Solution2 precision = 0.00011575
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -2.16995120f;
    r0 = n *= 0.22711001f;
    r1 = n *= 1.84435463f;
    n *= -0.04955481f;
    r2 = n *= -3.30078387f;
    n += -0.36134887f;
    r3 = n += 0.40209931f;
    n = r0 *= n;
    n *= 0.70905608f;
    r4 = n *= -3.06945300f;
    r5 = n += 0.86806113f;
    n = r2 += n;
    n = r0 += n;
    n += -0.42851865f;
    n = r5 += n;
    r6 = n += 4.23646069f;
    n *= r5;
    n *= 0.32182780f;
    n = r2 *= n;
    n = r3 += n;
    r5 = n *= -0.20615090f;
    r7 = n += -1.93535829f;
    n = r6 += n;
    n *= r2;
    n += r3;
    n *= r5;
    n += r7;
    n += r6;
    n += r0;
    n *= r1;
    n += r4;
    n += 0.94605726f;
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
