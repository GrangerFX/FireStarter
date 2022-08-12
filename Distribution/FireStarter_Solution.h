// Run date: 08/11/22 22:28:08 Pacific Daylight Time
// Run duration = 1.330878 seconds
// Run count = 49
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_CODE;
// Run units = 1;
// Run process = 0;
// Run population = 4352;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 5;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 245

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

// Precision = 0.01468170

// Solution0 precision = 10.00000000
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -9.74522972f;
    r0 = n += 1.00924790f;
    r1 = n *= 0.82346064f;
    n += -0.43103629f;
    n *= 0.47165859f;
    r2 = n *= 0.19293129f;
    r3 = n *= -0.08772121f;
    r4 = n += 0.71276540f;
    n *= -0.52934444f;
    n *= r0;
    n *= -0.20084544f;
    r0 = n += 0.35652709f;
    n += 0.23205186f;
    r5 = n += -0.80267334f;
    n = r4 += n;
    n *= r1;
    n = r2 += n;
    r1 = n += 0.88057745f;
    n = r4 *= n;
    n *= 3.18856072f;
    n *= 0.76035941f;
    n += r2;
    n = r3 += n;
    n += r5;
    n += -1.12635303f;
    r5 = n += 0.08765122f;
    n += r5;
    n += r0;
    n += -0.78740120f;
    n *= r1;
    n += r4;
    n *= r3;
    return n;
} // Solution0

// Solution1 precision = 10.00000000
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += 0.91445786f;
    r0 = n += -0.12411123f;
    r1 = n *= -0.40833294f;
    n += 0.56152356f;
    n *= 0.39304715f;
    r2 = n *= 0.26593328f;
    r3 = n *= 0.62043190f;
    r4 = n += -0.01999711f;
    n *= 0.76998109f;
    n *= r0;
    n *= 0.32438779f;
    r0 = n += 0.88615155f;
    n += 0.59137917f;
    r5 = n += -0.79997838f;
    n = r4 += n;
    n *= r1;
    n = r2 += n;
    r1 = n += -0.70790082f;
    n = r4 *= n;
    n *= -0.58157736f;
    n *= -0.73367071f;
    n += r2;
    n = r3 += n;
    n += r5;
    n += -0.43704763f;
    r5 = n += 0.11699995f;
    n += r5;
    n += r0;
    n += 0.74222106f;
    n *= r1;
    n += r4;
    n *= r3;
    return n;
} // Solution1

// Solution2 precision = 10.00000000
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.59222901f;
    r0 = n += -0.99382269f;
    r1 = n *= 0.37523901f;
    n += -3.63562632f;
    n *= -0.06779741f;
    r2 = n *= 1.23033392f;
    r3 = n *= -0.34185582f;
    r4 = n += -0.60223877f;
    n *= 0.64283502f;
    n *= r0;
    n *= 0.54461437f;
    r0 = n += 0.79632723f;
    n += -0.18227643f;
    r5 = n += -0.24817717f;
    n = r4 += n;
    n *= r1;
    n = r2 += n;
    r1 = n += 0.24693148f;
    n = r4 *= n;
    n *= -1.29288125f;
    n *= -0.28468895f;
    n += r2;
    n = r3 += n;
    n += r5;
    n += 4.35791826f;
    r5 = n += -1.60768878f;
    n += r5;
    n += r0;
    n += 0.58079320f;
    n *= r1;
    n += r4;
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
