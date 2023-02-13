// Run date: 02/12/23 19:16:51 Pacific Standard Time
// Run duration = 56.513436 seconds
// Run count = 504
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_OPTIMIZE
// Run units = 1
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 128
// Run seed = 0
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 504

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

// Precision = 0.00020778

// Solution0 precision = 0.00002033
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.14146638f;
    r1 = n += -0.00026260f;
    r2 = n *= -0.10435352f;
    r3 = n *= -2.77675247f;
    r4 = n *= 0.03432127f;
    n += r2;
    n *= r4;
    r4 = n *= -0.75393897f;
    n *= 4.39602375f;
    n *= -3.53426290f;
    r2 = n += 2.65215731f;
    r5 = n *= -0.78699350f;
    n *= -0.60247111f;
    r6 = n += -0.17593935f;
    n *= r0;
    n = r2 *= n;
    r0 = n *= 5.21523666f;
    n *= 0.69864452f;
    n *= r2;
    n += -87.16736603f;
    n += -493.81845093f;
    n *= r0;
    n = r3 += n;
    n *= r5;
    n *= r4;
    n *= 61.10519791f;
    n *= 1.19382954f;
    n += r3;
    n += r6;
    n *= -0.01082961f;
    n += r1;
    n *= -0.01051227f;
    return n;
} // Solution0

// Solution1 precision = 0.00000605
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.09102678f;
    r1 = n += 0.00109130f;
    r2 = n *= 0.13235717f;
    r3 = n *= -1.82285690f;
    r4 = n *= -0.27001077f;
    n += r2;
    n *= r4;
    r4 = n *= 0.52996850f;
    n *= -2.12959886f;
    n *= 0.54570669f;
    r2 = n += 0.58342969f;
    r5 = n *= 0.08319879f;
    n *= 1.62508357f;
    r6 = n += 1.33468294f;
    n *= r0;
    n = r2 *= n;
    r0 = n *= 0.69584239f;
    n *= -4.29197693f;
    n *= r2;
    n += 20.46804047f;
    n += 4.66534758f;
    n *= r0;
    n = r3 += n;
    n *= r5;
    n *= r4;
    n *= 18.66233826f;
    n *= -0.85183042f;
    n += r3;
    n += r6;
    n *= -0.92737031f;
    n += r1;
    n *= 0.09051865f;
    return n;
} // Solution1

// Solution2 precision = 0.00020778
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.61770177f;
    r1 = n += -0.00102467f;
    r2 = n *= 0.27533308f;
    r3 = n *= -0.67789352f;
    r4 = n *= 0.84612280f;
    n += r2;
    n *= r4;
    r4 = n *= 1.45120740f;
    n *= -0.84183478f;
    n *= 0.70781547f;
    r2 = n += -0.67012519f;
    r5 = n *= -0.13929565f;
    n *= 0.10483032f;
    r6 = n += 0.71064246f;
    n *= r0;
    n = r2 *= n;
    r0 = n *= 1.49317491f;
    n *= -1.27542543f;
    n *= r2;
    n += 1.63514435f;
    n += 1.16532195f;
    n *= r0;
    n = r3 += n;
    n *= r5;
    n *= r4;
    n *= 33.11161041f;
    n *= 0.14174248f;
    n += r3;
    n += r6;
    n *= 1.20161986f;
    n += r1;
    n *= 0.60572159f;
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
