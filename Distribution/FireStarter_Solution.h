// Run date: 07/02/23 15:52:45 Pacific Daylight Time
// Run duration = 1292.282965 seconds
// Run generation = 96
// Run evolution = 0
// Run result = 0.00000095
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 0
// Run units = 1
// Run processes = 0
// Run population = 278528
// Run iterations = 64
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

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

// Solution0 result = 0.00000018
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.22111240f;
    n += 1.56969273f;
    r0 = n += -0.87504762f;
    r1 = n *= 0.87995005f;
    n = r0 *= n;
    n *= 11.24702263f;
    n += -1.13864827f;
    r2 = n *= -0.00000655f;
    r3 = n += 0.28849098f;
    r4 = n += -1.84184921f;
    n *= 0.27334157f;
    n += r0;
    r0 = n *= 0.84627610f;
    r5 = n += -1.45282435f;
    n = r3 *= n;
    n = r1 *= n;
    r6 = n *= 0.75575191f;
    n *= r6;
    n += r4;
    n = r5 += n;
    n *= r0;
    n = r5 *= n;
    n *= -0.00263457f;
    n *= r2;
    n *= 0.68684179f;
    n *= -14.44098282f;
    n += -1.59275293f;
    n *= r5;
    n *= r1;
    n *= 2.90081167f;
    n *= r3;
    n += -0.00000006f;
    return n;
} // Solution0

// Solution1 result = 0.00000083
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.15214258f;
    n += 0.10809169f;
    r0 = n += -0.57831246f;
    r1 = n *= -0.12682514f;
    n = r0 *= n;
    n *= -0.19580999f;
    n += 0.13102560f;
    r2 = n *= 0.42194545f;
    r3 = n += 1.98324394f;
    r4 = n += -1.84141254f;
    n *= 2.38096380f;
    n += r0;
    r0 = n *= -1.24901593f;
    r5 = n += 0.29837018f;
    n = r3 *= n;
    n = r1 *= n;
    r6 = n *= -2.29734659f;
    n *= r6;
    n += r4;
    n = r5 += n;
    n *= r0;
    n = r5 *= n;
    n *= -22.06637955f;
    n *= r2;
    n *= -0.02402605f;
    n *= -1.52341032f;
    n += -1.82273865f;
    n *= r5;
    n *= r1;
    n *= 18836.03320312f;
    n *= r3;
    n += -0.11813234f;
    return n;
} // Solution1

// Solution2 result = 0.00000095
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.48927799f;
    n += 0.71814466f;
    r0 = n += 0.56278211f;
    r1 = n *= -0.11770601f;
    n = r0 *= n;
    n *= 2.36640000f;
    n += 0.85051262f;
    r2 = n *= 0.05916618f;
    r3 = n += 0.45834902f;
    r4 = n += -0.09908859f;
    n *= 0.36011833f;
    n += r0;
    r0 = n *= -0.32789636f;
    r5 = n += -0.64464396f;
    n = r3 *= n;
    n = r1 *= n;
    r6 = n *= -1.04351580f;
    n *= r6;
    n += r4;
    n = r5 += n;
    n *= r0;
    n = r5 *= n;
    n *= 0.58576149f;
    n *= r2;
    n *= -0.00322523f;
    n *= 3.03736567f;
    n += 0.32244787f;
    n *= r5;
    n *= r1;
    n *= 111540.96875000f;
    n *= r3;
    n += 0.52359879f;
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
