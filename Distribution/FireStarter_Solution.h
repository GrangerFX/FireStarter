// Run date: 07/04/22 10:26:51 Pacific Daylight Time
// Run duration = 12.924204 seconds
// Run count = 3
// Run mode = 3
// Run clients = 4
// Run process = 1
// Run units = 4
// Run states = 4
// Run population = 69632
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// Run seed = 8337
// Solution Generation = 0

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

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define SOLUTION_VARIATIONS 3

// Precision = 0.000021

// Solution0 precision = 0.000020
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n += -3.14159250f;
    r0 = n *= -0.87487406f;
    n *= 0.40118310f;
    r1 = n *= 1.46554458f;
    n = r0 *= n;
    n *= 0.33249906f;
    n *= 0.70806664f;
    r2 = n += 0.50334054f;
    r3 = n *= -0.03006154f;
    n *= r0;
    n *= -0.05290994f;
    n *= -0.93321651f;
    n *= -0.84901386f;
    n += 1.18829894f;
    r0 = n *= -1.29412603f;
    n = r2 += n;
    n += -0.30346727f;
    n *= 0.17180718f;
    n += -0.93345916f;
    n = r2 *= n;
    n = r1 *= n;
    n = r0 *= n;
    n += r1;
    n *= 1.67266965f;
    n = r2 *= n;
    n *= 1.25419545f;
    n *= r3;
    n += 0.00000025f;
    n *= 0.75325692f;
    n += r2;
    n += r0;
    n *= -0.62017977f;
    return n;
} // Solution0

// Solution1 precision = 0.000005
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n += -3.09066105f;
    r0 = n *= -0.85895246f;
    n *= -2.69327688f;
    r1 = n *= 0.06150584f;
    n = r0 *= n;
    n *= 0.49050322f;
    n *= -1.43307185f;
    r2 = n += -1.92078435f;
    r3 = n *= 0.06013034f;
    n *= r0;
    n *= -0.72821265f;
    n *= -1.38022792f;
    n *= -0.26439175f;
    n += -0.23249067f;
    r0 = n *= 0.88747042f;
    n = r2 += n;
    n += 0.65614039f;
    n *= 0.21603346f;
    n += -0.77647907f;
    n = r2 *= n;
    n = r1 *= n;
    n = r0 *= n;
    n += r1;
    n *= -1.63551021f;
    n = r2 *= n;
    n *= 0.24367097f;
    n *= r3;
    n += 0.17946716f;
    n *= -0.65064406f;
    n += r2;
    n += r0;
    n *= 1.01168370f;
    return n;
} // Solution1

// Solution2 precision = 0.000021
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n += -2.61799240f;
    r0 = n *= 0.79866350f;
    n *= 1.43312860f;
    r1 = n *= -2.55387926f;
    n = r0 *= n;
    n *= -0.05622983f;
    n *= -0.35891929f;
    r2 = n += -0.73777270f;
    r3 = n *= -0.08063896f;
    n *= r0;
    n *= -0.82001746f;
    n *= 0.03041770f;
    n *= -1.04693961f;
    n += -0.76971066f;
    r0 = n *= -1.22560859f;
    n = r2 += n;
    n += 0.05490429f;
    n *= 0.51383322f;
    n += 1.16726017f;
    n = r2 *= n;
    n = r1 *= n;
    n = r0 *= n;
    n += r1;
    n *= 0.76940006f;
    n = r2 *= n;
    n *= 1.00444090f;
    n *= r3;
    n += 1.13014317f;
    n *= 0.49087340f;
    n += r2;
    n += r0;
    n *= 0.94383073f;
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
