// Run date: 09/26/22 14:12:27 Pacific Daylight Time
// Run duration = 1.176418 seconds
// Run count = 41
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_TEST;
// Run units = 1;
// Run processes = 0;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 330;
// Run seed = 300;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 40

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

// Precision = 0.00021264

// Solution0 precision = 0.00012738
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    r0 = n *= -0.66561615f;
    n += 3.48675156f;
    r1 = n += -0.61967701f;
    r2 = n += -0.84806073f;
    n *= r2;
    r2 = n += -0.93623674f;
    n += -2.71935773f;
    n *= 0.00978313f;
    n += -0.67385375f;
    n = r0 *= n;
    n *= -0.50391275f;
    n *= r1;
    r1 = n += -0.25029245f;
    n = r0 += n;
    r3 = n *= -0.08733106f;
    n += -0.67384148f;
    n += 1.01118410f;
    n = r1 *= n;
    n += r0;
    r0 = n += -1.16627431f;
    n += r1;
    n += r2;
    r2 = n *= 0.12071847f;
    n += r2;
    n += -1.11795044f;
    n = r0 *= n;
    n *= 1.30945790f;
    n += -0.82620609f;
    n *= r3;
    n += r0;
    n += -1.13692975f;
    n *= 0.62456894f;
    return n;
} // Solution0

// Solution1 precision = 0.00006759
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    r0 = n *= -1.00342786f;
    n += -1.67290258f;
    r1 = n += 1.78540230f;
    r2 = n += 0.31725860f;
    n *= r2;
    r2 = n += -0.29418275f;
    n += -2.73697162f;
    n *= 0.04423032f;
    n += -1.35450220f;
    n = r0 *= n;
    n *= 0.19571501f;
    n *= r1;
    r1 = n += -0.47849098f;
    n = r0 += n;
    r3 = n *= -0.01043381f;
    n += 0.52978683f;
    n += -0.91319555f;
    n = r1 *= n;
    n += r0;
    r0 = n += 1.29621804f;
    n += r1;
    n += r2;
    r2 = n *= 0.05871699f;
    n += r2;
    n += -1.00283420f;
    n = r0 *= n;
    n *= -3.52302337f;
    n += 0.74637854f;
    n *= r3;
    n += r0;
    n += -0.85284656f;
    n *= -0.49842751f;
    return n;
} // Solution1

// Solution2 precision = 0.00021264
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    r0 = n *= 0.35383353f;
    n += -1.01877081f;
    r1 = n += -0.54504555f;
    r2 = n += 0.21365760f;
    n *= r2;
    r2 = n += 1.47421956f;
    n += -2.12725592f;
    n *= 0.12270495f;
    n += -0.45037988f;
    n = r0 *= n;
    n *= -0.63022071f;
    n *= r1;
    r1 = n += -0.93816108f;
    n = r0 += n;
    r3 = n *= -0.10426416f;
    n += -0.42699748f;
    n += 0.43821117f;
    n = r1 *= n;
    n += r0;
    r0 = n += 0.76375276f;
    n += r1;
    n += r2;
    r2 = n *= 1.20059633f;
    n += r2;
    n += 1.04645026f;
    n = r0 *= n;
    n *= 9.51040745f;
    n += 2.50100732f;
    n *= r3;
    n += r0;
    n += 4.05707502f;
    n *= -0.51711130f;
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
