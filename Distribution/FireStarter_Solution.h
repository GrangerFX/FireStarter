// Run date: 12/29/22 10:17:08 Pacific Standard Time
// Run duration = 29.230384 seconds
// Run count = 11
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_RANDOM;
// Run units = 8;
// Run processes = 16;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 1000;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 11000;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 2.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 11

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

// Precision = 0.00004613

// Solution0 precision = 0.00002867
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.99960971f;
    n *= 0.27182558f;
    r0 = n += -0.22239481f;
    r1 = n += 1.37675512f;
    r2 = n += -0.79492617f;
    n += 0.71074164f;
    r3 = n += -0.77284402f;
    r4 = n *= -0.48939016f;
    n += 1.13212216f;
    n = r1 *= n;
    n = r3 += n;
    n *= -0.54201180f;
    n *= 1.05475557f;
    n *= r0;
    r0 = n += 1.51223624f;
    r5 = n *= -0.23918647f;
    n = r5 *= n;
    n *= -3.48313260f;
    n += -0.01683857f;
    n += r2;
    n = r0 *= n;
    r2 = n += -0.73172396f;
    n *= -1.14185774f;
    n *= r4;
    n += r0;
    n *= -0.01512028f;
    r0 = n += -0.87472570f;
    n *= r3;
    n *= r2;
    n += r5;
    n *= r1;
    n += r0;
    return n;
} // Solution0

// Solution1 precision = 0.00002849
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.35720778f;
    n *= 0.30239469f;
    r0 = n += -1.05761397f;
    r1 = n += -1.22143435f;
    r2 = n += 0.72120845f;
    n += -0.32836547f;
    r3 = n += -1.44571614f;
    r4 = n *= 0.44530421f;
    n += 2.20941877f;
    n = r1 *= n;
    n = r3 += n;
    n *= -0.36548319f;
    n *= 0.29330021f;
    n *= r0;
    r0 = n += 1.45493364f;
    r5 = n *= -0.12636247f;
    n = r5 *= n;
    n *= -4.78153992f;
    n += -0.74280250f;
    n += r2;
    n = r0 *= n;
    r2 = n += 0.57078940f;
    n *= 0.57990533f;
    n *= r4;
    n += r0;
    n *= -0.58757299f;
    r0 = n += -0.51790333f;
    n *= r3;
    n *= r2;
    n += r5;
    n *= r1;
    n += r0;
    return n;
} // Solution1

// Solution2 precision = 0.00004613
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.08084750f;
    n *= 0.56944633f;
    r0 = n += 3.72456431f;
    r1 = n += -3.38140178f;
    r2 = n += 0.64909178f;
    n += -0.02661843f;
    r3 = n += -0.37869540f;
    r4 = n *= -0.27945730f;
    n += 0.69064838f;
    n = r1 *= n;
    n = r3 += n;
    n *= -0.02252722f;
    n *= -2.17482924f;
    n *= r0;
    r0 = n += -0.13276166f;
    r5 = n *= -0.04075134f;
    n = r5 *= n;
    n *= -2.70559406f;
    n += -2.19533920f;
    n += r2;
    n = r0 *= n;
    r2 = n += -1.75846601f;
    n *= -0.22828853f;
    n *= r4;
    n += r0;
    n *= -0.37474746f;
    r0 = n += 1.31926441f;
    n *= r3;
    n *= r2;
    n += r5;
    n *= r1;
    n += r0;
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
