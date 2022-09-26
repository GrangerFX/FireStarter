// Run date: 09/25/22 21:31:27 Pacific Daylight Time
// Run duration = 0.696167 seconds
// Run count = 7
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
// Run seed = 320;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 7

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

// Precision = 0.00022531

// Solution0 precision = 0.00014982
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.33287990f;
    r1 = n *= -0.13345149f;
    r2 = n *= -3.83534956f;
    n *= r2;
    r2 = n += -0.80489641f;
    n = r2 += n;
    r3 = n *= 0.20452973f;
    n += -0.46371439f;
    n = r0 *= n;
    n *= -1.25679600f;
    r4 = n += 0.13669065f;
    n *= 0.02300794f;
    n *= -0.37575531f;
    r5 = n *= -1.58405924f;
    n += 0.15044467f;
    n = r0 *= n;
    n += r3;
    n += -0.95075953f;
    r3 = n += -0.26357043f;
    n *= r2;
    n *= 0.61769158f;
    n = r1 += n;
    n += r5;
    n += r0;
    r0 = n += 0.11805651f;
    n += r4;
    r4 = n += -1.15548527f;
    n *= r4;
    n += -1.33207428f;
    n *= r0;
    n += r1;
    n *= r3;
    return n;
} // Solution0

// Solution1 precision = 0.00022531
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.50415975f;
    r1 = n *= -0.52010077f;
    r2 = n *= -0.45712188f;
    n *= r2;
    r2 = n += -0.41434094f;
    n = r2 += n;
    r3 = n *= -0.40596119f;
    n += 0.76150835f;
    n = r0 *= n;
    n *= -0.11000277f;
    r4 = n += -0.09923301f;
    n *= 0.58855253f;
    n *= 4.36298704f;
    r5 = n *= 0.01961685f;
    n += -0.32781401f;
    n = r0 *= n;
    n += r3;
    n += -0.62012863f;
    r3 = n += 0.01247189f;
    n *= r2;
    n *= -0.02991841f;
    n = r1 += n;
    n += r5;
    n += r0;
    r0 = n += 1.11618078f;
    n += r4;
    r4 = n += 0.09149516f;
    n *= r4;
    n += -4.04126215f;
    n *= r0;
    n += r1;
    n *= r3;
    return n;
} // Solution1

// Solution2 precision = 0.00015483
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.53838122f;
    r1 = n *= 0.34432620f;
    r2 = n *= 0.95021296f;
    n *= r2;
    r2 = n += -0.84104604f;
    n = r2 += n;
    r3 = n *= 0.71379262f;
    n += 0.35010141f;
    n = r0 *= n;
    n *= -0.19947177f;
    r4 = n += -0.10963329f;
    n *= -0.00298769f;
    n *= 0.11513162f;
    r5 = n *= -6.30368900f;
    n += 0.11201216f;
    n = r0 *= n;
    n += r3;
    n += 1.77552736f;
    r3 = n += -2.81682515f;
    n *= r2;
    n *= 0.36296430f;
    n = r1 += n;
    n += r5;
    n += r0;
    r0 = n += -0.09970996f;
    n += r4;
    r4 = n += -0.25783566f;
    n *= r4;
    n += -1.89121902f;
    n *= r0;
    n += r1;
    n *= r3;
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
