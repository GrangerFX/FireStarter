// Run date: 10/23/22 11:51:58 Pacific Daylight Time
// Run duration = 0.029049 seconds
// Run count = 21
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_UNIT;
// Run units = 1;
// Run processes = 0;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 3533;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 21

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

// Precision = 0.00000942

// Solution0 precision = 0.00000530
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.92278218f;
    r0 = n += 0.78117341f;
    n += 0.00002813f;
    r1 = n *= -0.13651194f;
    n = r1 *= n;
    r2 = n *= -4.32734823f;
    n += r2;
    r2 = n += 0.46939647f;
    r3 = n *= -0.12750357f;
    n += 0.26185969f;
    n += r3;
    r3 = n *= 0.31456259f;
    r4 = n += -0.88518840f;
    n = r1 += n;
    r5 = n += -0.45276925f;
    n *= -0.14449418f;
    n *= r1;
    n *= -4.73118019f;
    n += r2;
    n *= r5;
    r5 = n *= 0.07622433f;
    n += -8.96262646f;
    n *= r4;
    n += 0.57374060f;
    n *= r3;
    n += -3.60539889f;
    n *= -0.95134479f;
    n = r5 *= n;
    n += r5;
    n += -0.26357228f;
    n *= r0;
    n += -0.00001715f;
    return n;
} // Solution0

// Solution1 precision = 0.00000465
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.40062511f;
    r0 = n += -1.68998992f;
    n += -0.00007730f;
    r1 = n *= -0.36958790f;
    n = r1 *= n;
    r2 = n *= 0.44521204f;
    n += r2;
    r2 = n += -0.31075153f;
    r3 = n *= 0.20582916f;
    n += 5.03763866f;
    n += r3;
    r3 = n *= 0.00731458f;
    r4 = n += -1.96082199f;
    n = r1 += n;
    r5 = n += -4.05303383f;
    n *= -0.24036388f;
    n *= r1;
    n *= 0.28777075f;
    n += r2;
    n *= r5;
    r5 = n *= 0.42212445f;
    n += 1.20962322f;
    n *= r4;
    n += 0.63734215f;
    n *= r3;
    n += -1.98255849f;
    n *= 0.04489883f;
    n = r5 *= n;
    n += r5;
    n += -0.53918725f;
    n *= r0;
    n += -0.11808168f;
    return n;
} // Solution1

// Solution2 precision = 0.00000942
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.31983685f;
    r0 = n += -0.29813477f;
    n += -0.00004331f;
    r1 = n *= -0.17309740f;
    n = r1 *= n;
    r2 = n *= 1.34505486f;
    n += r2;
    r2 = n += -0.53248191f;
    r3 = n *= 0.46053219f;
    n += -0.33183908f;
    n += r3;
    r3 = n *= -0.45097426f;
    r4 = n += 0.27032766f;
    n = r1 += n;
    r5 = n += -0.54968655f;
    n *= 1.02159870f;
    n *= r1;
    n *= 0.06054496f;
    n += r2;
    n *= r5;
    r5 = n *= -3.46364164f;
    n += 2.80333805f;
    n *= r4;
    n += 2.14913511f;
    n *= r3;
    n += 1.79617441f;
    n *= -1.06243038f;
    n = r5 *= n;
    n += r5;
    n += 0.17471859f;
    n *= r0;
    n += 0.52362025f;
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
