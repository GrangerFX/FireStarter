// Run date: 03/04/23 21:45:29 Pacific Standard Time
// Run duration = 2990.780818 seconds
// Run count = 33
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run units = 1
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 32
// Run seed = 99
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 33

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

// Precision = 0.00028741

// Solution0 precision = 0.00023451
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -1.48845577f;
    r1 = n *= -1.22101152f;
    r2 = n *= 0.80368638f;
    r3 = n += 0.99829650f;
    r4 = n *= 0.23329648f;
    n += r3;
    r3 = n += 0.91365516f;
    r5 = n += 0.56080437f;
    n *= r4;
    n *= -1.51695013f;
    n += 12.55074024f;
    n += -0.42008844f;
    r4 = n *= 0.07103515f;
    n = r4 *= n;
    n *= -13.73729134f;
    n *= r3;
    n += r0;
    n *= r4;
    n += r5;
    n = r2 += n;
    r5 = n += 0.80498105f;
    n *= -0.17048123f;
    n += 5.76245070f;
    n *= 0.23528697f;
    n *= r2;
    r2 = n *= 0.27146140f;
    n *= r1;
    n *= -0.00073103f;
    n *= r2;
    n *= 0.68155974f;
    n += r5;
    n *= -0.12168840f;
    return n;
} // Solution0

// Solution1 precision = 0.00017631
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.69529247f;
    r1 = n *= 1.57965147f;
    r2 = n *= 0.45767695f;
    r3 = n += -0.75337565f;
    r4 = n *= -0.28251445f;
    n += r3;
    r3 = n += 0.35970569f;
    r5 = n += 0.29818523f;
    n *= r4;
    n *= -0.51342374f;
    n += 0.39259529f;
    n += -2.52409720f;
    r4 = n *= 1.86060405f;
    n = r4 *= n;
    n *= -0.90686685f;
    n *= r3;
    n += r0;
    n *= r4;
    n += r5;
    n = r2 += n;
    r5 = n += -12.43393421f;
    n *= 0.24013591f;
    n += -3.29246616f;
    n *= 0.00002557f;
    n *= r2;
    r2 = n *= -1.23547661f;
    n *= r1;
    n *= -1.41444540f;
    n *= r2;
    n *= -1.35504055f;
    n += r5;
    n *= 0.01058364f;
    return n;
} // Solution1

// Solution2 precision = 0.00028741
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -0.38537824f;
    r1 = n *= 1.61699021f;
    r2 = n *= 0.66823542f;
    r3 = n += -1.44671118f;
    r4 = n *= -0.07772868f;
    n += r3;
    r3 = n += -0.33584172f;
    r5 = n += -1.69578886f;
    n *= r4;
    n *= -1.28548276f;
    n += -0.37391359f;
    n += -2.10411906f;
    r4 = n *= -0.69073260f;
    n = r4 *= n;
    n *= -1.01114082f;
    n *= r3;
    n += r0;
    n *= r4;
    n += r5;
    n = r2 += n;
    r5 = n += 0.00289706f;
    n *= 0.62056398f;
    n += 4.48478413f;
    n *= -0.00359483f;
    n *= r2;
    r2 = n *= -0.39108688f;
    n *= r1;
    n *= -1.37242329f;
    n *= r2;
    n *= -1.00405598f;
    n += r5;
    n *= 0.19509518f;
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
