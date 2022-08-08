// Run date: 08/08/22 13:12:17 Pacific Daylight Time
// Run duration = 2.118129 seconds
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
// Run process = 0;
// Run population = 139264;
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

// Precision = 0.00055115

// Solution0 precision = 0.00015934
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.51131052f;
    r1 = n += 1.60626447f;
    n *= 0.70261848f;
    r2 = n *= -0.50916678f;
    n *= 0.02297690f;
    n += -0.91564536f;
    r3 = n += 0.51832283f;
    n = r0 *= n;
    r4 = n += -0.79241985f;
    n *= 0.00704463f;
    n *= 2.08228159f;
    n += 0.78002900f;
    n += -0.81146395f;
    n = r4 += n;
    n += r3;
    n += -0.44925955f;
    n = r4 += n;
    r3 = n += -0.76502013f;
    n = r0 *= n;
    n += 0.13628058f;
    n += r1;
    n *= -0.34559193f;
    n += 1.21307921f;
    n *= r0;
    n *= 1.71194017f;
    n *= -0.58372635f;
    r0 = n += 1.81549692f;
    n *= r0;
    n += r3;
    n *= r4;
    n *= r2;
    n *= 0.34873840f;
    return n;
} // Solution0

// Solution1 precision = 0.00010741
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.42466870f;
    r1 = n += 1.26685941f;
    n *= 0.62370908f;
    r2 = n *= 0.23164465f;
    n *= -0.03680262f;
    n += 0.51817966f;
    r3 = n += -0.87389225f;
    n = r0 *= n;
    r4 = n += -0.38076586f;
    n *= -0.07136766f;
    n *= -1.72317672f;
    n += -0.91080391f;
    n += 0.41691703f;
    n = r4 += n;
    n += r3;
    n += -1.01181889f;
    n = r4 += n;
    r3 = n += 0.97950399f;
    n = r0 *= n;
    n += -0.00142961f;
    n += r1;
    n *= -0.24048495f;
    n += 0.79623091f;
    n *= r0;
    n *= -0.79100758f;
    n *= -3.37115192f;
    r0 = n += -2.01125193f;
    n *= r0;
    n += r3;
    n *= r4;
    n *= r2;
    n *= -0.80067796f;
    return n;
} // Solution1

// Solution2 precision = 0.00055115
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.16677235f;
    r1 = n += -0.53302103f;
    n *= 4.40386534f;
    r2 = n *= -0.14210075f;
    n *= -0.32741663f;
    n += -0.78779137f;
    r3 = n += -1.19083083f;
    n = r0 *= n;
    r4 = n += 0.34451661f;
    n *= 5.59000349f;
    n *= 0.00105890f;
    n += -0.38447073f;
    n += 0.99575597f;
    n = r4 += n;
    n += r3;
    n += 0.17215796f;
    n = r4 += n;
    r3 = n += 1.93103766f;
    n = r0 *= n;
    n += -1.74390888f;
    n += r1;
    n *= -0.05059151f;
    n += 0.70575857f;
    n *= r0;
    n *= 1.12640584f;
    n *= 0.99923974f;
    r0 = n += -1.74089468f;
    n *= r0;
    n += r3;
    n *= r4;
    n *= r2;
    n *= -1.27711916f;
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
