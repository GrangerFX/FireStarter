// Run date: 09/24/22 16:36:57 Pacific Daylight Time
// Run duration = 1.319532 seconds
// Run count = 4
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_TEST;
// Run units = 1;
// Run processes = 0;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 10;
// Run seed = 3557;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 3

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

// Precision = 0.00011524

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

// Solution1 precision = 0.00004637
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += 2.44441533f;
    n += -0.68521357f;
    r0 = n += -4.43349504f;
    n += -0.91226244f;
    r1 = n *= -0.14705165f;
    r2 = n *= 1.92392325f;
    n += -0.27990779f;
    n = r2 += n;
    r3 = n *= 0.53708702f;
    r4 = n *= 0.00924503f;
    n = r0 *= n;
    r5 = n *= 0.57135403f;
    n = r1 *= n;
    n += r1;
    r1 = n += -0.11942998f;
    n += 0.11624506f;
    n += r3;
    n *= r2;
    n = r0 += n;
    n += -14.87385559f;
    n = r0 *= n;
    n *= 3.10456061f;
    r2 = n *= -0.01058526f;
    n += r2;
    n += 32.65776443f;
    n += 10.10543156f;
    n = r0 += n;
    n *= 0.21406911f;
    n *= r0;
    n += r5;
    n *= r4;
    n += r1;
    return n;
} // Solution1

// Solution2 precision = 0.00011524
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += 0.02731357f;
    n += -1.46882558f;
    r0 = n += -0.71437109f;
    n += -0.78392428f;
    r1 = n *= 0.07556304f;
    r2 = n *= -0.54778969f;
    n += -0.02054560f;
    n = r2 += n;
    r3 = n *= 0.53512836f;
    r4 = n *= -3.25069809f;
    n = r0 *= n;
    r5 = n *= 0.93362856f;
    n = r1 *= n;
    n += r1;
    r1 = n += 0.45015049f;
    n += 0.14062823f;
    n += r3;
    n *= r2;
    n = r0 += n;
    n += -15.42728329f;
    n = r0 *= n;
    n *= 0.73192167f;
    r2 = n *= -1.06050766f;
    n += r2;
    n += -63.90353394f;
    n += 53.79973221f;
    n = r0 += n;
    n *= -0.06750815f;
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
