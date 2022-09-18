// Run date: 09/17/22 17:08:55 Pacific Daylight Time
// Run duration = 0.824952 seconds
// Run count = 2
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
// Solution Generation = 200

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

// Precision = 0.00028062

// Solution0 precision = 0.00024495
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.47026712f;
    n *= -0.40074900f;
    r1 = n += 0.25114894f;
    n = r1 *= n;
    r2 = n += -0.45890290f;
    r3 = n *= -0.37661156f;
    r4 = n *= -0.29564798f;
    n += -0.03146129f;
    r5 = n += -0.79557252f;
    n += -1.71528816f;
    n = r1 += n;
    n = r1 *= n;
    n *= r2;
    n += r3;
    n *= -0.04172543f;
    n += -0.20578408f;
    n *= -0.41254237f;
    n = r4 += n;
    n += -7.45758343f;
    r3 = n += 4.24949551f;
    n += r3;
    n += -0.32798597f;
    n += 1.87332654f;
    r3 = n += 0.22225909f;
    n *= -0.33283028f;
    n += r0;
    n += 1.33404183f;
    n = r1 += n;
    n += r3;
    n *= r1;
    n += r5;
    n *= r4;
    return n;
} // Solution0

// Solution1 precision = 0.00017464
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.54711354f;
    n *= 0.28772503f;
    r1 = n += -0.13036387f;
    n = r1 *= n;
    r2 = n += -0.97594815f;
    r3 = n *= 0.50054514f;
    r4 = n *= 0.39024356f;
    n += 0.28735712f;
    r5 = n += -3.74483442f;
    n += 0.02321967f;
    n = r1 += n;
    n = r1 *= n;
    n *= r2;
    n += r3;
    n *= -0.26310334f;
    n += -0.67638063f;
    n *= 0.07673080f;
    n = r4 += n;
    n += 2.62355971f;
    r3 = n += 1.08729827f;
    n += r3;
    n += -8.84782696f;
    n += 5.20178938f;
    r3 = n += -3.69823956f;
    n *= -0.84547389f;
    n += r0;
    n += -6.44253111f;
    n = r1 += n;
    n += r3;
    n *= r1;
    n += r5;
    n *= r4;
    return n;
} // Solution1

// Solution2 precision = 0.00028062
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.25605872f;
    n *= 0.93298316f;
    r1 = n += -0.90185851f;
    n = r1 *= n;
    r2 = n += -0.25800505f;
    r3 = n *= 0.21256785f;
    r4 = n *= 0.00433464f;
    n += -0.91647702f;
    r5 = n += -0.72072089f;
    n += -0.96664488f;
    n = r1 += n;
    n = r1 *= n;
    n *= r2;
    n += r3;
    n *= -0.17019276f;
    n += -0.28198549f;
    n *= -0.12576120f;
    n = r4 += n;
    n += -4.15997648f;
    r3 = n += -1.47900689f;
    n += r3;
    n += -5.15018702f;
    n += 2.27237058f;
    r3 = n += 4.10991144f;
    n *= -0.80572098f;
    n += r0;
    n += -1.11962056f;
    n = r1 += n;
    n += r3;
    n *= r1;
    n += r5;
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
