// Run date: 01/15/24 09:00:42 Pacific Standard Time
// Run duration = 1734.745751 seconds
// Run generation = 38
// Run evolution = 14
// Run max result = 0.00000024
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.14159274f;
    r0 = n *= -2.29501462f;
    r1 = n *= 0.07120226f;
    r2 = n *= -0.13590319f;
    n *= r0;
    r0 = n *= -0.61803675f;
    n *= 6.92204714f;
    n += -0.70766973f;
    r3 = n += -0.86661226f;
    n = r2 *= n;
    r4 = n += 0.00012721f;
    r5 = n *= 0.12158848f;
    n *= -18.24246597f;
    n *= r0;
    n += r4;
    n *= 0.00301736f;
    n *= 1.66147876f;
    n *= 30.26187134f;
    n *= r5;
    n += r3;
    n *= 0.04794487f;
    r3 = n += -1.33759058f;
    n *= r3;
    r3 = n += -0.55826944f;
    n += 1.57087052f;
    n *= 1.12999654f;
    n = r3 *= n;
    n *= r2;
    n *= r3;
    n += r1;
    n += -0.03552873f;
    n += 0.03552873f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.09065866f;
    r0 = n *= -0.84704667f;
    r1 = n *= 0.43817949f;
    r2 = n *= 0.23399712f;
    n *= r0;
    r0 = n *= 0.59727389f;
    n *= -1.36105466f;
    n += -1.38388538f;
    r3 = n += 1.89069438f;
    n = r2 *= n;
    r4 = n += -0.00020029f;
    r5 = n *= -0.06821451f;
    n *= 14.77148056f;
    n *= r0;
    n += r4;
    n *= -2.53097963f;
    n *= 12.97064877f;
    n *= -0.00403889f;
    n *= r5;
    n += r3;
    n *= -0.16299109f;
    r3 = n += -2.02186179f;
    n *= r3;
    r3 = n += -0.81658018f;
    n += -0.45316812f;
    n *= -0.35660163f;
    n = r3 *= n;
    n *= r2;
    n *= r3;
    n += r1;
    n += -1.63907814f;
    n += 1.52094626f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.61799359f;
    r0 = n *= 0.65147382f;
    r1 = n *= 0.08133556f;
    r2 = n *= 0.56903398f;
    n *= r0;
    r0 = n *= 3.20180440f;
    n *= 2.33446503f;
    n += -0.95013046f;
    r3 = n += 0.15507041f;
    n = r2 *= n;
    r4 = n += -0.12051702f;
    r5 = n *= -0.58874398f;
    n *= 17.97439766f;
    n *= r0;
    n += r4;
    n *= -717.15856934f;
    n *= 0.00000025f;
    n *= 1.63795781f;
    n *= r5;
    n += r3;
    n *= -0.10148421f;
    r3 = n += 0.97824526f;
    n *= r3;
    r3 = n += -0.20470771f;
    n += 2.24159884f;
    n *= 2.28937984f;
    n = r3 *= n;
    n *= r2;
    n *= r3;
    n += r1;
    n += 0.42412084f;
    n += 0.09947801f;
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
