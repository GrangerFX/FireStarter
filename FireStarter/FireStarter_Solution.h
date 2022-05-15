// Run date: 05/15/22 14:27:04 Pacific Daylight Time
// Run duration = 1.522010 seconds
// Run count = 1
// Run units = 1
// Run population = 69632
// Run iterations = 512
// Run generations = 100
// Run samples = 15
// State Generation = 512000

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define SOLUTION_VARIATIONS 3

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

// Precision = 0.000022

// Solution0 precision = 0.000018
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.51766503f;
    r0 = n += 0.11173000f;
    n += -0.15754400f;
    n += -0.98116100f;
    n += 0.06965600f;
    r1 = n *= -0.25509301f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= 0.12472300f;
    r3 = n += -0.56894398f;
    r4 = n += -0.56222600f;
    n *= 0.18426400f;
    n *= -1.13901997f;
    n *= r2;
    n *= -0.55322701f;
    r2 = n += -1.66042399f;
    n *= -0.47823599f;
    n *= r1;
    n *= r2;
    n *= -0.99076903f;
    n += -0.09465400f;
    n *= r4;
    r4 = n *= 0.15408900f;
    r2 = n += 0.72953600f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -0.85623997f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.03983900f;
    return n;
} // Solution0

// Solution1 precision = 0.000022
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.46340406f;
    r0 = n += 1.53646600f;
    n += -0.36353999f;
    n += -0.65528500f;
    n += 0.42275101f;
    r1 = n *= -0.70149398f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.17527001f;
    r3 = n += 0.47187400f;
    r4 = n += 0.42154199f;
    n *= -0.45685199f;
    n *= 4.15131283f;
    n *= r2;
    n *= -0.04771300f;
    r2 = n += -0.87463498f;
    n *= -0.94856697f;
    n *= r1;
    n *= r2;
    n *= 0.94146597f;
    n += -0.12590700f;
    n *= r4;
    r4 = n *= 0.29244199f;
    r2 = n += 1.13152397f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 1.03229594f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += -0.05773600f;
    return n;
} // Solution1

// Solution2 precision = 0.000009
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.57326502f;
    r0 = n += -0.61610901f;
    n += -1.17946506f;
    n += 0.12660600f;
    n += 0.06594900f;
    r1 = n *= 0.21157999f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.13676800f;
    r3 = n += 0.87208402f;
    r4 = n += 0.69133002f;
    n *= -0.76929098f;
    n *= -0.08241600f;
    n *= r2;
    n *= -0.26503000f;
    r2 = n += 0.44746101f;
    n *= -0.98584503f;
    n *= r1;
    n *= r2;
    n *= 0.48947999f;
    n += -0.00149000f;
    n *= r4;
    r4 = n *= -1.37114203f;
    r2 = n += 0.52384198f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 0.64772898f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.29841000f;
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
