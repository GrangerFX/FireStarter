// Run date: 11/27/22 13:57:34 Pacific Standard Time
// Run duration = 37.371834 seconds
// Run count = 37
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
// Solution Generation = 37

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

// Precision = 0.00016579

// Solution0 precision = 0.00002071
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -0.14991643f;
    n += 0.15535629f;
    n *= -1.02784467f;
    r1 = n *= -0.26502782f;
    n *= -0.82427561f;
    r2 = n += -0.65554112f;
    n += 0.54810238f;
    r3 = n *= -0.57150656f;
    r4 = n += -0.46524626f;
    r5 = n += -0.18358342f;
    n = r2 += n;
    n += -1.46739101f;
    r6 = n += 2.36328459f;
    n += -12.55842876f;
    n *= r0;
    r0 = n *= -0.00076842f;
    n += r1;
    n = r6 *= n;
    n += 2.77097178f;
    n += r3;
    n = r5 += n;
    r3 = n *= -0.73110640f;
    n *= 0.77254719f;
    n = r4 *= n;
    n += r0;
    n += r5;
    n = r4 *= n;
    n *= r2;
    n += r3;
    n *= 2.12953138f;
    n *= r4;
    n *= r6;
    return n;
} // Solution0

// Solution1 precision = 0.00004959
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -6.28733444f;
    n += 3.60183668f;
    n *= 1.21489525f;
    r1 = n *= 0.39216664f;
    n *= 0.21492773f;
    r2 = n += 0.04140069f;
    n += -0.15330835f;
    r3 = n *= -0.43961126f;
    r4 = n += 1.07498717f;
    r5 = n += 0.48413441f;
    n = r2 += n;
    n += 3.39916301f;
    r6 = n += -4.81899691f;
    n += -27.81289482f;
    n *= r0;
    r0 = n *= -0.00155705f;
    n += r1;
    n = r6 *= n;
    n += -2.87798786f;
    n += r3;
    n = r5 += n;
    r3 = n *= -4.24356127f;
    n *= -0.17332177f;
    n = r4 *= n;
    n += r0;
    n += r5;
    n = r4 *= n;
    n *= r2;
    n += r3;
    n *= -0.37083507f;
    n *= r4;
    n *= r6;
    return n;
} // Solution1

// Solution2 precision = 0.00016579
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.34107018f;
    n += -2.93299603f;
    n *= 0.21230064f;
    r1 = n *= 1.98507285f;
    n *= 0.24753340f;
    r2 = n += -0.19813828f;
    n += -0.32506934f;
    r3 = n *= 0.68483192f;
    r4 = n += 0.66364312f;
    r5 = n += 0.14714459f;
    n = r2 += n;
    n += -2.77190757f;
    r6 = n += 2.70708632f;
    n += 28.72875023f;
    n *= r0;
    r0 = n *= -0.00039049f;
    n += r1;
    n = r6 *= n;
    n += -3.00882244f;
    n += r3;
    n = r5 += n;
    r3 = n *= 1.00411761f;
    n *= 0.36522934f;
    n = r4 *= n;
    n += r0;
    n += r5;
    n = r4 *= n;
    n *= r2;
    n += r3;
    n *= -3.32915545f;
    n *= r4;
    n *= r6;
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
