// Run date: 12/02/23 00:23:06 Pacific Standard Time
// Run duration = 1045.435061 seconds
// Run generation = 19
// Run evolution = 8
// Run max result = 0.00000037
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 1
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
// Run optimize = 8

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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.62403673f;
    r0 = n += 1.96046925f;
    n *= -0.05437067f;
    r1 = n *= 1.04302680f;
    r2 = n *= -0.33659568f;
    n *= -3.62182975f;
    n *= r0;
    r0 = n += 0.11791269f;
    n *= -0.09649274f;
    n += -0.12480442f;
    r3 = n *= 2.48310375f;
    r4 = n += -1.37364888f;
    n = r4 *= n;
    n += -0.00345831f;
    n *= -1.13392568f;
    r5 = n *= 1.36721730f;
    n = r4 *= n;
    n *= -1.93703568f;
    r6 = n += -3.89205647f;
    n *= -1.71504164f;
    n = r6 += n;
    n += r6;
    n = r2 *= n;
    n *= r0;
    n *= r3;
    n *= r5;
    n *= r4;
    n += -0.00000006f;
    n += r1;
    n *= -0.48465422f;
    n += r2;
    n *= -1.26663697f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.56733435f;
    r0 = n += 1.75343692f;
    n *= -0.06473458f;
    r1 = n *= 11.02896309f;
    r2 = n *= 0.53125888f;
    n *= 1.14448297f;
    n *= r0;
    r0 = n += -3.26214004f;
    n *= 0.12970883f;
    n += 1.44866860f;
    r3 = n *= 2.07236981f;
    r4 = n += -0.44430470f;
    n = r4 *= n;
    n += -0.98022115f;
    n *= 0.07133722f;
    r5 = n *= 2.54245996f;
    n = r4 *= n;
    n *= 2.39299011f;
    r6 = n += 0.10250279f;
    n *= 1.23882866f;
    n = r6 += n;
    n += r6;
    n = r2 *= n;
    n *= r0;
    n *= r3;
    n *= r5;
    n *= r4;
    n += -39.48574066f;
    n += r1;
    n *= -0.00627864f;
    n += r2;
    n *= -0.47649834f;
    return n;
} // Solution1

// Solution2 result = 0.00000037
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.18666337f;
    r0 = n += 0.48868355f;
    n *= -1.22070694f;
    r1 = n *= 1.47792745f;
    r2 = n *= 0.71265018f;
    n *= -0.53195566f;
    n *= r0;
    r0 = n += -0.11609848f;
    n *= -2.15244102f;
    n += 0.98018432f;
    r3 = n *= 0.26035294f;
    r4 = n += 1.99012494f;
    n = r4 *= n;
    n += 0.72158736f;
    n *= -0.28125289f;
    r5 = n *= 1.17878175f;
    n = r4 *= n;
    n *= -4.38471508f;
    r6 = n += 0.67342275f;
    n *= -0.97987980f;
    n = r6 += n;
    n += r6;
    n = r2 *= n;
    n *= r0;
    n *= r3;
    n *= r5;
    n *= r4;
    n += 0.21627724f;
    n += r1;
    n *= -1.20917726f;
    n += r2;
    n *= -2.00215602f;
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
