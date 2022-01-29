#include <math.h>

// Run date: 01/29/22 12:11:25 Pacific Standard Time
// Run duration = 4.989090 seconds
// Run count = 9
// Run units = 16
// Run population = 69632
// Run iterations = 15
// Run generations = 50

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

// Solution0 precision = 0.000858
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n = fabsf(n);
    n += -0.59482366f;
    r0 = n;
    n += 0.77608961f;
    r1 = n;
    n = fabsf(n);
    n += 0.67224014f;
    n *= -0.21992990f;
    r2 = n;
    n *= 0.84939086f;
    r3 = n;
    n = fabsf(n);
    n += -0.41815788f;
    r0 = n;
    n *= r0;
    n += r2;
    r2 = n;
    n += -1.08750522f;
    r0 = n;
    n += -0.89860433f;
    n *= r3;
    r3 = n;
    n += 0.18235561f;
    n *= -0.42627230f;
    n *= 0.33120969f;
    r4 = n;
    n += 1.07787585f;
    n += r4;
    n *= r3;
    n += -0.01552681f;
    r3 = n;
    n += r3;
    n *= -0.91490340f;
    n *= 1.18315995f;
    r3 = n;
    n *= r0;
    n = fabsf(n);
    n += -0.75412822f;
    r0 = n;
    n *= r2;
    n += r3;
    n *= 0.20746738f;
    n *= r1;
    n += r0;
    return n;
} // Solution0

// Solution1 precision = 0.000003
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n = fabsf(n);
    n += -0.78049976f;
    r0 = n;
    n += -0.79029763f;
    r1 = n;
    n = fabsf(n);
    n += -0.62774992f;
    n *= 0.27806085f;
    r2 = n;
    n *= 0.00000162f;
    r3 = n;
    n = fabsf(n);
    n += -0.15618248f;
    r0 = n;
    n *= r0;
    n += r2;
    r2 = n;
    n += -0.72339338f;
    r0 = n;
    n += -0.29524490f;
    n *= r3;
    r3 = n;
    n += 0.54785997f;
    n *= 1.59917486f;
    n *= 0.16667305f;
    r4 = n;
    n += -2.08645606f;
    n += r4;
    n *= r3;
    n += -0.67581213f;
    r3 = n;
    n += r3;
    n *= -1.82826304f;
    n *= -1.45534122f;
    r3 = n;
    n *= r0;
    n = fabsf(n);
    n += -1.57078993f;
    r0 = n;
    n *= r2;
    n += r3;
    n *= 0.00000036f;
    n *= r1;
    n += r0;
    return n;
} // Solution1
