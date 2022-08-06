// Run date: 08/06/22 12:25:49 Pacific Daylight Time
// Run duration = 2.466168 seconds
// Run count = 21
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_CODE;
// Run states = 1;
// Run units = 1;
// Run process = 0;
// Run population = 4352;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 5;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 100

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

// Precision = 0.00828448

// Solution0 precision = 0.00828448
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += 0.25260109f;
    r1 = n += 0.16640134f;
    n *= -0.54672807f;
    r2 = n *= -0.77743042f;
    n *= 0.74397284f;
    n *= -0.25668821f;
    n = r2 += n;
    r3 = n *= -0.97026134f;
    r4 = n *= -0.36136410f;
    r5 = n += -0.90182304f;
    n = r1 *= n;
    n += -0.22939062f;
    n = r1 *= n;
    r6 = n += -0.35760167f;
    n = r5 += n;
    n *= r3;
    n = r6 += n;
    n += r5;
    n += -0.41538265f;
    n += -0.43795156f;
    n += -0.80169564f;
    n *= -0.33938140f;
    n += -0.51243401f;
    n *= r0;
    n += 1.16043520f;
    n = r4 *= n;
    n *= r1;
    n *= 1.19909334f;
    n *= r2;
    n += r4;
    n *= 0.00731513f;
    n += r6;
    return n;
} // Solution0

// Solution1 precision = 0.00695658
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.10791230f;
    r1 = n += 1.59499025f;
    n *= -0.51714206f;
    r2 = n *= 0.53256798f;
    n *= -0.64005071f;
    n *= -1.30829072f;
    n = r2 += n;
    r3 = n *= 0.64756638f;
    r4 = n *= -0.32006517f;
    r5 = n += -0.77093846f;
    n = r1 *= n;
    n += -0.45936209f;
    n = r1 *= n;
    r6 = n += 0.59731317f;
    n = r5 += n;
    n *= r3;
    n = r6 += n;
    n += r5;
    n += 0.08018396f;
    n += 0.42576742f;
    n += 0.85822254f;
    n *= -0.10441876f;
    n += 3.80165410f;
    n *= r0;
    n += -0.90591323f;
    n = r4 *= n;
    n *= r1;
    n *= 0.78003579f;
    n *= r2;
    n += r4;
    n *= 0.00309588f;
    n += r6;
    return n;
} // Solution1

// Solution2 precision = 0.00277650
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += 0.55430317f;
    r1 = n += -0.18995178f;
    n *= 1.05431211f;
    r2 = n *= -0.35376021f;
    n *= 0.04969520f;
    n *= 0.17903039f;
    n = r2 += n;
    r3 = n *= 0.58567160f;
    r4 = n *= 0.79513478f;
    r5 = n += 1.05526221f;
    n = r1 *= n;
    n += 1.08266449f;
    n = r1 *= n;
    r6 = n += -0.45029911f;
    n = r5 += n;
    n *= r3;
    n = r6 += n;
    n += r5;
    n += 0.15861125f;
    n += -2.52911162f;
    n += 0.11058397f;
    n *= 0.36801991f;
    n += 0.04481480f;
    n *= r0;
    n += -0.76097476f;
    n = r4 *= n;
    n *= r1;
    n *= -0.05731404f;
    n *= r2;
    n += r4;
    n *= 0.21947120f;
    n += r6;
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
