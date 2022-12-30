// Run date: 12/30/22 14:17:00 Pacific Standard Time
// Run duration = 3807.130120 seconds
// Run count = 10484
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
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 11000
// Run seed = 0
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 10484

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

// Precision = 0.00008526

// Solution0 precision = 0.00000757
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14159656f;
    r1 = n *= -0.33702058f;
    n = r1 *= n;
    n *= 1.85995221f;
    n += -7.79774046f;
    r2 = n *= 1.21887982f;
    r3 = n *= -0.59078389f;
    n *= -0.69145709f;
    n *= -0.33762473f;
    r4 = n *= 0.47174343f;
    n = r3 *= n;
    r5 = n *= 0.18054609f;
    r6 = n *= 0.05231852f;
    n = r1 *= n;
    r7 = n *= 3.22835493f;
    n *= r2;
    n *= -1.04996145f;
    n += -0.16188675f;
    n += -0.98084259f;
    n *= -0.58228785f;
    n = r6 *= n;
    n += -0.02890680f;
    n *= r6;
    n = r1 += n;
    n *= r7;
    n += -0.74328870f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += 0.00000136f;
    return n;
} // Solution0

// Solution1 precision = 0.00001657
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.09066153f;
    r1 = n *= -0.55778039f;
    n = r1 *= n;
    n *= -0.02778224f;
    n += 1.03681278f;
    r2 = n *= -1.88078356f;
    r3 = n *= -3.39380717f;
    n *= 0.20395161f;
    n *= -1.12543678f;
    r4 = n *= 0.26612270f;
    n = r3 *= n;
    r5 = n *= -0.14504692f;
    r6 = n *= -0.75725770f;
    n = r1 *= n;
    r7 = n *= -0.01587481f;
    n *= r2;
    n *= -3.80703497f;
    n += 3.16512442f;
    n += -0.97843570f;
    n *= 0.01290041f;
    n = r6 *= n;
    n += 0.38434026f;
    n *= r6;
    n = r1 += n;
    n *= r7;
    n += 0.67325121f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += -0.11813250f;
    return n;
} // Solution1

// Solution2 precision = 0.00008526
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.61793900f;
    r1 = n *= -0.88882792f;
    n = r1 *= n;
    n *= -0.02283028f;
    n += 2.78921819f;
    r2 = n *= 0.31964335f;
    r3 = n *= 1.34021187f;
    n *= 1.42933857f;
    n *= 0.21601753f;
    r4 = n *= 1.43161011f;
    n = r3 *= n;
    r5 = n *= -1.43157125f;
    r6 = n *= 0.49312493f;
    n = r1 *= n;
    r7 = n *= 0.14047442f;
    n *= r2;
    n *= -0.12163032f;
    n += -5.64091539f;
    n += -2.69008207f;
    n *= 0.18192601f;
    n = r6 *= n;
    n += 1.28571236f;
    n *= r6;
    n = r1 += n;
    n *= r7;
    n += 1.35609174f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += 0.52356732f;
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
