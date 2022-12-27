// Run date: 12/27/22 11:40:01 Pacific Standard Time
// Run duration = 31.651906 seconds
// Run count = 67
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
// Solution Generation = 67

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

// Precision = 0.00016940

// Solution0 precision = 0.00016940
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -0.56616330f;
    r1 = n *= 0.10806385f;
    r2 = n *= -0.55239314f;
    r3 = n += 0.46562400f;
    n *= 1.59297621f;
    n += r1;
    r1 = n += -1.09780097f;
    r4 = n += -0.69771886f;
    r5 = n += -0.18688703f;
    n = r3 *= n;
    r6 = n *= -1.47782266f;
    r7 = n += -0.81442636f;
    n += -1.39712787f;
    n = r2 += n;
    n *= r6;
    n += -0.63815129f;
    n *= r7;
    n = r0 *= n;
    n *= -0.01073178f;
    n *= r1;
    n *= 19.29943466f;
    n += r5;
    r5 = n += -1.55280745f;
    n = r0 += n;
    r1 = n *= 0.15023068f;
    n += r5;
    n += r3;
    n = r1 *= n;
    n *= r2;
    n += r1;
    n *= r0;
    n += r4;
    return n;
} // Solution0

// Solution1 precision = 0.00001252
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -1.47222769f;
    r1 = n *= -0.37383816f;
    r2 = n *= -1.18938804f;
    r3 = n += -0.79001397f;
    n *= 0.83464485f;
    n += r1;
    r1 = n += -0.06516436f;
    r4 = n += 0.55060786f;
    r5 = n += -1.31846821f;
    n = r3 *= n;
    r6 = n *= 0.08985701f;
    r7 = n += 0.97611946f;
    n += 1.42613912f;
    n = r2 += n;
    n *= r6;
    n += 0.75965917f;
    n *= r7;
    n = r0 *= n;
    n *= -1.49709773f;
    n *= r1;
    n *= -0.79501927f;
    n += r5;
    r5 = n += 2.25051928f;
    n = r0 += n;
    r1 = n *= 0.31314629f;
    n += r5;
    n += r3;
    n = r1 *= n;
    n *= r2;
    n += r1;
    n *= r0;
    n += r4;
    return n;
} // Solution1

// Solution2 precision = 0.00015341
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -0.00964618f;
    r1 = n *= 0.18789871f;
    r2 = n *= 0.41496795f;
    r3 = n += 0.06080894f;
    n *= 2.31943655f;
    n += r1;
    r1 = n += -1.71716928f;
    r4 = n += 0.63162309f;
    r5 = n += 0.11476045f;
    n = r3 *= n;
    r6 = n *= 0.16054916f;
    r7 = n += -0.62881416f;
    n += -0.61716962f;
    n = r2 += n;
    n *= r6;
    n += 1.30686438f;
    n *= r7;
    n = r0 *= n;
    n *= -0.04191555f;
    n *= r1;
    n *= 14.08862400f;
    n += r5;
    r5 = n += -1.45033669f;
    n = r0 += n;
    r1 = n *= 0.25001431f;
    n += r5;
    n += r3;
    n = r1 *= n;
    n *= r2;
    n += r1;
    n *= r0;
    n += r4;
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
