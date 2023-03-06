// Run date: 03/05/23 20:39:17 Pacific Standard Time
// Run duration = 7060.790551 seconds
// Run count = 65
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run units = 2
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 64
// Run seed = 124
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 65

#define SOLUTION_VARIATIONS 3

#ifndef __CUDACC__
#include <cmath>
#endif

#define SOLUTION_PI 3.14159265f
#define SOLUTION_MIN 0.0f
#define SOLUTION_MAX (2.0f * 3.14159265f)

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
        return fabsf(fmodf(fabsf(n - SOLUTION_PI * 0.5f), SOLUTION_PI * 2.0f) - SOLUTION_PI) - SOLUTION_PI * 0.5f;
    }
} // SolutionTarget

// Precision = 0.00049174

// Solution0 precision = 0.00039980
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -1.01684082f;
    r1 = n += 0.70363450f;
    r2 = n += 0.42028052f;
    r3 = n *= 0.04644439f;
    r4 = n += -0.19416346f;
    r5 = n += -1.21480608f;
    r6 = n *= 0.40426928f;
    n *= 3.65361071f;
    r7 = n += -2.71077466f;
    n += r6;
    n *= 2.53381753f;
    n = r2 *= n;
    n *= r5;
    r5 = n *= 0.05895762f;
    n += -0.80596739f;
    n += 1.21230233f;
    n *= r5;
    n += -1.86961663f;
    n += -3.89481187f;
    r5 = n += 1.41614544f;
    n += -18.40773010f;
    n *= r4;
    n += r7;
    n *= r0;
    r0 = n += 7.76831627f;
    n += 97.04958344f;
    n += r2;
    n *= r0;
    n += r1;
    n *= r3;
    n += r5;
    n *= 0.02497224f;
    return n;
} // Solution0

// Solution1 precision = 0.00032735
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -1.58536160f;
    r1 = n += -0.51269579f;
    r2 = n += -0.86384386f;
    r3 = n *= 0.26444146f;
    r4 = n += -1.00816882f;
    r5 = n += 1.45205450f;
    r6 = n *= 0.67520130f;
    n *= -0.99537545f;
    r7 = n += -0.04355419f;
    n += r6;
    n *= -2.58912921f;
    n = r2 *= n;
    n *= r5;
    r5 = n *= 0.16642344f;
    n += 3.40873075f;
    n += 2.22686601f;
    n *= r5;
    n += 0.34767035f;
    n += -1.15674019f;
    r5 = n += 0.23019734f;
    n += -0.60910577f;
    n *= r4;
    n += r7;
    n *= r0;
    r0 = n += 7.36242199f;
    n += 3.57331538f;
    n += r2;
    n *= r0;
    n += r1;
    n *= r3;
    n += r5;
    n *= -0.03958765f;
    return n;
} // Solution1

// Solution2 precision = 0.00049174
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.34813261f;
    r1 = n += -1.63814485f;
    r2 = n += -0.72481006f;
    r3 = n *= -0.09169012f;
    r4 = n += -0.87584317f;
    r5 = n += 1.67091346f;
    r6 = n *= -0.59000534f;
    n *= -0.76913071f;
    r7 = n += 1.47148311f;
    n += r6;
    n *= -0.28423128f;
    n = r2 *= n;
    n *= r5;
    r5 = n *= 0.81315213f;
    n += 0.01884618f;
    n += -1.71734440f;
    n *= r5;
    n += -0.28118229f;
    n += 0.63296908f;
    r5 = n += -1.08528233f;
    n += 0.63836831f;
    n *= r4;
    n += r7;
    n *= r0;
    r0 = n += 0.27225879f;
    n += 1.54167402f;
    n += r2;
    n *= r0;
    n += r1;
    n *= r3;
    n += r5;
    n *= -0.48109147f;
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
