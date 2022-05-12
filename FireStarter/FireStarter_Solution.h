// Run date: 05/12/22 15:53:02 Pacific Daylight Time
// Run duration = 1.077960 seconds
// Run count = 11
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

    n += -0.51766509f;
    r0 = n += 0.11173003f;
    n += -0.15754393f;
    n += -0.98116130f;
    n += 0.06965622f;
    r1 = n *= -0.25509295f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= 0.12472270f;
    r3 = n += -0.56894368f;
    r4 = n += -0.56222636f;
    n *= 0.18426414f;
    n *= -1.13901973f;
    n *= r2;
    n *= -0.55322713f;
    r2 = n += -1.66042411f;
    n *= -0.47823641f;
    n *= r1;
    n *= r2;
    n *= -0.99076915f;
    n += -0.09465350f;
    n *= r4;
    r4 = n *= 0.15408903f;
    r2 = n += 0.72953647f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -0.85624021f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.03983897f;
    return n;
} // Solution0

// Solution1 precision = 0.000022
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.46340394f;
    r0 = n += 1.53646636f;
    n += -0.36353987f;
    n += -0.65528500f;
    n += 0.42275098f;
    r1 = n *= -0.70149380f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.17526986f;
    r3 = n += 0.47187394f;
    r4 = n += 0.42154199f;
    n *= -0.45685184f;
    n *= 4.15131330f;
    n *= r2;
    n *= -0.04771343f;
    r2 = n += -0.87463480f;
    n *= -0.94856745f;
    n *= r1;
    n *= r2;
    n *= 0.94146562f;
    n += -0.12590680f;
    n *= r4;
    r4 = n *= 0.29244226f;
    r2 = n += 1.13152373f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 1.03229630f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += -0.05773639f;
    return n;
} // Solution1

// Solution2 precision = 0.000009
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.57326537f;
    r0 = n += -0.61610949f;
    n += -1.17946506f;
    n += 0.12660566f;
    n += 0.06594891f;
    r1 = n *= 0.21157959f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.13676825f;
    r3 = n += 0.87208384f;
    r4 = n += 0.69133013f;
    n *= -0.76929080f;
    n *= -0.08241585f;
    n *= r2;
    n *= -0.26502961f;
    r2 = n += 0.44746086f;
    n *= -0.98584485f;
    n *= r1;
    n *= r2;
    n *= 0.48947957f;
    n += -0.00148975f;
    n *= r4;
    r4 = n *= -1.37114227f;
    r2 = n += 0.52384245f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 0.64772874f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.29840994f;
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
