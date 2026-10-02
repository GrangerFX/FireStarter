// Run date: 12/20/23 16:27:47 Pacific Standard Time
// Run duration = 6263.210854 seconds
// Run generation = 26
// Run evolution = 5
// Run max result = 0.00002086
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
// Run states = 64
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

// Solution0 result = 0.00002086
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.14159274f;
    r1 = n *= -0.50070524f;
    n *= -0.07094007f;
    n *= 2.48924446f;
    n = r1 *= n;
    n += 2.02728033f;
    r2 = n += 1.56940520f;
    n += -3.15991354f;
    n *= -0.01442792f;
    r3 = n *= -3.14342856f;
    n += -0.97533709f;
    n = r3 *= n;
    n = r2 += n;
    n += r2;
    r2 = n += -1.34041715f;
    r4 = n += 0.84547055f;
    n *= r2;
    r2 = n *= -2.27054191f;
    n = r2 += n;
    n = r3 *= n;
    n += 12.36282349f;
    n *= 0.00007704f;
    n += r3;
    n *= r0;
    n *= r2;
    n += 1.80368042f;
    n *= -0.74597842f;
    n *= r4;
    n *= 0.38848165f;
    n += r1;
    n += 3.48140550f;
    n *= -0.00088439f;
    return n;
} // Solution0

// Solution1 result = 0.00000286
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.09066153f;
    r1 = n *= -0.16557465f;
    n *= -3.03709364f;
    n *= 0.59183407f;
    n = r1 *= n;
    n += 1.31372952f;
    r2 = n += 0.38119012f;
    n += 5.19122458f;
    n *= 0.43402141f;
    r3 = n *= -0.00214349f;
    n += 6.27149630f;
    n = r3 *= n;
    n = r2 += n;
    n += r2;
    r2 = n += 0.84433335f;
    r4 = n += -1.61259305f;
    n *= r2;
    r2 = n *= -0.42132461f;
    n = r2 += n;
    n = r3 *= n;
    n += 5.52529144f;
    n *= 0.64919317f;
    n += r3;
    n *= r0;
    n *= r2;
    n += -4.56770229f;
    n *= -1.03713441f;
    n *= r4;
    n *= -0.10617939f;
    n += r1;
    n += 0.16191047f;
    n *= 0.10581961f;
    return n;
} // Solution1

// Solution2 result = 0.00001132
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -2.61809540f;
    r1 = n *= 0.08997305f;
    n *= 4.76210260f;
    n *= 0.14551534f;
    n = r1 *= n;
    n += 0.80102497f;
    r2 = n += 1.04393041f;
    n += -1.85388505f;
    n *= 0.71393788f;
    r3 = n *= 1.41024935f;
    n += -2.53841114f;
    n = r3 *= n;
    n = r2 += n;
    n += r2;
    r2 = n += -0.97814286f;
    r4 = n += -1.99865746f;
    n *= r2;
    r2 = n *= -0.90625358f;
    n = r2 += n;
    n = r3 *= n;
    n += -17.56748009f;
    n *= 0.00902424f;
    n += r3;
    n *= r0;
    n *= r2;
    n += 0.06669338f;
    n *= 0.29943517f;
    n *= r4;
    n *= 16.69531631f;
    n += r1;
    n += -2.10781026f;
    n *= -0.28224215f;
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
