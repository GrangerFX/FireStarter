// Run date: 07/24/22 12:14:39 Pacific Daylight Time
// Run duration = 1.868442 seconds
// Run count = 31
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;
// Run variations = 3;
// Run samples = 15;

// Run sampleMin = 0.000000f;
// Run sampleMax = 6.283185f;
// Run evolveFactor = 0.100000f;
// Run evolveStartFactor = 4.000000f;
// Run evolveStartResult = 10.000000f;
// Run evolveCandidates = 16;

// Run mode = FIRESTARTER_CODE;
// Run states = 1;
// Run units = 1;
// Run process = 0;
// Run population = 4352;
// Run iterations = 256;
// Run generations = 4;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_INDIVIDUAL;
// Run attempts = 32;
// Run seed = 0;
// Solution Generation = 120

#ifndef __CUDACC__
#include <cmath>
#endif

#define TARGET_PI 3.14159265f

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
        return fabsf(fmodf(fabsf(n - TARGET_PI * 0.5f), TARGET_PI * 2.0f) - TARGET_PI) - TARGET_PI * 0.5f;
    }
} // SolutionTarget

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define SOLUTION_VARIATIONS 3

// Precision = 0.04410881

// Solution0 precision = 0.03204226
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -0.70848161f;
    n *= -0.54881483f;
    n += 0.75322390f;
    n *= -0.38780859f;
    r1 = n += -0.24068616f;
    n *= -0.59526199f;
    n += 0.62297356f;
    r2 = n *= 0.87924540f;
    r3 = n *= 0.83898705f;
    n += -0.11608715f;
    n *= -2.92017269f;
    r4 = n *= -0.44307467f;
    n += r0;
    n = r1 *= n;
    n = r2 *= n;
    r0 = n *= 0.11612514f;
    n += r0;
    n += -0.60389555f;
    n += -0.41294625f;
    r0 = n += -0.34805205f;
    n += 0.59873998f;
    r5 = n += -0.90493977f;
    n *= r4;
    n *= -0.66876811f;
    n += r0;
    n += r3;
    n += 0.64167154f;
    n = r5 += n;
    n += r1;
    n += r5;
    n *= r2;
    n += -0.10151216f;
    return n;
} // Solution0

// Solution1 precision = 0.04410881
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += 0.84614205f;
    n *= -0.21079345f;
    n += -1.02744746f;
    n *= -0.39827570f;
    r1 = n += -0.73392111f;
    n *= 0.87418169f;
    n += -0.81029218f;
    r2 = n *= -0.75966007f;
    r3 = n *= 3.02893877f;
    n += 0.18036005f;
    n *= 0.04952919f;
    r4 = n *= 0.57341796f;
    n += r0;
    n = r1 *= n;
    n = r2 *= n;
    r0 = n *= 0.43762723f;
    n += r0;
    n += -1.86643362f;
    n += -0.51700586f;
    r0 = n += -0.36776429f;
    n += 0.90702695f;
    r5 = n += -0.64206415f;
    n *= r4;
    n *= 0.80594671f;
    n += r0;
    n += r3;
    n += 0.96279895f;
    n = r5 += n;
    n += r1;
    n += r5;
    n *= r2;
    n += -0.04794409f;
    return n;
} // Solution1

// Solution2 precision = 0.03776789
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -0.14635047f;
    n *= -0.70385039f;
    n += 0.80353063f;
    n *= 0.63558662f;
    r1 = n += 0.58677953f;
    n *= -0.17974620f;
    n += -0.39198118f;
    r2 = n *= -0.36381802f;
    r3 = n *= 0.83170241f;
    n += -0.51147199f;
    n *= -2.41410089f;
    r4 = n *= -0.27829432f;
    n += r0;
    n = r1 *= n;
    n = r2 *= n;
    r0 = n *= 0.77455509f;
    n += r0;
    n += -3.23661232f;
    n += 3.45357370f;
    r0 = n += 0.75373977f;
    n += 0.58621228f;
    r5 = n += 1.41446710f;
    n *= r4;
    n *= 0.26277068f;
    n += r0;
    n += r3;
    n += -0.50065863f;
    n = r5 += n;
    n += r1;
    n += r5;
    n *= r2;
    n += 0.51833946f;
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
