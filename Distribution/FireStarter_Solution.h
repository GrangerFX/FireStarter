// Run date: 03/25/23 22:38:57 Pacific Daylight Time
// Run duration = 1609.506963 seconds
// Run count = 0
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_RANDOM
// Run units = 8
// Run processes = 16
// Run iterations = 256
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 32
// Run seed = 4834
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 0

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

// Precision = 0.00000322

// Solution0 precision = 0.00000322
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.14159274f;
    r0 = n *= -0.07147487f;
    n *= -1.72538650f;
    r1 = n *= 1.26458573f;
    n = r0 *= n;
    n *= 1.15144277f;
    n *= -2.60203314f;
    r2 = n *= 1.28788435f;
    r3 = n *= -0.01997162f;
    r4 = n += -1.11837113f;
    n *= 1.11391544f;
    n = r4 *= n;
    r5 = n *= 1.77581930f;
    n = r0 *= n;
    r6 = n += 0.27632755f;
    n = r5 += n;
    n *= r0;
    r0 = n += 3.22903252f;
    n *= r3;
    n *= -1.58187068f;
    n *= 0.71878034f;
    n += -0.29227570f;
    n *= r2;
    n *= r5;
    n = r0 += n;
    n *= r4;
    n *= r1;
    n *= r0;
    n *= 0.49080122f;
    n *= -3.25469041f;
    n *= r6;
    n += 0.00000000f;
    return n;
} // Solution0

// Solution1 precision = 0.00000143
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.09065914f;
    r0 = n *= 1.61011982f;
    n *= -0.23232473f;
    r1 = n *= -0.21930745f;
    n = r0 *= n;
    n *= -0.10441359f;
    n *= -2.25796914f;
    r2 = n *= 0.22927316f;
    r3 = n *= -0.03163219f;
    r4 = n += -3.16521144f;
    n *= -0.28238705f;
    n = r4 *= n;
    r5 = n *= -0.05901052f;
    n = r0 *= n;
    r6 = n += -2.49997377f;
    n = r5 += n;
    n *= r0;
    r0 = n += 0.69465625f;
    n *= r3;
    n *= -1.67544889f;
    n *= -5.14162350f;
    n += -0.96625829f;
    n *= r2;
    n *= r5;
    n = r0 += n;
    n *= r4;
    n *= r1;
    n *= r0;
    n *= -1.53896224f;
    n *= 2.55289531f;
    n *= r6;
    n += -0.11813194f;
    return n;
} // Solution1

// Solution2 precision = 0.00000074
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -2.61799359f;
    r0 = n *= 0.19218372f;
    n *= -1.22852910f;
    r1 = n *= 0.13482536f;
    n = r0 *= n;
    n *= -0.02693768f;
    n *= 1.74480975f;
    r2 = n *= 3.40741539f;
    r3 = n *= 2.26864123f;
    r4 = n += -1.34944665f;
    n *= 2.04403543f;
    n = r4 *= n;
    r5 = n *= 2.83827209f;
    n = r0 *= n;
    r6 = n += 0.31680900f;
    n = r5 += n;
    n *= r0;
    r0 = n += 17.41184998f;
    n *= r3;
    n *= 2.76029038f;
    n *= 0.21781659f;
    n += 0.06965163f;
    n *= r2;
    n *= r5;
    n = r0 += n;
    n *= r4;
    n *= r1;
    n *= r0;
    n *= 0.44146535f;
    n *= 0.19904098f;
    n *= r6;
    n += 0.52359873f;
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
