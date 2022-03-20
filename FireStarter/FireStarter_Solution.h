#include <math.h>

// Run date: 03/20/22 11:57:11 Pacific Daylight Time
// Run duration = 3.975636 seconds
// Run count = 2
// Run units = 1
// Run population = 17408
// Run iterations = 4096
// Run generations = 100
// Run samples = 15

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define PROGRAM_VARIATIONS 3

#ifndef __CUDACC__
#include <cmath>
#endif

#define TARGET_PI 3.14159265f

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

// Precision = 0.000244

// Solution0 precision = 0.000020
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.26825804f;
    r1 = n += -0.91967082f;
    r2 = n *= -1.69349504f;
    r3 = n += -0.84218556f;
    n = r3 *= n;
    r4 = n += -0.43832213f;
    r5 = n *= -1.52764535f;
    n += r5;
    n *= -0.41018260f;
    r5 = n += -1.22350121f;
    r6 = n *= 0.08148478f;
    n += r0;
    n = r2 *= n;
    n += r4;
    n *= r2;
    n += r5;
    r5 = n *= 1.19252396f;
    r2 = n += 1.56249452f;
    n *= 0.33965254f;
    n += r3;
    r3 = n *= -0.69980294f;
    n += r1;
    n *= -2.26673770f;
    n += 0.24868655f;
    n *= -0.00105977f;
    n += 0.26922774f;
    n *= r5;
    n += r6;
    n *= r3;
    n += r2;
    n *= -0.89045370f;
    n += 0.36441675f;
    return n;
} // Solution0

// Solution1 precision = 0.000054
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.52697897f;
    r1 = n += 1.36089468f;
    r2 = n *= -1.12727678f;
    r3 = n += 0.86468422f;
    n = r3 *= n;
    r4 = n += -1.85603356f;
    r5 = n *= -1.23924124f;
    n += r5;
    n *= 0.00406550f;
    r5 = n += -0.37410912f;
    r6 = n *= 0.89387876f;
    n += r0;
    n = r2 *= n;
    n += r4;
    n *= r2;
    n += r5;
    r5 = n *= 2.65219235f;
    r2 = n += -0.45985937f;
    n *= 0.75478888f;
    n += r3;
    r3 = n *= 0.07154102f;
    n += r1;
    n *= -3.38067460f;
    n += 2.53202343f;
    n *= -0.00264135f;
    n += -0.51041794f;
    n *= r5;
    n += r6;
    n *= r3;
    n += r2;
    n *= -0.33682922f;
    n += -0.05540137f;
    return n;
} // Solution1

// Solution2 precision = 0.000244
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.40547231f;
    r1 = n += -2.34859800f;
    r2 = n *= -1.12006569f;
    r3 = n += -0.04972173f;
    n = r3 *= n;
    r4 = n += 1.89569950f;
    r5 = n *= -0.24241517f;
    n += r5;
    n *= -0.55546790f;
    r5 = n += -1.05236292f;
    r6 = n *= -0.18927211f;
    n += r0;
    n = r2 *= n;
    n += r4;
    n *= r2;
    n += r5;
    r5 = n *= -0.33346584f;
    r2 = n += 0.27777639f;
    n *= -0.25766945f;
    n += r3;
    r3 = n *= 0.56804121f;
    n += r1;
    n *= -1.09711218f;
    n += 0.65563059f;
    n *= -0.19645399f;
    n += -0.43770128f;
    n *= r5;
    n += r6;
    n *= r3;
    n += r2;
    n *= 1.57178760f;
    n += 1.05686045f;
    return n;
} // Solution2
