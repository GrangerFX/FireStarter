// Run date: 11/12/23 09:18:21 Pacific Standard Time
// Run duration = 68736.235725 seconds
// Run generation = 3
// Run evolution = 3
// Run result = 0.00004586
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 1
// Run optimizeSeed = 1
// Run tests = 16
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run optimizations = 500
// Run precision = 0
// Run candidates = 16
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

// Solution0 result = 0.00004586
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += 1.04409409f;
    n += -4.18624830f;
    r1 = n *= -0.12203644f;
    r2 = n *= 0.22668064f;
    r3 = n *= 1.63498366f;
    r4 = n *= 1.48533177f;
    r5 = n += -0.42225182f;
    n = r4 += n;
    n += 0.84428781f;
    n = r5 *= n;
    r6 = n *= 0.00322319f;
    n *= 134.80950928f;
    r7 = n += -0.91183996f;
    n = r0 *= n;
    n *= r2;
    n *= -0.54399347f;
    n += 4.09670019f;
    r2 = n *= 1.41469848f;
    n *= r7;
    r7 = n *= 1.67616844f;
    n += r2;
    n += 0.12619486f;
    n *= 0.71823329f;
    n += r1;
    n *= r7;
    n = r0 += n;
    n *= 0.64670026f;
    n *= r3;
    n *= r4;
    n *= r5;
    n *= r0;
    n += r6;
    return n;
} // Solution0

// Solution1 result = 0.00004339
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -1.11668396f;
    n += -1.86474967f;
    r1 = n *= -0.10776388f;
    r2 = n *= 0.22563162f;
    r3 = n *= -0.42216167f;
    r4 = n *= -0.83319962f;
    r5 = n += 0.38273340f;
    n = r4 += n;
    n += -0.45652497f;
    n = r5 *= n;
    r6 = n *= -0.06609596f;
    n *= 1.95104742f;
    r7 = n += -1.37725794f;
    n = r0 *= n;
    n *= r2;
    n *= -0.85953438f;
    n += 1.03780675f;
    r2 = n *= 2.37951756f;
    n *= r7;
    r7 = n *= -1.26614404f;
    n += r2;
    n += 6.99219847f;
    n *= -2.52407956f;
    n += r1;
    n *= r7;
    n = r0 += n;
    n *= 0.42926189f;
    n *= r3;
    n *= r4;
    n *= r5;
    n *= r0;
    n += r6;
    return n;
} // Solution1

// Solution2 result = 0.00003123
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -1.24564946f;
    n += -3.78156805f;
    r1 = n *= -0.10869634f;
    r2 = n *= 1.35498834f;
    r3 = n *= 1.17982459f;
    r4 = n *= -0.24364813f;
    r5 = n += -0.34970298f;
    n = r4 += n;
    n += -1.29898083f;
    n = r5 *= n;
    r6 = n *= 1.31389070f;
    n *= 0.37524229f;
    r7 = n += -1.32691681f;
    n = r0 *= n;
    n *= r2;
    n *= -0.56965697f;
    n += 0.36260906f;
    r2 = n *= -2.16069770f;
    n *= r7;
    r7 = n *= 1.78722525f;
    n += r2;
    n += 6.88372755f;
    n *= -0.02559053f;
    n += r1;
    n *= r7;
    n = r0 += n;
    n *= 2.38695312f;
    n *= r3;
    n *= r4;
    n *= r5;
    n *= r0;
    n += r6;
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
