#include <math.h>

// Run date: 04/03/22 17:34:22 Pacific Daylight Time
// Run duration = 1.773230 seconds
// Run count = 4
// Run units = 1
// Run population = 34816
// Run iterations = 256
// Run generations = 100
// Run samples = 15

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define SOLUTION_VARIATIONS 3

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

// Precision = 0.000065

// Solution0 precision = 0.000039
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.33254874f;
    r0 = n += -3.67003679f;
    n += 0.65428424f;
    n += 0.32767406f;
    n += -0.70297629f;
    r1 = n *= -0.79360342f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.20519440f;
    r3 = n += -0.53219366f;
    r4 = n += 0.15285319f;
    n *= -0.56868905f;
    n *= 0.60445911f;
    n *= r2;
    n *= 1.36014211f;
    r2 = n += 1.37321734f;
    n *= -0.35941187f;
    n *= r1;
    n *= r2;
    n *= 1.30243945f;
    n += -0.79548573f;
    n *= r4;
    r4 = n *= 0.42163217f;
    r2 = n += 1.82309413f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 1.19941485f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += -0.20644142f;
    return n;
} // Solution0

// Solution1 precision = 0.000065
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -2.18174839f;
    r0 = n += 0.42211661f;
    n += 0.62280989f;
    n += -1.56054699f;
    n += -0.37161180f;
    r1 = n *= -0.58083993f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.15669475f;
    r3 = n += 0.28999501f;
    r4 = n += 0.54739290f;
    n *= -2.46865439f;
    n *= -0.08721229f;
    n *= r2;
    n *= 0.37489980f;
    r2 = n += -0.96037227f;
    n *= 0.40987542f;
    n *= r1;
    n *= r2;
    n *= -2.38371396f;
    n += 0.91520381f;
    n *= r4;
    r4 = n *= 0.16286036f;
    r2 = n += 1.01259911f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 1.41092396f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.81668258f;
    return n;
} // Solution1

// Solution2 precision = 0.000058
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.04038691f;
    r0 = n += -0.03903803f;
    n += -0.42774180f;
    n += -0.34077364f;
    n += -0.12145205f;
    r1 = n *= 0.35077024f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.07506845f;
    r3 = n += 0.48777518f;
    r4 = n += 0.46137494f;
    n *= 0.44446927f;
    n *= 0.40729547f;
    n *= r2;
    n *= 1.13996661f;
    r2 = n += -2.05262899f;
    n *= -1.36408663f;
    n *= r1;
    n *= r2;
    n *= 0.29412591f;
    n += -0.01796640f;
    n *= r4;
    r4 = n *= -0.10307472f;
    r2 = n += 0.70157146f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 0.59827256f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.42617488f;
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
