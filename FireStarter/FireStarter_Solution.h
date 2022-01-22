#include <math.h>

// Run date: 01/22/22 11:08:17 Pacific Standard Time
// Run duration = 0.625775 seconds
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

// Solution0 precision = 0.000018
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.48153508f;
    n += -1.66874850f;
    n += 0.57948726f;
    n = fabsf(n);
    n *= -0.44645959f;
    n += 0.55340630f;
    n *= 1.15635145f;
    r0 = n;
    n += 0.98195970f;
    n *= -1.09246719f;
    n = fabsf(n);
    r0 = n;
    n += -1.07325101f;
    n *= 2.03840137f;
    n += -0.84817940f;
    r1 = n;
    n *= 0.79281843f;
    r2 = n;
    n *= 0.09583627f;
    r3 = n;
    n += -0.79797983f;
    n *= -1.01909328f;
    n = fabsf(n);
    n *= r2;
    n += r0;
    r0 = n;
    n *= -0.84959793f;
    n += r1;
    r1 = n;
    n += -0.50243133f;
    r2 = n;
    n += -1.10106134f;
    n *= 0.48233703f;
    n = fabsf(n);
    r4 = n;
    n += r3;
    n += r2;
    n *= r0;
    n *= 0.87591487f;
    n *= r4;
    n *= r1;
    return n;
} // Solution0

// Solution1 precision = 0.000000
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.45762464f;
    n += -1.21663237f;
    n += -0.81178874f;
    n = fabsf(n);
    n *= -0.59715605f;
    n += 0.21311928f;
    n *= -0.09695183f;
    r0 = n;
    n += -0.16122137f;
    n *= 0.01056390f;
    n = fabsf(n);
    r0 = n;
    n += 0.33404991f;
    n *= -0.86253500f;
    n += 0.53342927f;
    r1 = n;
    n *= -0.00900010f;
    r2 = n;
    n *= 1.19616497f;
    r3 = n;
    n += -0.86734748f;
    n *= -0.50188541f;
    n = fabsf(n);
    n *= r2;
    n += r0;
    r0 = n;
    n *= 0.85957712f;
    n += r1;
    r1 = n;
    n += 4.57210732f;
    r2 = n;
    n += 4.34054518f;
    n *= 4.78799486f;
    n = fabsf(n);
    r4 = n;
    n += r3;
    n += r2;
    n *= r0;
    n *= 3.12436652f;
    n *= r4;
    n *= r1;
    return n;
} // Solution1
