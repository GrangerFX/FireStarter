#include <math.h>

// Run date: 01/18/22 13:28:01 Pacific Standard Time
// Run duration = 0.615337 seconds
// Run count = 1
// Run units = 1
// Run population = 4352
// Run iterations = 15
// Run generations = 100

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define TARGET_PI 3.14159265f

inline float Target(float n, unsigned int variation)
{
    switch (variation) {
    default:
    case 0:
        return sinf(n);
    case 1:
        return sinf(n * 1.2f) + n * 0.2f;
    case 2:
        return sinf((n + 0.4f) * 0.9f) - n * 0.2f + 0.5f;
    case 3:
        return fabsf(fmodf(fabsf(n - TARGET_PI * 0.5f), TARGET_PI * 2.0f) - TARGET_PI) - TARGET_PI * 0.5f;
    }
} // Target

// Solution0 precision = 0.000011
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.26591313f;
    n += -0.83593041f;
    r0 = n;
    n *= 0.89586139f;
    n += 0.08231388f;
    n *= -0.48085940f;
    r1 = n;
    n += 0.03926144f;
    r2 = n;
    n *= r2;
    r2 = n;
    n += -0.86557692f;
    r3 = n;
    n *= 1.04893208f;
    r4 = n;
    n += -0.85046649f;
    r5 = n;
    n *= 0.50396556f;
    n += -0.88538992f;
    n *= r3;
    n += 0.55100340f;
    r3 = n;
    n *= -0.14904451f;
    n += r3;
    n *= -1.23167980f;
    r3 = n;
    n += r2;
    r2 = n;
    n *= -0.78705913f;
    n += -0.17283547f;
    n *= 0.17123801f;
    n += r2;
    n *= r0;
    r0 = n;
    n += 0.08709242f;
    n *= 0.44330367f;
    n += r1;
    r1 = n;
    n *= r0;
    n += r5;
    n *= r3;
    n += r4;
    n *= r1;
    n += 0.00082627f;
    return n;
} // Solution0

// Solution1 precision = 0.000048
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.21453458f;
    n += -0.57101196f;
    r0 = n;
    n *= 1.05879581f;
    n += -0.04909462f;
    n *= -0.54247433f;
    r1 = n;
    n += -0.03402012f;
    r2 = n;
    n *= r2;
    r2 = n;
    n += -0.98939794f;
    r3 = n;
    n *= 0.89999849f;
    r4 = n;
    n += -0.34895623f;
    r5 = n;
    n *= 1.27814949f;
    n += -0.63502955f;
    n *= r3;
    n += 0.26400754f;
    r3 = n;
    n *= 1.20672202f;
    n += r3;
    n *= -0.54895025f;
    r3 = n;
    n += r2;
    r2 = n;
    n *= -0.20316929f;
    n += -1.97262108f;
    n *= -0.08325841f;
    n += r2;
    n *= r0;
    r0 = n;
    n += -0.12842363f;
    n *= 0.37975895f;
    n += r1;
    r1 = n;
    n *= r0;
    n += r5;
    n *= r3;
    n += r4;
    n *= r1;
    n += 0.54198098f;
    return n;
} // Solution1
