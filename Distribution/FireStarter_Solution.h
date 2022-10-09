// Run date: 10/09/22 09:51:31 Pacific Daylight Time
// Run duration = 2.485771 seconds
// Run count = 13
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
// Run generations = 100;
// Run precision = 256;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 100;
// Run seed = 7988;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 13

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

// Precision = 0.00001717

// Solution0 precision = 0.00001717
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.46037674f;
    n += -0.59004289f;
    r0 = n += -0.85628265f;
    r1 = n *= -0.17414252f;
    r2 = n += -0.08681347f;
    n = r2 += n;
    n += -0.32419649f;
    n += 0.67132783f;
    n = r2 *= n;
    n += -7.59061861f;
    r3 = n += -3.68090820f;
    n += 4.59366322f;
    n = r0 *= n;
    r4 = n *= 0.19143768f;
    n *= -0.19161372f;
    n *= 3.79758644f;
    n *= -0.03389175f;
    n = r0 *= n;
    r5 = n += -1.99692237f;
    n = r0 += n;
    n = r2 += n;
    n *= -0.24455298f;
    n += 1.06201875f;
    n *= r0;
    n *= r2;
    n += r5;
    n *= r4;
    n += r1;
    n *= r3;
    n += -0.70859474f;
    n += 0.70964956f;
    n *= -0.03367677f;
    return n;
} // Solution0

// Solution1 precision = 0.00000632
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.29240680f;
    n += 0.14833976f;
    r0 = n += 0.75539106f;
    r1 = n *= 0.05875645f;
    r2 = n += -0.39657646f;
    n = r2 += n;
    n += 0.83571184f;
    n += 0.75061399f;
    n = r2 *= n;
    n += 0.76886594f;
    r3 = n += -0.72155511f;
    n += 0.18391684f;
    n = r0 *= n;
    r4 = n *= 1.84926200f;
    n *= 0.49678692f;
    n *= -2.52230024f;
    n *= -1.06946576f;
    n = r0 *= n;
    r5 = n += -1.07846653f;
    n = r0 += n;
    n = r2 += n;
    n *= 0.97975481f;
    n += -4.01623344f;
    n *= r0;
    n *= r2;
    n += r5;
    n *= r4;
    n += r1;
    n *= r3;
    n += -0.70850337f;
    n += 0.86491281f;
    n *= -0.75527197f;
    return n;
} // Solution1

// Solution2 precision = 0.00001407
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.21864906f;
    n += -0.35102424f;
    r0 = n += -0.22139721f;
    r1 = n *= 0.40983093f;
    r2 = n += -0.81265295f;
    n = r2 += n;
    n += 1.65102053f;
    n += 1.59960043f;
    n = r2 *= n;
    n += 0.11634615f;
    r3 = n += -0.69138873f;
    n += -0.54905182f;
    n = r0 *= n;
    r4 = n *= 0.31825921f;
    n *= 0.11797976f;
    n *= -0.89329094f;
    n *= -3.22590208f;
    n = r0 *= n;
    r5 = n += -1.04651141f;
    n = r0 += n;
    n = r2 += n;
    n *= -0.01433850f;
    n += 0.95275003f;
    n *= r0;
    n *= r2;
    n += r5;
    n *= r4;
    n += r1;
    n *= r3;
    n += -0.63446486f;
    n += -0.46581346f;
    n *= -0.47587922f;
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
