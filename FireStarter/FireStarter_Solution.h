#include <math.h>

// Run date: 02/20/22 12:43:42 Pacific Standard Time
// Run duration = 1.175666 seconds
// Run count = 6
// Run units = 1
// Run population = 4352
// Run iterations = 256
// Run generations = 10
// Run samples = 15

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define TARGET_VARIATIONS 4

#ifndef __CUDACC__
#include <cmath>
#endif

#define TARGET_PI 3.14159265f

inline float Target(float n, unsigned int variation)
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
} // Target

// Precision = 0.202074
// Solution0 precision = 0.198754
inline float Solution0(float n)
{
    float r0, r1, r2;

    n *= -0.84074974f;
    n += 0.89315087f;
    r0 = n;
    n += -0.48516902f;
    r1 = n;
    n += fabsf(-0.01264865f);
    n *= -0.63030756f;
    n += -0.51174039f;
    r2 = n;
    n += 0.76517445f;
    n *= -0.11769682f;
    n += -1.02464187f;
    n *= r0;
    r0 = n;
    n += r2;
    n *= 0.97764117f;
    n += fabsf(-0.02180283f);
    r2 = n;
    n *= -0.39144558f;
    n += fabsf(0.08950129f);
    n *= 0.42682916f;
    n += -0.56162107f;
    n *= r0;
    n += -0.38049313f;
    r0 = n;
    n += 0.26058212f;
    n += r0;
    r0 = n;
    n += -0.35121456f;
    n *= r1;
    n *= 0.85810417f;
    r1 = n;
    n += r0;
    r0 = n;
    n += r0;
    n += 0.93892467f;
    r0 = n;
    n += 0.47115713f;
    n *= r2;
    n += -0.03333487f;
    n += r1;
    n += r0;
    return n;
} // Solution0

// Solution1 precision = 0.183836
inline float Solution1(float n)
{
    float r0, r1, r2;

    n *= -0.78286880f;
    n += -0.49280751f;
    r0 = n;
    n += -0.61284846f;
    r1 = n;
    n += fabsf(1.54136467f);
    n *= 0.52069432f;
    n += 0.89552617f;
    r2 = n;
    n += -0.71465039f;
    n *= 0.22942676f;
    n += 0.31954405f;
    n *= r0;
    r0 = n;
    n += r2;
    n *= 0.16739249f;
    n += fabsf(0.57047182f);
    r2 = n;
    n *= 0.71697825f;
    n += fabsf(0.67557985f);
    n *= -0.52369797f;
    n += -0.74746907f;
    n *= r0;
    n += -0.30674917f;
    r0 = n;
    n += 0.49696836f;
    n += r0;
    r0 = n;
    n += -0.92577142f;
    n *= r1;
    n *= -0.08295314f;
    r1 = n;
    n += r0;
    r0 = n;
    n += r0;
    n += -0.15363191f;
    r0 = n;
    n += -0.00975091f;
    n *= r2;
    n += 0.49397218f;
    n += r1;
    n += r0;
    return n;
} // Solution1

// Solution2 precision = 0.202074
inline float Solution2(float n)
{
    float r0, r1, r2;

    n *= -0.59560251f;
    n += 0.14026414f;
    r0 = n;
    n += 0.20075203f;
    r1 = n;
    n += fabsf(0.65728420f);
    n *= 0.85880351f;
    n += 0.42873353f;
    r2 = n;
    n += -0.18128045f;
    n *= -0.00937692f;
    n += 0.93527853f;
    n *= r0;
    r0 = n;
    n += r2;
    n *= -0.23566866f;
    n += fabsf(0.96211803f);
    r2 = n;
    n *= -0.21062025f;
    n += fabsf(-0.03200501f);
    n *= 0.66959697f;
    n += 0.05545991f;
    n *= r0;
    n += 0.90485114f;
    r0 = n;
    n += -0.21944237f;
    n += r0;
    r0 = n;
    n += -0.11945207f;
    n *= r1;
    n *= -0.60895675f;
    r1 = n;
    n += r0;
    r0 = n;
    n += r0;
    n += 0.00484462f;
    r0 = n;
    n += 1.36551094f;
    n *= r2;
    n += -0.78397965f;
    n += r1;
    n += r0;
    return n;
} // Solution2

// Solution3 precision = 0.129406
inline float Solution3(float n)
{
    float r0, r1, r2;

    n *= 0.70105058f;
    n += 0.47401503f;
    r0 = n;
    n += 0.51194251f;
    r1 = n;
    n += fabsf(-0.88298106f);
    n *= 0.61023891f;
    n += -0.13970202f;
    r2 = n;
    n += 0.70437491f;
    n *= 0.49101239f;
    n += 0.78869331f;
    n *= r0;
    r0 = n;
    n += r2;
    n *= 0.05303134f;
    n += fabsf(-0.61538678f);
    r2 = n;
    n *= 0.52166283f;
    n += fabsf(-0.61804271f);
    n *= 0.72205013f;
    n += -0.08325100f;
    n *= r0;
    n += -0.48132434f;
    r0 = n;
    n += -0.87097675f;
    n += r0;
    r0 = n;
    n += -0.60803306f;
    n *= r1;
    n *= 0.90245491f;
    r1 = n;
    n += r0;
    r0 = n;
    n += r0;
    n += 0.10226026f;
    r0 = n;
    n += -1.01418543f;
    n *= r2;
    n += -0.43316209f;
    n += r1;
    n += r0;
    return n;
} // Solution3

