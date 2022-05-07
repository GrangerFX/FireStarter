// Run date: 05/07/22 09:58:49 Pacific Daylight Time
// Run duration = 2.125416 seconds
// Run count = 6
// Run units = 1
// Run population = 34816
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// State Generation = 5

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

// Precision = 0.052476

// Solution0 precision = 0.050283
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.69818556f;
    n += -0.48496428f;
    r1 = n += 0.62192106f;
    r2 = n *= 0.46624398f;
    n += 0.72293586f;
    r3 = n *= -0.78678608f;
    n = r1 *= n;
    n += r0;
    r0 = n *= 0.35990870f;
    r4 = n += -0.24914321f;
    n += 0.17459485f;
    n += -0.15760802f;
    r5 = n += 4.24761105f;
    n = r2 *= n;
    r6 = n *= -0.08745316f;
    n += r3;
    r3 = n += 0.62587774f;
    n += r2;
    n = r5 += n;
    n += -0.14414205f;
    n += 0.51626515f;
    n += r0;
    n *= 1.05574024f;
    r0 = n += -0.41276622f;
    n *= r4;
    n += r1;
    n += -0.11710930f;
    n += r0;
    n *= r6;
    n += -1.04146433f;
    n += r5;
    n *= r3;
    return n;
} // Solution0

// Solution1 precision = 0.034579
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.60079867f;
    n += 0.67457628f;
    r1 = n += 0.19124451f;
    r2 = n *= -0.88383591f;
    n += 0.08857152f;
    r3 = n *= 0.01254298f;
    n = r1 *= n;
    n += r0;
    r0 = n *= 0.45801690f;
    r4 = n += -0.16685082f;
    n += -0.85733795f;
    n += -0.26045585f;
    r5 = n += -0.73884946f;
    n = r2 *= n;
    r6 = n *= -0.52977508f;
    n += r3;
    r3 = n += 0.30867195f;
    n += r2;
    n = r5 += n;
    n += 1.03731298f;
    n += 0.40962288f;
    n += r0;
    n *= -0.32678175f;
    r0 = n += 0.66383398f;
    n *= r4;
    n += r1;
    n += 0.96278608f;
    n += r0;
    n *= r6;
    n += 0.46265754f;
    n += r5;
    n *= r3;
    return n;
} // Solution1

// Solution2 precision = 0.052476
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.53404713f;
    n += -0.81638461f;
    r1 = n += -0.62777531f;
    r2 = n *= 1.29273963f;
    n += 0.59272826f;
    r3 = n *= -0.25909391f;
    n = r1 *= n;
    n += r0;
    r0 = n *= -0.70540226f;
    r4 = n += 0.56446344f;
    n += 0.03289896f;
    n += -0.11219329f;
    r5 = n += -0.04097193f;
    n = r2 *= n;
    r6 = n *= 0.32893780f;
    n += r3;
    r3 = n += 0.77063394f;
    n += r2;
    n = r5 += n;
    n += 0.62261605f;
    n += -0.56268698f;
    n += r0;
    n *= -0.50021476f;
    r0 = n += 0.70128262f;
    n *= r4;
    n += r1;
    n += 0.80677068f;
    n += r0;
    n *= r6;
    n += 0.61722857f;
    n += r5;
    n *= r3;
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
