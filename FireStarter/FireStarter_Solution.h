#include <math.h>

// Run date: 01/30/22 15:47:50 Pacific Standard Time
// Run duration = 2.933109 seconds
// Run count = 2
// Run units = 16
// Run population = 4352
// Run iterations = 15
// Run generations = 50

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define TARGET_PI 3.14159265f
#define TARGET_VARIATIONS 1

inline float Target(float n, unsigned int variation)
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
} // Target

// Solution0 precision = 0.000244
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.51000243f;
    n += -0.02753753f;
    r0 = n;
    n *= 0.80394191f;
    n += -0.12380926f;
    r1 = n;
    n *= 0.63158882f;
    r2 = n;
    n += 0.41219509f;
    n *= r1;
    r1 = n;
    n += r0;
    n *= -0.95626181f;
    r0 = n;
    n += r2;
    n *= 0.25713515f;
    r2 = n;
    n += 0.42777807f;
    r3 = n;
    n *= 0.21592832f;
    n += 0.75874567f;
    r4 = n;
    n *= -0.33222902f;
    n += r4;
    r4 = n;
    n *= -1.25199950f;
    n += -0.39494941f;
    r5 = n;
    n *= r2;
    n += -0.54364407f;
    n *= r5;
    n += 0.73962677f;
    r5 = n;
    n *= -0.53693223f;
    n += -0.54537201f;
    n *= r1;
    n += 0.97652590f;
    n *= r5;
    r5 = n;
    n += r5;
    n *= r0;
    n += -0.94038552f;
    n *= r4;
    n += r3;
    return n;
} // Solution0

