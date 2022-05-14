// Run date: 05/14/22 11:10:01 Pacific Daylight Time
// Run duration = 6.374990 seconds
// Run count = 5
// Run units = 4
// Run population = 34816
// Run iterations = 128
// Run generations = 100
// Run samples = 15
// State Generation = 4

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

// Precision = 0.000033

// Solution0 precision = 0.000011
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.20939900f;
    r0 = n += 0.65786570f;
    r1 = n *= -1.10239935f;
    r2 = n += 0.00002951f;
    n *= r1;
    n += -0.80742574f;
    r1 = n += 0.28149828f;
    r3 = n += -1.28964567f;
    r4 = n += -0.82216340f;
    n += r3;
    n += -1.27931595f;
    r3 = n *= -0.23978655f;
    n *= -1.33124804f;
    n = r2 *= n;
    r5 = n *= 0.10667119f;
    n *= r0;
    r0 = n *= -0.54795462f;
    n *= 1.78247190f;
    n *= 0.14459313f;
    n += r0;
    r0 = n += 1.01373661f;
    n *= 1.05730975f;
    r6 = n *= 0.99268007f;
    n += 0.47793767f;
    n *= r5;
    n *= r0;
    n += r2;
    n *= r3;
    n *= r6;
    n *= r4;
    n *= r1;
    n += 0.00003480f;
    return n;
} // Solution0

// Solution1 precision = 0.000033
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.62771183f;
    r0 = n += -1.94005573f;
    r1 = n *= 0.41742030f;
    r2 = n += 0.00000590f;
    n *= r1;
    n += -1.02166021f;
    r1 = n += -0.51798755f;
    r3 = n += -0.67789060f;
    r4 = n += -1.55023551f;
    n += r3;
    n += 0.00068465f;
    r3 = n *= -0.66073608f;
    n *= 0.08283178f;
    n = r2 *= n;
    r5 = n *= 0.01865994f;
    n *= r0;
    r0 = n *= -0.80462706f;
    n *= 0.14281854f;
    n *= 1.65181482f;
    n += r0;
    r0 = n += 0.57383412f;
    n *= 1.15098250f;
    r6 = n *= -0.86767894f;
    n += -1.76358807f;
    n *= r5;
    n *= r0;
    n += r2;
    n *= r3;
    n *= r6;
    n *= r4;
    n *= r1;
    n += -0.11812504f;
    return n;
} // Solution1

// Solution2 precision = 0.000031
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.30758521f;
    r0 = n += -0.80516785f;
    r1 = n *= 0.83445722f;
    r2 = n += -0.00009728f;
    n *= r1;
    n += -1.47573328f;
    r1 = n += -1.46149993f;
    r3 = n += -1.52702761f;
    r4 = n += -0.31659350f;
    n += r3;
    n += 0.29450169f;
    r3 = n *= -1.05207837f;
    n *= -0.95524603f;
    n = r2 *= n;
    r5 = n *= -0.47939608f;
    n *= r0;
    r0 = n *= 0.24549489f;
    n *= 0.13822894f;
    n *= -0.82725835f;
    n += r0;
    r0 = n += -0.34180391f;
    n *= -0.01290790f;
    r6 = n *= 0.72284448f;
    n += 0.16182607f;
    n *= r5;
    n *= r0;
    n += r2;
    n *= r3;
    n *= r6;
    n *= r4;
    n *= r1;
    n += 0.52347761f;
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
