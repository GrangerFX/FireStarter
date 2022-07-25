// Run date: 07/24/22 16:59:34 Pacific Daylight Time
// Run duration = 1.950027 seconds
// Run count = 36
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;
// Run variations = 3;
// Run samples = 15;

// Run sampleMin = 0.000000f;
// Run sampleMax = 6.283185f;
// Run evolveFactor = 0.100000f;
// Run evolveStartFactor = 4.000000f;
// Run evolveStartResult = 10.000000f;
// Run evolveCandidates = 16;

// Run mode = FIRESTARTER_OPTIMIZE;
// Run states = 1;
// Run units = 1;
// Run process = 0;
// Run population = 69632;
// Run iterations = 512;
// Run generations = 100;
// Run precision = 256;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Solution Generation = 3500

#ifndef __CUDACC__
#include <cmath>
#endif

#define TARGET_PI 3.14159265f

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
        return fabsf(fmodf(fabsf(n - TARGET_PI * 0.5f), TARGET_PI * 2.0f) - TARGET_PI) - TARGET_PI * 0.5f;
    }
} // SolutionTarget

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define SOLUTION_VARIATIONS 3

// Precision = 0.00394050

// Solution0 precision = 0.00030375
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -0.95176280f;
    n *= 0.60176885f;
    n += -0.06942908f;
    n *= -0.41059822f;
    r1 = n += 1.23788071f;
    n *= -0.89435244f;
    n += 0.60303998f;
    r2 = n *= -0.26087904f;
    r3 = n *= -2.07178712f;
    n += 1.11353195f;
    n *= -1.13086784f;
    r4 = n *= -1.48192346f;
    n += r0;
    n = r1 *= n;
    n = r2 *= n;
    r0 = n *= -0.59052384f;
    n += r0;
    n += 0.56002313f;
    n += 0.31984401f;
    r0 = n += 0.24685694f;
    n += -0.42762700f;
    r5 = n += -0.39967883f;
    n *= r4;
    n *= -1.04896569f;
    n += r0;
    n += r3;
    n += 0.67483461f;
    n = r5 += n;
    n += r1;
    n += r5;
    n *= r2;
    n += -0.20494747f;
    return n;
} // Solution0

// Solution1 precision = 0.00012541
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -1.08440399f;
    n *= -0.36863977f;
    n += 0.79366720f;
    n *= -0.35072020f;
    r1 = n += 0.69969195f;
    n *= -1.77033174f;
    n += 1.38569713f;
    r2 = n *= 0.14553671f;
    r3 = n *= 3.00925398f;
    n += 0.97614151f;
    n *= -4.33635998f;
    r4 = n *= 1.70551729f;
    n += r0;
    n = r1 *= n;
    n = r2 *= n;
    r0 = n *= 1.33705318f;
    n += r0;
    n += 0.97915375f;
    n += -0.77267236f;
    r0 = n += -1.06584394f;
    n += 0.66647667f;
    r5 = n += 0.54706085f;
    n *= r4;
    n *= 0.32757941f;
    n += r0;
    n += r3;
    n += -0.75186962f;
    n = r5 += n;
    n += r1;
    n += r5;
    n *= r2;
    n += -0.92775393f;
    return n;
} // Solution1

// Solution2 precision = 0.00394050
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += 0.82346421f;
    n *= 0.26570159f;
    n += -0.81941694f;
    n *= -1.24690175f;
    r1 = n += -0.48643824f;
    n *= 0.94749147f;
    n += 1.37820780f;
    r2 = n *= -0.19105811f;
    r3 = n *= -4.38567781f;
    n += -0.49934065f;
    n *= -19.05263138f;
    r4 = n *= -0.05135522f;
    n += r0;
    n = r1 *= n;
    n = r2 *= n;
    r0 = n *= -1.35007715f;
    n += r0;
    n += 1.38199008f;
    n += -1.22999978f;
    r0 = n += 0.71141207f;
    n += 0.23186748f;
    r5 = n += -2.20308781f;
    n *= r4;
    n *= 1.11628866f;
    n += r0;
    n += r3;
    n += 2.19154811f;
    n = r5 += n;
    n += r1;
    n += r5;
    n *= r2;
    n += 0.97436166f;
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
