// Run date: 06/22/22 21:13:12 Pacific Daylight Time
// Run duration = 1.347857 seconds
// Run count = 1
// Run units = 1
// Run population = 69632
// Run iterations = 512
// Run generations = 100
// Run samples = 15
// Solution Generation = 3

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

// Precision = 0.000009

// Solution0 precision = 0.000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.23530200f;
    n *= 0.95312899f;
    r0 = n += -0.70457602f;
    n *= -0.91232997f;
    r1 = n *= 0.54189199f;
    n = r0 *= n;
    r2 = n += 5.10750008f;
    n *= 1.18870902f;
    r3 = n *= 0.57813102f;
    n *= 0.36685401f;
    n = r0 += n;
    r4 = n += 0.37158799f;
    n = r0 *= n;
    r5 = n *= -0.99266398f;
    r6 = n += 1.28279495f;
    n += -0.97757602f;
    n += r4;
    n *= r3;
    n *= -0.11527600f;
    n *= -0.25916901f;
    n = r0 *= n;
    r3 = n *= 0.11467400f;
    n += r3;
    n *= 0.10877100f;
    n += r0;
    n += r5;
    n *= r6;
    n += -0.04174500f;
    n *= r1;
    n *= r2;
    n += -0.03383500f;
    n += 0.03383600f;
    return n;
} // Solution0

// Solution1 precision = 0.000009
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -1.16936696f;
    n *= 0.12350600f;
    r0 = n += 0.44636601f;
    n *= 2.65649605f;
    r1 = n *= 0.52111298f;
    n = r0 *= n;
    r2 = n += -0.72508198f;
    n *= -1.42397106f;
    r3 = n *= -0.96540397f;
    n *= -0.91621298f;
    n = r0 += n;
    r4 = n += 0.22957399f;
    n = r0 *= n;
    r5 = n *= 0.82829702f;
    r6 = n += 0.73798603f;
    n += 0.04185900f;
    n += r4;
    n *= r3;
    n *= 1.24631095f;
    n *= 1.54456699f;
    n = r0 *= n;
    r3 = n *= 0.22763801f;
    n += r3;
    n *= -0.20138600f;
    n += r0;
    n += r5;
    n *= r6;
    n += -0.84857303f;
    n *= r1;
    n *= r2;
    n += 0.58500999f;
    n += -0.70314300f;
    return n;
} // Solution1

// Solution2 precision = 0.000009
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.38452500f;
    n *= 0.33726400f;
    r0 = n += -0.33951899f;
    n *= 1.15376103f;
    r1 = n *= 1.14572203f;
    n = r0 *= n;
    r2 = n += -0.97373199f;
    n *= 1.08275294f;
    r3 = n *= 1.42765200f;
    n *= 0.10349500f;
    n = r0 += n;
    r4 = n += -1.39268696f;
    n = r0 *= n;
    r5 = n *= -0.12741999f;
    r6 = n += -0.56444699f;
    n += 0.38842201f;
    n += r4;
    n *= r3;
    n *= 1.60415804f;
    n *= -2.92934108f;
    n = r0 *= n;
    r3 = n *= -2.34797311f;
    n += r3;
    n *= -0.60206097f;
    n += r0;
    n += r5;
    n *= r6;
    n += -0.84946799f;
    n *= r1;
    n *= r2;
    n += 0.70505202f;
    n += -0.18145201f;
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
