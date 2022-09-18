// Run date: 09/18/22 13:19:45 Pacific Daylight Time
// Run duration = 1.263789 seconds
// Run count = 2
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_UNIT;
// Run units = 4;
// Run processes = 0;
// Run population = 69632;
// Run iterations = 128;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 256;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 8337;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 2

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

// Precision = 0.00000632

// Solution0 precision = 0.00000381
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n += -3.14159298f;
    r0 = n *= -0.32567915f;
    n *= -0.83800167f;
    r1 = n *= -0.60603952f;
    n = r0 *= n;
    n *= 3.43649578f;
    n *= -0.33039781f;
    r2 = n += 11.59875870f;
    r3 = n *= 0.75804281f;
    n *= r0;
    n *= 1.92069459f;
    n *= 0.33388358f;
    n *= 0.08397014f;
    n += 0.12936452f;
    r0 = n *= -4.02037907f;
    n = r2 += n;
    n += -0.17791468f;
    n *= -0.20024684f;
    n += -1.80660224f;
    n = r2 *= n;
    n = r1 *= n;
    n = r0 *= n;
    n += r1;
    n *= 0.07350629f;
    n = r2 *= n;
    n *= 3.60114956f;
    n *= r3;
    n += 0.00025338f;
    n *= 0.00666336f;
    n += r2;
    n += r0;
    n *= 0.05680459f;
    return n;
} // Solution0

// Solution1 precision = 0.00000632
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n += -3.09065843f;
    r0 = n *= -0.44316179f;
    n *= 0.88098311f;
    r1 = n *= -0.89776850f;
    n = r0 *= n;
    n *= 0.15347479f;
    n *= -2.66592526f;
    r2 = n += -1.27057469f;
    r3 = n *= -0.47393981f;
    n *= r0;
    n *= -0.80894023f;
    n *= -0.84370601f;
    n *= 0.63778985f;
    n += -2.40474343f;
    r0 = n *= 0.11080493f;
    n = r2 += n;
    n += -0.77060968f;
    n *= 1.28554153f;
    n += -0.77058887f;
    n = r2 *= n;
    n = r1 *= n;
    n = r0 *= n;
    n += r1;
    n *= -0.33511275f;
    n = r2 *= n;
    n *= -0.17012447f;
    n *= r3;
    n += -14.59678459f;
    n *= 0.02480939f;
    n += r2;
    n += r0;
    n *= 0.32620758f;
    return n;
} // Solution1

// Solution2 precision = 0.00000572
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n += -2.61799335f;
    r0 = n *= -0.73615503f;
    n *= 1.53840303f;
    r1 = n *= -1.57199538f;
    n = r0 *= n;
    n *= -1.40138137f;
    n *= -0.04126804f;
    r2 = n += 4.55859137f;
    r3 = n *= 0.09362920f;
    n *= r0;
    n *= -0.66780907f;
    n *= 0.71788192f;
    n *= -1.08114028f;
    n += 1.28725398f;
    r0 = n *= 0.54781485f;
    n = r2 += n;
    n += 82.20564270f;
    n *= -0.01100671f;
    n += 0.84828812f;
    n = r2 *= n;
    n = r1 *= n;
    n = r0 *= n;
    n += r1;
    n *= -0.04953967f;
    n = r2 *= n;
    n *= 0.20765631f;
    n *= r3;
    n += 10.55973530f;
    n *= 0.04022259f;
    n += r2;
    n += r0;
    n *= 1.23275185f;
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
