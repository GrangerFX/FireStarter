#include <math.h>

// Run date: 02/04/22 19:03:51 Pacific Standard Time
// Run duration = 0.952249 seconds
// Run count = 1
// Run units = 1
// Run population = 4352
// Run iterations = 1024
// Run generations = 100
// Run samples = 15

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define TARGET_PI 3.14159265f
#define TARGET_VARIATIONS 4

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

// Solution0 precision = 0.000428
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += 0.07711988f;
    n *= 0.59456193f;
    r0 = n;
    n *= -0.54038280f;
    r1 = n;
    n += 1.79909265f;
    r2 = n;
    n *= 1.22064781f;
    r3 = n;
    n += 0.41662449f;
    r4 = n;
    n *= -0.17564297f;
    n *= 0.12002909f;
    n += fabsf(r0);
    r0 = n;
    n *= -0.23702243f;
    r5 = n;
    n *= r3;
    n += -0.72554249f;
    r3 = n;
    n += r1;
    n *= -0.76904243f;
    n *= r5;
    n += 0.87851012f;
    r5 = n;
    n *= r0;
    n *= 0.03497812f;
    r0 = n;
    n += r0;
    r0 = n;
    n += -0.02580371f;
    r1 = n;
    n += fabsf(r3);
    r3 = n;
    n += -0.60825789f;
    n += 0.86622781f;
    n += 1.01359403f;
    n *= r4;
    n += r0;
    n += r2;
    r2 = n;
    n += r2;
    n *= r1;
    r1 = n;
    n += r5;
    n *= r3;
    n += r1;
    return n;
} // Solution0

// Solution1 precision = 0.000523
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += 0.00620269f;
    n *= 0.65151542f;
    r0 = n;
    n *= -0.26789784f;
    r1 = n;
    n += 0.22732890f;
    r2 = n;
    n *= -0.27206933f;
    r3 = n;
    n += -0.73152941f;
    r4 = n;
    n *= 0.53034657f;
    n *= 0.83520603f;
    n += fabsf(r0);
    r0 = n;
    n *= 0.62894475f;
    r5 = n;
    n *= r3;
    n += 0.08092263f;
    r3 = n;
    n += r1;
    n *= -1.23692977f;
    n *= r5;
    n += -0.43114212f;
    r5 = n;
    n *= r0;
    n *= 0.08660233f;
    r0 = n;
    n += r0;
    r0 = n;
    n += -1.17976868f;
    r1 = n;
    n += fabsf(r3);
    r3 = n;
    n += -1.77697587f;
    n += 0.22203279f;
    n += -0.83646870f;
    n *= r4;
    n += r0;
    n += r2;
    r2 = n;
    n += r2;
    n *= r1;
    r1 = n;
    n += r5;
    n *= r3;
    n += r1;
    return n;
} // Solution1

// Solution2 precision = 0.000517
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += 0.39934212f;
    n *= -0.47170871f;
    r0 = n;
    n *= -0.53320020f;
    r1 = n;
    n += -0.92586899f;
    r2 = n;
    n *= 0.33416224f;
    r3 = n;
    n += 0.12208618f;
    r4 = n;
    n *= 0.74248213f;
    n *= -0.16311733f;
    n += fabsf(r0);
    r0 = n;
    n *= -0.56804848f;
    r5 = n;
    n *= r3;
    n += -0.21099477f;
    r3 = n;
    n += r1;
    n *= -0.32408383f;
    n *= r5;
    n += -0.89413661f;
    r5 = n;
    n *= r0;
    n *= 0.67220825f;
    r0 = n;
    n += r0;
    r0 = n;
    n += 0.18325081f;
    r1 = n;
    n += fabsf(r3);
    r3 = n;
    n += -2.03926921f;
    n += -1.32043338f;
    n += 0.69411641f;
    n *= r4;
    n += r0;
    n += r2;
    r2 = n;
    n += r2;
    n *= r1;
    r1 = n;
    n += r5;
    n *= r3;
    n += r1;
    return n;
} // Solution2

// Solution3 precision = 0.000016
inline float Solution3(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.57079375f;
    n *= 0.48869997f;
    r0 = n;
    n *= -0.00000221f;
    r1 = n;
    n += -1.10639095f;
    r2 = n;
    n *= 0.67571485f;
    r3 = n;
    n += 0.74763405f;
    r4 = n;
    n *= -0.24238938f;
    n *= -1.20372725f;
    n += fabsf(r0);
    r0 = n;
    n *= -0.83606863f;
    r5 = n;
    n *= r3;
    n += -0.95964313f;
    r3 = n;
    n += r1;
    n *= -0.00001459f;
    n *= r5;
    n += -0.00002346f;
    r5 = n;
    n *= r0;
    n *= -0.51938969f;
    r0 = n;
    n += r0;
    r0 = n;
    n += -1.47985029f;
    r1 = n;
    n += fabsf(r3);
    r3 = n;
    n += 3.47777891f;
    n += 3.11495137f;
    n += 1.55818570f;
    n *= r4;
    n += r0;
    n += r2;
    r2 = n;
    n += r2;
    n *= r1;
    r1 = n;
    n += r5;
    n *= r3;
    n += r1;
    return n;
} // Solution3

