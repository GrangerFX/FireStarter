// Run date: 09/30/23 17:13:38 Pacific Daylight Time
// Run duration = 832.927182 seconds
// Run generation = 46
// Run evolution = 7
// Run result = 0.00000024
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 1
// Run units = 4
// Run processes = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

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

// Solution0 result = 0.00000024
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n *= 0.41222179f;
    r0 = n += -1.29503298f;
    n *= 2.12677622f;
    r1 = n *= -1.37400055f;
    r2 = n *= -0.18154836f;
    n += r1;
    n *= r0;
    r0 = n += 0.64467496f;
    r1 = n += 3.36642361f;
    n += -1.86438179f;
    n *= r0;
    n *= -0.00177194f;
    r0 = n *= -11.08507442f;
    n *= -0.04269510f;
    n += -0.41194540f;
    n *= r1;
    r1 = n *= -0.51595521f;
    n *= 0.46354434f;
    r3 = n += 2.10108209f;
    n = r3 *= n;
    n *= -0.25838098f;
    n += r0;
    n *= -2.41032600f;
    n *= -0.33274159f;
    r0 = n += -1.66372609f;
    n += r3;
    n *= r2;
    n *= r0;
    n *= -0.99870634f;
    n *= r1;
    n += 0.00000010f;
    n *= -0.55262083f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n *= -0.45857665f;
    r0 = n += 1.41730392f;
    n *= 1.34644663f;
    r1 = n *= 0.11062194f;
    r2 = n *= 2.01806283f;
    n += r1;
    n *= r0;
    r0 = n += -0.24900898f;
    r1 = n += -2.12104940f;
    n += -3.83134198f;
    n *= r0;
    n *= 0.00016550f;
    r0 = n *= -3.96966672f;
    n *= 1.85945094f;
    n += -0.44974908f;
    n *= r1;
    r1 = n *= 1.12446940f;
    n *= 0.21408957f;
    r3 = n += 1.00463998f;
    n = r3 *= n;
    n *= 0.57355326f;
    n += r0;
    n *= 1.91669202f;
    n *= -2.04126668f;
    r0 = n += 1.24263394f;
    n += r3;
    n *= r2;
    n *= r0;
    n *= -2.37376785f;
    n *= r1;
    n += 0.07247366f;
    n *= -1.62999952f;
    return n;
} // Solution1

// Solution2 result = 0.00000015
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n *= -0.75150150f;
    r0 = n += 1.96742618f;
    n *= 0.82498747f;
    r1 = n *= 0.50485379f;
    r2 = n *= 0.62274975f;
    n += r1;
    n *= r0;
    r0 = n += -0.36105213f;
    r1 = n += -1.54106271f;
    n += -16.42575455f;
    n *= r0;
    n *= 0.04788695f;
    r0 = n *= 0.00109270f;
    n *= -3.78172207f;
    n += -0.94910073f;
    n *= r1;
    r1 = n *= 2.11121559f;
    n *= -0.14313821f;
    r3 = n += -3.51503682f;
    n = r3 *= n;
    n *= -0.16009033f;
    n += r0;
    n *= 0.58430052f;
    n *= -0.61262697f;
    r0 = n += 0.59632021f;
    n += r3;
    n *= r2;
    n *= r0;
    n *= -0.15315455f;
    n *= r1;
    n += -1.65853918f;
    n *= -0.31569874f;
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
