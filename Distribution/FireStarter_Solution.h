// Run date: 04/01/23 12:21:57 Pacific Daylight Time
// Run duration = 2453.143147 seconds
// Run generation = 40
// Run result = 0.00027858
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 0
// Run seeds = 1
// Run mode = FIRESTARTER_REVOLVE
// Run tests = 100
// Run units = 4
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 64
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

#define SOLUTION_VARIATIONS 3

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

// Solution0 result = 0.00013738
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= 1.74358296f;
    r0 = n *= 0.49398196f;
    r1 = n *= 0.67118818f;
    r2 = n *= 0.09549152f;
    r3 = n *= 0.93545836f;
    n *= 0.78140944f;
    r4 = n *= 0.38561669f;
    n *= 2.19405794f;
    n = r1 += n;
    r5 = n *= -0.15460044f;
    r6 = n += 1.51176500f;
    r7 = n *= -0.41093570f;
    n = r4 += n;
    n *= r0;
    n *= r1;
    n += r3;
    n += 1.91747534f;
    r3 = n *= -1.19820416f;
    n += -0.40647766f;
    n += -0.43218523f;
    n *= r2;
    n += -1.39569902f;
    n *= r3;
    n *= -2.11668324f;
    n *= r5;
    n *= r6;
    n += r7;
    n *= 1.03032529f;
    n *= 0.60753113f;
    n *= -2.41863275f;
    n *= r4;
    n += 0.58415359f;
    return n;
} // Solution0

// Solution1 result = 0.00013447
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= -1.06619549f;
    r0 = n *= -1.35604525f;
    r1 = n *= -0.06939004f;
    r2 = n *= 0.60621345f;
    r3 = n *= 0.69352973f;
    n *= 0.32041496f;
    r4 = n *= -0.94651246f;
    n *= -0.46339616f;
    n = r1 += n;
    r5 = n *= 1.43824613f;
    r6 = n += 1.78113997f;
    r7 = n *= 0.88181734f;
    n = r4 += n;
    n *= r0;
    n *= r1;
    n += r3;
    n += 2.14248943f;
    r3 = n *= 1.74199402f;
    n += 0.51001090f;
    n += -2.61652803f;
    n *= r2;
    n += -2.62670255f;
    n *= r3;
    n *= 0.23866956f;
    n *= r5;
    n *= r6;
    n += r7;
    n *= -1.82733977f;
    n *= -0.68039560f;
    n *= 0.86350816f;
    n *= r4;
    n += -1.79609513f;
    return n;
} // Solution1

// Solution2 result = 0.00027858
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= 0.56540066f;
    r0 = n *= -1.89952147f;
    r1 = n *= 0.13025410f;
    r2 = n *= -0.42441005f;
    r3 = n *= -0.64780337f;
    n *= -1.22895038f;
    r4 = n *= -0.20616199f;
    n *= -0.78022528f;
    n = r1 += n;
    r5 = n *= 1.29032147f;
    r6 = n += 1.82426012f;
    r7 = n *= 0.76374239f;
    n = r4 += n;
    n *= r0;
    n *= r1;
    n += r3;
    n += -0.80895585f;
    r3 = n *= -2.18568206f;
    n += -0.64489365f;
    n += 1.29901195f;
    n *= r2;
    n += 0.91517287f;
    n *= r3;
    n *= 1.87282288f;
    n *= r5;
    n *= r6;
    n += r7;
    n *= -0.61259228f;
    n *= -1.57831407f;
    n *= -0.85604757f;
    n *= r4;
    n += 1.60696149f;
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
