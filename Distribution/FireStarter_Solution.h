// Run date: 02/04/23 14:06:38 Pacific Standard Time
// Run duration = 35.631013 seconds
// Run count = 0
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_RANDOM
// Run units = 8
// Run processes = 16
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 32
// Run seed = 209
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 0

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

// Precision = 0.00032032

// Solution0 precision = 0.00011632
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -2.54392552f;
    n *= -0.58338642f;
    n += 0.09205359f;
    n += 0.41178435f;
    r1 = n += -0.15537807f;
    r2 = n *= 0.49768630f;
    n *= 1.28056145f;
    n *= 0.02442623f;
    r3 = n += 0.59547728f;
    n *= r3;
    n += r1;
    n *= 1.79331529f;
    n *= r0;
    r0 = n += 2.94250941f;
    n += 1.70139980f;
    r1 = n *= 0.06154465f;
    r3 = n += 1.65140080f;
    r4 = n *= 1.04821599f;
    n *= -0.59497362f;
    n += -0.15617603f;
    n *= r4;
    n += 0.15895405f;
    r4 = n *= 0.77355236f;
    n *= r4;
    r4 = n += -0.83840519f;
    n *= r3;
    n += r0;
    n *= r1;
    n += -1.32111835f;
    n *= 0.00006111f;
    n += r2;
    n *= r4;
    return n;
} // Solution0

// Solution1 precision = 0.00032032
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -1.28607082f;
    n *= -0.57692087f;
    n += 1.59570229f;
    n += 0.46032047f;
    r1 = n += -1.08365333f;
    r2 = n *= 1.06993282f;
    n *= 0.90230852f;
    n *= -0.20693497f;
    r3 = n += -1.32031870f;
    n *= r3;
    n += r1;
    n *= 1.65918636f;
    n *= r0;
    r0 = n += -0.72809297f;
    n += 1.21096933f;
    r1 = n *= 0.15871604f;
    r3 = n += -2.78489161f;
    r4 = n *= 0.17064264f;
    n *= -0.43506142f;
    n += -1.00265741f;
    n *= r4;
    n += -1.06388342f;
    r4 = n *= -2.14762712f;
    n *= r4;
    r4 = n += -1.03037226f;
    n *= r3;
    n += r0;
    n *= r1;
    n += 2.47665477f;
    n *= 0.00236833f;
    n += r2;
    n *= r4;
    return n;
} // Solution1

// Solution2 precision = 0.00022411
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -1.45982206f;
    n *= 1.38174462f;
    n += 1.01470172f;
    n += -0.13837840f;
    r1 = n += -0.61137670f;
    r2 = n *= 0.05530424f;
    n *= 1.24627256f;
    n *= -0.92988276f;
    r3 = n += 0.50696975f;
    n *= r3;
    n += r1;
    n *= 0.09791718f;
    n *= r0;
    r0 = n += -1.78200758f;
    n += 1.70092845f;
    r1 = n *= 0.45346141f;
    r3 = n += -0.92967278f;
    r4 = n *= 0.07563034f;
    n *= -6.59007406f;
    n += 2.15772367f;
    n *= r4;
    n += -1.02646637f;
    r4 = n *= -2.08432722f;
    n *= r4;
    r4 = n += -3.01351166f;
    n *= r3;
    n += r0;
    n *= r1;
    n += 0.38623926f;
    n *= 0.61904240f;
    n += r2;
    n *= r4;
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
