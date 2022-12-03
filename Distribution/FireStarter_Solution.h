// Run date: 12/03/22 11:38:18 Pacific Standard Time
// Run duration = 58.179226 seconds
// Run count = 17
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_EVOLVE;
// Run units = 10;
// Run processes = 16;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 4;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 17

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

#define SOLUTION_VARIATIONS 3

// Precision = 0.00007033

// Solution0 precision = 0.00004077
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    n *= -0.52971882f;
    r0 = n += 0.48454490f;
    n *= 0.78128898f;
    r1 = n += 0.84528476f;
    r2 = n *= -0.61063629f;
    n += 0.73089880f;
    r3 = n += -0.77736115f;
    r4 = n += 0.07676512f;
    r5 = n *= -0.01200310f;
    n += r2;
    n += -0.60176975f;
    n *= r0;
    n *= 0.37857553f;
    n += 0.80203283f;
    r0 = n += -0.35375366f;
    r2 = n += 0.65347475f;
    n = r0 *= n;
    n *= -0.13928889f;
    r6 = n += -0.90662450f;
    r7 = n *= -4.09643507f;
    r8 = n *= 0.01727178f;
    n *= r7;
    n *= r8;
    n += 1.99843442f;
    n *= r0;
    n = r3 *= n;
    n += r5;
    n *= r2;
    n += r4;
    n += r1;
    n += r3;
    n *= r6;
    return n;
} // Solution0

// Solution1 precision = 0.00007033
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    n *= 0.46735069f;
    r0 = n += -0.55870122f;
    n *= 0.96961546f;
    r1 = n += -0.97069800f;
    r2 = n *= -0.70712185f;
    n += 0.10137308f;
    r3 = n += -0.81571341f;
    r4 = n += 2.86425734f;
    r5 = n *= 1.32567394f;
    n += r2;
    n += -1.18067575f;
    n *= r0;
    n *= -0.09728025f;
    n += 0.79622996f;
    r0 = n += -4.03973103f;
    r2 = n += 1.71769798f;
    n = r0 *= n;
    n *= -0.13242497f;
    r6 = n += 0.32420209f;
    r7 = n *= 0.32653821f;
    r8 = n *= 0.60454309f;
    n *= r7;
    n *= r8;
    n += 1.25615144f;
    n *= r0;
    n = r3 *= n;
    n += r5;
    n *= r2;
    n += r4;
    n += r1;
    n += r3;
    n *= r6;
    return n;
} // Solution1

// Solution2 precision = 0.00003719
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    n *= 0.99609286f;
    r0 = n += -0.68343216f;
    n *= 0.81514049f;
    r1 = n += 0.10576625f;
    r2 = n *= 0.44626066f;
    n += -0.97189677f;
    r3 = n += 0.24023469f;
    r4 = n += 0.19873267f;
    r5 = n *= 0.69548094f;
    n += r2;
    n += -2.09308267f;
    n *= r0;
    n *= 0.17063773f;
    n += -0.95618737f;
    r0 = n += 0.66950315f;
    r2 = n += -2.81751728f;
    n = r0 *= n;
    n *= 0.02305020f;
    r6 = n += 0.36328572f;
    r7 = n *= 0.53483856f;
    r8 = n *= 0.04647957f;
    n *= r7;
    n *= r8;
    n += 1.24815166f;
    n *= r0;
    n = r3 *= n;
    n += r5;
    n *= r2;
    n += r4;
    n += r1;
    n += r3;
    n *= r6;
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
