// Run date: 12/19/22 18:50:05 Pacific Standard Time
// Run duration = 0.000000 seconds
// Run count = 0
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_EVOLVE;
// Run units = 10;
// Run processes = 16;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 8;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 0

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

// Precision = 0.00035352

// Solution0 precision = 0.00016326
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.14562774f;
    r1 = n *= -0.20056446f;
    n += r1;
    n *= -0.17726561f;
    n *= -0.98623806f;
    r1 = n *= -0.39193499f;
    r2 = n *= -1.37266433f;
    n += 0.00281387f;
    n = r0 *= n;
    r3 = n += 0.25496671f;
    r4 = n += 0.91226989f;
    n *= 8.07195759f;
    n *= -0.00252226f;
    n += 2.86197186f;
    n += r3;
    n *= 0.68201101f;
    n *= r4;
    r4 = n += -0.64981270f;
    n += 2.44524789f;
    n += r0;
    n += 0.38653636f;
    r0 = n *= 1.68290830f;
    n = r2 += n;
    n *= r4;
    n *= -0.23987301f;
    n *= r2;
    n = r0 += n;
    n += 1.11273015f;
    n += r0;
    n *= r1;
    n += 0.60153496f;
    n += -0.60540712f;
    return n;
} // Solution0

// Solution1 precision = 0.00005376
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.09911799f;
    r1 = n *= 0.04357839f;
    n += r1;
    n *= -0.87359118f;
    n *= -0.06724113f;
    r1 = n *= -0.60054696f;
    r2 = n *= -7.23715210f;
    n += 0.00144274f;
    n = r0 *= n;
    r3 = n += -0.94817185f;
    r4 = n += -0.40556213f;
    n *= -0.09909951f;
    n *= -2.12045145f;
    n += -2.42723703f;
    n += r3;
    n *= -1.09185958f;
    n *= r4;
    r4 = n += 3.09429216f;
    n += -3.11364603f;
    n += r0;
    n += 0.29553089f;
    r0 = n *= -1.93092453f;
    n = r2 += n;
    n *= r4;
    n *= -0.74758750f;
    n *= r2;
    n = r0 += n;
    n += -2.20712399f;
    n += r0;
    n *= r1;
    n += -0.43775591f;
    n += 0.31026408f;
    return n;
} // Solution1

// Solution2 precision = 0.00035352
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -2.72327518f;
    r1 = n *= 1.11739326f;
    n += r1;
    n *= 1.06391346f;
    n *= -0.08758537f;
    r1 = n *= -0.57598108f;
    r2 = n *= -0.58002234f;
    n += -0.01050598f;
    n = r0 *= n;
    r3 = n += 2.50994205f;
    r4 = n += 0.28958741f;
    n *= -0.93515468f;
    n *= 3.88732362f;
    n += 0.45654255f;
    n += r3;
    n *= 1.52134728f;
    n *= r4;
    r4 = n += -1.08253920f;
    n += -5.77617121f;
    n += r0;
    n += 3.85468960f;
    r0 = n *= -0.24306643f;
    n = r2 += n;
    n *= r4;
    n *= 0.00534948f;
    n *= r2;
    n = r0 += n;
    n += -1.80280769f;
    n += r0;
    n *= r1;
    n += -0.26423985f;
    n += 0.68325460f;
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
