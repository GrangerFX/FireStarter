// Run date: 11/24/23 13:08:10 Pacific Standard Time
// Run duration = 72938.493278 seconds
// Run generation = 1
// Run evolution = 2
// Run result = 0.00015375
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
// Run optimize = 8

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

// Solution0 result = 0.00014339
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.16623272f;
    r1 = n *= -0.36498520f;
    r2 = n *= -0.01146249f;
    r3 = n += 2.31941795f;
    n = r0 *= n;
    r4 = n += -0.48005155f;
    r5 = n += 0.48526913f;
    n += 2.16276860f;
    n *= -0.36778715f;
    n = r3 += n;
    r6 = n *= -0.60749304f;
    n = r6 *= n;
    n *= r1;
    n += -0.10052565f;
    n += -0.77098119f;
    r1 = n *= -0.14881106f;
    n += r2;
    n *= r6;
    r6 = n *= 0.02735461f;
    n += r3;
    n *= -0.56071711f;
    n = r0 *= n;
    n = r4 += n;
    n *= 0.22386312f;
    n *= r0;
    n += 0.20927355f;
    n *= r1;
    n *= -65721.67968750f;
    n *= r4;
    n *= r5;
    n += -4.50081348f;
    n *= r6;
    return n;
} // Solution0

// Solution1 result = 0.00011635
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.43535295f;
    r1 = n *= -0.39021450f;
    r2 = n *= -0.06319065f;
    r3 = n += -0.11527579f;
    n = r0 *= n;
    r4 = n += -0.00012838f;
    r5 = n += 0.09253357f;
    n += 0.01587381f;
    n *= 0.13676783f;
    n = r3 += n;
    r6 = n *= -0.09756144f;
    n = r6 *= n;
    n *= r1;
    n += -4.23389769f;
    n += 29517.17382812f;
    r1 = n *= -1.95544553f;
    n += r2;
    n *= r6;
    r6 = n *= 0.29014012f;
    n += r3;
    n *= 0.51218545f;
    n = r0 *= n;
    n = r4 += n;
    n *= 0.79699039f;
    n *= r0;
    n += -0.18896797f;
    n *= r1;
    n *= 0.07063364f;
    n *= r4;
    n *= r5;
    n += -0.52065164f;
    n *= r6;
    return n;
} // Solution1

// Solution2 result = 0.00015375
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.45512378f;
    r1 = n *= -0.41031516f;
    r2 = n *= 0.18368778f;
    r3 = n += 0.10962098f;
    n = r0 *= n;
    r4 = n += 1.36091769f;
    r5 = n += -0.13293865f;
    n += -0.19862650f;
    n *= -0.53054631f;
    n = r3 += n;
    r6 = n *= 0.40716431f;
    n = r6 *= n;
    n *= r1;
    n += -0.59649706f;
    n += 1.83515429f;
    r1 = n *= 0.12461840f;
    n += r2;
    n *= r6;
    r6 = n *= 1.84010768f;
    n += r3;
    n *= -0.25565892f;
    n = r0 *= n;
    n = r4 += n;
    n *= 47184.32812500f;
    n *= r0;
    n += -5.29434204f;
    n *= r1;
    n *= 1.73106754f;
    n *= r4;
    n *= r5;
    n += 2.36241269f;
    n *= r6;
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
