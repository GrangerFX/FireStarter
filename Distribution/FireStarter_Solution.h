// Run date: 07/10/22 17:40:47 Pacific Daylight Time
// Run duration = 5.575281 seconds
// Run count = 261
// Run mode = 4
// Run units = 8
// Run process = 1
// Run states = 4
// Run population = 17408
// Run iterations = 128
// Run generations = 100
// Run samples = 15
// Run attempts = 10000
// Run seed = 8337
// Solution Generation = 0

#ifndef __CUDACC__
#include <cmath>
#endif

#define TARGET_PI 3.14159265f

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
        return fabsf(fmodf(fabsf(n - TARGET_PI * 0.5f), TARGET_PI * 2.0f) - TARGET_PI) - TARGET_PI * 0.5f;
    }
} // SolutionTarget

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define SOLUTION_VARIATIONS 3

// Precision = 0.00003541

// Solution0 precision = 0.00003541
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n += -3.14159846f;
    r0 = n *= -0.54015511f;
    n *= 1.21450722f;
    r1 = n *= -0.67500818f;
    n = r0 *= n;
    n *= -0.90086156f;
    n *= -0.02514924f;
    r2 = n += 1.77543736f;
    r3 = n *= 0.69836879f;
    n *= r0;
    n *= -0.71041328f;
    n *= 0.59087026f;
    n *= 0.92311180f;
    n += -0.73459971f;
    r0 = n *= -0.42380747f;
    n = r2 += n;
    n += 0.25824121f;
    n *= -2.04579973f;
    n += 0.20974036f;
    n = r2 *= n;
    n = r1 *= n;
    n = r0 *= n;
    n += r1;
    n *= -0.03858847f;
    n = r2 *= n;
    n *= -0.67741930f;
    n *= r3;
    n += 0.00026518f;
    n *= 0.17210777f;
    n += r2;
    n += r0;
    n *= 0.32503119f;
    return n;
} // Solution0

// Solution1 precision = 0.00002372
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n += -3.09065604f;
    r0 = n *= -0.51894426f;
    n *= -0.55130160f;
    r1 = n *= -0.35621658f;
    n = r0 *= n;
    n *= -1.54574406f;
    n *= 0.41727093f;
    r2 = n += 0.25837442f;
    r3 = n *= 0.55278093f;
    n *= r0;
    n *= 0.21664859f;
    n *= -0.98781759f;
    n *= -0.17065836f;
    n += -0.48249996f;
    r0 = n *= -1.08252597f;
    n = r2 += n;
    n += 1.32526505f;
    n *= -0.94713485f;
    n += -0.52349496f;
    n = r2 *= n;
    n = r1 *= n;
    n = r0 *= n;
    n += r1;
    n *= -1.19748199f;
    n = r2 *= n;
    n *= -0.61084777f;
    n *= r3;
    n += -0.27345937f;
    n *= -0.33119392f;
    n += r2;
    n += r0;
    n *= -1.30432487f;
    return n;
} // Solution1

// Solution2 precision = 0.00002706
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n += -2.61797333f;
    r0 = n *= 0.71938848f;
    n *= -1.05827808f;
    r1 = n *= 1.51636171f;
    n = r0 *= n;
    n *= -0.18509598f;
    n *= -0.82250291f;
    r2 = n += -0.03433583f;
    r3 = n *= -1.60052943f;
    n *= r0;
    n *= -0.86042899f;
    n *= -0.02066037f;
    n *= -0.25834036f;
    n += 0.62744993f;
    r0 = n *= 1.02582800f;
    n = r2 += n;
    n += 0.20908301f;
    n *= -0.24538450f;
    n += -1.35934126f;
    n = r2 *= n;
    n = r1 *= n;
    n = r0 *= n;
    n += r1;
    n *= -0.17136151f;
    n = r2 *= n;
    n *= 0.13161746f;
    n *= r3;
    n += -0.72655678f;
    n *= 0.72191161f;
    n += r2;
    n += r0;
    n *= -0.99825084f;
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
