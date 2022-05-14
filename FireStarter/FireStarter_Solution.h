// Run date: 05/14/22 10:37:33 Pacific Daylight Time
// Run duration = 5.397777 seconds
// Run count = 4
// Run units = 4
// Run population = 34816
// Run iterations = 128
// Run generations = 100
// Run samples = 15
// State Generation = 300

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define SOLUTION_VARIATIONS 3

#ifndef __CUDACC__
#include <cmath>
#endif

#define TARGET_PI 3.14159265f

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
        return fabsf(fmodf(fabsf(n - TARGET_PI * 0.5f), TARGET_PI * 2.0f) - TARGET_PI) - TARGET_PI * 0.5f;
    }
} // SolutionTarget

// Precision = 0.000030

// Solution0 precision = 0.000018
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.17927833f;
    r0 = n += 0.56320769f;
    r1 = n *= -1.14410865f;
    r2 = n += -0.00001713f;
    n *= r1;
    n += -0.38199711f;
    r1 = n += -0.03323233f;
    r3 = n += -0.60122126f;
    r4 = n += -1.67464793f;
    n += r3;
    n += -0.33007675f;
    r3 = n *= 0.58115327f;
    n *= 0.95576376f;
    n = r2 *= n;
    r5 = n *= -0.04294429f;
    n *= -1.48348188f;
    n = r0 *= n;
    n *= -1.17195845f;
    n *= 0.01045894f;
    n += r0;
    r0 = n += -0.67628902f;
    n *= 0.94996768f;
    r6 = n *= 1.20275319f;
    n += 3.28466463f;
    n *= r5;
    n *= r0;
    n += r2;
    n *= r3;
    n *= r6;
    n *= r4;
    n *= r1;
    n += -0.00002888f;
    return n;
} // Solution0

// Solution1 precision = 0.000030
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.35614359f;
    r0 = n += 1.10064864f;
    r1 = n *= 0.62900966f;
    r2 = n += 0.00006169f;
    n *= r1;
    n += -0.74708384f;
    r1 = n += -0.41625226f;
    r3 = n += -0.61893296f;
    r4 = n += 0.21811885f;
    n += r3;
    n += -3.00607872f;
    r3 = n *= -0.36564583f;
    n *= -1.55030346f;
    n = r2 *= n;
    r5 = n *= 0.11390987f;
    n *= -0.33617443f;
    n = r0 *= n;
    n *= 0.83411282f;
    n *= -1.29656374f;
    n += r0;
    r0 = n += 0.23993364f;
    n *= -1.14084792f;
    r6 = n *= 1.22285640f;
    n += -0.99050945f;
    n *= r5;
    n *= r0;
    n += r2;
    n *= r3;
    n *= r6;
    n *= r4;
    n *= r1;
    n += -0.11822500f;
    return n;
} // Solution1

// Solution2 precision = 0.000023
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.43994984f;
    r0 = n += -1.15182686f;
    r1 = n *= 0.56883985f;
    r2 = n += 0.00003007f;
    n *= r1;
    n += 0.21275499f;
    r1 = n += -4.28451777f;
    r3 = n += 0.07518086f;
    r4 = n += 0.20850506f;
    n += r3;
    n += 0.27770996f;
    r3 = n *= -0.62288117f;
    n *= 0.61774909f;
    n = r2 *= n;
    r5 = n *= -0.50018728f;
    n *= 0.23959471f;
    n = r0 *= n;
    n *= -0.55836558f;
    n *= 0.50416893f;
    n += r0;
    r0 = n += 0.12511839f;
    n *= 0.15200293f;
    r6 = n *= -0.99174726f;
    n += -0.25190902f;
    n *= r5;
    n *= r0;
    n += r2;
    n *= r3;
    n *= r6;
    n *= r4;
    n *= r1;
    n += 0.52363688f;
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
