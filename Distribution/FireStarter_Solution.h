// Run date: 02/11/23 11:42:28 Pacific Standard Time
// Run duration = 37.443400 seconds
// Run count = 351
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_OPTIMIZE
// Run units = 1
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 128
// Run seed = 4
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 351

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

// Precision = 0.00035712

// Solution0 precision = 0.00023636
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.99442804f;
    r1 = n += 3.50424528f;
    r2 = n *= -0.26367360f;
    n += 1.44519460f;
    n += 2.26718807f;
    n += -2.52787709f;
    r3 = n += 0.44236660f;
    n *= -0.42949313f;
    n += -0.59318846f;
    n *= -0.86505729f;
    r4 = n *= -2.59242535f;
    r5 = n *= -1.22968435f;
    r6 = n *= 0.55475831f;
    n *= 0.08506572f;
    n *= -0.02503764f;
    n *= -23.83523750f;
    n *= r0;
    n *= r5;
    n += r6;
    n = r3 *= n;
    r6 = n *= -0.75584203f;
    n *= -4.35475874f;
    n *= r6;
    n *= -1.87718320f;
    n *= r1;
    n += -0.49067745f;
    n *= r2;
    r2 = n *= -0.05660740f;
    n += 0.42197210f;
    n += r2;
    n += r4;
    n += r3;
    return n;
} // Solution0

// Solution1 precision = 0.00025237
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += 3.78193951f;
    r1 = n += -4.70007372f;
    r2 = n *= 0.03538119f;
    n += 0.15079157f;
    n += 0.37791926f;
    n += -0.07939813f;
    r3 = n += -0.75820059f;
    n *= -0.36571524f;
    n += -0.16370881f;
    n *= 1.33369339f;
    r4 = n *= 0.11898666f;
    r5 = n *= 5110.34130859f;
    r6 = n *= 0.13382398f;
    n *= 0.03849139f;
    n *= 0.11863511f;
    n *= 0.13455817f;
    n *= r0;
    n *= r5;
    n += r6;
    n = r3 *= n;
    r6 = n *= 2.54679298f;
    n *= -1.42572844f;
    n *= r6;
    n *= 3.09446955f;
    n *= r1;
    n += 5.08672523f;
    n *= r2;
    r2 = n *= 0.06776848f;
    n += -0.24734408f;
    n += r2;
    n += r4;
    n += r3;
    return n;
} // Solution1

// Solution2 precision = 0.00035712
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -0.24537243f;
    r1 = n += 1.78728807f;
    r2 = n *= -1.19469774f;
    n += -0.17844586f;
    n += -2.54025960f;
    n += 1.14975381f;
    r3 = n += 8.01516056f;
    n *= -0.41243654f;
    n += -2.41096210f;
    n *= 0.50839341f;
    r4 = n *= 1.90442014f;
    r5 = n *= 1.86413491f;
    r6 = n *= -0.03315167f;
    n *= 0.39758444f;
    n *= -0.61258626f;
    n *= 0.19939958f;
    n *= r0;
    n *= r5;
    n += r6;
    n = r3 *= n;
    r6 = n *= -0.07802503f;
    n *= 72807.67187500f;
    n *= r6;
    n *= -0.00235799f;
    n *= r1;
    n += 0.33497959f;
    n *= r2;
    r2 = n *= 0.09885066f;
    n += 2.53613377f;
    n += r2;
    n += r4;
    n += r3;
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
