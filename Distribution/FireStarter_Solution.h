// Run date: 11/26/22 14:24:27 Pacific Standard Time
// Run duration = 3.928233 seconds
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
// Run processes = 0;
// Run population = 69632;
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
// Solution Generation = 2

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

// Precision = 0.00002670

// Solution0 precision = 0.00002468
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.57451534f;
    n *= 0.39402610f;
    n = r0 += n;
    r1 = n += 2.51695776f;
    n += -0.25433591f;
    r2 = n *= 1.17858839f;
    n += 0.29835489f;
    r3 = n *= 0.42340481f;
    n *= -0.01794082f;
    n *= r1;
    r1 = n += 0.89238435f;
    n *= r1;
    n += -0.00007740f;
    r1 = n *= 2.73787379f;
    r4 = n += -0.80761486f;
    r5 = n += -1.10432601f;
    n = r1 += n;
    n *= r0;
    n = r2 *= n;
    n += r2;
    n *= 1.08402395f;
    n += -20.35267448f;
    n *= -0.00000618f;
    n += 0.25793540f;
    n = r1 += n;
    n *= r1;
    n *= r4;
    n *= r3;
    n *= r5;
    n *= 0.92821378f;
    n += -0.52885330f;
    n += 0.52922750f;
    return n;
} // Solution0

// Solution1 precision = 0.00000900
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.17588606f;
    n *= 0.86371547f;
    n = r0 += n;
    r1 = n += -1.01539099f;
    n += -0.90265322f;
    r2 = n *= -0.51066053f;
    n += -0.46209672f;
    r3 = n *= -0.05132342f;
    n *= 3.26863146f;
    n *= r1;
    r1 = n += -1.56307769f;
    n *= r1;
    n += -0.67347074f;
    r1 = n *= 1.68040657f;
    r4 = n += 0.53526521f;
    r5 = n += 0.81275445f;
    n = r1 += n;
    n *= r0;
    n = r2 *= n;
    n += r2;
    n *= 0.02576740f;
    n += -3.35978127f;
    n *= 0.13085599f;
    n += -4.54546595f;
    n = r1 += n;
    n *= r1;
    n *= r4;
    n *= r3;
    n *= r5;
    n *= -1.55008280f;
    n += 0.25163385f;
    n += -0.36983830f;
    return n;
} // Solution1

// Solution2 precision = 0.00002670
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.44702521f;
    n *= -0.42435262f;
    n = r0 += n;
    r1 = n += 0.87751925f;
    n += -0.32894242f;
    r2 = n *= 0.25587285f;
    n += 0.01161610f;
    r3 = n *= -4.86137104f;
    n *= 0.13877548f;
    n *= r1;
    r1 = n += 0.92182851f;
    n *= r1;
    n += 0.26603031f;
    r1 = n *= -1.42709577f;
    r4 = n += 1.45760334f;
    r5 = n += -2.08318090f;
    n = r1 += n;
    n *= r0;
    n = r2 *= n;
    n += r2;
    n *= 1.76834667f;
    n += 1.38321376f;
    n *= -0.06902885f;
    n += 1.64054096f;
    n = r1 += n;
    n *= r1;
    n *= r4;
    n *= r3;
    n *= r5;
    n *= -1.88084304f;
    n += 2.06210947f;
    n += -1.23727202f;
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
