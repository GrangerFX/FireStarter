// Run date: 07/10/22 12:38:26 Pacific Daylight Time
// Run duration = 1.745606 seconds
// Run count = 27
// Run mode = 4
// Run clients = 4
// Run process = 0
// Run units = 1
// Run states = 1
// Run population = 69632
// Run iterations = 512
// Run generations = 100
// Run samples = 15
// Run attempts = 32
// Run seed = 0
// Solution Generation = 2600

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

// Precision = 0.00000045

// Solution0 precision = 0.00000030
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.14159274f;
    r0 = n *= -0.63935500f;
    n *= -0.94293940f;
    r1 = n *= 1.02487981f;
    n = r0 *= n;
    r2 = n += 0.85728663f;
    n *= 0.01616403f;
    r3 = n += 0.43531594f;
    r4 = n *= -0.23616534f;
    n *= r0;
    n *= -0.47551176f;
    r0 = n += -0.65013254f;
    n *= -1.14381540f;
    n += -0.38277408f;
    r5 = n *= -0.16468965f;
    n = r3 += n;
    n = r3 += n;
    n *= r2;
    n += 1.79377007f;
    n = r3 *= n;
    n = r1 *= n;
    n = r5 *= n;
    n = r1 += n;
    n *= 4.11900806f;
    n *= r3;
    n *= r0;
    n *= r4;
    n += -0.53398895f;
    n *= -0.00000004f;
    n += r1;
    n += r5;
    n *= -0.95709819f;
    return n;
} // Solution0

// Solution1 precision = 0.00000045
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.09065843f;
    r0 = n *= -0.39071766f;
    n *= -0.61661488f;
    r1 = n *= 0.74315476f;
    n = r0 *= n;
    r2 = n += 0.21112242f;
    n *= 0.30616289f;
    r3 = n += 0.07864150f;
    r4 = n *= -0.24441968f;
    n *= r0;
    n *= -0.73952371f;
    r0 = n += -0.08573624f;
    n *= -0.35842770f;
    n += -0.69388002f;
    r5 = n *= -1.10190701f;
    n = r3 += n;
    n = r3 += n;
    n *= r2;
    n += 1.19432807f;
    n = r3 *= n;
    n = r1 *= n;
    n = r5 *= n;
    n = r1 += n;
    n *= -0.16913702f;
    n *= r3;
    n *= r0;
    n *= r4;
    n += -0.08534809f;
    n *= -1.51768088f;
    n += r1;
    n += r5;
    n *= -0.91199410f;
    return n;
} // Solution1

// Solution2 precision = 0.00000042
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.61799383f;
    r0 = n *= -0.42241707f;
    n *= -1.00945330f;
    r1 = n *= 1.17688370f;
    n = r0 *= n;
    r2 = n += 0.59550750f;
    n *= 0.00929309f;
    r3 = n += 0.73272091f;
    r4 = n *= 0.36609387f;
    n *= r0;
    n *= 0.20702653f;
    r0 = n += 1.43334174f;
    n *= 0.45984611f;
    n += -0.64883560f;
    r5 = n *= 0.78354436f;
    n = r3 += n;
    n = r3 += n;
    n *= r2;
    n += 0.65947324f;
    n = r3 *= n;
    n = r1 *= n;
    n = r5 *= n;
    n = r1 += n;
    n *= 0.76267081f;
    n *= r3;
    n *= r0;
    n *= r4;
    n += -1.51057851f;
    n *= 0.56475407f;
    n += r1;
    n += r5;
    n *= -0.61375642f;
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
