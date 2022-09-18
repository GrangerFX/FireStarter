// Run date: 09/18/22 15:20:10 Pacific Daylight Time
// Run duration = 1.665995 seconds
// Run count = 4
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
// Solution Generation = 400

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

// Precision = 0.00000155

// Solution0 precision = 0.00000066
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -3.14159274f;
    r0 = n *= -0.47030133f;
    n *= -1.05740380f;
    r1 = n *= 0.90625942f;
    n = r0 *= n;
    r2 = n += 1.02235413f;
    n *= 0.07746973f;
    r3 = n += 0.78845739f;
    r4 = n *= 0.23611680f;
    n *= r0;
    n *= -0.88397509f;
    r0 = n *= 0.02995801f;
    n *= 4.16711426f;
    n += -5.32147884f;
    n = r0 *= n;
    n = r3 += n;
    n += -0.03343716f;
    n *= r2;
    n += 0.50016582f;
    n = r4 += n;
    n = r1 *= n;
    n = r0 *= n;
    n += r1;
    n *= 1.85805142f;
    n = r3 *= n;
    n *= 11.44594193f;
    n *= r4;
    n += 8.47945786f;
    n *= -0.00000000f;
    n += r3;
    n += r0;
    n *= -0.88345313f;
    return n;
} // Solution0

// Solution1 precision = 0.00000155
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -3.09065843f;
    r0 = n *= -0.30835110f;
    n *= 0.13504383f;
    r1 = n *= 1.07137680f;
    n = r0 *= n;
    r2 = n += -0.40749735f;
    n *= -3.16747904f;
    r3 = n += -0.02050093f;
    r4 = n *= -3.71921301f;
    n *= r0;
    n *= 0.09943134f;
    r0 = n *= -0.20831801f;
    n *= 3.69347501f;
    n += -1.91490054f;
    n = r0 *= n;
    n = r3 += n;
    n += 0.10261864f;
    n *= r2;
    n += 0.85842979f;
    n = r4 += n;
    n = r1 *= n;
    n = r0 *= n;
    n += r1;
    n *= 1.46570480f;
    n = r3 *= n;
    n *= 1.08087409f;
    n *= r4;
    n += -0.33006716f;
    n *= -0.27944639f;
    n += r3;
    n += r0;
    n *= -1.28075385f;
    return n;
} // Solution1

// Solution2 precision = 0.00000046
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -2.61799383f;
    r0 = n *= -0.68076187f;
    n *= -0.74118257f;
    r1 = n *= -0.73544461f;
    n = r0 *= n;
    r2 = n += -1.42574942f;
    n *= -0.09835649f;
    r3 = n += 1.33635712f;
    r4 = n *= -0.00328524f;
    n *= r0;
    n *= 0.97979605f;
    r0 = n *= 2.09211493f;
    n *= 0.25121266f;
    n += 2.10131001f;
    n = r0 *= n;
    n = r3 += n;
    n += 0.82310545f;
    n *= r2;
    n += 0.36355421f;
    n = r4 += n;
    n = r1 *= n;
    n = r0 *= n;
    n += r1;
    n *= -0.59532654f;
    n = r3 *= n;
    n *= -0.16052732f;
    n *= r4;
    n += 0.93998706f;
    n *= 0.70624030f;
    n += r3;
    n += r0;
    n *= 0.78872269f;
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
