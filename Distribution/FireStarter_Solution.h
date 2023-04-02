// Run date: 04/01/23 20:56:35 Pacific Daylight Time
// Run duration = 2263.574445 seconds
// Run generation = 70
// Run result = 0.00050771
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 4

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

// Solution0 result = 0.00050771
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= 1.88684976f;
    r1 = n *= 0.62403291f;
    n *= -3.26795316f;
    r2 = n *= -0.21363273f;
    r3 = n *= -2.34509230f;
    n *= 0.16707444f;
    n *= -0.43345591f;
    n *= 0.71869272f;
    n *= 0.15419123f;
    r4 = n += -1.32253301f;
    r5 = n += 1.03600156f;
    r6 = n *= 0.90839446f;
    r7 = n *= 0.92918289f;
    n *= r1;
    n *= r2;
    n += r3;
    n += 1.20948815f;
    r3 = n += 6.67795324f;
    n *= 0.21420921f;
    n *= -0.04602772f;
    n *= r0;
    n += r4;
    n *= r3;
    n *= -1.75548315f;
    n *= r7;
    n = r5 *= n;
    n += r6;
    n += -0.99994940f;
    n *= -1.82944083f;
    n *= r5;
    n *= 1.38561559f;
    n += 0.02869046f;
    return n;
} // Solution0

// Solution1 result = 0.00008589
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= 0.71636963f;
    r1 = n *= 0.68168443f;
    n *= 1.29084468f;
    r2 = n *= 0.15311229f;
    r3 = n *= -1.01065850f;
    n *= 0.08512662f;
    n *= 0.06994330f;
    n *= -0.75437498f;
    n *= -0.89267439f;
    r4 = n += -1.51738691f;
    r5 = n += 0.25816143f;
    r6 = n *= 1.77249134f;
    r7 = n *= -0.35263380f;
    n *= r1;
    n *= r2;
    n += r3;
    n += 0.06880458f;
    r3 = n += -2.18042779f;
    n *= -0.32453126f;
    n *= 0.92236024f;
    n *= r0;
    n += r4;
    n *= r3;
    n *= -0.48075056f;
    n *= r7;
    n = r5 *= n;
    n += r6;
    n += 0.14421564f;
    n *= -2.45965195f;
    n *= r5;
    n *= 0.70134538f;
    n += -0.62532353f;
    return n;
} // Solution1

// Solution2 result = 0.00046530
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= -0.24431951f;
    r1 = n *= -1.38085568f;
    n *= -0.40498570f;
    r2 = n *= -3.32820368f;
    r3 = n *= 0.74689960f;
    n *= 2.08364773f;
    n *= -0.15904221f;
    n *= 38.40545654f;
    n *= -0.05078919f;
    r4 = n += -2.16022468f;
    r5 = n += -1.11563313f;
    r6 = n *= -2.02856565f;
    r7 = n *= 0.06508137f;
    n *= r1;
    n *= r2;
    n += r3;
    n += -0.87085664f;
    r3 = n += -0.64441621f;
    n *= -0.55966830f;
    n *= 1.99687314f;
    n *= r0;
    n += r4;
    n *= r3;
    n *= -1.21091795f;
    n *= r7;
    n = r5 *= n;
    n += r6;
    n += -12.07631779f;
    n *= 0.45054474f;
    n *= r5;
    n *= -0.27783141f;
    n += 0.13006444f;
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
