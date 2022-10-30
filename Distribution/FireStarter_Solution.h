// Run date: 10/29/22 15:59:59 Pacific Daylight Time
// Run duration = 0.148551 seconds
// Run count = 239
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_RANDOM;
// Run units = 2;
// Run processes = 6;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 10000;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 239

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

// Precision = 0.00013369

// Solution0 precision = 0.00012070
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    r0 = n += -0.14404245f;
    r1 = n += 4.02775860f;
    n *= 0.02442280f;
    n *= -0.72034520f;
    n += -1.00264978f;
    n *= -0.44748423f;
    r2 = n += -0.57252568f;
    r3 = n *= 0.51997197f;
    n *= 23.17481995f;
    n = r0 += n;
    n *= r1;
    n += r3;
    n *= r2;
    r2 = n += 0.87593126f;
    r3 = n *= -0.80742133f;
    n += -0.16280968f;
    n *= -0.02179549f;
    r1 = n += -0.73338354f;
    n = r1 *= n;
    n = r3 += n;
    n = r3 += n;
    n += -4.11910772f;
    n = r0 *= n;
    n += -31.26164246f;
    n *= r3;
    n += r2;
    n += 9.50259876f;
    n *= -0.01739727f;
    n *= 0.39896679f;
    n *= r0;
    n *= r1;
    n += 0.91597170f;
    return n;
} // Solution0

// Solution1 precision = 0.00013369
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    r0 = n += -0.26968017f;
    r1 = n += -2.62148952f;
    n *= -2.11051798f;
    n *= 0.13388316f;
    n += -0.69277722f;
    n *= -0.05867575f;
    r2 = n += 0.50266004f;
    r3 = n *= -6.51581001f;
    n *= 0.79478610f;
    n = r0 += n;
    n *= r1;
    n += r3;
    n *= r2;
    r2 = n += -1.99550021f;
    r3 = n *= 0.04125860f;
    n += -0.80412996f;
    n *= -0.43163180f;
    r1 = n += -0.05044675f;
    n = r1 *= n;
    n = r3 += n;
    n = r3 += n;
    n += -1.43373394f;
    n = r0 *= n;
    n += -0.18078102f;
    n *= r3;
    n += r2;
    n += -7.73954582f;
    n *= -0.50687319f;
    n *= 1.01381862f;
    n *= r0;
    n *= r1;
    n += -0.12994370f;
    return n;
} // Solution1

// Solution2 precision = 0.00012600
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    r0 = n += -0.57448852f;
    r1 = n += -1.58126545f;
    n *= 0.48710904f;
    n *= -0.44934893f;
    n += 2.06519103f;
    n *= -0.82666624f;
    r2 = n += -1.79835403f;
    r3 = n *= 1.56138301f;
    n *= 0.44934401f;
    n = r0 += n;
    n *= r1;
    n += r3;
    n *= r2;
    r2 = n += 0.35264403f;
    r3 = n *= -0.01429449f;
    n += -0.39653468f;
    n *= -0.12495150f;
    r1 = n += 0.18299426f;
    n = r1 *= n;
    n = r3 += n;
    n = r3 += n;
    n += -3.20806932f;
    n = r0 *= n;
    n += 0.83780020f;
    n *= r3;
    n += r2;
    n += -0.75448960f;
    n *= -0.49686572f;
    n *= -0.38334110f;
    n *= r0;
    n *= r1;
    n += 0.21576858f;
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
