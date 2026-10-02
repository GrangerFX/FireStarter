// Run date: 06/01/24 11:40:47 Pacific Daylight Time
// Run duration = 442.722960 seconds
// Run generation = 205
// Run evolution = 6
// Run max result = 0.00000054
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 1
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 0
// Run optimize = 8

// Run scale = 0.200000f
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

// Solution0 result = 0.00000035
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.69868445f;
    n *= -1.12933040f;
    r0 = n += 2.47885966f;
    r1 = n *= 0.04949907f;
    n = r1 *= n;
    n *= 3.57775903f;
    n *= 0.32984400f;
    r2 = n += -0.47862649f;
    r3 = n *= -0.96054375f;
    n = r3 += n;
    n = r0 *= n;
    n = r0 += n;
    r4 = n *= 0.04296061f;
    n *= 0.99150413f;
    n *= r0;
    n += r2;
    n *= 0.32180533f;
    n *= -9.40072441f;
    n += r3;
    r3 = n *= -5.39131212f;
    n += 9.74298286f;
    n *= 0.02471333f;
    n += -1.04027295f;
    r2 = n *= 0.46565095f;
    n = r3 *= n;
    n *= -2.52291870f;
    n *= r2;
    n += 0.73618531f;
    n += r3;
    n += r1;
    n *= r4;
    n += -0.00000007f;
    return n;
} // Solution0

// Solution1 result = 0.00000016
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.17309758f;
    n *= 3.72330356f;
    r0 = n += -1.99191356f;
    r1 = n *= -0.01462515f;
    n = r1 *= n;
    n *= 12.27095413f;
    n *= 3.14930797f;
    r2 = n += -0.70984316f;
    r3 = n *= 0.32905126f;
    n = r3 += n;
    n = r0 *= n;
    n = r0 += n;
    r4 = n *= -0.48899806f;
    n *= -0.62827063f;
    n *= r0;
    n += r2;
    n *= 0.91887468f;
    n *= 4.64866209f;
    n += r3;
    r3 = n *= -6.96113396f;
    n += -12.98710537f;
    n *= -0.00279297f;
    n += -0.27945367f;
    r2 = n *= 0.26339787f;
    n = r3 *= n;
    n *= -1.56459403f;
    n *= r2;
    n += -1.48289502f;
    n += r3;
    n += r1;
    n *= r4;
    n += -0.11813184f;
    return n;
} // Solution1

// Solution2 result = 0.00000054
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.97676766f;
    n *= 0.66151363f;
    r0 = n += -1.69160378f;
    r1 = n *= -0.64054805f;
    n = r1 *= n;
    n *= -13.06624031f;
    n *= 0.01706197f;
    r2 = n += 6.43518543f;
    r3 = n *= -0.15830643f;
    n = r3 += n;
    n = r0 *= n;
    n = r0 += n;
    r4 = n *= -0.10703745f;
    n *= 0.95323694f;
    n *= r0;
    n += r2;
    n *= 4.22381210f;
    n *= 1.33801639f;
    n += r3;
    r3 = n *= 0.91330618f;
    n += -0.07864433f;
    n *= -5.85498762f;
    n += -19.50702286f;
    r2 = n *= 0.00044005f;
    n = r3 *= n;
    n *= -2.06777859f;
    n *= r2;
    n += -0.23693606f;
    n += r3;
    n += r1;
    n *= r4;
    n += 0.52359873f;
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
