// Run date: 05/06/23 16:12:00 Pacific Daylight Time
// Run duration = 174.432945 seconds
// Run generation = 268
// Run result = 0.00000107
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 1
// Run seeds = 1
// Run mode = FIRESTARTER_REVOLVE
// Run tests = 100
// Run units = 4
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 64
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.14159274f;
    r1 = n *= -0.82250291f;
    n *= r0;
    r0 = n += 3.12666798f;
    r2 = n *= 0.12720403f;
    n += 0.15596434f;
    r3 = n += 0.88978237f;
    n *= -0.11311984f;
    r4 = n += -1.59128857f;
    n *= r0;
    n *= 0.00659346f;
    n = r4 += n;
    r0 = n *= 1.40182972f;
    n *= r4;
    r4 = n += -1.48324239f;
    n *= r2;
    n *= 2.38396811f;
    n *= -0.23573984f;
    r2 = n *= 0.25887486f;
    n *= -1.26307678f;
    n += r3;
    n *= r0;
    n *= 4.17354870f;
    n += -9.85801125f;
    n += 8.68117046f;
    n *= 0.06742445f;
    n += r2;
    n *= 0.14277168f;
    n *= -1.97866964f;
    n *= r4;
    n *= r1;
    n += 0.00000000f;
    return n;
} // Solution0

// Solution1 result = 0.00000018
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.09065819f;
    r1 = n *= 0.18724625f;
    n *= r0;
    r0 = n += -0.41876805f;
    r2 = n *= 0.27506882f;
    n += -6.76935911f;
    r3 = n += -5.07224226f;
    n *= 0.14598705f;
    r4 = n += 0.60331476f;
    n *= r0;
    n *= -0.23815936f;
    n = r4 += n;
    r0 = n *= -0.23991339f;
    n *= r4;
    r4 = n += -0.00310242f;
    n *= r2;
    n *= 20.11261940f;
    n *= 0.01959654f;
    r2 = n *= -0.00037931f;
    n *= 0.18376949f;
    n += r3;
    n *= r0;
    n *= 6.60203362f;
    n += 0.50709528f;
    n += -48.89623260f;
    n *= 0.84955901f;
    n += r2;
    n *= 0.32372445f;
    n *= -0.77540195f;
    n *= r4;
    n *= r1;
    n += -0.11813153f;
    return n;
} // Solution1

// Solution2 result = 0.00000107
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -2.61799359f;
    r1 = n *= -0.36667943f;
    n *= r0;
    r0 = n += 1.13682914f;
    r2 = n *= -0.16405731f;
    n += -2.18302488f;
    r3 = n += 0.66118819f;
    n *= 2.07481694f;
    r4 = n += -2.77445102f;
    n *= r0;
    n *= 0.03350724f;
    n = r4 += n;
    r0 = n *= -0.80330771f;
    n *= r4;
    r4 = n += 0.32831535f;
    n *= r2;
    n *= -1.90362406f;
    n *= 0.05652604f;
    r2 = n *= -0.00142262f;
    n *= -8.84166336f;
    n += r3;
    n *= r0;
    n *= 0.55309570f;
    n += 1.76186037f;
    n += 1.71140254f;
    n *= -1.35851789f;
    n += r2;
    n *= -1.19990993f;
    n *= 0.03190481f;
    n *= r4;
    n *= r1;
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
