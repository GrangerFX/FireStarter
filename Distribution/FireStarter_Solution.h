// Run date: 07/03/22 12:14:42 Pacific Daylight Time
// Run duration = 4.029823 seconds
// Run count = 15
// Run mode = 3
// Run clients = 4
// Run process = 0
// Run units = 1
// Run states = 4
// Run population = 69632
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// Run seed = 57
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

// Precision = 0.000253

// Solution0 precision = 0.000253
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -0.68522972f;
    n += -1.35616791f;
    n *= -0.46352434f;
    n += r0;
    r0 = n += -0.53433567f;
    r1 = n += -0.23108548f;
    r2 = n += -0.67144489f;
    r3 = n *= 1.70638442f;
    n += 0.53904307f;
    r4 = n += 0.86519569f;
    n *= -0.68005234f;
    n = r0 += n;
    n = r0 *= n;
    r5 = n += -0.86489683f;
    n *= r2;
    n += r4;
    n *= r5;
    n *= r3;
    n *= 0.31515312f;
    r3 = n *= 0.55535996f;
    n = r0 += n;
    n = r1 += n;
    n = r3 += n;
    n += 1.46860516f;
    n = r0 *= n;
    n += -0.03225370f;
    n *= 0.30947000f;
    n += 1.69268394f;
    n += r3;
    n *= r0;
    n += r1;
    n += 0.12495160f;
    return n;
} // Solution0

// Solution1 precision = 0.000181
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -0.51739967f;
    n += 0.32145450f;
    n *= -0.83153909f;
    n += r0;
    r0 = n += -0.75258946f;
    r1 = n += -1.25621319f;
    r2 = n += 2.49268603f;
    r3 = n *= 0.74548715f;
    n += 0.17411830f;
    r4 = n += -0.67392665f;
    n *= 0.76241052f;
    n = r0 += n;
    n = r0 *= n;
    r5 = n += 0.79057550f;
    n *= r2;
    n += r4;
    n *= r5;
    n *= r3;
    n *= -0.06086572f;
    r3 = n *= -0.72921848f;
    n = r0 += n;
    n = r1 += n;
    n = r3 += n;
    n += -0.27292004f;
    n = r0 *= n;
    n += -0.13300273f;
    n *= -0.25530243f;
    n += -1.06904888f;
    n += r3;
    n *= r0;
    n += r1;
    n += -0.15109126f;
    return n;
} // Solution1

// Solution2 precision = 0.000233
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -0.57547587f;
    n += 0.57552677f;
    n *= -0.52798456f;
    n += r0;
    r0 = n += -0.05922788f;
    r1 = n += -0.67437929f;
    r2 = n += -0.69246459f;
    r3 = n *= -1.58294272f;
    n += -0.01926278f;
    r4 = n += -0.58494955f;
    n *= 0.55371910f;
    n = r0 += n;
    n = r0 *= n;
    r5 = n += 1.07902980f;
    n *= r2;
    n += r4;
    n *= r5;
    n *= r3;
    n *= -0.68691361f;
    r3 = n *= -0.16814116f;
    n = r0 += n;
    n = r1 += n;
    n = r3 += n;
    n += -3.08337522f;
    n = r0 *= n;
    n += 0.21857227f;
    n *= -0.52322775f;
    n += -1.18214417f;
    n += r3;
    n *= r0;
    n += r1;
    n += -0.14448830f;
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
