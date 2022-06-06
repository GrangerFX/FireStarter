// Run date: 06/05/22 17:38:52 Pacific Daylight Time
// Run duration = 3.099728 seconds
// Run count = 1
// Run units = 1
// Run population = 69632
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// Solution Generation = 0

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

// Precision = 0.000861

// Solution0 precision = 0.000158
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += 0.04562105f;
    r0 = n *= 0.41674981f;
    n += -0.55420589f;
    n = r0 += n;
    r1 = n += 0.51628834f;
    r2 = n *= 0.03674205f;
    n = r2 += n;
    r3 = n += -0.63801044f;
    r4 = n += -0.06401942f;
    n = r3 += n;
    r5 = n += 0.09127662f;
    n += -0.62211227f;
    r6 = n *= 0.87668687f;
    n = r5 *= n;
    n = r0 += n;
    n *= r4;
    n = r2 *= n;
    n += 0.56019676f;
    r4 = n += -0.24369025f;
    n += r6;
    n *= r2;
    n *= r3;
    n += r5;
    n = r1 *= n;
    n += 1.29537916f;
    n *= 0.11670426f;
    n += 1.78701806f;
    n *= 0.64953387f;
    n += -0.05308671f;
    n *= r4;
    n *= r1;
    n *= r0;
    return n;
} // Solution0

// Solution1 precision = 0.000237
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -0.66221005f;
    r0 = n *= 0.21599109f;
    n += -0.57775229f;
    n = r0 += n;
    r1 = n += -0.42489821f;
    r2 = n *= -0.09956481f;
    n = r2 += n;
    r3 = n += -0.73611438f;
    r4 = n += -0.00452193f;
    n = r3 += n;
    r5 = n += -1.19028151f;
    n += -0.64054906f;
    r6 = n *= -0.35286048f;
    n = r5 *= n;
    n = r0 += n;
    n *= r4;
    n = r2 *= n;
    n += 0.71638513f;
    r4 = n += 0.51690006f;
    n += r6;
    n *= r2;
    n *= r3;
    n += r5;
    n = r1 *= n;
    n += 1.23034656f;
    n *= -0.18354699f;
    n += 1.48977017f;
    n *= -0.27792260f;
    n += 0.10553791f;
    n *= r4;
    n *= r1;
    n *= r0;
    return n;
} // Solution1

// Solution2 precision = 0.000861
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -2.51099396f;
    r0 = n *= 0.20602594f;
    n += -0.56256056f;
    n = r0 += n;
    r1 = n += 1.59697592f;
    r2 = n *= -0.11184718f;
    n = r2 += n;
    r3 = n += 1.02044380f;
    r4 = n += 0.05004441f;
    n = r3 += n;
    r5 = n += -0.42306438f;
    n += -1.21971130f;
    r6 = n *= 0.64216691f;
    n = r5 *= n;
    n = r0 += n;
    n *= r4;
    n = r2 *= n;
    n += 0.66867119f;
    r4 = n += 0.08730189f;
    n += r6;
    n *= r2;
    n *= r3;
    n += r5;
    n = r1 *= n;
    n += -1.14974761f;
    n *= 0.05210979f;
    n += 2.11299729f;
    n *= -3.12677741f;
    n += -2.02687144f;
    n *= r4;
    n *= r1;
    n *= r0;
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
