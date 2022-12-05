// Run date: 12/04/22 16:15:17 Pacific Standard Time
// Run duration = 159.269402 seconds
// Run count = 135
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
// Solution Generation = 135

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

// Precision = 0.00001019

// Solution0 precision = 0.00001019
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -4.62217617f;
    r0 = n *= -2.25947332f;
    r1 = n *= -1.00001502f;
    n += -2.33801627f;
    r2 = n += 2.13407946f;
    n *= r2;
    n += 2.09520960f;
    n += 2.23059249f;
    r2 = n *= -0.03202889f;
    n *= 0.04094432f;
    r3 = n += 0.68221378f;
    n = r3 *= n;
    r4 = n += -0.01995879f;
    r5 = n *= -0.29418239f;
    r6 = n += -1.04448998f;
    n += -0.52282411f;
    n += 0.34168151f;
    n *= r2;
    n *= 0.34730196f;
    n += -0.75841480f;
    n *= r3;
    n *= -0.78401613f;
    n *= r6;
    n *= 4.11927700f;
    n = r5 += n;
    n *= r5;
    n *= -1.17761290f;
    n += r1;
    n += r0;
    n += r4;
    n += 0.13924189f;
    n += 0.50950217f;
    return n;
} // Solution0

// Solution1 precision = 0.00000131
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += 2.65104961f;
    r0 = n *= 0.33377135f;
    r1 = n *= -1.59920681f;
    n += 4.35476494f;
    r2 = n += -0.35841173f;
    n *= r2;
    n += 1.30758762f;
    n += -1.47421706f;
    r2 = n *= 0.14053847f;
    n *= 0.14315712f;
    r3 = n += -0.76599485f;
    n = r3 *= n;
    r4 = n += 0.90884787f;
    r5 = n *= 0.26966479f;
    r6 = n += 0.88649726f;
    n += -0.27555349f;
    n += 0.23062375f;
    n *= r2;
    n *= 2.24273300f;
    n += -0.66953069f;
    n *= r3;
    n *= -9.51169777f;
    n *= r6;
    n *= 0.09880167f;
    n = r5 += n;
    n *= r5;
    n *= -2.41986060f;
    n += r1;
    n += r0;
    n += r4;
    n += -4.06179142f;
    n += 4.69580841f;
    return n;
} // Solution1

// Solution2 precision = 0.00000107
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -1.46984744f;
    r0 = n *= 0.77077901f;
    r1 = n *= -0.74052244f;
    n += 0.10342240f;
    r2 = n += 1.29906356f;
    n *= r2;
    n += -0.18661186f;
    n += -1.27454209f;
    r2 = n *= 0.50569558f;
    n *= -0.04443598f;
    r3 = n += 0.63134152f;
    n = r3 *= n;
    r4 = n += 0.86953914f;
    r5 = n *= 0.13464487f;
    r6 = n += 0.72894818f;
    n += -1.24843240f;
    n += 0.52467811f;
    n *= r2;
    n *= -1.26439750f;
    n += -0.22730769f;
    n *= r3;
    n *= -3.57519913f;
    n *= r6;
    n *= -0.43685114f;
    n = r5 += n;
    n *= r5;
    n *= -104.52249146f;
    n += r1;
    n += r0;
    n += r4;
    n += 2.15701127f;
    n += -2.10879755f;
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
