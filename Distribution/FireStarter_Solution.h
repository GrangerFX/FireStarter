// Run date: 07/29/23 09:30:12 Pacific Daylight Time
// Run duration = 132.256489 seconds
// Run generation = 1
// Run evolution = 0
// Run result = 0.00008247
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 64
// Run units = 1
// Run processes = 0
// Run population = 278528
// Run iterations = 64
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

// Solution0 result = 0.00006062
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= -1.11353707f;
    r0 = n *= 0.07180464f;
    r1 = n += -0.00000297f;
    r2 = n += 0.25119919f;
    r3 = n *= 2.43712759f;
    r4 = n *= -0.99635434f;
    n = r3 += n;
    n *= 13.22877026f;
    r5 = n += 1.51843286f;
    n *= -3.10813904f;
    r6 = n += -3.70473242f;
    r7 = n *= -0.05571757f;
    n = r6 += n;
    n *= r1;
    n *= -2.37032175f;
    r1 = n *= -0.17391834f;
    n = r5 += n;
    n = r4 *= n;
    n = r6 += n;
    n = r3 += n;
    n *= r7;
    n += -1.01430857f;
    n *= r2;
    n *= r6;
    n *= r0;
    n = r3 += n;
    n += r5;
    n *= r1;
    n *= 0.07133052f;
    n *= -0.83809292f;
    n *= r4;
    n *= r3;
    return n;
} // Solution0

// Solution1 result = 0.00006533
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= 0.40028274f;
    r0 = n *= -0.11868285f;
    r1 = n += -0.09599841f;
    r2 = n += 0.23771812f;
    r3 = n *= 3.29137015f;
    r4 = n *= -0.99067622f;
    n = r3 += n;
    n *= -2.58254910f;
    r5 = n += 1.37031043f;
    n *= -0.47388923f;
    r6 = n += 1.44647717f;
    r7 = n *= 0.09206638f;
    n = r6 += n;
    n *= r1;
    n *= 4.89415121f;
    r1 = n *= 0.67079103f;
    n = r5 += n;
    n = r4 *= n;
    n = r6 += n;
    n = r3 += n;
    n *= r7;
    n += -7.20087194f;
    n *= r2;
    n *= r6;
    n *= r0;
    n = r3 += n;
    n += r5;
    n *= r1;
    n *= -7.15952873f;
    n *= -1.54837847f;
    n *= r4;
    n *= r3;
    return n;
} // Solution1

// Solution2 result = 0.00008247
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= 0.96636337f;
    r0 = n *= -0.21273805f;
    r1 = n += 0.65700811f;
    r2 = n += 0.23827560f;
    r3 = n *= -0.19747682f;
    r4 = n *= -1.01541293f;
    n = r3 += n;
    n *= -4.89373875f;
    r5 = n += 1.14258587f;
    n *= 4.82311869f;
    r6 = n += -1.05072153f;
    r7 = n *= -0.25334415f;
    n = r6 += n;
    n *= r1;
    n *= -0.60674691f;
    r1 = n *= 0.86309063f;
    n = r5 += n;
    n = r4 *= n;
    n = r6 += n;
    n = r3 += n;
    n *= r7;
    n += 2.62523007f;
    n *= r2;
    n *= r6;
    n *= r0;
    n = r3 += n;
    n += r5;
    n *= r1;
    n *= -0.44211686f;
    n *= 4.10987568f;
    n *= r4;
    n *= r3;
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
