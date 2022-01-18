#include <math.h>

// Run date: 01/18/22 12:23:08 Pacific Standard Time
// Run duration = 0.586831 seconds
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
    float r0, r1, r2, r3, r4;

    n *= 0.56213212f;
    n += -0.74615604f;
    r0 = n;
    n *= -0.22414999f;
    n += 0.06134491f;
    n *= r0;
    r0 = n;
    n += 0.26802534f;
    n *= 0.11377394f;
    n += 1.45612895f;
    r1 = n;
    n *= r1;
    r1 = n;
    n += -0.73505533f;
    n *= r0;
    n += -0.39662689f;
    n = fabsf(n);
    r0 = n;
    n *= 1.31726372f;
    r2 = n;
    n += -1.11769056f;
    n *= 0.66797900f;
    r3 = n;
    n += -0.31993249f;
    n *= 0.55277872f;
    n += -1.07015121f;
    r4 = n;
    n *= r3;
    n += -0.15695074f;
    n *= -0.33839712f;
    r3 = n;
    n += r0;
    r0 = n;
    n *= -1.31491041f;
    n += r3;
    n = fabsf(n);
    n *= r4;
    n += 0.84217393f;
    n *= r1;
    r1 = n;
    n += r1;
    n *= 0.70477086f;
    n += r2;
    return n;
} // Solution0

// Solution1 precision = 0.000013
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.08785332f;
    n += -0.26301825f;
    r0 = n;
    n *= 0.00013578f;
    n += -1.35342920f;
    n *= r0;
    r0 = n;
    n += 0.38256383f;
    n *= 0.00005513f;
    n += -0.92848635f;
    r1 = n;
    n *= r1;
    r1 = n;
    n += 0.87881708f;
    n *= r0;
    n += 0.35572940f;
    n = fabsf(n);
    r0 = n;
    n *= -0.00007233f;
    r2 = n;
    n += -1.03999233f;
    n *= -0.17383945f;
    r3 = n;
    n += -1.20299876f;
    n *= 1.25211215f;
    n += -0.16451076f;
    r4 = n;
    n *= r3;
    n += 0.81958622f;
    n *= -0.82469326f;
    r3 = n;
    n += r0;
    r0 = n;
    n *= 2.42700839f;
    n += r3;
    n = fabsf(n);
    n *= r4;
    n += 1.13989961f;
    n *= r1;
    r1 = n;
    n += r1;
    n *= 0.79930156f;
    n += r2;
    return n;
} // Solution1
