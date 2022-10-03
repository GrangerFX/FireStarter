// Run date: 10/02/22 17:17:17 Pacific Daylight Time
// Run duration = 0.029657 seconds
// Run count = 285
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_EVOLVE;
// Run units = 2;
// Run processes = 6;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 10;
// Run precision = 256;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 100;
// Run seed = 7988;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 285

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

// Precision = 0.00269964

// Solution0 precision = 0.00269964
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.31376609f;
    n += 0.97098345f;
    r0 = n += 0.01476585f;
    r1 = n *= 0.00003630f;
    r2 = n += -1.01122105f;
    n = r2 += n;
    n += 0.74348110f;
    n += 0.22136343f;
    n = r2 *= n;
    n += 0.97361076f;
    r3 = n += 0.05675180f;
    n += 4.29594755f;
    n = r0 *= n;
    r4 = n *= 0.15072355f;
    n *= 0.25784981f;
    n *= 0.25733808f;
    n *= -0.90002507f;
    n = r0 *= n;
    r5 = n += 1.06034303f;
    n = r0 += n;
    n = r2 += n;
    n *= -1.31809938f;
    n += -0.13226812f;
    n *= r0;
    n *= r2;
    n += r5;
    n *= r4;
    n += r1;
    n *= r3;
    n *= 0.92386127f;
    n += -0.00182792f;
    n *= -0.07022530f;
    return n;
} // Solution0

// Solution1 precision = 0.00196409
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.20419100f;
    n += 0.91826612f;
    r0 = n += -0.28903022f;
    r1 = n *= 0.50718474f;
    r2 = n += 0.25962743f;
    n = r2 += n;
    n += -0.56687236f;
    n += -0.46253029f;
    n = r2 *= n;
    n += -0.82091510f;
    r3 = n += -0.55440468f;
    n += -0.92991960f;
    n = r0 *= n;
    r4 = n *= -0.78278667f;
    n *= 0.59661210f;
    n *= -0.12848151f;
    n *= 0.50565618f;
    n = r0 *= n;
    r5 = n += -0.87558120f;
    n = r0 += n;
    n = r2 += n;
    n *= 0.65125567f;
    n += 4.49460554f;
    n *= r0;
    n *= r2;
    n += r5;
    n *= r4;
    n += r1;
    n *= r3;
    n *= 0.91396326f;
    n += 0.18957269f;
    n *= -0.57320040f;
    return n;
} // Solution1

// Solution2 precision = 0.00127608
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.30229229f;
    n += -0.58158338f;
    r0 = n += -0.20951149f;
    r1 = n *= -0.14833067f;
    r2 = n += 0.79725999f;
    n = r2 += n;
    n += -0.21547060f;
    n += -2.97548962f;
    n = r2 *= n;
    n += 1.31609190f;
    r3 = n += -0.37746799f;
    n += 0.00831298f;
    n = r0 *= n;
    r4 = n *= -0.56301022f;
    n *= 1.34560668f;
    n *= 0.56634301f;
    n *= -0.52088541f;
    n = r0 *= n;
    r5 = n += -0.59733033f;
    n = r0 += n;
    n = r2 += n;
    n *= -0.58253968f;
    n += 0.41311538f;
    n *= r0;
    n *= r2;
    n += r5;
    n *= r4;
    n += r1;
    n *= r3;
    n *= -1.04243541f;
    n += -0.82335591f;
    n *= -0.63564008f;
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
