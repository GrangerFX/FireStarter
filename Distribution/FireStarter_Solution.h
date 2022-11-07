// Run date: 11/07/22 10:36:51 Pacific Standard Time
// Run duration = 17.928889 seconds
// Run count = 5
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_EVOLVE;
// Run units = 8;
// Run processes = 8;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 2;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 5

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

// Precision = 0.00035818

// Solution0 precision = 0.00029343
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.14135313f;
    r1 = n *= -0.28371999f;
    r2 = n *= -0.57157594f;
    n += 3.21210051f;
    n *= 0.33954227f;
    r3 = n *= -0.33641502f;
    r4 = n *= 1.15071964f;
    r5 = n += 0.16146287f;
    r6 = n += -0.04928727f;
    n = r6 += n;
    n += r2;
    n += 0.66958833f;
    n = r3 += n;
    n += -0.02130854f;
    n *= r0;
    n *= r4;
    r4 = n += 0.73215383f;
    n = r3 *= n;
    n += 1.58721662f;
    n += -3.06695294f;
    n += r6;
    n = r3 *= n;
    n *= r5;
    n *= -4.58068800f;
    n *= 0.06692341f;
    n *= 0.92336881f;
    n += r4;
    r4 = n += 1.10090113f;
    n += 1.59753716f;
    n *= r4;
    n *= r1;
    n *= r3;
    return n;
} // Solution0

// Solution1 precision = 0.00015700
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.98299432f;
    r1 = n *= -0.13012536f;
    r2 = n *= 0.35691014f;
    n += 0.03784744f;
    n *= -3.83917165f;
    r3 = n *= 0.70391399f;
    r4 = n *= -0.31426415f;
    r5 = n += -0.76094204f;
    r6 = n += 0.79392362f;
    n = r6 += n;
    n += r2;
    n += -0.54787767f;
    n = r3 += n;
    n += -0.70778888f;
    n *= r0;
    n *= r4;
    r4 = n += -1.11945033f;
    n = r3 *= n;
    n += 0.55634290f;
    n += 0.22909810f;
    n += r6;
    n = r3 *= n;
    n *= r5;
    n *= 0.05391216f;
    n *= 2.27769041f;
    n *= 4.28034496f;
    n += r4;
    r4 = n += -0.52601540f;
    n += -2.90141273f;
    n *= r4;
    n *= r1;
    n *= r3;
    return n;
} // Solution1

// Solution2 precision = 0.00035818
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.19631243f;
    r1 = n *= -0.51545620f;
    r2 = n *= 0.60273927f;
    n += 3.21072197f;
    n *= 0.04867827f;
    r3 = n *= -0.20788671f;
    r4 = n *= -2.09586406f;
    r5 = n += -0.27845383f;
    r6 = n += -0.46777713f;
    n = r6 += n;
    n += r2;
    n += -0.71769381f;
    n = r3 += n;
    n += 1.35677159f;
    n *= r0;
    n *= r4;
    r4 = n += 0.07852624f;
    n = r3 *= n;
    n += -1.52181041f;
    n += -0.50087571f;
    n += r6;
    n = r3 *= n;
    n *= r5;
    n *= -0.43133447f;
    n *= 4.68293142f;
    n *= 0.16274107f;
    n += r4;
    r4 = n += 0.59946275f;
    n += 2.60789227f;
    n *= r4;
    n *= r1;
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
