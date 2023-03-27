// Run date: 03/26/23 22:21:28 Pacific Daylight Time
// Run duration = 1929.968409 seconds
// Run generation = 68
// Run result = 0.00014508
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 0
// Run seeds = 1
// Run mode = FIRESTARTER_REVOLVE
// Run tests = 100
// Run units = 4
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 64
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

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

// Solution0 result = 0.00008985
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.76206297f;
    r0 = n *= 0.55937427f;
    r1 = n += -1.22799134f;
    r2 = n *= -0.49221483f;
    r3 = n += -0.78514016f;
    n *= 0.26897290f;
    n = r2 *= n;
    n = r2 += n;
    r4 = n += -0.80423963f;
    n += -0.05900307f;
    r5 = n += -1.89316428f;
    n = r1 += n;
    n *= -0.93428004f;
    n = r0 += n;
    n *= r5;
    n = r3 *= n;
    n *= 0.32110763f;
    n += r1;
    n *= r3;
    n += -3.16550660f;
    n = r2 += n;
    r3 = n *= -0.05304156f;
    n *= 3.23254395f;
    n = r2 += n;
    n += r3;
    n += r2;
    n += 0.80333269f;
    n *= r4;
    n += -1.69046426f;
    n *= r0;
    n *= 0.03641505f;
    n *= 0.44841987f;
    return n;
} // Solution0

// Solution1 result = 0.00014508
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.53432333f;
    r0 = n *= -0.16620521f;
    r1 = n += 0.43587664f;
    r2 = n *= 0.80234903f;
    r3 = n += -0.14848149f;
    n *= 0.91234434f;
    n = r2 *= n;
    n = r2 += n;
    r4 = n += -0.81142360f;
    n += -1.40974116f;
    r5 = n += -1.81348395f;
    n = r1 += n;
    n *= 2.67117882f;
    n = r0 += n;
    n *= r5;
    n = r3 *= n;
    n *= -0.15454678f;
    n += r1;
    n *= r3;
    n += -0.16946326f;
    n = r2 += n;
    r3 = n *= -3.33094120f;
    n *= -0.51612550f;
    n = r2 += n;
    n += r3;
    n += r2;
    n += -2.29960299f;
    n *= r4;
    n += -4.40162182f;
    n *= r0;
    n *= -0.53629500f;
    n *= 0.00521725f;
    return n;
} // Solution1

// Solution2 result = 0.00010097
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += 0.60180521f;
    r0 = n *= -0.43416095f;
    r1 = n += 0.75367177f;
    r2 = n *= 0.54103160f;
    r3 = n += -0.14733666f;
    n *= -0.36150485f;
    n = r2 *= n;
    n = r2 += n;
    r4 = n += 0.80948687f;
    n += 0.54292494f;
    r5 = n += 0.32617661f;
    n = r1 += n;
    n *= -0.82232177f;
    n = r0 += n;
    n *= r5;
    n = r3 *= n;
    n *= -0.66821015f;
    n += r1;
    n *= r3;
    n += -0.72588617f;
    n = r2 += n;
    r3 = n *= -0.04550382f;
    n *= 1.00370419f;
    n = r2 += n;
    n += r3;
    n += r2;
    n += -0.47645316f;
    n *= r4;
    n += 2.88689518f;
    n *= r0;
    n *= -0.24012946f;
    n *= 0.95516896f;
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
