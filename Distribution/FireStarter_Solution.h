// Run date: 12/27/22 11:53:35 Pacific Standard Time
// Run duration = 9.640492 seconds
// Run count = 15
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
// Solution Generation = 15

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

// Precision = 0.00015473

// Solution0 precision = 0.00000209
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.24690366f;
    n += -0.33878416f;
    n += 0.46020219f;
    r1 = n += -1.28492343f;
    r2 = n *= -0.00000054f;
    r3 = n *= 2.84782171f;
    n += r2;
    n *= r0;
    n = r1 += n;
    n *= 0.56583774f;
    n = r1 *= n;
    n += -0.18525447f;
    n *= -1.18573558f;
    n += 0.55892652f;
    r0 = n *= -0.21628867f;
    n += -0.64396644f;
    r2 = n *= 1.29187202f;
    r4 = n += -0.23499697f;
    r5 = n += -0.19625992f;
    n *= r4;
    r4 = n += 1.04991937f;
    n *= -1.08282268f;
    r6 = n *= 1.67497849f;
    n *= r1;
    n *= r0;
    n = r2 *= n;
    n *= r6;
    n += r2;
    n += r5;
    n += r3;
    n *= r4;
    n += 3.37093210f;
    return n;
} // Solution0

// Solution1 precision = 0.00015473
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.04347206f;
    n += 1.03513324f;
    n += 1.39210689f;
    r1 = n += -0.83711702f;
    r2 = n *= 0.00372727f;
    r3 = n *= -3.22976232f;
    n += r2;
    n *= r0;
    n = r1 += n;
    n *= -0.96512580f;
    n = r1 *= n;
    n += 1.61197197f;
    n *= 1.08137167f;
    n += 1.46662116f;
    r0 = n *= -0.87572008f;
    n += -0.88583672f;
    r2 = n *= 1.31385851f;
    r4 = n += 0.16872151f;
    r5 = n += 2.21679831f;
    n *= r4;
    r4 = n += 0.50908506f;
    n *= 0.46061569f;
    r6 = n *= -3.55660200f;
    n *= r1;
    n *= r0;
    n = r2 *= n;
    n *= r6;
    n += r2;
    n += r5;
    n += r3;
    n *= r4;
    n += -0.02470023f;
    return n;
} // Solution1

// Solution2 precision = 0.00003693
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.35958177f;
    n += -1.47591603f;
    n += 1.83271706f;
    r1 = n += 0.10765740f;
    r2 = n *= 0.30870634f;
    r3 = n *= -1.00739264f;
    n += r2;
    n *= r0;
    n = r1 += n;
    n *= -2.16198778f;
    n = r1 *= n;
    n += 0.97340012f;
    n *= -0.13864149f;
    n += -0.45952564f;
    r0 = n *= -0.45376614f;
    n += 0.97742325f;
    r2 = n *= 0.87112767f;
    r4 = n += 0.53436095f;
    r5 = n += -0.61600620f;
    n *= r4;
    r4 = n += 0.38186204f;
    n *= 0.13599984f;
    r6 = n *= 5.64761257f;
    n *= r1;
    n *= r0;
    n = r2 *= n;
    n *= r6;
    n += r2;
    n += r5;
    n += r3;
    n *= r4;
    n += -0.76200718f;
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
