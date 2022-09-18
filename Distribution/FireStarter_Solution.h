// Run date: 09/18/22 16:19:27 Pacific Daylight Time
// Run duration = 0.210018 seconds
// Run count = 3493
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_RANDOM;
// Run units = 2;
// Run processes = 6;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 10000;
// Run seed = 3557;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 3493

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

// Precision = 0.00006890

// Solution0 precision = 0.00005724
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.12152404f;
    n += -1.28869832f;
    r0 = n += -1.35873866f;
    n += -0.71829331f;
    r1 = n *= 0.06256717f;
    r2 = n *= -1.12795007f;
    n += -0.04702828f;
    n = r2 += n;
    r3 = n *= 6.92181349f;
    r4 = n *= -0.02176370f;
    n = r0 *= n;
    r5 = n *= 3.84677148f;
    n = r1 *= n;
    n += r1;
    r1 = n += -0.01252163f;
    n += 0.03349912f;
    n += r3;
    n *= r2;
    n = r0 += n;
    n += -26.25661659f;
    n = r0 *= n;
    n *= 0.76150751f;
    r2 = n *= -0.40016472f;
    n += r2;
    n += 20.96580505f;
    n += 0.13400114f;
    n = r0 += n;
    n *= -0.10548810f;
    n *= r0;
    n += r5;
    n *= r4;
    n += r1;
    return n;
} // Solution0

// Solution1 precision = 0.00000846
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.76540923f;
    n += 2.54472256f;
    r0 = n += -2.85818863f;
    n += -0.02256074f;
    r1 = n *= -0.18704924f;
    r2 = n *= 1.34619427f;
    n += -0.00551065f;
    n = r2 += n;
    r3 = n *= -0.07302435f;
    r4 = n *= 0.06584231f;
    n = r0 *= n;
    r5 = n *= 0.27036411f;
    n = r1 *= n;
    n += r1;
    r1 = n += -0.11795396f;
    n += 0.11799512f;
    n += r3;
    n *= r2;
    n = r0 += n;
    n += 3.13655090f;
    n = r0 *= n;
    n *= 5.60422897f;
    r2 = n *= 6.16810751f;
    n += r2;
    n += 27.34508705f;
    n += 36.64368057f;
    n = r0 += n;
    n *= -0.11094947f;
    n *= r0;
    n += r5;
    n *= r4;
    n += r1;
    return n;
} // Solution1

// Solution2 precision = 0.00006890
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += 0.34559324f;
    n += -2.99282789f;
    r0 = n += 0.01762420f;
    n += 0.01784059f;
    r1 = n *= -0.13795349f;
    r2 = n *= -2.41319609f;
    n += -0.00275945f;
    n = r2 += n;
    r3 = n *= -1.96459067f;
    r4 = n *= 0.22747621f;
    n = r0 *= n;
    r5 = n *= 0.22986127f;
    n = r1 *= n;
    n += r1;
    r1 = n += 0.52568746f;
    n += -0.52224249f;
    n += r3;
    n *= r2;
    n = r0 += n;
    n += 113.09501648f;
    n = r0 *= n;
    n *= 0.62405849f;
    r2 = n *= -0.81233960f;
    n += r2;
    n += 2.21981645f;
    n += -16.98572540f;
    n = r0 += n;
    n *= 0.01541337f;
    n *= r0;
    n += r5;
    n *= r4;
    n += r1;
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
