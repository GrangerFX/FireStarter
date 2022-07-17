// Run date: 07/17/22 13:06:59 Pacific Daylight Time
// Run duration = 1.021748 seconds
// Run count = 23
// Run mode = 2
// Run units = 1
// Run process = 0
// Run states = 1
// Run population = 69632
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// Run attempts = 32
// Run seed = 8337
// Solution Generation = 22

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

// Precision = 0.00000268

// Solution0 precision = 0.00000268
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.14159369f;
    r0 = n *= -0.75909203f;
    n *= 0.90554887f;
    r1 = n *= 0.61645931f;
    n = r0 *= n;
    r2 = n += -1.19324708f;
    n *= 0.01975593f;
    r3 = n += -0.79064041f;
    r4 = n *= -0.21870954f;
    n *= r0;
    n *= -0.21954247f;
    r0 = n += 0.86535192f;
    r5 = n *= 1.28875232f;
    n += -0.24589635f;
    r6 = n *= -0.88753062f;
    n = r3 += n;
    n += 0.90369958f;
    n *= r2;
    n += r5;
    n = r3 *= n;
    n = r1 *= n;
    n = r6 *= n;
    n += r1;
    n *= -0.19785056f;
    n *= r3;
    n *= r0;
    n *= r4;
    n += 0.21909970f;
    n *= -1.29291153f;
    n *= -0.00469077f;
    n += r6;
    n += -0.00132775f;
    return n;
} // Solution0

// Solution1 precision = 0.00000215
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.09065866f;
    r0 = n *= -0.18400069f;
    n *= -1.19099939f;
    r1 = n *= 1.28366685f;
    n = r0 *= n;
    r2 = n += 1.32305193f;
    n *= -1.15445375f;
    r3 = n += 0.72896016f;
    r4 = n *= 0.32510921f;
    n *= r0;
    n *= 0.27608135f;
    r0 = n += 0.03923636f;
    r5 = n *= -0.79369944f;
    n += 1.29839504f;
    r6 = n *= -0.76043993f;
    n = r3 += n;
    n += 0.04567724f;
    n *= r2;
    n += r5;
    n = r3 *= n;
    n = r1 *= n;
    n = r6 *= n;
    n += r1;
    n *= 0.48849833f;
    n *= r3;
    n *= r0;
    n *= r4;
    n += -2.26419854f;
    n *= 0.81910276f;
    n *= 0.47266692f;
    n += r6;
    n += 0.75848180f;
    return n;
} // Solution1

// Solution2 precision = 0.00000113
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -2.61799359f;
    r0 = n *= 0.40715784f;
    n *= 1.12025332f;
    r1 = n *= -1.20432758f;
    n = r0 *= n;
    r2 = n += 0.39342585f;
    n *= 0.00567073f;
    r3 = n += 0.55344236f;
    r4 = n *= 1.20184267f;
    n *= r0;
    n *= -0.12671043f;
    r0 = n += -1.74528730f;
    r5 = n *= -0.44571355f;
    n += 0.05449558f;
    r6 = n *= 0.97120428f;
    n = r3 += n;
    n += -0.29631379f;
    n *= r2;
    n += r5;
    n = r3 *= n;
    n = r1 *= n;
    n = r6 *= n;
    n += r1;
    n *= -1.29887366f;
    n *= r3;
    n *= r0;
    n *= r4;
    n += 1.03957903f;
    n *= -0.28937891f;
    n *= -0.23600326f;
    n += r6;
    n += 0.45260143f;
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
