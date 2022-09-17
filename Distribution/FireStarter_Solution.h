// Run date: 09/17/22 15:02:53 Pacific Daylight Time
// Run duration = 0.401987 seconds
// Run count = 37
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
// Run seed = 100;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 36

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

// Precision = 0.00033138

// Solution0 precision = 0.00026110
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.57501864f;
    n *= 0.24679886f;
    r1 = n += 0.90934843f;
    n = r1 *= n;
    r2 = n += 0.00908946f;
    r3 = n *= 0.87215877f;
    r4 = n *= 0.05586516f;
    n += -1.63131785f;
    r5 = n += -0.29540932f;
    n += -0.80675459f;
    n = r1 += n;
    n = r1 *= n;
    n *= r2;
    n += r3;
    n *= 0.47168896f;
    n += -0.77076381f;
    n *= 0.76153678f;
    n = r4 += n;
    n += 0.76989800f;
    r3 = n += 0.24437447f;
    n += r3;
    n += -1.09636617f;
    n += 0.35930717f;
    r3 = n += -1.78059387f;
    n *= -0.41013381f;
    n += r0;
    n += -2.10704422f;
    n = r1 += n;
    n += r3;
    n *= r1;
    n += r5;
    n *= r4;
    return n;
} // Solution0

// Solution1 precision = 0.00012481
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.47419193f;
    n *= -0.73505241f;
    r1 = n += -1.16716993f;
    n = r1 *= n;
    r2 = n += -0.70052832f;
    r3 = n *= -1.16400003f;
    r4 = n *= 0.83179110f;
    n += -0.37811980f;
    r5 = n += -0.37411985f;
    n += -0.76218420f;
    n = r1 += n;
    n = r1 *= n;
    n *= r2;
    n += r3;
    n *= -1.69234025f;
    n += 0.35903686f;
    n *= 0.81637210f;
    n = r4 += n;
    n += -1.47302532f;
    r3 = n += 3.29177237f;
    n += r3;
    n += 0.25790226f;
    n += 0.80080390f;
    r3 = n += -1.08032489f;
    n *= -0.04436263f;
    n += r0;
    n += 0.94163322f;
    n = r1 += n;
    n += r3;
    n *= r1;
    n += r5;
    n *= r4;
    return n;
} // Solution1

// Solution2 precision = 0.00033138
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.19285676f;
    n *= -1.12504137f;
    r1 = n += 0.81906056f;
    n = r1 *= n;
    r2 = n += -0.21887559f;
    r3 = n *= -0.00789437f;
    r4 = n *= -5.47853422f;
    n += -0.48645577f;
    r5 = n += -0.68508381f;
    n += -1.08909166f;
    n = r1 += n;
    n = r1 *= n;
    n *= r2;
    n += r3;
    n *= -0.57537395f;
    n += -0.67464811f;
    n *= -0.10685477f;
    n = r4 += n;
    n += -0.44813693f;
    r3 = n += 0.92485142f;
    n += r3;
    n += -1.41024613f;
    n += 3.78136253f;
    r3 = n += 2.28819680f;
    n *= -0.58300751f;
    n += r0;
    n += 1.18103600f;
    n = r1 += n;
    n += r3;
    n *= r1;
    n += r5;
    n *= r4;
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
