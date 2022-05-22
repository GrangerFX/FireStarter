// Run date: 05/21/22 18:07:58 Pacific Daylight Time
// Run duration = 1.330817 seconds
// Run count = 1
// Run units = 1
// Run population = 69632
// Run iterations = 512
// Run generations = 100
// Run samples = 15
// Solution Generation = 921600

#ifndef __CUDACC__
#include <cmath>
#endif

// TARGET //
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
// END //
#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define SOLUTION_VARIATIONS 3

// Precision = 0.000003

// Solution0 precision = 0.000000
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.31391099f;
    r0 = n += -0.98618197f;
    r1 = n *= 0.60994601f;
    r2 = n += 0.00000000f;
    n *= r1;
    n += 0.36508301f;
    r1 = n += -0.72690701f;
    r3 = n += -0.62113303f;
    r4 = n += -1.36975706f;
    n += r3;
    n += 0.20748900f;
    r3 = n *= 1.30096197f;
    n += -1.56579995f;
    n = r2 *= n;
    r5 = n *= 0.01677300f;
    n *= r0;
    r0 = n *= -0.67939401f;
    n *= -0.28687799f;
    n *= -1.34118605f;
    n += r0;
    r0 = n += -0.58017898f;
    n *= -0.54431999f;
    r6 = n *= -0.83211303f;
    n += -1.58790696f;
    n *= r5;
    n *= r0;
    n += r2;
    n *= r3;
    n *= r6;
    n *= r4;
    n *= r1;
    n += 0.00000000f;
    return n;
} // Solution0

// Solution1 precision = 0.000003
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.25604299f;
    r0 = n += -0.79134202f;
    r1 = n *= 0.83953500f;
    r2 = n += 0.00000100f;
    n *= r1;
    n += -0.87339902f;
    r1 = n += -0.33504799f;
    r3 = n += -1.08772695f;
    r4 = n += -0.68482399f;
    n += r3;
    n += -1.27520502f;
    r3 = n *= -0.55501300f;
    n += -2.34515095f;
    n = r2 *= n;
    r5 = n *= 0.04856400f;
    n *= r0;
    r0 = n *= 0.73119801f;
    n *= 0.07724900f;
    n *= 0.15629999f;
    n += r0;
    r0 = n += -0.97965401f;
    n *= -0.67392701f;
    r6 = n *= -0.41295999f;
    n += -2.02512407f;
    n *= r5;
    n *= r0;
    n += r2;
    n *= r3;
    n *= r6;
    n *= r4;
    n *= r1;
    n += -0.11813000f;
    return n;
} // Solution1

// Solution2 precision = 0.000002
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.39083800f;
    r0 = n += -1.02321005f;
    r1 = n *= -0.60917300f;
    r2 = n += 0.00000100f;
    n *= r1;
    n += -3.33221197f;
    r1 = n += 0.71585602f;
    r3 = n += -1.28719199f;
    r4 = n += -0.18142501f;
    n += r3;
    n += 1.01745701f;
    r3 = n *= -0.76180202f;
    n += 0.63972199f;
    n = r2 *= n;
    r5 = n *= 0.20307399f;
    n *= r0;
    r0 = n *= 0.54338598f;
    n *= 0.01887900f;
    n *= -3.05696106f;
    n += r0;
    r0 = n += 0.26615000f;
    n *= -0.06476800f;
    r6 = n *= -0.70400202f;
    n += 0.44663101f;
    n *= r5;
    n *= r0;
    n += r2;
    n *= r3;
    n *= r6;
    n *= r4;
    n *= r1;
    n += 0.52359700f;
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
