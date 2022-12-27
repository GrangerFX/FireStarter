// Run date: 12/27/22 12:26:44 Pacific Standard Time
// Run duration = 41.509828 seconds
// Run count = 90
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_OPTIMIZE;
// Run units = 1;
// Run processes = 0;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 2.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 90

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

// Precision = 0.00003490

// Solution0 precision = 0.00003490
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.65014327f;
    r1 = n *= -1.33634019f;
    r2 = n *= 0.16241494f;
    r3 = n += -0.81492203f;
    r4 = n *= -0.02853040f;
    n *= 4.29361105f;
    r5 = n += -1.30880511f;
    n += r1;
    r1 = n += 0.79446912f;
    n = r3 *= n;
    n *= -0.17528793f;
    n += 0.07298878f;
    r6 = n += 1.71956837f;
    n *= r4;
    r4 = n += 0.46679923f;
    n *= r6;
    r6 = n += 4.87782764f;
    n *= r4;
    n *= 2.41046786f;
    n *= r5;
    n += r6;
    n += r1;
    r1 = n += 1.32968402f;
    n = r0 += n;
    r6 = n *= -0.37529242f;
    n += r1;
    n += r3;
    n = r6 *= n;
    n *= r2;
    n += r6;
    n *= r0;
    n += -0.02563422f;
    return n;
} // Solution0

// Solution1 precision = 0.00003231
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.46982718f;
    r1 = n *= -0.71814817f;
    r2 = n *= 0.14394201f;
    r3 = n += -2.17303777f;
    r4 = n *= 0.06191058f;
    n *= 2.82001615f;
    r5 = n += 0.62617356f;
    n += r1;
    r1 = n += 1.51702380f;
    n = r3 *= n;
    n *= 0.63776135f;
    n += 0.43283403f;
    r6 = n += 2.18397570f;
    n *= r4;
    r4 = n += 0.36634609f;
    n *= r6;
    r6 = n += 0.59922576f;
    n *= r4;
    n *= 1.74401700f;
    n *= r5;
    n += r6;
    n += r1;
    r1 = n += 1.12671006f;
    n = r0 += n;
    r6 = n *= -0.08830853f;
    n += r1;
    n += r3;
    n = r6 *= n;
    n *= r2;
    n += r6;
    n *= r0;
    n += -0.06104078f;
    return n;
} // Solution1

// Solution2 precision = 0.00003374
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.30630279f;
    r1 = n *= -1.07755160f;
    r2 = n *= -0.29633963f;
    r3 = n += -1.26198089f;
    r4 = n *= -0.31599212f;
    n *= -0.30159727f;
    r5 = n += -0.41766837f;
    n += r1;
    r1 = n += 3.16451621f;
    n = r3 *= n;
    n *= 0.11377334f;
    n += 1.05944431f;
    r6 = n += 0.99075496f;
    n *= r4;
    r4 = n += 0.65279216f;
    n *= r6;
    r6 = n += -1.55227172f;
    n *= r4;
    n *= 0.20536095f;
    n *= r5;
    n += r6;
    n += r1;
    r1 = n += -0.69856560f;
    n = r0 += n;
    r6 = n *= -0.21826607f;
    n += r1;
    n += r3;
    n = r6 *= n;
    n *= r2;
    n += r6;
    n *= r0;
    n += -1.02426159f;
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
