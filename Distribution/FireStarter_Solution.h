// Run date: 11/27/22 18:19:51 Pacific Standard Time
// Run duration = 25.924593 seconds
// Run count = 26
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_OPTIMIZE;
// Run units = 1;
// Run processes = 0;
// Run population = 69632;
// Run iterations = 512;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 256;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 26

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

// Precision = 0.00000358

// Solution0 precision = 0.00000036
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.15420568f;
    r1 = n += -0.48445138f;
    n = r0 += n;
    n += -0.96890318f;
    n *= 1.09233487f;
    n = r0 *= n;
    r2 = n += -0.76909029f;
    n *= -0.21693817f;
    r3 = n += 0.84069300f;
    n = r3 *= n;
    r4 = n *= -0.66483784f;
    n *= -0.00272764f;
    n = r0 *= n;
    n *= -4.03359699f;
    n += -5.92515755f;
    n *= 9.31111145f;
    n = r0 *= n;
    r5 = n += 0.08256970f;
    n = r4 += n;
    r6 = n += -1.38582385f;
    n += -0.67525047f;
    n *= r0;
    n += r5;
    n += r4;
    n += r6;
    n *= 1.66741049f;
    n *= r1;
    n *= -0.94425410f;
    n *= r3;
    n *= r2;
    n += 0.00000034f;
    n *= 1.34993505f;
    return n;
} // Solution0

// Solution1 precision = 0.00000358
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.17852905f;
    r1 = n += 0.55177253f;
    n = r0 += n;
    n += 1.10354364f;
    n *= 0.15059830f;
    n = r0 *= n;
    r2 = n += -0.40207845f;
    n *= 1.74648786f;
    r3 = n += -0.39544636f;
    n = r3 *= n;
    r4 = n *= 0.45912176f;
    n *= 0.14660583f;
    n = r0 *= n;
    n *= 7.16194868f;
    n += 0.15503614f;
    n *= 5.28945160f;
    n = r0 *= n;
    r5 = n += 1.49989200f;
    n = r4 += n;
    r6 = n += 0.88233459f;
    n += -4.58050632f;
    n *= r0;
    n += r5;
    n += r4;
    n += r6;
    n *= -1.29676616f;
    n *= r1;
    n *= 1.47113144f;
    n *= r3;
    n *= r2;
    n += -0.15116061f;
    n *= 0.78150642f;
    return n;
} // Solution1

// Solution2 precision = 0.00000095
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.22499208f;
    r1 = n += -0.58902770f;
    n = r0 += n;
    n += -1.17805660f;
    n *= 0.60811615f;
    n = r0 *= n;
    r2 = n += -0.40262336f;
    n *= -0.20510176f;
    r3 = n += 0.96665651f;
    n = r3 *= n;
    r4 = n *= 1.88737047f;
    n *= 0.00397194f;
    n = r0 *= n;
    n *= -11.18344498f;
    n += -7.81369638f;
    n *= 0.70525670f;
    n = r0 *= n;
    r5 = n += 0.41974398f;
    n = r4 += n;
    r6 = n += 0.14890361f;
    n += -0.31626785f;
    n *= r0;
    n += r5;
    n += r4;
    n += r6;
    n *= -1.84189248f;
    n *= r1;
    n *= -0.78469753f;
    n *= r3;
    n *= r2;
    n += 0.74457568f;
    n *= 0.70321882f;
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
